#include <stdio.h>

// A funcao 'existe' testa se um elemento está ou não dentro de um vetor
int existe(int vetor[], int tam, int objetivo){
	int i, resposta=0;
	for(i=0; i<tam; i++){
		if(vetor[i]==objetivo){
			resposta =1;
			 return 1;
		}
	}
   return 0;
}

// A funcao 'contadorExiste' quantas vezes um elemento está dentro do vetor
int contadorExiste(int vetor[], int tam, int objetivo){
	int i, resposta=0, contador =0 ;
	for(i=0; i<tam; i++){
		if(vetor[i]==objetivo){
			contador++;
		}
	}
   return contador;
}


// A funcao 'encontreLoc' serve para você passar dois vetores um com dados e outro vazio, e a funcao retorna o vetor vazio com valores de 0-1 relacionados a se ha ou nao seu elemento dentro de cada posicao
int encontreLoc(int vetor[],int resposta[], int n, int objetivo){
	// Variaveis auxiliares
	int i ;
	// laco de repeticao
	for(i=0; i<n; i++){
		if(vetor[i]==objetivo){
			resposta[i]=1;
		}else{
			resposta[i]=0;
		}
	}

	   return resposta;
}
