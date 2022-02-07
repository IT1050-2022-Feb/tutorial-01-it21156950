/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include<stdio.h>

int main() {
  double distance,amount; //declaring variables
  
  printf("Input distance:");
  scanf("%lf",&distance); //read distance

  if(distance>30) //condtion for distance
  {
    amount=30*50+(40*(distance-30)); //calculation for distance
  }
  else
  {
    amount=distance*50; //calculation for distance
  }
  printf("Total Amount:%.2lf",amount);
  return 0;
}
