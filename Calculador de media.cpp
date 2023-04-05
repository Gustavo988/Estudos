#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");
    float n1, n2, media=0,freq;
    printf("Entre com a primeira nota: ");
    scanf("%f", &n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &n2);
    printf("Entre com a frequência: ");
    scanf("%f",&freq);
    media=(n1+n2)/2;
    printf("Sua média é: %.2f",media);
    if(media>=6 && freq>=75){
        printf("\nAprovado\n");
    }
    else if(media>=6 && freq<75){
        printf("\nReprovado por frequência\n");
    }
    else if(media<6 && freq>=75){
        printf("\nReprovado por Nota\n");
    }
    else if(media<6 && freq<75){
        printf("\nReprovado\n");
    }
    return 0;
 }
