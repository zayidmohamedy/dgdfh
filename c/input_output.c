#include <stdio.h>
int main(){
    printf(" recognize if you are our batch : \n");
       int batch;
  printf("batch: ");
  scanf(" %d \n",&batch );
  if(batch==56 ){
     printf("yeah good you're our batch welcome and recognize your roll ");
     int roll;
     printf("\nroll: ");
     scanf("%d " ,&roll);
      if(roll>20){
       printf("your are group 2 ,thanks");
      } else{
        printf("you'are group 1 , thanks");
      }
  }else{
   printf("sorry you are not our batch thanks");
  }
 
    return 0 ;
}