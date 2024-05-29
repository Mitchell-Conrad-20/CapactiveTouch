# CapactiveTouch
 A cross-platform capacitive touch library for DIY sensors

## CapacitiveTouch vs QuickCapTouch
- CapacitiveTouch provides a much more accurate signal.
- CapacitiveTouch can be used for force sensing (hard vs soft presses), though this is not included.
- QuickCapTouch is easier to set up and does not require a digital output or a resistor.
- QuickCapTouch is better for applications where speed is required as it does not use any delays.
- Both libraries provide the same methods.
- Both libraries calibrate on startup.

## CapacitiveTouch Setup
- Identify an analog input pin and a digital output pin on your microcontroller.
- Place a 10 M-Ohm resister across the two pins on the microcontroller.
- Place a single wire (which can act as your sensor or a connection to the sensor) on the analog input node.
- Follow the example code to use.

## QuickCapTouch Setup
- Identify an analog input pin on your microcontroller.
- Place a single wire (which can act as your sensor or a connection to the sensor) on the analog input node.
- Follow the example code to use.
