#include <stdio.h>
#include <stdlib.h>
int main() {
  typedef struct {
    int id;
    int vlaue;
    char name[5];
  } _KEY_;
  _KEY_ *arrow_up = (_KEY_ *)malloc(sizeof(_KEY_));
  arrow_up->id = 1;
  arrow_up->vlaue = 100;
  printf("id: %d, value: %d\n", arrow_up->id, arrow_up->vlaue);
  return 0;
}
