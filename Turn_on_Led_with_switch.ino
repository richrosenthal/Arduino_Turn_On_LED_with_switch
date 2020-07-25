int led = 13;
int pin = 8;

int flag = 1;
int buttonState = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT);
}
void loop () {

  int currentState = digitalRead(pin);

  if (currentState == HIGH && buttonState == LOW) {

    if (flag == 0) {
      digitalWrite(led, HIGH);
      flag = 1;
    } else {
      digitalWrite(led, LOW);
      flag = 0;
    }
  }
  buttonState = currentState;
}
 
