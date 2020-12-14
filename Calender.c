#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("AUGUST\n");
  printf("SU  MO  TU  WE  TH  FR  SA\n");
  for(int i = -1; i <= 31; i++){
    if(i <= 0){
      printf("    ");
      continue;
    }
    printf("%2d  ", i);

    if((i-5)%7 == 0){
      printf("\n");
    }
  };
  printf("\n");
  return 0;
  

}