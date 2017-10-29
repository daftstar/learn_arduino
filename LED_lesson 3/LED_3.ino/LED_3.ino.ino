/*
 * Adafruit Arduino - Lesson 3. RGB LED
 * learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/overview
 */

// define 3 pin outputs
 int redPin   = 11;    // red pin = 11
 int greenPin = 10;    // green pin = 10
 int bluePin  = 9;     // blue pin = 9

#define COMMON_ANODE


// run initial setup for 3 pins definition
 void setup()
 {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
 }


// main program
void loop()
{
  int delayValue = 2000;      // flashy delay
  
  setColor(255, 0, 0);      // red
  delay(delayValue);

  setColor(0, 255, 0);      // green
  delay(delayValue);

  setColor(0, 0, 255);      // blue
  delay(delayValue);

  setColor(255, 255, 0);    // yellow
  delay(delayValue);

  setColor(80, 0, 80);      // purple
  delay(delayValue);

  setColor(0, 255, 255);    // aqua
  delay(delayValue);

  setColor(255, 255, 255);  // white
  delay(delayValue);
}


void setColor(int red, int green, int blue) // define setColor
{
  #ifdef COMMON_ANODE   // if the following is defined (using Common Anode)
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

