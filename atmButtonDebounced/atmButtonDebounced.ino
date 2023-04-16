#include <pitches.h>
#include <ezButton.h>

ezButton button0(33);
ezButton button1(32);
ezButton button2(31);
ezButton button3(30);
ezButton button4(29);
ezButton button5(28);
ezButton button6(27);
ezButton button7(26);
ezButton button8(25);
ezButton button9(24);
ezButton buttonEnter(23);
ezButton buttonCancel(22);
int speakerPin = 3;
int relayPin = 4;

String Answer[4]{"nill", "nill", "nill", "nill"}; 

int buttonPresses = 0; 
char ip;
bool cardPresent =  false;
int messageLen = 0;
void setup() {
  pinMode(relayPin, OUTPUT);

  Serial.begin(9600);
  Serial2.begin(9600);
  Serial3.begin(9600);
  button0.setDebounceTime(50); // set debounce time to 50 milliseconds
  button1.setDebounceTime(50); // set debounce time to 50 milliseconds
  button2.setDebounceTime(50); // set debounce time to 50 milliseconds
  button3.setDebounceTime(50); // set debounce time to 50 milliseconds
  button4.setDebounceTime(50); // set debounce time to 50 milliseconds
  button5.setDebounceTime(50); // set debounce time to 50 milliseconds
  button6.setDebounceTime(50); // set debounce time to 50 milliseconds
  button7.setDebounceTime(50); // set debounce time to 50 milliseconds
  button8.setDebounceTime(50); // set debounce time to 50 milliseconds
  button9.setDebounceTime(50); // set debounce time to 50 milliseconds
  button0.setDebounceTime(50); // set debounce time to 50 milliseconds
  buttonEnter.setDebounceTime(50); // set debounce time to 50 milliseconds
  buttonCancel.setDebounceTime(50); // set debounce time to 50 milliseconds
   
  Serial.println("ATM is ready!");
  delay(2000);
  digitalWrite(relayPin, HIGH);
  Serial.println("RFID Active");
   
}

 void missionImpossible() {
        tone(speakerPin, NOTE_GS3, 500);
        delay(550);
        tone(speakerPin, NOTE_GS3, 500);
        delay(650);
        tone(speakerPin, NOTE_AS3, 250);
        delay(375);
        tone(speakerPin, NOTE_C4, 250);
        delay(450);
        tone(speakerPin, NOTE_GS3, 500);
        delay(550);
        tone(speakerPin, NOTE_GS3, 500);
        delay(650);
        tone(speakerPin, NOTE_F3, 250);
        delay(375);
        tone(speakerPin, NOTE_FS3, 250);
        delay(500);
    };

void loop() {
 
  if (Serial2.available())  
  {
    ip=Serial2.read();
    Serial.println(ip);

    
  }
  if(ip == 'x'){
    cardPresent = true;
    } 
  if (cardPresent == true){
    if(messageLen < 1){
      messageLen ++;
      Serial.println("activate atm debit screen");
      delay(50);
      Serial3.write(0xFC);
      delay(50);
      Serial3.write(0x01);
      Serial.write("Switch To Debit Video");
    }
  }

  button0.loop(); // MUST call the loop() function first
  button1.loop(); // MUST call the loop() function first
  button2.loop(); // MUST call the loop() function first
  button3.loop(); // MUST call the loop() function first
  button4.loop(); // MUST call the loop() function first
  button5.loop(); // MUST call the loop() function first
  button6.loop(); // MUST call the loop() function first
  button7.loop(); // MUST call the loop() function first
  button8.loop(); // MUST call the loop() function first
  button9.loop(); // MUST call the loop() function first
  buttonEnter.loop(); // MUST call the loop() function first
  buttonCancel.loop(); // MUST call the loop() function first
  if (cardPresent ==true){
  if(button0.isPressed()){
    Serial.println("The button 0 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "zero";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "zero";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "zero";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "zero";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button1.isPressed()){
    Serial.println("The button 1 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "one";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "one";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "one";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "one";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button2.isPressed()){
    Serial.println("The button 2 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "two";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "two";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "two";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "two";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button3.isPressed()){
    Serial.println("The button 3 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "three";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "three";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "three";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "three";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button4.isPressed()){
    Serial.println("The button 4 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "four";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "four";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "four";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "four";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button5.isPressed()){
    Serial.println("The button 5 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "five";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "five";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "five";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "five";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button6.isPressed()){
    Serial.println("The button 6 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "six";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "six";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "six";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "six";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button7.isPressed()){
    Serial.println("The button 7 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "seven";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "seven";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "seven";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "seven";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button8.isPressed()){
    Serial.println("The button 8 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "eight";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "eight";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "eight";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "eight";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(button9.isPressed()){
    Serial.println("The button 9 is pressed");
    buttonPresses += 1;
    if(buttonPresses == 1){
      Answer[0] = "nine";
      Serial3.write(0xFC);
      Serial3.write(0x02);
      }
    if(buttonPresses == 2){
      Answer[1] = "nine";
      Serial3.write(0xFC);
      Serial3.write(0x03);
      }
    if(buttonPresses == 3){
      Answer[2] = "nine";
      Serial3.write(0xFC);
      Serial3.write(0x04);
      }
    if(buttonPresses == 4){
      Answer[3] = "nine";
      Serial3.write(0xFC);
      Serial3.write(0x05);
      }
  }
  
  if(buttonEnter.isPressed()){
    Serial.println("The button enter is pressed");
  if ((Answer[0] == "two") && (Answer[1] == "one") && (Answer[2] == "nine") && (Answer[3] == "zero")){
    Serial.println("Solved");    
    delay(50);
    
    Serial3.write(0xFC);
    delay(50);
    Serial3.write(0x06);
    missionImpossible();
    
  }else{
    Serial.println("Incorrect Pin Please Retry");
    delay(50);
    Serial3.write(0xFC);
    delay(50);
    Serial3.write(0x07);
    delay(2000);
    Serial3.write(0xFC);
    delay(50);
    Serial3.write(0x01);

    buttonPresses = 0;
    Answer[0] = "nill";
    Answer[1] = "nill";
    Answer[2] = "nill";
    Answer[3] = "nill";
    
    } 
  }
  
  
  if(buttonCancel.isPressed()){
    Serial.println("The button cancel is pressed");
    delay(50);
    Serial3.write(0xFC);
    delay(50);
    Serial3.write(0x01);
    buttonPresses = 0;
    Answer[0] = "nill";
    Answer[1] = "nill";
    Answer[2] = "nill";
    Answer[3] = "nill";
    Serial.println(buttonPresses);     
  }
  
  }
  
  
}
