#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){  
	
		/*
		vop = volocidad en el perihelio
		voa = velocidad en el afelio
		da = distancia en el afelio
		dp = disancia en perihelio
		*/ 
		
		//declaracion de variables
		int vop, voa, da, dp, eleccion, final;
		
		//menus
		printf ("Que quieres calcular?\n *\t Velocidad (1)\n * \t Distancia(2) \n");
		scanf ("%d", &eleccion);
		system ("cls");
		
		//menu de la velocidad
			if(eleccion == 1){
						printf ("\t \t \t \t \t \t \t VELOCIDAD \n Donde lo quieres calcular?\n *\t  En el afelio (1)\n *\t  En el perihelio(2) \n ");
						scanf ("%d", &eleccion);
						system ("cls");
	
							//velocidad en el perihelio
							if (eleccion == 1){
								//pedir datos
								
								//velocidad afelio
								printf ("intruduce la velocidad en el afelio");
								scanf("%d", &voa);
								
								//distancia perihelio
								printf ("intruduce la distancia en el perihelio");
								scanf("%d", &dp);

								//distancia afelio
								printf ("intruduce la distancia en el afelio");
								scanf("%d", &da);
							}
							//velocidad en el afelio
							if (eleccion == 2){
								
								//pedir datos
								
								//velocidad perihelio
								printf ("intruduce la velocidad en el perihelio");
								scanf("%d", &voa);
								
								//distancia perihelio
								printf ("intruduce la distancia en el perihelio");
								scanf("%d", &dp);
							

								//distancia afelio
								printf ("intruduce la distancia en el afelio");
								scanf("%d", &da);
		
								
							}
			}
			
			//menu de la distancia
				if(eleccion == 2){
						printf ("\t \t \t \t \t \t \t DISTANCIA \n Donde lo quieres calcular?\n *\t  En el afelio (1)\n *\t  En el perihelio(2) \n ");
						scanf ("%d", &eleccion);
						system ("cls");
	
							//distancia en el perhelio
							if (eleccion == 1){
								//pedir datos
								
								//velocidad afelio
								printf ("intruduce la velocidad en el afelio");
								scanf("%d", &voa);
								
								//velocidad en perihelio
								printf ("intruduce la velocidad en el perhelio");
								scanf("%d", &vop);

								//distancia afelio
								printf ("intruduce la distancia en el afelio");
								scanf("%d", &da);
			
								
							}
							
							//Distancia en el afelio
							if (eleccion == 2){

								//pedir datos
								
								//velocidad afelio
								printf ("intruduce la velocidad en el afelio");
								scanf("%d", &voa);
								
								//velocidad en perihelio
								printf ("intruduce la velocidad en el perhelio");
								scanf("%d", &vop);

								//distancia perhelio
								printf ("intruduce la distancia en el perihelio");
								scanf("%d", &dp);
								
							}
			}



}
