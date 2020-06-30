void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int Signal = pulseIn(2,HIGH);
Serial.println(Signal);
if(Signal > 900 && Signal <1000)
{
  digitalWrite(3,HIGH);
}
else 
{
  digitalWrite(3,LOW);
}
}
