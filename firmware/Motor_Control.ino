// Motor controller pins
const int BIN1 = 6;
const int BIN2 = 7;
const int AIN1 = 10;
const int AIN2 = 11;

void setup() {
  // Setup motor controller pins
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Drive Motors
  analogWrite(AIN1, 50);
  analogWrite(AIN2, 0);
  analogWrite(BIN1, 50);
  analogWrite(BIN2, 0);
}
