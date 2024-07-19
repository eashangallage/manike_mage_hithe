const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
 
const int buzzerPin = 8;
const int ledPin1 = 12;
const int ledPin2 = 13;
 
int counter = 0;
 
void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}
 
void loop()
{
  
  beep(d, 200);  
  beep(d, 200);  
  beep(d, 200);  
  beep(g, 350);
  beep(d, 200);  
  beep(d, 200);  
  beep(d, 200);  
  beep(g, 700);
  
  Choruspart1();
  Choruspart1();

  delay(175);
  
  Choruspart2(); 
  Choruspart2();
  beep(g, 350);

  beep(aS, 200);  //Manike 
  beep(aS, 200);  
  beep(aS, 425); 
  delay(25); 
  beep(aS, 200);  //mage hithe
  beep(cH, 350);  
  beep(cH, 200);  
  beep(dH, 525);
  delay(200);
  
  delay(5000);
}

void Choruspart1(){
  
  beep(aS, 200);  //Manike 
  beep(aS, 200);  
  beep(aS, 425); 
  delay(25); 
  beep(aS, 200);  //mage hithe
  beep(cH, 350);  
  beep(cH, 200);  
  beep(dH, 525);
  delay(200);

  beep(aS, 200);  // muddle nura  
  beep(aS, 200);  
  beep(aS, 350);  
  beep(aS, 175);  
  beep(cH, 350); 
  delay(50); 
  beep(cH, 175);  //hagum
  beep(dH, 350);
  delay(50);
  
  beep(aS, 350);  // yawi
  beep(a, 900);  
  delay(525);

  beep(f, 175);   // awilewi
  beep(f, 175);
  beep(aS, 350);  
  beep(a, 700); 
  
  delay(900);
}


void Choruspart2(){
  beep(g, 700); // Ma hitha langama dawatena
  delay(125);
  beep(aS, 175);  
  beep(aS, 175);
  beep(aS, 175);
  beep(cH, 175);
  beep(aS, 175);
  beep(a, 175);
  beep(g, 175);
  beep(g, 175);
  beep(g, 700);
  delay(175);
  beep(aS, 175);  // Huru pemaka patelena
  beep(aS, 175);
  beep(aS, 175);
  beep(cH, 175);
  beep(aS, 175);
  beep(a, 175);
  beep(g, 175);
  beep(a, 175);
  beep(a, 700);
  delay(200);

  beep(a, 175);  // Ruwa nari manamali sukumali numba thama
  beep(a, 175);
  beep(aS, 350);
  beep(a, 350);
  beep(a, 175);
  beep(a, 175);
  beep(aS, 350); // 
  beep(a, 350);
  beep(a, 175);
  beep(a, 175);
  beep(aS, 350); //
  beep(a, 175);
  beep(g, 175);
  beep(f, 175);
  beep(g, 175);
}

 
void beep(int note, int duration)
{
  //Play tone on buzzerPin
  //tone(buzzerPin, note, duration);
 
  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
 
