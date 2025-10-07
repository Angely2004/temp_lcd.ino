Laboratorio N°4 – Control de Temperatura con Arduino
Descripción del proyecto:

En este laboratorio se diseñó y programó un sistema de control de temperatura utilizando un sensor TMP36, un motor de CC, un LED indicador y una pantalla LCD 16x2.
El objetivo fue monitorear la temperatura ambiente y activar/desactivar los componentes según tres rangos de temperatura definidos.

El sistema muestra la temperatura en tiempo real en la pantalla LCD y responde automáticamente con las siguientes condiciones:

🌡️ ≤ 10 °C: LED parpadea y el motor permanece apagado.

🌤️ Entre 11 °C y 25 °C: LED y motor apagados.

🔥 ≥ 26 °C: LED encendido fijo y el motor se activa.

<img width="590" height="321" alt="image" src="https://github.com/user-attachments/assets/c6f43db1-c063-4cde-99f8-d3cc6584e4bf" />

Los materiales que utilizamos para el montaje fueron:

<img width="590" height="240" alt="image" src="https://github.com/user-attachments/assets/89b66a23-05da-497f-92af-2e886bb7897f" />

Esquema del circuito:

<img width="590" height="396" alt="image" src="https://github.com/user-attachments/assets/568faa9b-e549-4357-a243-20cb980c7438" />

Explicación del funcionamiento:

1. El sensor TMP36 mide la temperatura ambiente y envía una señal analógica al pin A0 del Arduino.

2. El microcontrolador convierte esa señal en temperatura en °C.

3. El valor se muestra en la pantalla LCD 16x2.

4. Según el rango de temperatura detectado se realizan las siguientes validaciones:
   
- Validación 1. Si la temperatura es menor o igual a 10 °C, el LED debe parpadear con un delay
de medio segundo y el ventilador (motor) debe estar apagado.

<img width="619" height="427" alt="image" src="https://github.com/user-attachments/assets/73562bb3-01f8-4224-831c-d3ed3fdf726b" />

- Validación 2. Si la temperatura está entre 11 °C y 25 °C, el led y el ventilador (motor) debe
estar apagado.

<img width="741" height="500" alt="image" src="https://github.com/user-attachments/assets/fc3bb298-edce-49e3-a58a-98523c08d532" />

- Validación 3. Si la temperatura es mayor o igual a 26 °C, el led debe permanecer encendido y
el ventilador (Motor), debe encenderse.

<img width="749" height="497" alt="image" src="https://github.com/user-attachments/assets/7c6b4ae4-7cc0-4e86-916b-bd7aa7e0fb4e" />

Autor: Angely Valentina Urbano Chaves, Yon Bayron Cordoba Ceron

Curso: Sistemas Operativos

Fecha: 7 de Octubre de 2025





