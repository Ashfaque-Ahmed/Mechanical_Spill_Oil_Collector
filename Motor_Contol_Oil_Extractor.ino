int maxRPM = 300;
int desiredRPM = 300;
int maxPWM = 255;
int enA = 9;
int in1 = 8;
int in2 = 7;; // Assuming enA pin is connected to Arduino pin 9

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
}

void loop() {
  digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
  // int desiredPWM = (desiredRPM * maxPWM) / maxRPM;
  // analogWrite(enA, desiredPWM);
  analogWrite(enA, 255);
}
