#include "biblioteca.h"

int main()
{

	int numDigitado;
	numDigitado= menu();

    do{
        switch(numDigitado){
        	
        	//encerra o menu
			 case 0 :{
                adeus();
                break;
            }
            //Informa se o número é par ou impar.
            case 1 :{
				impar();
                break;
            }
            //Calcula a potenciacão de números com ponto flutuante
            case 2 :{
            	poten();
                break;
            }
            //Calcula a raiz de números com ponto flutuante 
            case 3 :{
                radi();
                break;
            }
            //Informa quando o ano é bissexto
            case 4 :{
				bissexto();
                break;
            }
            //Calcula média ponderada de 3 notas.
            case 5 :{
            	ponderada();
                break;
            }
            //Calcula média aritmética de 2 notas.
            case 6 :{
            	aritmetica();
                break;
            }
            //Calcula o fatorial
            case 7 :{
            	fatorial();
                break;
            }
            //Calcula se o número é primo ou não
            case 8 :{
            	primo();
                break;
            }
            //Sequência de Fibonacci
            case 9 :{
            	fibonacci();
                break;
            }
            //Imprime nome e matrícula em hexadecimal
            case 10 :{
            	hexadecimal();
                break;
        	}
            default :
                printf("\nVocê digitou uma opção inválida, tente novamente.");
                 break;
        	
		}
    } while(numDigitado!=0);
    
    return 0;
}

