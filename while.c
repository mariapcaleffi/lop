#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i, num;
	while(num!=4){
		printf("digite um número\n", num*num);
		scanf("%d", &num);
		i++;
		printf("%d\n", num*num);
	}
	return 0;
}
