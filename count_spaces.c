#include <stdbool.h>
#include <stdio.h>

int main() {
  int c;
  long count = 0;

  while ((c = getchar()) != EOF) {
    bool isTab = c == '\t';
    bool isNewLine = c == '\n';
    bool isBlank = c == ' ';

    if (isTab || isNewLine || isBlank) {
      ++count;
    }
  }

  printf("%ld\n", count);
}
