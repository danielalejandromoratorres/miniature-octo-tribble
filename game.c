#include<stdio.h>
#include<math.h>

int main(){
	int num,val,x,aux=0,aux1=0;
	char r;
	float porc;
	printf("desea jugar?(s/n) \n");
	  r=getch();
	  r=tolower(r);
	  x=2;
	  do{
	  printf("ingrese un numero");
	   scanf("%i",&num);
	   aux1++;
	   if(num<0){
	   val=num-x;
	   }else
	   {val=x+num;
	   }
	   if(val>=-2&&val<=8){
	   	printf("usted ha ganado: \n");
	   	}
	   	else{
	   		printf("usted ha perdido \n");
	   	    	aux++;
		   }
	   printf("desea jugar otra vez (s/n):");
	  	
	  }while(r=='s');
	  if(aux1>1){
	  porc=(aux*100)/aux1;
	  printf("se salio %.2f % de veces del rango \n", porc);
}
if(r=='n');
printf("puede retirarse");
	  return 0;
	  
	  
}

