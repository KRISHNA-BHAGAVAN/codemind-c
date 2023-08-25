#include <stdio.h>
int count(int n) {
  int sum=0;
  if (n<0)
  return 0;
  if(n==0) 
  return 1;  
  return count(n-1)+count(n-2)+count(n-3);
  }  
int main() {
  int n;
 scanf("%d",&n);
int r=0;
  r = count(n);
printf("%d",r);
  return 0;
}