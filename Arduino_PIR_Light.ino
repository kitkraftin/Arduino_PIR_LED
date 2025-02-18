// Activate LED with PIR sensor

const int led = 4;  // LED pin
const int led1 = 5;  // LED pin
const int pir = 3;  // PIR pin
int motion;			// variable for sensor reading

void setup(){ // setup code that only runs once
  pinMode(led, OUTPUT);  // set LED pin as output
  pinMode(led1, OUTPUT);  // set LED pin as output
  pinMode(pir, INPUT);	 // set PIR pin as input
}

void loop(){ // code that loops forever
  motion = digitalRead(pir);  // read sensor pin
  if(motion){ // if motion detected
    digitalWrite(led,HIGH);  // turn LED on
    digitalWrite(led1,HIGH);  // turn LED on
    delay(5000);
  }
  else{  // else, no motion detected
    digitalWrite(led,LOW);  // turn LED off
    digitalWrite(led1,LOW);  // turn LED off
  }
}