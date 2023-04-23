#include "Arduino_BMI270_BMM150.h"

// Buzzer pins are like the secret entrance to a treehouse!
const int buzzerPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // Initializing the IMU sensor, or as I call it, the "Magic Orientation Wand"!
  if (!IMU.begin()) {
    Serial.println("Oh no! The Magic Orientation Wand refuses to work!");
    while (1); // Trapped in the infinite loop of doom, MUAHAHA!
  }
  
  // Buzzers, assemble! (As output, of course.)
  for (int i = 0; i < 8; i++) {
    pinMode(buzzerPins[i], OUTPUT);
  }
}

void loop() {
  // Abracadabra! Read the mystical magnetic field forces!
  float x, y, z;
  IMU.readMagneticField(x, y, z);

  // The magical compass says... "this way!"
  float heading = atan2(y, x);
  if (heading < 0) {
    heading += 2 * PI;
  }
  heading = heading * 180 / PI;

  // Calculate the buzzers' dance moves based on the compass's secret message
  int buzzerIntensity[8];
  for (int i = 0; i < 8; i++) {
    float angle = 360.0 / 8 * i;
    float diff = abs(heading - angle);
    if (diff > 180) {
      diff = 360 - diff;
    }
    // Let's make them dance! (Intensity is proportional to proximity)
    buzzerIntensity[i] = max(0, 255 - (int)(255 * diff / 45.0));
  }

  // Unleash the buzzers! It's party time!
  for (int i = 0; i < 8; i++) {
    analogWrite(buzzerPins[i], buzzerIntensity[i]);
  }

  // Let's take a short break; even buzzers need to rest sometimes!
  delay(100);
}
