// Requirements:
// https://projecteuler.net/problem=2

#include<stdio.h>

int evenFibonnaciSum(int num);

int main(){
  int sum;
  sum = evenFibonnaciSum(7);
  printf("\nSum: %d\n", sum);
}

int evenFibonnaciSum(int num){
  int n1 = 0, n2 = 1, temp, sum = 0;
  for (int i=0;i<num;i++){
    temp = n1;
    n1 = n2;
    n2 += temp;
    if (n1 % 2 == 0){
      sum += n1;
    }
  }
  return sum;
}
