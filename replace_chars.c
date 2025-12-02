#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c == ' ' ? '\t' : c);
  }
}
