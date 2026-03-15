#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  char question[369] = {0};
  int when;
  while (1) {
    puts("Ask the question");
    if (fgets(question, sizeof(question), stdin) == NULL)
      return -1;
    if (strchr(question, '\n') == NULL) {
      int will;
      while ((will = getchar()) != '\n' && will != EOF)
        ;
    }
    if (question[0] == '\n') {
      puts("There is no question.");
      break;
    }
    when = rand();
    if (when % 2 == 0) {
      puts(">Yes.");
    } else {
      puts(">No.");
    }
  }
  return 0;
}