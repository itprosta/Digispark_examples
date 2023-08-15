#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(250);
  DigiKeyboard.println("notepad");
  delay(250);
  DigiKeyboard.println(F("Hello World"));
  while(1);
}