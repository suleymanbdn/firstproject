#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int birincisayi;
	int ikincisayi;
	int carpim;
	printf("birinci sayıyı girin ");
	
	scanf("%d",&birincisayi);
	printf("ikinciyi gir ");
	scanf("%d",&ikincisayi);
	carpim=birincisayi*ikincisayi;
	printf("%d",carpim);
	
	
	return 0;
}
