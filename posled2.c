#include <stdio.h>

int main() {
  // put your code here
  int a;
   int count=0;
   int count1=0;
  int prev=-11111;
  do {
  scanf("%d", &a);
  count1+=1;
  if (a>prev && a==-9999) {
  count+=1;
  prev=a;}
  else {
  //printf("%d ", count1);
  }}
  while (a!=-9999);
  printf("%d %d ", count1, count);
    if (count1-1==count) {
    printf("0");}
  return 0;
}