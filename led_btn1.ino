/*
 
  Led with button project
  http://127.0.0.1:5500/html/led_btn1.html
  
*/

#define button 7    // define pin 7 as button
#define rled 6    // define pin 6 as rled

bool btn;   // creat a boolean variable which will store the button state

void setup() 
{
  pinMode(button, INPUT_PULLUP);    // initialize digital pin button as an input_pullup.
  pinMode(rled, OUTPUT);    // initialize digital pin rled as an output.
}

void loop() 
{
  btn = digitalRead(button);    //store the state of the button

  if(!btn)    // if btn = LOW, (that's mean you pressed the button)
  {
    digitalWrite(rled, HIGH);   //turn the red led on 
  }else   // otherwise (the btn = HIGH, that's mean you released the button)
  {
    digitalWrite(rled, LOW);   //turn the red led off 
  }
}
