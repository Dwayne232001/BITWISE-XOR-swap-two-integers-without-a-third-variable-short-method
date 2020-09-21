#include <stdio.h>

int main(void) {
  int a,b;
  printf("Enter value of a\n");
  scanf("%d",&a);
  printf("Enter value of b\n");
  scanf("%d",&b);
  printf("-----Before Swapping-----\n");
  printf("a=%d\nb=%d\n",a,b);
  a^=b^=a^=b;
  printf("-----After Swapping-----\n");
  printf("a=%d\nb=%d",a,b);
  return 0;
}