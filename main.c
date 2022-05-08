#include <stdio.h>
#include <stdlib.h>

int main(void)
{
		printf("Ingrese un texto: ");
		char caracter;
		
		while ((caracter = getchar()) != EOF){
			if (islower(caracter)){
				putchar(toupper(caracter));
			}
			else if (isupper(caracter)){
				putchar(tolower(caracter));
			}
			else if(isdigit(caracter)){
			}
			else {
				putchar(caracter);
			}
		}
		return EXIT_SUCCESS;
}
