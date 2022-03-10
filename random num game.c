random num game.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,guess,nguesses=1;
    srand(time(0));
    num=rand()%100+1;
    // printf("%d\n",num);
    do{
        printf("guess the num btw 1 to 100");
        scanf("%d",&guess);
        if(guess>num){
            printf("lower num please\n");
             }
             else if(guess<num){
             printf("higher num please\n");
             }
             else
             {
                 printf("u guessed it in %d attempts\n",nguesses);
             }
             
              nguesses++; 
      }
              while(guess!=num);
               
             
             
        
    //changes made by Adarsh
        
     printf("%d",num);   
    
    return 0;
}

