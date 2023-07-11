#include <stdio.h>
int main(){
  int x,y;

  printf("Enter any two three-digit number : ");
  scanf("%d %d", &x, &y);

  if((x % 100) == (y % 100))
    printf("NO");

  else if((x % 10 == y % 10) || (x / 10) % 10 == (y / 10) % 10)
    printf("YES");

  else
    printf("-1");

  return 0;
}
