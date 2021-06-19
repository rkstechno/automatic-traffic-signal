
const int red=3;
const int yellow=4;
const int green=5;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
delay(4000);
digitalWrite(red,LOW);
digitalWrite(yellow,HIGH);
delay(2000);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
delay(5000);

}
