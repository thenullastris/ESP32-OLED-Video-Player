# SelfAware ESP32 Video Player

This project demonstrates how to play a monochrome video on an ESP32 with an SSD1306 OLED display. The video frames are converted into a hexadecimal array (`video_data.h`) and then displayed sequentially.

## Project Structure

*   `SelfAware.ino`: The Arduino sketch that reads the video data and displays it on the OLED.
*   `video_data.h`: A header file containing the hexadecimal representation of the video frames.

## Requirements

*   ESP32 Development Board
*   SSD1306 OLED Display (128x64 pixels)
*   Arduino IDE
*   Adafruit GFX Library
*   Adafruit SSD1306 Library

## Setup and Usage

1.  **Install Libraries**: Open your Arduino IDE and install the following libraries via the Library Manager:
    *   `Adafruit GFX Library`
    *   `Adafruit SSD1306 Library`

2. **Connect Hardware**: Connect your SSD1306 OLED display to your ESP32 board.
    *   **SDA**: Pin 21 (Default)
    *   **SCL**: Pin 22 (Default)
    *   **VCC**: 3.3V
    *   **GND**: Ground
    *   *Note: If you are using different pins, you can modify the `Wire.begin(21, 22);` line in `SelfAware.ino`.*

3.  **Open Project**: Open the `SelfAware.ino` file in the Arduino IDE.

4.  **Upload Sketch**: Select your ESP32 board and port, then upload the sketch to your board.

## Generating `video_data.h`

The `video_data.h` file is generated from a video. You will need a tool or script to convert video frames into a C-style hexadecimal array suitable for embedding in an Arduino project. The process generally involves:

1.  **Extracting Frames**: Convert your video into individual image frames (e.g., PNG or BMP).
2.  **Resizing and Converting to Monochrome**: Resize each frame to 128x64 pixels and convert it to a monochrome (1-bit) bitmap.
3.  **Converting to Hex Array**: Convert the monochrome bitmap data into a hexadecimal byte array.

*Further details on the conversion tool used in the original project are pending.*
