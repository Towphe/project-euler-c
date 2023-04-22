#include<stdio.h>

// Requirements:
// https://projecteuler.net/problem=1

void findSumOfMultiplesOf3and5(int num);

int main(){
  findSumOfMultiplesOf3and5(10);
  findSumOfMultiplesOf3and5(49);
  findSumOfMultiplesOf3and5(1000);
  findSumOfMultiplesOf3and5(8456);
  findSumOfMultiplesOf3and5(19564);
}
void findSumOfMultiplesOf3and5(int num){
  int sum = 0, n = num-1;
  for (int i=0; i<n/3;i++){
    sum += (3*(i+1));
  }
  for (int i=0; i<n/5;i++){
    sum += (5*(i+1));
  }
  if (n > 15){
    for (int i=0; i<n/15;i++){
      sum -= (15 * (i + 1));
    }
  }
  printf("\nSum: %d", sum);
}