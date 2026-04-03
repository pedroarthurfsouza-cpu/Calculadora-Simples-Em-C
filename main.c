#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(int argc, char *argv[]) {

do{
	
	
int escolhaop,quantosnumeros;
float soma=0,subtracao=0,multiplicacao=1,divisao=1;
int voltarsair;

float escolhanumero;
	
int i=0;

system("cls||clear");

printf("CALCULADORA SIMPLES\n\n");
printf("escolha a operacao\n");
printf("(1)Soma\n");
printf("(2)Subtracao\n");
printf("(3)Multiplicacao\n");
printf("(4)Divisao\n");
printf("(0)SAIR\n");
scanf("%d",&escolhaop);


	if(escolhaop==0){
		break;
	}	
	else if(escolhaop==1){
		
		system("cls||clear");
		printf("Quantos numeros serao somados?\n");
		scanf("%d",&quantosnumeros);
		
		
		do{
			printf("digite o numero a ser somado\n");
			scanf("%f",&escolhanumero);
			soma+=escolhanumero;
			i++;
		}while(i<quantosnumeros);
		
		
		printf("o resultado da soma eh igual a %.3f",soma);
		printf("\n\ndeseja realizar outra conta? \n(1)Sim - Voltar para o menu\n(2)Nao - Sair\n");
		scanf("%d",&voltarsair);
		
			if(voltarsair==2){
				break;
			} else{
				continue;
			}
				
	}	
	else if(escolhaop==2){
	
		system("cls||clear");
		printf("Quantos numeros serao subtraidos?\n");
		scanf("%d",&quantosnumeros);
		
		do{
			printf("digite o numero a ser subtraido\n");
			scanf("%f",&escolhanumero);
			
			if(i==0){
			subtracao = escolhanumero;
			} else {
				
			subtracao-=escolhanumero;
			
			}
			i++;
		}while(i<quantosnumeros);
		
		
		printf("o resultado da subtracao eh igual a %.3f",subtracao);
		printf("\n\ndeseja realizar outra conta? \n(1)Sim - Voltar para o menu\n(2)Nao - Sair\n");
		scanf("%d",&voltarsair);
		
			if(voltarsair==2){
				break;
			} else{
				continue;
			}
		
	}	
	else if(escolhaop==3){
	
		system("cls||clear");
		printf("Quantos numeros serao multriplcados?\n");
		scanf("%d",&quantosnumeros);
		
		do{
			printf("digite o numero a ser multiplicado\n");
			scanf("%f",&escolhanumero);
			
			multiplicacao=multiplicacao*escolhanumero;
			i++;
			
		}while(i<quantosnumeros);
		
		
		printf("\no resultado da multiplicacao eh igual a %.3f",multiplicacao);
		printf("\n\ndeseja realizar outra conta? \n(1)Sim - Voltar para o menu\n(2)Nao - Sair\n");
		scanf("%d",&voltarsair);
		
			if(voltarsair==2){
				break;
			} else{
				continue;
			}

	}	
	else if(escolhaop==4){
	
	
		system("cls||clear");
		printf("Quantos numeros serao divididos?\n");
		scanf("%d",&quantosnumeros);
		
		do{
			printf("digite o numero a ser dividido\n");
			scanf("%f",&escolhanumero);
			if(escolhanumero!=0){
				
				if(i==0){
				divisao=escolhanumero;
				
				}else{
				divisao=divisao/escolhanumero;
				
				}	
				i++;
			}

		}while(i<quantosnumeros);
		
		
		printf("o resultado da divisao eh igual a %.3f",divisao);
		printf("\n\ndeseja realizar outra conta? \n(1)Sim - Voltar para o menu\n(2)Nao - Sair\n");
		scanf("%d",&voltarsair);
		
			if(voltarsair==2){
				break;
			} else{
				continue;
			}
	
	}else{
		printf("invalido!digite apenas um dos numeros selecionados\n");
		while(getchar() != '\n');
		Sleep(700);
	}	

}while(1);
	
	return 0;
}