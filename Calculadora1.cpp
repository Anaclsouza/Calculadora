#include<stdio.h>
#include<locale.h>
 int main ()
 {
 	setlocale(LC_ALL,"Portuguese");
 	
 	float val1,val2,result;
 	int op;
 	
 	do {
 		 printf("\n Informe a op��o desejada: \n ");
 		 printf("\n 1-SOMA \n");
 		 printf("\n 2-SUBTRA��O \n");
 		 printf("\n 3-MULTIPLICA��O \n");
 		 printf("\n 4-DIVIS�O \n");
 		 printf("\n OP��O \n");
 		 scanf("%i",&op);
 		 printf("\n Digite o primeiro valor \n");
 		 scanf("%f",&val1);
 		 printf("\n Digite o segundo valor \n");
 		 scanf("%f",&val2);
 	
 		 
 	switch(op){
 		case 1:
 		  result= val1+val2;
 		  printf("\n Soma: %2.f \n",result);
 		  break; 		  
 		case 2:
 		 result= val1-val2;
 		  printf("\n Subtra��o: %2.f \n",result);
 		  break;
 		case 3:
 		 result= val1*val2;
 		  printf("\n Multiplica��o: %2.f \n",result);
 		 break;
 		case 4:
 	     result= val1/val2;
 	      printf("\n Divis�o: %2.f \n",result);
 	     break;
 	     
 	     default:
 	     	printf("\n Digite uma op��o valida! \n");
 	     	break;
		 }
 		printf("\n Caso deseje continuar digite 1 \n");
 		scanf("%i",&op);	
		 }
		while(op==1); 
		}
	
 
