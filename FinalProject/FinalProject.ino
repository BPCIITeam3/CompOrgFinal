
int firstPin = 2;
int secondPin = 3;
int thirdPin = 4;
int fourthPin = 5;
int fifthPin = 6;
int sixthPin = 7;
int button = 12;
int btnpressed = 0;
void setup() {
  for (int i=firstPin; i<=sixthPin; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(button, INPUT);
}
void showNumber(int number) {
  digitalWrite(2, HIGH);
  if (number >= 2) {
    digitalWrite(3, HIGH);
  }
  if (number >= 3) {
    digitalWrite(4, HIGH);    
  }
  if (number >= 4) {
    digitalWrite(5, HIGH);    
  }
  if (number >= 5) {
    digitalWrite(6, HIGH);    
  }
  if (number == 6) {
    digitalWrite(7, HIGH);    
  }
}
void setLEDs(int value) {
  for (int i=2; i<=7; i++) {
    digitalWrite(i, value);
  }
}
void loop() {
  btnpressed = digitalRead(button);
  if (pressed == HIGH) {
    setLEDs(LOW);
    int randNumb = random(1,7);
    showNumber(randNumb);
    delay(50);
}
}
