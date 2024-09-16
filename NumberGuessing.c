#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// set seed for random number generator
	srand(time(NULL));
	int max, min, number, userInput;
	// ask user for max and min number
	printf("Input the maximum number and the minimum number (99 1): ");
	scanf("%d %d", &max, &min);
	number = rand()%((max - 1) - (min + 1)+ 1) + min + 1;
	printf("Guess the number between %d and %d: ", max, min);
	scanf("%d", &userInput);
	if (userInput == number) {
		printf("Correct");
	} else {
		printf("Try again later!");
	}
	getchar();
	return 0;
}
