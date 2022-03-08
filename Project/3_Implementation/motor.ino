#include<NewPing.h>
#include<Servo.h>
#define trigPin 12
#define echoPin 13
#define MAX_DISTANCE 50
NewPing sonar(trigPin,echoPin,MAX_DISTANCE);
int LED1=3,LED2=2;
Servo myservo;

void setup() {
 Serial.begin(115200);
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED1,OUTPUT);
 myservo.attach(9);
}

void loop() {
int duration,j,posisi=0,i;
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 duration=pulseIn(echoPin,HIGH);
 j=(duration/2)/29.1;
  Serial.print(j);
  Serial.println(" cm");

if(j<=5)

 {
   digitalWrite(LED2,LOW);
   digitalWrite(LED1,LOW);
   myservo.write(100);
}
 else{
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  myservo.write(90);
 }
delay(450);
}
 
 
 
 
 
