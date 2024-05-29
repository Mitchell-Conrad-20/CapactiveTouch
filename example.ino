#include "CapacitiveTouch.h"
#include "QuickCapTouch.h"

#define CAP_TOUCH_IN 9
#define CAP_TOUCH_OUT 13

// CapacitiveTouch sensor = CapacitiveTouch(CAP_TOUCH_IN, CAP_TOUCH_OUT, 30, 1000);
QuickCapTouch sensor = QuickCapTouch(CAP_TOUCH_IN, 30, 100);

void setup() {
  // Begin serial communications to PC
  Serial.begin(9600);
}

void loop() {
  // Tick the sensor and print the output
  sensor.tick();
  Serial.println(sensor.getState());
  // Serial.println(sensor.read());
  delay(20);
}