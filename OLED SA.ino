# include <SPI.h>
# include <Wire.h>
# include <Adafruit_GFX.h>
# include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  // initialize display display with I2C address 0x3C
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("failed to start SSD1306 display"));
    while (1);
  }

  delay(2000); // wait two seconds for initializing
  display.setCursor(0, 0);
}

void loop() {
  // draw a circle
 

  // fill a circle
 

  // draw a triangle
  
 
  // fill a triangle
  

  // draw a rectangle


  // fill a rectangle
 

}

