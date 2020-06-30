void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8,INPUT);
Serial.println("WELCOME");
}
double duration;
void loop() {
  // put your main code here, to run repeatedly:

duration = pulseIn(10,HIGH);

Serial.println(duration);
}
