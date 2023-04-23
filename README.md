# NorthSense - A Buzzing North Finder 

NorthSense is an Arduino-based project that I'm working on to train my brain to develop an instinctual awareness of where North is. I was inspired to work on this after learning about indigenous cultures who use absolute direction rather than relative directions when discussing how to reach locations. I am also interested in gettting some experience working with hardware projects and specifically wearable hardware components. 

I chose an Arduino Nano 33 BLE Sense Rev2 because it has an integrated inertial measurement unit and would make things a bit easier to work with. I use a some fasteners and a carboard belt to hold the microcontroller, battery, and 8 buzzers in place around my waist, and the buzzers vibrate proportionally to their angular proximity to North. Over time, I plan on keeping track of my progress. I plan on finding some ways to objectively measure progress.

## Components

- Arduino Nano 33 BLE Sense Rev2
- 8 buzzers
- A belt or a wearable holder for the buzzers
- Jumper wires
- Battery / Power Source

## Wiring

Connect the positive terminal of each buzzer to the corresponding pins on the Arduino board as defined in the `buzzerPins` array in the code, and connect the negative terminals to GND.

## Dependencies

- Arduino_BMI270_BMM150 library: https://github.com/arduino-libraries/Arduino_BMI270_BMM150

## Here's some setup if you want to try it yourself! If this is your first project, don't be scared it's a pretty easy one!

1. Install the Arduino IDE: https://www.arduino.cc/en/software
2. Install the Arduino_BMI270_BMM150 library using the Library Manager in the Arduino IDE.
3. Connect the Arduino Nano 33 BLE Sense Rev2 to your computer.
4. Open the Arduino IDE and load the NorthSense code.
5. Select the correct board (Arduino Nano 33 BLE) and port in the Tools menu. ***
6. Upload the code to the Arduino board.

*** I had some issues at times recognizing my board for some reason. This happens specifically with my Arduino Nano 33 BLE Sense Rev2 but not with my other Arduino Nanos. I am not sure why this happens but will try adn update here if I figure it out. 

## Usage

1. Attach the buzzers to your belt or wearable holder, with one buzzer at the front, back, left, right, and on each diagonal. I use hot glue and some hairpin fasteners.
2. Put on the belt, attach power source if not already attached, and turn on the Arduino.
3. The buzzers will vibrate to indicate the direction of North. The intensity of the vibration will be proportional to the angular proximity of each buzzer to North. I set it up to 100% as the max, but you can set the values lower in the code if that's a bit much for you. 
4. Use the NorthSense regularly to train your brain to develop an instinctual awareness of where North is.

## Any other notes

- The code uses the Arduino_BMI270_BMM150 library to read the magnetic field and calculates the heading based on the magnetic field data.
- The buzzers' vibration intensity is proportional to their angular proximity to North, providing a more intuitive sense of direction.
- Over time, hopefully my brain will adapt and develop an instinctual sense of where North is, even when I'm not wearing the NorthSense belt.

## License

This project is released under the GPL License.

## Troubleshooting

- If the buzzers are not working correctly, double-check your wiring connections.
- Ensure the correct board and port are selected in the Arduino IDE before uploading the code.
- If the IMU sensor is not initializing, make sure the Arduino_BMI270_BMM150 library is properly installed.
- That's about all I got! Feel free to reach out if you'd like some help!
