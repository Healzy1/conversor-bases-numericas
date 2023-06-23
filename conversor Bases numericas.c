#include <stdio.h>
#include <stdlib.h>

int main(){

	int inicial, numinicial, final;
	char binario[32];

	printf("Conversor de Bases Numericas\n\n");
	printf("Selecione a base inicial:\n");
	printf("(1) Binaria.\n");
	printf("(2) Octal.\n");
	printf("(3) Decimal.\n");
	printf("(4) Hexadecimal.\n\n");
	printf("Escolha: ");
	scanf("%i", &inicial);

	switch(inicial){

		case (1):
		
		printf("Digite o valor binario: ");
		scanf("%s", &binario);
		
		printf("\nSelecione a base final:\n");
		printf("(1) Octal.\n");
		printf("(2) Decimal.\n");
		printf("(3) Hexadecimal.\n\n");
		printf("Escolha: ");
		scanf("%i", &final);
		
		if(final == 1){
			
			int binariooctal = strtol(binario, NULL, 2); // utilizei essa strtol para converter a string em um valor numerico
			printf("\nO valor binario %s convertido para octal corresponde a: %o\n",binario, binariooctal);
		
		}else
			if(final == 2){
				
				int binariodecimal = strtol(binario, NULL, 2);
				printf("\nO valor binario %s convertido para decimal corresponde a: %i\n",binario, binariodecimal);
				
			}else
				if(final == 3){
				
					int binariohexadecimal = strtol(binario, NULL, 2);
					printf("\nO valor binario %o convertido para hexadecimal corresponde a: %X\n",binario, binariohexadecimal);
					
				}else{
					
					printf("\nOpcao invalida.");
					
				}

		break;
		
		case (2):
			
		printf("Digite o valor octal: ");
		scanf("%o", &numinicial);
		
		printf("\nSelecione a base final:\n");
		printf("(1) Binaria.\n");
		printf("(2) Decimal.\n");
		printf("(3) Hexadecimal.\n\n");
		printf("Escolha: ");
		scanf("%i", &final);
		
		if(final == 1){
			
		ltoa(numinicial, binario, 2); // utilizei essa ltoa para converter um valor numerico em uma string (binario), basicamente o contrário do strtol
		printf("O valor octal %o convertido para binario corresponde a: %s\n", numinicial, binario);
		
		}else
			if(final == 2){
				
				printf("\nO valor octal %o convertido para decimal corresponde a: %i\n",numinicial, numinicial);
				
			}else
				if(final == 3){
				
					printf("\nO valor octal %o convertido para hexadecimal corresponde a: %X\n",numinicial, numinicial);
					
				}else{
					
					printf("\nOpcao invalida.");
					
				}
		
		break;
		
		case (3):
			
		printf("Digite o valor decimal: ");
		scanf("%i", &numinicial);
		
		printf("\nSelecione a base final:\n");
		printf("(1) Binaria.\n");
		printf("(2) Octal.\n");
		printf("(3) Hexadecimal.\n\n");
		printf("Escolha: ");
		scanf("%i", &final);
		
		if(final == 1){
			
		ltoa(numinicial, binario, 2);
		printf("O valor decimal %i convertido para binario corresponde a: %s\n", numinicial, binario);	
		
		}else
			if(final == 2){
				
				printf("\nO valor decimal %i convertido para octal corresponde a: %o\n",numinicial, numinicial);
				
			}else
				if(final == 3){
				
					printf("\nO valor decimal %i convertido para hexadecimal corresponde a: %X\n",numinicial, numinicial);
					
				}else{
					
					printf("\nOpcao invalida.");
					
				}
		
		break;
		
		case (4):
			
		printf("Digite o valor hexadecimal: ");
		scanf("%X", &numinicial);
		
		printf("\nSelecione a base final:\n");
		printf("(1) Binaria.\n");
		printf("(2) Octal.\n");
		printf("(3) Decimal.\n\n");
		printf("Escolha: ");
		scanf("%i", &final);
		
		if(final == 1){
			
		ltoa(numinicial, binario, 2);
		printf("O valor hexadecimal %X convertido para binario corresponde a: %s\n", numinicial, binario);
		
		}else
			if(final == 2){
				
				printf("\nO valor hexadecimal %X convertido para octal corresponde a: %o\n",numinicial, numinicial);
				
			}else
				if(final == 3){
				
					printf("\nO valor hexadecimal %X convertido para decimal corresponde a: %i\n",numinicial, numinicial);
					
				}else{
					
					printf("\nOpcao invalida.");
					
				}
		
		break;

		default:
		printf("Operacao invalida.");
		break;
}

	system("pause");
	return 0;
}
