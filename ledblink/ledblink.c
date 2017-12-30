#include <wiringPi.h>
#include <stdio.h>

int main (void)
{
  int pin = 7;
  printf("Raspberry Pi wiringPi blink test\n");

  if (wiringPiSetup() == -1)
    exit (1);

  pinMode(pin, OUTPUT);

  for (;;){
    printf("LED On\n");
    digitalWrite(pin, 1);
    delay(250);
    printf("LED Off\n");
    digitalWrite(pin, 0);
    delay(250);
  }

  return 0;
}