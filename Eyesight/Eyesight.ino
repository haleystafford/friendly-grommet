/* Code written by Roy Pe'er and modified by Haley Stafford.
*/




#define trigPin 12 // define the pins of your sensor
#define echoPin 13 
int rightMotor = 2;
int leftMotor = 3;

 
void setup() {
  Serial.begin(9600); // begin serial communitication  
   pinMode(trigPin, OUTPUT);// set the trig pin to output (Send sound waves)
  pinMode(echoPin, INPUT);// set the echo pin to input (recieve sound waves)
}
 
void loop() {

   long duration, distance; // start the scan
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); // delays are required for a succesful sensor operation.
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10); //this delay is required as well!
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;// convert the distance to centimeters.
  if (distance < 50 )/*if there's an obstacle 50 centimers, ahead, do the following: */ {   
     digitalWrite(rightMotor, LOW);  // Stop
     digitalWrite(leftMotor, LOW);
        delay (50);
     digitalWrite(rightMotor, HIGH);  // Turn
     digitalWrite(leftMotor, LOW);

}
  else {
   Serial.println ("No obstacle detected. going forward");
   delay (15);
    digitalWrite(rightMotor, HIGH); //if there's no obstacle ahead, Go Forward! 
     digitalWrite(leftMotor, HIGH);  
  }  
  
  

  
  
  
 
}
