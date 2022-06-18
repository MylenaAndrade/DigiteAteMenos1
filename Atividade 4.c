#include<stdio.h>
//#include<float.h> -> Nota: essa biblioteca não funcionou para os números negativos
/*
Fazer uma função que permaneça lendo
números reais até que o usuário forneça o valor
-1. Ao final, retornar a quantidade de valores
lidos e o maior deles.
*/

//mostrando que existe uma função
void quantMaior(int *valor, float *maior);

//função MAIN
void main(){
//declaração de variáveis 
	int quant;
	float maiorDeles;	
	
//chamando a função
	quantMaior(&quant, &maiorDeles);

//printando o resultado dos ponteiros	
	printf("\nA quantidade de valores fornecidos e de: %d", quant);
	printf("\nO maior dentre eles e: %.1f", maiorDeles);
}

void quantMaior( int *valor, float *maior){
//declaração de variáveis
	float n, big=-99999999;
	int cont=0;

//estrutura de repetição	
	do{
		//comandos de entrada e saida
		printf("Digite um numero: ");
		scanf("%f", &n);
		//estrutura de condição para que o -1 não entre no contador
		if(n != -1)
		{
			cont++;
				//estrutura de condição para achar o maior valor entre eles
				if(n>big)
				{
					big=n;
				}
		}
	//vai continuar se repetindo até o usuário digitar -1	
	}while( n != -1);
	
	//atribuindo ao ponteiro 'valor' a quantidade de numeros digitados
	*valor=cont;
	//atribuindo ao ponteiro 'maior' o maior numero digitado
	*maior=big;
	
}


