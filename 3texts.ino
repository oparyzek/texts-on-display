#include <U8g2lib.h>
#include <Wire.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0);

void setup() {
  u8g2.begin();
}

void loop() {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB08_tf);
    u8g2.drawStr(0, 15, "Text 1"); // <- up
    u8g2.drawStr(0, 30, "Text 2"); // <- middle
    u8g2.drawStr(0, 45, "Text 3"); // <- down
  } while (u8g2.nextPage());

  delay(1000); 
}
