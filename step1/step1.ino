
   
// Door Alarm Using Arduino UNO and Ultrasonic Sensor
// Code to be used in the Text sub-window of tinkercad.com circuit page

int trigger_pin = 2;
int echo_pin = 3;
int buzzer_pin = 11; 
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;
   

  if (distance <= 20) 
        {
     
        Serial.println (" Door open ");
        Serial.print (" Distance= ");              
        Serial.print(distance);
        Serial.println("cm"); 
        digitalWrite (buzzer_pin, HIGH);
        delay (100);
        digitalWrite (buzzer_pin, LOW);
        delay (100);
        }
 // else {
//       Serial.println (" Door closed ");
//      Serial.print (" Distance= ");              
//      Serial.println (distance);        
//        digitalWrite (buzzer_pin, LOW);
 //       delay (500);        
    //   } 
}
