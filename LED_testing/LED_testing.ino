void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}
int duration;
void loop() {
//  put your main code here, to run repeatedly:
 duration = pulseIn(2,HIGH);
 Serial.println(duration);
  if(duration>990 && duration < 1015)
  {
digitalWrite(LED_BUILTIN,LOW);
digitalWrite(3,LOW);
  }
 else if(duration>1960 && duration < 2000)
 {
 digitalWrite(LED_BUILTIN,HIGH);
 digitalWrite(3,HIGH);
 } 
}
