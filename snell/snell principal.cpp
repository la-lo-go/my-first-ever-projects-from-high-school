#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){  
	
		/*
		
		Ar= asin((sin(Ai)* N1 ) / N2);
		
		eleccion: Para elegir en el menu
		Aix: Angulo de incidencia 
			1: del medio 1 (con el que incide sobre el medio 2)
			2: del medio 2 (con el que incide sobre el medio 3)
			3: del medio 3 (con el que incide sobre el medio 4)
				
		Ar: Angulo de refraccion  al entrar en el ultimo medio
		Ap: Angulo del prisma
		Nx: indice de refraccion de cada medio
		*/ 
		
		//declaracion de variables
		int eleccion1, eleccion2 ;
		float N1, N2, N3, N4, Ai1, Ai2, Ai3, Ar, Ap;
		double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749 ;
		//menus
		printf ("¿Donde lo quieres calcular?\n *\t Superficies planas (1)\n * \t Prisma(2) \n");
		scanf ("%d", &eleccion1);
		system ("cls");
		
		//menu de la Superfices Planas
			if(eleccion1 == 1){
				
				{
					
						printf ("\t \t \t \t \t \t \t SUPERFICIES PLANAS \n ¿Cuantos medios hay?\n *\t 2 \n *\t 3\n *\t 4\n ");
						scanf ("%d", &eleccion2);
						system ("cls");
						
				}while (eleccion2 <= 1 || eleccion2 > 4 );
						
							//2 medios
							if (eleccion2 == 2){
							//pedir datos
								
								//medio 1
								printf ("Introduce el indice de refraccion del medio 1: \n");
								scanf("%f", &N1);
								
								//medio 2
								printf ("Introduce el indice de refraccion del medio 2: \n");
								scanf("%f", &N2);

								//angulo de incidencia
								
								printf ("Introduce el angulo de incidencia:\n");
								scanf("%f", &Ai1);
								
									//Pasar a radianes el angulo dado					
									Ai1 = (Ai1 * pi) / 180;	
									
								//Calcular y decir el angulo de refraccion 
							
								Ar = asin((sin(Ai1)* N1 ) / N2);
									//Pasar a grados el angulo calculado
									Ar = (Ar * 180)/pi;
								printf ("el angulo de refraccion es %0.4f grados", Ar) ;
							}
							
							
							//3 medios
							if (eleccion2 == 3){
								
							//pedir datos
								
								//medio 1
								printf ("Introduce el indice de refraccion del medio 1: \n");
								scanf("%f", &N1);
								
								//medio 2
								printf ("Introduce el indice de refraccion del medio 2: \n");
								scanf("%f", &N2);
								
								//medio 3
								printf ("Introduce el indice de refraccion del medio 3: \n");
								scanf("%f", &N3);

								//angulo de incidencia
								
								printf ("Introduce el angulo de incidencia:\n");
								scanf("%f", &Ai1);
								
									//Pasar a radianes el angulo dado					
									Ai1 = (Ai1 * pi) / 180;	
									
								//Calcular el angulo de refraccion en 1-2 
							
								Ai2 = asin((sin(Ai1)* N1 ) / N2);
								
								//Calcular y decir el angulo de 2-3	
								
								Ar = asin((sin(Ai2)* N1 ) / N2);
									//Pasar a grados el angulo calculado
									Ar = (Ar * 180)/pi;
								printf ("el angulo de refraccion es %0.4f grados", Ar) ;
								
							}
							
							
							//4 medios
							if (eleccion2 == 4){
								
							//pedir datos
								
								//medio 1
								printf ("Introduce el indice de refraccion del medio 1: \n");
								scanf("%f", &N1);
								
								//medio 2
								printf ("Introduce el indice de refraccion del medio 2: \n");
								scanf("%f", &N2);
								
								//medio 3
								printf ("Introduce el indice de refraccion del medio 3: \n");
								scanf("%f", &N3);
								
								//Medio 4
								printf ("Introduce el indice de refraccion del medio 4: \n");
								scanf("%f", &N4);

								//angulo de incidencia
								
								printf ("Introduce el angulo de incidencia:\n");
								scanf("%f", &Ai1);
								
									//Pasar a radianes el angulo dado					
									Ai1 = (Ai1 * pi) / 180;	
									
								//Calcular el angulo de refraccion en 1-2 
							
								Ai2 = asin((sin(Ai1)* N1 ) / N2);
								
								//Calcular el angulo de 2-3	
								Ai3 = asin((sin(Ai2)* N2 ) / N3);
								
								//Calcular y decir el angulo del medio 4
								Ar = asin((sin(Ai3)* N3 ) / N4);
									//Pasar a grados el angulo calculado		
									Ar = (Ar * 180)/pi;
								printf ("el angulo de refraccion es %0.4f grados", Ar) ;
								
							}
							printf ("\n \n \n PROGRAMA ACABADOdo");
							scanf ("%d", &eleccion1);
				}
				//menu del prisma
			if(eleccion1 == 2){
				
								printf ("\t \t \t \t \t \t \t PRISMA \n");
								
								//Pedir datos
								
									//Angulo superior (Ap)
								printf ("Introduce el angulo superior del prisma: \n");
								scanf("%f", &Ap);
									//Pasar a radianes el angulo dado					
									Ap = (Ap * pi) / 180;	

									//medio 1
								printf ("Introduce el indice de refraccion del medio exterior: \n");
								scanf("%f", &N1);
								
									//medio 2
								printf ("Introduce el indice de refraccion del prisma: \n");
								scanf("%f", &N2);

									//angulo de incidencia sobre el prisma
								
								printf ("Introduce el angulo de incidencia:\n");
								scanf("%f", &Ai1);
								
									//Pasar a radianes el angulo dado					
									Ai1 = (Ai1 * pi) / 180;	
									
								//Calcular y decir el angulo de refraccion 
									//Calcular el angulo con el que entra en el prisma (Ai2)
									Ai2 = asin((sin(Ai1)* N1 ) / N2);
									
									//Calcular el angulo con el que llegará a la cara opuesta
											/*
											Para calcular el angulo con el que llegara a la otra cara del prisma:
										
												Alfa (Complemetario de Ai2)= 90 - Ai2
											
												Beta (Completario de Ai3) = 180 - Alfa - Ap 
																		  = 180 - (90 - Ai2) - Ap
																	  
												Ai3 (angulo con el que llega a la cara opuesta) = 90 - Beta 
																								= 90 - ( 180 - (90 - Ai2) - Ap)
											*/ 
										Ai3 = 90 - ( 180 - (90 - Ai2) - Ap);
									//Calcular el angulo refractado al pasar de nuevo al medio 1
									Ar = asin((sin(Ai3)* N2 ) / N1);
									//Pasar a grados el angulo calculado
									Ar = (Ar * 180)/pi;
								printf ("el angulo de refraccion es %0.4f grados", Ar) ;
								printf ("\n \n \n PROGRAMA ACABADO");
								scanf ("%d", &eleccion1);
	
							}
	
	return 1;
	
			}
			
			
							
			
									
		


