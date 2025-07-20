//
//  main.c
//  grocery-store-project
//
//  Created by Tatiana Correa on 7/19/25.
//

#include <stdio.h>

int main(void) {
  
int appleQuantity = 23;
double applePrice = 1.49;
double appleReview = 82.5;
int appleReviewDisplay;
char const appleLocation = 'F';

appleReviewDisplay = (int)appleReview;

printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
