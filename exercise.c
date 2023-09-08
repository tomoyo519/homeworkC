#include <stdio.h>
// Assume base address of "GeeksQuiz" to be 1000
int main() {
  char s[] = "Fine";
  *s = 'N';
  printf("%s\n", s);
  return 0;
}