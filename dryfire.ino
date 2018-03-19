//Colby Jurgensen 3/19/2018 Arduino Uno
//Dry Fire Shot/Start Timer
const int button1Pin = 2;  // pushbutton 1 pin
const int buzzer = 9; //buzzer to arduino pin 9

void setup()
{
  // Set up the button pin to be an input:
  pinMode(button1Pin, INPUT);
  // Set up the buzzer to be an output:
  pinMode(buzzer, OUTPUT);
}
void loop()
{
  int button1State;
  button1State = digitalRead(button1Pin);
  if (((button1State == LOW)))
  {
    tone(buzzer, 2000);      // Send 2KHz sound
    delay(100);          // Delay .1s - Basically just a notification the thing is working
    noTone(buzzer);        // Stop
    delay(random(3000, 8000)); // Random Delay 3-8s
    tone(buzzer, 2000);        // Send 2KHz sound
    delay(300);              // Start Signal
    noTone(buzzer);          // Stop
//  delay(0);            // Drill Time 0 is off, 1000=1sec etc. Uncomment these 4 lines for drill stop timer
//  tone(buzzer, 2000);      // Send 2KHz sound
//  delay(300);                // Drill Stop Signal
//  noTone(buzzer);            // Stop
  }
}
