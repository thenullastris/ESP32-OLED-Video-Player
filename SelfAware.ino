#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "video_data.h"

#define FRAME_WIDTH 128
#define FRAME_HEIGHT 64
#define BYTES_PER_FRAME ((FRAME_WIDTH / 8) * FRAME_HEIGHT)
#define FRAME_COUNT (selfaware_video_bin_len / BYTES_PER_FRAME)
#define FRAME_DELAY_MS 66

Adafruit_SSD1306 display(FRAME_WIDTH, FRAME_HEIGHT, &Wire, -1);

void setup() {
  Wire.begin(21, 22);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
}

void loop() {
  for (unsigned int i = 0; i < FRAME_COUNT; i++) {
    const uint8_t* frame = selfaware_video_bin + (i * BYTES_PER_FRAME);
    display.clearDisplay();
    display.drawBitmap(0, 0, frame, FRAME_WIDTH, FRAME_HEIGHT, SSD1306_WHITE);
    display.display();
    delay(FRAME_DELAY_MS);
  }
}