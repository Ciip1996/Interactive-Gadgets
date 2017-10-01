/*
  Blink SOS

  Turns a LED on and Off in order to emmit a morse code (SOS).

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
  modified 28 Sep 2017
  by Carlos Ibarra Pacheco

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/


int led = 13; //the number of the digital input in the arduino we want to plug our led

/* The following method is going to be called when you want the led to emmit an S morse code letter*/
void s(){
 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);             
  digitalWrite(led, LOW);   // turn the LED on (LOW is the voltage level)
  delay(100);  
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
  digitalWrite(led, LOW);   // turn the LED on (LOW is the voltage level)
  delay(100); 
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100); 
  digitalWrite(led, LOW);   // turn the LED on (LOW is the voltage level)
  delay(300); 
}
/* The following method is going to be called when you want the led to emmit an O morse code letter*/
void o(){
 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
  digitalWrite(led, LOW);   // turn the LED on (LOW is the voltage level)
  delay(100);  
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
  digitalWrite(led, LOW);   // turn the LED on (LOW is the voltage level)
  delay(100); 
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300); 
  digitalWrite(led, LOW);   // turn the LED on (LOW is the voltage level)
  delay(300); 
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  s();
  o();
  s();
  delay(1000);
}
