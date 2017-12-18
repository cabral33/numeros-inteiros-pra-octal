#include <stdio.h>
#include <locale.h>

linhas(){
	for(int i=1; i<=25; i++)
		printf("--");
		putchar('\n');
}

int main (){
setlocale(LC_ALL, "portuguese");

int n1, decisao;

puts("Digite qualquer numero inteiro para a conversão:");
scanf("%d", &n1);

printf("A conversão é %o", n1);

puts("\nQuer continuar ? (sim=1, não=2)");
scanf("%d", &decisao);

switch(decisao){
	case 1:
		putchar('\n');
		linhas();
		return main();
			break;

	case 2:
		break;

	default:
		puts("Não zoe a parada!!!!");
		putchar('\n');
		linhas();
		return main();
	}

}
