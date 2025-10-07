#include <LiquidCrystal.h>

// Configuración del LCD
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

// Pin del LED (solo uno)
const int LED_RED = 13;

// Pin del sensor TMP36
const int TMP36_PIN = A0;

// Variables para la temperatura
float voltage;
int sensor_value;
float temperature;
const int MOTOR = 10;

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("Bienvenido");

  pinMode(LED_RED, OUTPUT);
  pinMode(MOTOR, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // Leer temperatura del TMP36
  sensor_value = analogRead(TMP36_PIN);
  voltage = sensor_value * (5.0 / 1024.0);
  temperature = (voltage - 0.5) * 100.0;

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.println(" C");

  // Mostrar temperatura en la segunda línea del LCD
  lcd_1.setCursor(0, 1);
  lcd_1.print("Temp: ");
  lcd_1.print(temperature);
  lcd_1.print((char)223); // símbolo de grados
  lcd_1.print("C     ");  // Borrar caracteres anteriores

  // Control por temperatura
  if (temperature <= 10) {
    // Motor apagado
    digitalWrite(MOTOR, LOW);

    // LED parpadeando con delay 500 ms
    digitalWrite(LED_RED, HIGH);
    delay(500);
    digitalWrite(LED_RED, LOW);
    delay(500);
  } 
  else if (temperature > 10 && temperature <= 25) {
    // Motor apagado
    digitalWrite(MOTOR, LOW);

    // LED apagado
    digitalWrite(LED_RED, LOW);

    // Pequeña pausa para no saturar el loop
    delay(200);
  }
  else if (temperature >= 26) {
    // Motor encendido
    digitalWrite(MOTOR, HIGH);

    // LED encendido fijo
    digitalWrite(LED_RED, HIGH);

    // Pequeña pausa para no saturar el loop
    delay(200);
  }
}