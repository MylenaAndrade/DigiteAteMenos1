#include<stdio.h>
//#include<float.h> -> Nota: essa biblioteca n�o funcionou para os n�meros negativos
/*
Fazer uma fun��o que permane�a lendo
n�meros reais at� que o usu�rio forne�a o valor
-1. Ao final, retornar a quantidade de valores
lidos e o maior deles.
*/

//mostrando que existe uma fun��o
void quantMaior(int *valor, float *maior);

//fun��o MAIN
void main(){
//declara��o de vari�veis 
	int quant;
	float maiorDeles;	
	
//chamando a fun��o
	quantMaior(&quant, &maiorDeles);

//printando o resultado dos ponteiros	
	printf("\nA quantidade de valores fornecidos e de: %d", quant);
	printf("\nO maior dentre eles e: %.1f", maiorDeles);
}

void quantMaior( int *valor, float *maior){
//declara��o de vari�veis
	float n, big=-99999999;
	int cont=0;

//estrutura de repeti��o	
	do{
		//comandos de entrada e saida
		printf("Digite um numero: ");
		scanf("%f", &n);
		//estrutura de condi��o para que o -1 n�o entre no contador
		if(n != -1)
		{
			cont++;
				//estrutura de condi��o para achar o maior valor entre eles
				if(n>big)
				{
					big=n;
				}
		}
	//vai continuar se repetindo at� o usu�rio digitar -1	
	}while( n != -1);
	
	//atribuindo ao ponteiro 'valor' a quantidade de numeros digitados
	*valor=cont;
	//atribuindo ao ponteiro 'maior' o maior numero digitado
	*maior=big;
	
}


