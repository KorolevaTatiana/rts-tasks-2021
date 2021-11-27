                                                                  
// constants won't change. Used here to set a pin number:
const int ledPin3 =  6;// the number of the LED pin
const int ledPin4 =  9;
const int ledPin5 =  10;
const int ledPin2 =  5;
const int ledPin1 =  3;
const int ledPin6 =  11;

// Variables will change:
int ledState1 = LOW;             // ledState used to set the LED
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis1 = 0;        // will store last time LED was updated
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0; 
unsigned long previousMillis5 = 0; 
unsigned long previousMillis6 = 0; 
// constants won't change:
const long interval1 = 10000; 

void setup() {
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis1 = micros();
  unsigned long currentMillis2 = micros();
  unsigned long currentMillis3 = micros();
  unsigned long currentMillis4 = micros();
  unsigned long currentMillis5 = micros();
  unsigned long currentMillis6 = micros();

  if (currentMillis1 - previousMillis1 >= interval1) {
    // save the last time you blinked the LED
    previousMillis1 = currentMillis1;

    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
     digitalWrite(ledPin1, ledState1);}
    
  if (currentMillis2 - previousMillis2 >= 2*interval1) {
    // save the last time you blinked the LED
    previousMillis2 = currentMillis2;
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
       digitalWrite(ledPin2, ledState2);}
    
  if (currentMillis3 - previousMillis3 >= 3*interval1) {
    // save the last time you blinked the LED
    previousMillis3 = currentMillis3;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
     digitalWrite(ledPin3, ledState3);}
     
  if (currentMillis4 - previousMillis4 >= 4*interval1) {
    // save the last time you blinked the LED
    previousMillis4 = currentMillis4;
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(ledPin4, ledState4);}
    
  if (currentMillis5 - previousMillis5 >= 5*interval1) {
    // save the last time you blinked the LED
    previousMillis5 = currentMillis5;
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
        digitalWrite(ledPin5, ledState5);}
    
  if (currentMillis6 - previousMillis6 >= 6*interval1) {
    // save the last time you blinked the LED
    previousMillis6 = currentMillis6;
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }

    digitalWrite(ledPin6, ledState6);
  }
   
}
