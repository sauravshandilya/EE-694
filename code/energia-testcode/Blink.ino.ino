/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  This code will blink red,green and Yellow LED of CC3200 LaunchXL board
  
  This example code is in the public domain.
*/

// define on-board red,green and yellow LED
#define red_LED RED_LED
#define green_LED GREEN_LED
#define yellow_LED YELLOW_LED

  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(red_LED, OUTPUT);     
  pinMode(green_LED, OUTPUT);
  pinMode(yellow_LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red_LED, HIGH);    // turn on the red LED (HIGH is the voltage level)
  digitalWrite(green_LED,HIGH);   // turn on the green LED (HIGH is the voltage level)
  digitalWrite(yellow_LED,HIGH);  // turn on the yellow LED (HIGH is the voltage level)
  
  delay(1000);                  // wait for a second
  
  digitalWrite(red_LED, LOW);   // turn off the red LED (HIGH is the voltage level)
  digitalWrite(green_LED,LOW);
  digitalWrite(yellow_LED,LOW);
  
  delay(1000);               // wait for a second
}
