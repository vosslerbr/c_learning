#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  float fahr, celcius;

  fahr = LOWER;

  printf("%3s %6s\n", "F", "C");

  while (fahr <= UPPER) {
    celcius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr += STEP;
  }

  // an alternative
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%3f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}
