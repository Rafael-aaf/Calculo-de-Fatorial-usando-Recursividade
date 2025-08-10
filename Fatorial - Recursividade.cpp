#include <cstdio>
#include <conio.h>

int fact(int n){
	int x, y;
	
	if(n == 0) return 1;
	
	x = n - 1;
	y = fact(x);
	return(n * y);
}

int main(){
	int n, a;
	printf("\tEsta e uma calculadora de Fatoriais!!!\n\n");
	
	while(true){
		printf("Digite um numero: ");
		scanf("%d", &n);
		if(n < 0) printf("\nO numero deve ser positivo!\n");
		
		else printf("\nO fatorial e: %d\n", fact(n));
		
		printf("\nDigite qualquer tecla para continuar ou ESC para sair\n\n");
		a = getch();
		if(a == 27) return 0;
	}
}