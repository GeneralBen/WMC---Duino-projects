// this is an arduino sketch that converts letters into morse code
// 
// a user will give a string (TBD) and the arduino will parse it and output blinks or beeps 

#define LED 13
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  

}

// this will be the function that converts the letter to a blink
void morseCodeGen(char letter)
{
  switch (letter)
  {
    // short == s
    // long == l
    
    // a = s l
    case 'a':
      
      break;

    // b = l s s s  
    case 'b':
      
      break;

    // c = l s l s
    case 'c':
      
      break;

    // d = l s s   
    case 'd':
      
      break;

    // e = s
    case 'e':
      
      break;

    // f = s s l s
    case 'f':
      
      break;

    // g = l l s
    case 'g':
      
      break;

    // h = s s s s
    case 'h':
      
      break;

    // i = s s 
    case 'i':
      
      break;

    // j = s l l l 
    case 'j':
      
      break;

    // k = l s l
    case 'k':
      
      break;

    // l = s l s s
    case 'l':
      
      break;

    // m = l l 
    case 'm':
     
      break;

    // n = l s
    case 'n':
      
      break;

    // o = l l l 
    case 'o':
     
      break;

    // p = s l l s
    case 'p':
      
      break;

    // q = l l s l 
    case 'q':

      break;

    // r = s l s
    case 'r':
 
      break;

    // s = s s s
    case 's':
   
      break;

    // t = l
    case 't':

      break;

    // u = s s l
    case 'u':
 
      break;

    // v = s s s l
    case 'v':
 
      break;

    // w = s l l 
    case 'w':
 
      break;

    // x = l s s l
    case 'x':
 
      break;

    // y = l s l l 
    case 'y':
 
      break;

    // z = l l s s 
    case 'z':
 
      break;

    // space = 4 spaces
    case ' ':


      break;

    
    default:
      Serial.println("something went wrong -- default found");
      break;   
  }
}
