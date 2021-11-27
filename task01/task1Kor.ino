
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
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 500;   // interval at which to blink (milliseconds)

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
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    if (ledState1 == HIGH and ledState2 == LOW) {
      ledState2 = HIGH;
      ledState1 = LOW;
    } else {
      ledState2 = LOW;
    }
    if (ledState1 == LOW and ledState2 == HIGH and ledState3 == LOW) {
      ledState1 = LOW;
      ledState2 = LOW;
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    if (ledState1 == LOW and ledState2 == LOW and ledState3 == HIGH and ledState4 == LOW) {
      ledState1 = LOW;
      ledState2 = LOW;
      ledState3 = LOW;
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    if (ledState1 == LOW and ledState2 == LOW and ledState3 == LOW and ledState4 == HIGH  and ledState5 == LOW) {
      ledState1 = LOW;
      ledState2 = LOW;
      ledState3 = LOW;
      ledState4 = LOW;
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    if (ledState1 == LOW and ledState2 == LOW and ledState3 == LOW and ledState4 == LOW  and ledState5 == HIGH and ledState6 == LOW) {
      ledState1 = LOW;
      ledState2 = LOW;
      ledState3 = LOW;
      ledState4 = LOW;
      ledState5 = LOW;
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
//    int x = 1;
//    x = x << 1
//
//    x & 1;
//    x & 2;
//    x & 4;
//    

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin1, ledState1);
    digitalWrite(ledPin2, ledState2);
    digitalWrite(ledPin3, ledState3);
    digitalWrite(ledPin4, ledState4);
    digitalWrite(ledPin5, ledState5);
    digitalWrite(ledPin6, ledState6);
  }
}
