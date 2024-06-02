# IR Remote Controlled Servo

This Arduino sketch uses the IRremote and Servo libraries to control a servo motor using an IR remote.

## Table of Contents
1. [Hardware Components](#hardware-components)
   1. [Hardware Setup](#hardware-setup)
2. [Software Setup](#software-setup)
3. [Usage](#usage)
4. [Troubleshooting](#troubleshooting)
5. [License](#license)

## Hardware Components
- Arduino board (e.g., Arduino Uno, Arduino Nano, etc.)
- IR receiver module (e.g., TSOP38238)
- Servo motor (e.g., SG90 micro servo)
- Jumper wires
- Breadboard (optional)

### Hardware Setup
1. Connect the IR receiver module to the Arduino board:
   - Connect the signal pin (usually the middle pin) of the IR receiver module to digital pin 8 on the Arduino board.
   - Connect the ground pin of the IR receiver module to a ground (GND) pin on the Arduino board.
   - Connect the power pin of the IR receiver module to a 5V pin on the Arduino board.

2. Connect the servo motor to the Arduino board:
   - Connect the signal wire of the servo motor to digital pin 7 on the Arduino board.
   - Connect the ground wire of the servo motor to a ground (GND) pin on the Arduino board.
   - Connect the power wire of the servo motor to a 5V pin on the Arduino board.

If you're using a breadboard, you can arrange the components on it to make the connections easier.

## Software Setup
1. Install the required libraries:
   - **IRremote Library**: This library provides functions for receiving and decoding IR signals. You can install it through the Arduino Library Manager or by downloading the library from the [GitHub repository](https://github.com/z3t0/Arduino-IRremote) and adding it to your Arduino IDE.
   - **Servo Library**: This library provides functions for controlling servo motors. It is a built-in library in the Arduino IDE, so you don't need to install it separately.

2. Open the Arduino IDE and create a new sketch.

3. Verify and upload the sketch to your Arduino board.

## Usage
1. With the hardware and software setup complete, you can now use an IR remote control to control the servo motor.

2. Point the IR remote at the IR receiver module and press the following commands:
   - Command 8: Rotates the servo motor from 0 to 180 degrees.
   - Command 9: Rotates the servo motor from 180 to 0 degrees.

The servo motor will move accordingly based on the command received from the IR remote.

## Troubleshooting
If you encounter any issues, here are some troubleshooting steps:

1. **Check the hardware connections**: Ensure that the IR receiver module and the servo motor are connected to the correct pins on the Arduino board. Double-check the wiring and make sure there are no loose connections.

2. **Verify the IR remote**: Test the IR remote by pointing it at the IR receiver module and checking if the LED on the IR receiver module is blinking when you press the buttons. If the LED is not blinking, the IR remote may not be functioning properly.

3. **Check the library installation**: Ensure that the IRremote and Servo libraries are installed correctly in your Arduino IDE. You can check the library installation by going to Sketch > Include Library and seeing if the libraries are listed.

4. **Monitor the serial output**: Open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor) and check the output for any error messages or unexpected behavior.

If you continue to experience issues, please feel free to reach out for further assistance.

## License
This project is licensed under the [MIT License](LICENSE). 
