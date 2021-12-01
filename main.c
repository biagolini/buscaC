#include "MinhaBiblioteca.h"  // Biblioteca criada para dar suporte a esse programa.

int main() {
	// Vetor com dados a serem analizados
	int vetor[] = {1, 3, 1, 85, 12, 5, 1};
	// Calcular n desse vetor
	int n = sizeof(vetor)/sizeof(int);
	// Qual � o numero que voc� quer saber se esta la dentro
	int objetivo=1;


	// Testa se um elemento est� ou n�o dentro de um vetor
   if(existe(vetor, n, objetivo)){
	   printf("SIM: o numero %d est� contido dentro do vetor.\n", objetivo);
   }else{
	   printf("N�O: o numero %d n�o est� contido dentro do vetor.\n", objetivo);
   }


   // Contar numero de vezes que o elemento aparece
   printf("O numero %d aparece %d x no vetor.\n", objetivo, contadorExiste(vetor, n, objetivo));



   // Encontrar as localizacos
   int localizacoes[n];
   encontreLoc(vetor,localizacoes,n,objetivo);
   //Apresentando oo resultado
   int i;

   printf("O vetor com as localizacoes �: ["); // Abre a caixa

  	for(i = 0; i < n-1; i++){
  		printf("%d,",localizacoes[i]);
  	}
  	printf("%d",localizacoes[n-1]);
  	printf("]\n");

   return 0;
}
