#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i;
	for (i = 20; i >= 0 ; i-=4){
		printf("%d\n", i);
	}
	return 0;
}
