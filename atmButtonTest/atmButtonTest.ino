int zero = 33;
int one = 32;
int two = 31;
int three = 30;
int four = 29;
int five = 28;
int six = 27;
int seven = 26;
int eight = 25;
int nine = 24;
int enter = 23;
int cancel = 22;


int zeroButtonStatus = 0;
int oneButtonStatus = 0;
int twoButtonStatus = 0;
int threeButtonStatus = 0;
int fourButtonStatus = 0;
int fiveButtonStatus = 0;
int sixButtonStatus = 0;
int sevenButtonStatus = 0;
int eightButtonStatus = 0;
int nineButtonStatus = 0;
int enterButtonStatus = 0;
int cancelButtonStatus = 0;

void setup() {
  // put your setup code here, to run once:
 pinMode (zero, INPUT_PULLUP);
 pinMode (one, INPUT_PULLUP);
 pinMode (two, INPUT_PULLUP);
 pinMode (three, INPUT_PULLUP);
 pinMode (four, INPUT_PULLUP);
 pinMode (five, INPUT_PULLUP);
 pinMode (six, INPUT_PULLUP);
 pinMode (seven, INPUT_PULLUP);
 pinMode (eight, INPUT_PULLUP);
 pinMode (nine, INPUT_PULLUP);
 pinMode (enter, INPUT_PULLUP);
 pinMode (cancel, INPUT_PULLUP);
 
 Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  
  int zeroPinValue = digitalRead(33);
  int onePinValue = digitalRead(32);
  int twoPinValue = digitalRead(31);
  int threePinValue = digitalRead(30);
  int fourPinValue = digitalRead(29);
  int fivePinValue = digitalRead(28);
  int sixPinValue = digitalRead(27);
  int sevenPinValue = digitalRead(26);
  int eightPinValue = digitalRead(25);
  int ninePinValue = digitalRead(24);
  int enterPinValue = digitalRead(23);
  int cancelPinValue = digitalRead(22);

  zeroButtonStatus = zeroPinValue;
  oneButtonStatus = onePinValue;
  twoButtonStatus = twoPinValue;
  threeButtonStatus = threePinValue;      
  fourButtonStatus = fourPinValue;      
  fiveButtonStatus = fivePinValue;
  sixButtonStatus = sixPinValue;
  sevenButtonStatus = sevenPinValue;      
  eightButtonStatus = eightPinValue;      
  nineButtonStatus = ninePinValue;      
  enterButtonStatus = enterPinValue;      
  cancelButtonStatus = cancelPinValue;
    
  if (zeroButtonStatus == 0) {      
      Serial.println("zero") ;    
    }
  if (oneButtonStatus == 0) {
      Serial.println("one: ");    
    }
  if (twoButtonStatus  == 0) {
      Serial.println("two: ");    
    }
  if (threeButtonStatus  == 0) {
      
      Serial.println("three: ");    
    }
  if (fourButtonStatus  == 0) {
      Serial.println("four: ") ;    
    }
  if (fiveButtonStatus  == 0) {
      Serial.println("five: ");    
    }
  if (sixButtonStatus  == 0) {
      Serial.println("six: ");    
    }
  if (sevenButtonStatus  == 0) {
      Serial.println("seven: ");    
    }
  if (eightButtonStatus  == 0) {
      Serial.println("eight: ");    
    }
  if (nineButtonStatus  == 0) {
      Serial.println("nine: ") ;    
    }
  if (enterButtonStatus  == 0) {
      Serial.println("enter: ");    
    }
  if (cancelButtonStatus  == 0) {
      Serial.println("cancel: ");    
    }    
  delay(10);
}
