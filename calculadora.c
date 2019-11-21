#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float soma(float num1, float num2){
	return num1+num2;
}
float subtracao(float num1, float num2){
	return num1-num2;
}
float multiplicacao(float num1, float num2){
	return num1*num2;
}
float divisao(float num1, float num2){
	return num1/num2;
}
void fazConta(float num1, char operador, float num2, int feito){
	float resultado;
	
	if(operador=='+'){
	resultado = soma(num1,num2);
	feito = 1;	
	}
	
	else	if(operador=='-'){
	resultado = subtracao(num1, num2);
	feito = 1;	
	}
	
	else	if(operador=='/'){
	resultado = divisao(num1, num2);
	feito = 1;	
	}
	
	else	if(operador=='*'){
	resultado = multiplicacao(num1,num2);
	feito = 1;
	
	}
	else {
		printf("voce e o amir?\n");
	}

	if	(feito==1){	
	printf("O resultado de...: %.2f %c %.2f e igual a  %.2f", num1, operador, num2, resultado);	
	}
} 


void main (){	

	float num1, num2;
	char operador, validador;
	int feito=0;
	
	printf("Digite o primeiro numero...:\n");
	scanf("%f", &num1);
		
	printf("Qual operacao voce deseja...:\n");
	operador = getche();
	printf("\n");

	printf("Digite o segundo numero ...:\n");
	scanf("%f", &num2);
	
	fazConta(num1, operador, num2, feito);
	do{
		
		printf("\nDeseja fazer outra operacao...:[S]-[N]\n");
		validador=getche();
		printf("\n");
		if(validador=='s'||validador=='S'){
			main();
		}else if(validador=='n'||validador=='N'){
		break;
		}	
	}while(1);
	printf("\n\nflw vlw");
	
}






