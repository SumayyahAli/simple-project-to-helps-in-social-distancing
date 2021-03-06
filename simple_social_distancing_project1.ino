
const int trigPin = 2;
const int echoPin = 3;
long duration;
int distance;


void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
pinMode(11,OUTPUT);
}


void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;

if(distance< 100){
  digitalWrite(11,HIGH);
    delay(2);
    digitalWrite(11,LOW);
  
}
  
else {
  digitalWrite(11,LOW);
  delay(2);
}
  
}
