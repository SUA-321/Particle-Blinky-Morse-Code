int led2 = D7;
int btn = D1;

int last_btn_state = HIGH;

void setup() {
  pinMode(led2, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop() {
  int btn_state = digitalRead(btn);

  // U
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(750);
  digitalWrite(led2, LOW);
  delay(250);

  // B
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(750);
  digitalWrite(led2, LOW);
  delay(250);

  // A
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(750);
  digitalWrite(led2, LOW);
  delay(250);

  // I
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);

  // D
  digitalWrite(led2, HIGH);
  delay(750);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(750);

  //Restart
  delay(2000);
  last_btn_state = btn_state;
}
