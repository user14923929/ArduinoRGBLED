class ArduinoRGBLED {
  public:
    void init(int redPin, int greenPin, int bluePin);
    void setColor(int red, int green, int blue);
  private:
    int redPin;
    int greenPin;
    int bluePin;
};