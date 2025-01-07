#include <stdio.h>
#include <stdlib.h>
#define black "40"
#define red "41"
#define green "42"
#define yellow "43"
#define blue "44"
#define magenta "45"
#define cyan "46"
#define white "47"
#define x 6
#define y 9 
void printac(char* s){
	printf("\033[%sm \033[0m", s);
}
void run(char c){
	if(c == '0'){
		printac(black);
	} else if (c == '1'){
		printac(white);
	} else if(c == '2'){
		printac(red);
	} else if(c == '3') {
		printac(green);
	} else if(c == '4'){
		printac(yellow);
	} else if(c == '5'){
		printac(blue);
	} else if(c == '6'){
		printac(magenta);
	} else if(c == '7'){
		printac(cyan);
	}
}
int main(){
	FILE *file = fopen("test.txt", "r");
	if (file == NULL ){
		return 1;
	}
	char c;
	while ((c = fgetc(file)) != EOF){
		if (c == '\n') {
			printf("\n");
		} else {
			run(c);
		}
	}
	printf("\n");
	fclose(file);
	return 0;
}
