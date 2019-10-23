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
            //Informa se o n�mero � par ou impar.
            case 1 :{
				impar();
                break;
            }
            //Calcula a potenciac�o de n�meros com ponto flutuante
            case 2 :{
            	poten();
                break;
            }
            //Calcula a raiz de n�meros com ponto flutuante 
            case 3 :{
                radi();
                break;
            }
            //Informa quando o ano � bissexto
            case 4 :{
				bissexto();
                break;
            }
            //Calcula m�dia ponderada de 3 notas.
            case 5 :{
            	ponderada();
                break;
            }
            //Calcula m�dia aritm�tica de 2 notas.
            case 6 :{
            	aritmetica();
                break;
            }
            //Calcula o fatorial
            case 7 :{
            	fatorial();
                break;
            }
            //Calcula se o n�mero � primo ou n�o
            case 8 :{
            	primo();
                break;
            }
            //Sequ�ncia de Fibonacci
            case 9 :{
            	fibonacci();
                break;
            }
            //Imprime nome e matr�cula em hexadecimal
            case 10 :{
            	hexadecimal();
                break;
        	}
            default :
                printf("\nVoc� digitou uma op��o inv�lida, tente novamente.");
                 break;
        	
		}
    } while(numDigitado!=0);
    
    return 0;
}

