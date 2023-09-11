#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define RELATION(n1, n2) (n1 > n2? "high": "low")
#define CLEAR_BUFFER while( getchar() != '\n')

void getGuess(int ans){

	int guess;
	bool valid;

	while(true){
		
		valid = scanf("%d", &guess) == 1;
		CLEAR_BUFFER;

		if(!valid){
			printf("That's not a whole number! Guess again:");
			continue;
		}
		if(guess == ans) break;

		printf("%d is too %s, guess again:", guess, RELATION(guess, ans));
	}

}

void playGame(){

	int ans = (rand() % 91 ) + 10;
	double root = sqrt((double)ans);

	printf("%f is the square root of what whole number?", root);	

	getGuess(ans);

	printf("you got it baby!\n");
}


int main(){

	char in;

	while(true){

		printf("Press q to quit or any key to continue:");
		scanf("%c", &in);
		CLEAR_BUFFER;

		if(in == 'q') break;

		playGame();
	}

	printf("Bye Bye !\n");
}
