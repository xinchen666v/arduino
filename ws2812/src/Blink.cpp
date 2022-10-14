#include <FastLED.h>
#define LED_PIN 7
#define NUM_LED 50
CRGB leds[NUM_LED];
void setup()
{
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LED);
}

void loop()
{

  fill_gradient(leds, 0, CHSV(50, 25, 255), 49, CHSV(5, 255, 150), LONGEST_HUES);
  FastLED.show();
  FastLED.setBrightness(10);
}
