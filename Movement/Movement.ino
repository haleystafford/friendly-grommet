int rightMotor = 2;
int leftMotor = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(rightMotor, OUTPUT);
  pinMode(leftMotor, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    delay(5000);
digitalWrite(rightMotor, HIGH);
digitalWrite(leftMotor, HIGH);
    delay(500);
digitalWrite(rightMotor, LOW);
digitalWrite(leftMotor, LOW);
        delay(3000);

}
