#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char translate(char c);
int main(){
  printf("Game Start! \n");
  while(1){
    printf("Choose rock(O), paper(#), scissors(X): \n");
    char input;
    int comp;
    char opt[3] = {'O', 'X', '#'};
    scanf("%s", &input);
    srand(time(NULL));
    comp = rand()%3;
    printf("User: %c Computer: %c\n", input, opt[comp]);
    if(opt[(comp+2)%3] == input){
      printf("YOU WIN!\n");
    } else if((opt[(comp+1)%3]) == input){
      printf("YOU LOSE!\n");
    } else {
      printf("Its a draw!\n");
    }
  };
  return 0;
}