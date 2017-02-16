/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

const int pin2 = 2;
const int numSteps = 30;

void setup() 
{
  pinMode(pin2, OUTPUT);
  Serial.begin(9600);
  delay(500);
}


void loop() 
{
  Serial.println("");
  Serial.println("");
  Serial.println("on");
  digitalWrite(pin2, HIGH);
  delay(500);

    for(int i=0; i<numSteps; i++)
    {
      int watlevel = analogRead(A5);
      int curr     = analogRead(A2);

      Serial.println(curr, DEC);
      //Serial.println("water level : " + String(watlevel) + "    current : " + String(curr) + "\n");
      delay(500);        // delay in between reads for stability
    }

  Serial.println("");
  Serial.println("");
  Serial.println("off");
  digitalWrite(pin2, LOW);
  delay(500);
  //delay(2000);
  
  for(int i=0; i<numSteps; i++)
    {
      int watlevel = analogRead(A5);
      int curr     = analogRead(A2);

      Serial.println(curr, DEC);
      //Serial.println("water level : " + String(watlevel) + "    current : " + String(curr) + "\n");
      delay(250);        // delay in between reads for stability
    }
}







