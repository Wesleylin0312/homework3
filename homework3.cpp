#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ float h,w; 
printf("請輸入體重(kg):"); 
scanf("%f",&w); 
printf("請輸入身高(m):"); 
scanf("%f",&h); 
printf("您的BMI值=%f\n",w/(h*h)); 

system("PAUSE"); 
return 0; 
} 
