#include <stdio.h>
#include <cs50.h>


int main(void){
    int h=0;
    do{
        h = get_int("Bir yukseklik degeri giriniz\n");
    }while(h<1 || h>8); 
    for(int j=1; j<=h; j++){
        for(int i = h; i>j; i--){
            printf(" ");
        }    
        for(int k=1;k<=j;k++){
        printf("#");   
        }
        printf("\n"); 
    }
}
