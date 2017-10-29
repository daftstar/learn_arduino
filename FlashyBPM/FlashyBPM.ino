/*
  Modified Blink Function

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

/* 
* Flash Math
* 60 bpm =    1 flash  / 1000 ms          = (100/900) 1000
* 120 bpm =    2 flash / 1000 ms          = (50/450)   500 
* 140 bpm = 2.33 flash / 1000 ms          = (43/385)   428.6 
*/

void loop() {
  int ledOn;
  int ledOff;
  int second;
  int secondsMin;

  secondsMin = 60;
  second     = 1000;              // 1 second
  ledOn      = 1000-900;          // 100 ms
  ledOff     = (second - ledOn);  // 900 ms

  int flashBPM;
  flashBPM = 80;
  
  digitalWrite(LED_BUILTIN, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(ledOn/(flashBPM/secondsMin));     // wait for a second
  digitalWrite(LED_BUILTIN, LOW);         // turn the LED off by making the voltage LOW
  delay(ledOff/(flashBPM/secondsMin));    // wait for a second
}




