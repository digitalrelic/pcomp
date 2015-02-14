
const int ledPin1 = 10;
const int ledPin2 = 11;
const int ledPin3 = 12;
const int ledPin4 = A3;
const int ledPin5 = A4;
const int ledPin6 = A5;
const int ledPin7 = A2;

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buttonPin5 = 6;
const int buttonPin6 = 7;
const int buttonPin7 = 8;
const int buttonPin8 = 9; 

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;

int brightness = 0;
int fadeAmount = 5;

void setup(){

   Serial.begin(9600);
//
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
pinMode(ledPin5, OUTPUT);
pinMode(ledPin6, OUTPUT);
pinMode(ledPin7, OUTPUT);
//pinMode(ledPin8, OUTPUT);

pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(buttonPin3, INPUT);  
pinMode(buttonPin4, INPUT);
pinMode(buttonPin5, INPUT); 
pinMode(buttonPin6, INPUT);
pinMode(buttonPin7, INPUT); 
pinMode(buttonPin8, INPUT);


}


void loop(){
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  
  if(buttonState1
  brightness = brightness + fadeAmount;


analogWrite(ledPin1, brightness);
analogWrite(ledPin2, brightness);
analogWrite(ledPin3, brightness);
analogWrite(ledPin4, brightness);
analogWrite(ledPin5, brightness);
analogWrite(ledPin6, brightness);
analogWrite(ledPin7, brightness);


  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
delay(30);

}
