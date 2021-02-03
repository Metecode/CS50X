#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
  float lira= get_float("Para ustunu giriniz:");
  int kurus = round(lira * 100);
  int sayi=0;
  while(kurus>=25) {
      kurus -= 25;
      sayi++;
  }
  while(kurus>=10){
      kurus -= 10;
      sayi++;
  }
  while(kurus>=5){
      kurus -=5;
      sayi++;
  }
  while(kurus>=1){
      kurus -=1;
      sayi++;
  }
  printf("Alacaginiz bozukluk sayisi: %i\n",sayi);

}
