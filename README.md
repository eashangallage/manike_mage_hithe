# Manike Mage Hithe Melody with Arduino

This Arduino project plays the melody of the song "Manike Mage Hithe" using a piezo buzzer and alternates the color between green and red LEDs every time a note changes.

## Components

- Arduino board
- Piezo buzzer
- Two LEDs (one green and one red)
- Resistors for LEDs
- Breadboard and jumper wires

## Circuit Diagram

1. Connect the piezo buzzer's positive lead to pin 8 on the Arduino and the negative lead to the GND.
2. Connect the green LED's anode (longer leg) to pin 12 through a resistor (220Ω is common) and the cathode (shorter leg) to GND.
3. Connect the red LED's anode (longer leg) to pin 13 through a resistor and the cathode (shorter leg) to GND.


## How It Works
- The setup() function initializes the pin modes for the buzzer and LEDs.
- The loop() function plays the melody by calling the beep() function with the appropriate notes and durations.
- The beep() function alternates the LED color each time it is called and plays the corresponding note on the buzzer.

## Melody
- The melody is divided into sections (Choruspart1 and Choruspart2), which are played in sequence to form the song.