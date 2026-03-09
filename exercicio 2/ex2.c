#include <stdio.h>

int main() {
	float nota, freq;
	
	printf("Digite sua nota: ");
	scanf("%f", &nota);
	
	printf("Digite sua frequencia: ");
	scanf("%f", &freq);
	
	if(nota >= 7 && freq >= 75){
		printf("Voce esta aprovado!");
	} else {
        printf("Voce nao foi aprovado.");
    }
	
	return 0;
}