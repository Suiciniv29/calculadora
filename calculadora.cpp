#include <locale.h>
#include <stdio.h>
#include <math.h>

int soma (int n1, int n2){
	printf("Indique a primeira parcela:");
	scanf("%i", &n1);
	printf("Indique a segunda parcela:");
	scanf("%i", &n2);
	printf("O resultado da soma é %i:", n1+n2);
}

int subtracao (int n1, int n2){
	printf("Indique o minuendo:");
	scanf("%i", &n1);
	printf("Indique o subtraendo:");
	scanf("%i", &n2);
	printf("O resto é %i:", n1-n2);
}

int mult (int n1, int n2){
	printf("Indique um fator :");
	scanf("%i", &n1);
	printf("Indique o outro fator:");
	scanf("%i", &n2);
	printf("O produto é %i:", n1*n2);
}

int div(int n1, int n2){
	printf("Indique o dividendo :");
	scanf("%i", &n1);
	printf("Indique o divisor:");
	scanf("%i", &n2);
	printf("O quociente é %i:", n1/n2);
}
int potencia (int n1,int n2){
	printf("Indique a base :");
	scanf("%i", &n1);
	printf("Indique o expoente:");
	scanf("%i", &n2);
	int potencia = (pow (n1,n2));
	printf("O resultado é %i:", potencia );
}
int raiz (float n1){
	printf("Indique o radicando:");
	scanf("%f", &n1);
	printf("O resultado é %f", sqrt(n1));
	
}
int modulo (int n1){
	printf("Indique o numero:");
	scanf("%i", &n1);
	printf("O resultado é %i", abs(n1));
}
int bhaskara (double n1, double n2,double n3, double x1, double x2, double delta){
	printf("Indique o valor de a:");
	scanf("%lf", &n1);
	printf("Indique o valor de b:");
	scanf("%lf", &n2);
	printf("Indique o valor de c:");
	scanf("%lf", &n3);
	
	delta = pow(n2,2) - 4*n1*n3;
	
	 if (delta > 0) {
        x1 = (-n2 + sqrt(delta)) / (2 * n1);
        x2 = (-n2 - sqrt(delta)) / (2 * n1);
        printf("\nRaizes: %.2lf e %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -n2 / (2 * n1);
        printf("\nRaiz unica: %.2lf\n", x1);
    } else {
        printf("\nNão ha raizes reais.\n");
    }
}

int main (int funcao){
	setlocale(LC_ALL, "Portuguese");
	int v1, v2;
	printf("Qual função você quer usar?\nDIGITE 1 PARA ADIÇÃO\n2 PARA SUBTRAÇÃO\n3 PARA MULTIPLICAÇÃO\n4 PARA DIVISÃO\n5 PARA EXPONENCIAÇÃO\n 6 PARA RAIZ QUADRADA\n7 PARA O MODULO\n 8 PARA BHASKARA\n 9 PARA SAIR\n");
	scanf("%i", &funcao);
	switch (funcao){
		case 1 :
			funcao = soma(v1, v2);
		break;
		case 2 : 
			funcao = subtracao(v1,v2);	
		break;
		case 3 : 
			funcao = mult(v1,v2);	
		break;
		case 4 : 
			funcao = div(v1,v2);
		break;
		case 5 :
			funcao = potencia(v1,v2);
		break;
		case 6 :
			funcao = raiz(v1);
		break;
		case 7 : 
			funcao = modulo(v1);
		break;
		case 8 :
			funcao = bhaskara(v1,v2,v3,v4,v5,v6);
			break;
		case 9:
		break;
	}
	return 0;
}
