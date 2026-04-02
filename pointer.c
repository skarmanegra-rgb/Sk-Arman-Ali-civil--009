// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a=2;
  int*p;
  p=&a;
  printf("Value of a: %d\n", a);
    printf("Address in  p: %p\n", p);
    printf("value at address (using*p): %d\n",*p);
    printf("Address in  a: %p\n", &a);


    return 0;
}
