#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Türkçe:1,99
	//Matematik:3,998
	//Sosyal Bilgiler:1
	//Fen Bilgisi:2,999
	//Taban:100,160
	
	float turk,mat,fen,sos,taban,toplam;
	
	printf("Turkce netinizi giriniz: ");
	scanf("%f",&turk);
	
	printf("Matematik netinizi giriniz: ");
	scanf("%f",&mat);
	
	printf("Fen Bilgisi netini giriniz: ");
	scanf("%f",&fen);
	
	printf("Sosyal Bilgiler netini giriniz: ");
	scanf("%f",&sos); 
	
	taban=100.160;
	toplam=taban+turk*1.999+mat*3.998+sos*1+fen*2.999;
	
	printf("Toplam Puaniniz: %f",toplam);	
	return 0;
}
