#include <stdio.h>

int main (){
	float media;
	
	printf("Insira a nota: \n");
	scanf("%f", &media);
	
	if(media >= 7.0){
		printf("Aprovado(a)!\n");
	} else {
		printf("Reprovado(a)!\n");
	}
}
