int Led1 = 2;
int Led2 = 4;
int Led3 = 7;
int Led4 = 8;
int Led5 = 12;
int Led6 = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
pinMode(Led4,OUTPUT);
pinMode(Led5,OUTPUT);
pinMode(Led6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Led1,HIGH);
delay(100);
digitalWrite(Led2,HIGH);
delay(100);
digitalWrite(Led3,HIGH);
delay(100);
digitalWrite(Led4,HIGH);
delay(100);
digitalWrite(Led5,HIGH);
delay(100);
digitalWrite(Led6,HIGH);
delay(100);

digitalWrite(Led1,LOW);
delay(100);
digitalWrite(Led2,LOW);
delay(100);
digitalWrite(Led3,LOW);
delay(100);
digitalWrite(Led4,LOW);
delay(100);
digitalWrite(Led5,LOW);
delay(100);
digitalWrite(Led6,LOW);
delay(100);
}
