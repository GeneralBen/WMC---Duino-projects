// this is an arduino sketch that converts letters into morse code
// 
// a user will give a string (TBD) and the arduino will parse it and output blinks or beeps 

#define LED 13
void setup() 
{
  Serial.begin(9600);

  // initialze our LED pin -- pin 13
  pinMode(LED, OUTPUT);
}

void loop() 
{
  // this will be the function that converts the letter to a blink

}


// one short period 
void mShort()
{
    digitalWrite(LED, HIGH);
    delay(200);
    
    digitalWrite(LED, LOW);
    delay(200);
}

// one long period 
void mLong()
{
    digitalWrite(LED, HIGH);
    delay(600);
    
    digitalWrite(LED, LOW);
    delay(200);
}


void morseCodeGen(char letter)
{
  switch (letter)
  {
    // one period or blink is 200 milliseconds
    
    // short == s = (200 ms)
    // long == l = (600 ms)
    // space between periods (200 ms)
    // space between letter (600 ms)
    // space between word (1400 ms)
    
    // a = s l
    case 'a':
      mShort();

      mLong();
      
      delay(400);
      break;

    // b = l s s s  
    case 'b':
      mLong();
      mShort();
      mShort();
      mShort();
      
      delay(400);
      break;

    // c = l s l s
    case 'c':

      delay(400);
      break;

    // d = l s s   
    case 'd':
      mLong();
      mShort();
      mShort();
      
      delay(400);
      break;

    // e = s
    case 'e':

      delay(400);
      break;

    // f = s s l s
    case 'f':

      delay(400);
      break;

    // g = l l s
    case 'g':

      delay(400);
      break;

    // h = s s s s
    case 'h':

      delay(400);
      break;

    // i = s s 
    case 'i':

      delay(400);
      break;

    // j = s l l l 
    case 'j':

      delay(400);
      break;

    // k = l s l
    case 'k':

      delay(400);
      break;

    // l = s l s s
    case 'l':

      delay(400);
      break;

    // m = l l 
    case 'm':

      delay(400);
      break;

    // n = l s
    case 'n':
      
      break;

    // o = l l l 
    case 'o':


      delay(400);
      break;

    // p = s l l s
    case 'p':


      delay(400);
      break;

    // q = l l s l 
    case 'q':

      delay(400);
      break;

    // r = s l s
    case 'r':

      delay(400);
      break;

    // s = s s s
    case 's':

      delay(400);
      break;

    // t = l
    case 't':

      delay(400);
      break;

    // u = s s l
    case 'u':

      delay(400);
      break;

    // v = s s s l
    case 'v':

      delay(400);
      break;

    // w = s l l 
    case 'w':

      delay(400);
      break;

    // x = l s s l
    case 'x':

      delay(400);
      break;

    // y = l s l l 
    case 'y':

      delay(400);
      break;

    // z = l l s s 
    case 'z':

      delay(400);
      break;

    // space = 4 spaces
    case ' ':
      delay(800);
      break;

    
    default:
      Serial.println("something went wrong -- default found");
      break;   
  }
}
