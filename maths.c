#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
	char check_continue = 0;
	unsigned char i=1;
	unsigned char sw=0;
	unsigned char sw2=0;
	float user_float=0;
	float ab=0;
	float ab_nosqrt=0;
	float x_k=0;
	float y_k=0;
	float x_a=0;
	float y_a=0;
	float x_b=0;
	float y_b=0;
	//the wile loop to run the programm infinitly
	while (i==1) {
		printf("######## maths ########\n");
		printf("0. Quitter\n"); //exit(1)
		printf("1. Coordonees k du milieu d'un segment\n");
		printf("2. Longueur d'un segment\n");
		printf("3. Mathematiques simples\n"); //switch(sw2)
		scanf("%d",&sw);
		switch (sw) {
			case 0:
				exit(1); //exit the programm
			break;
			case 1: //Coordonees k du milieu d'un segment
				printf("Valeur decimale de x_a :"); //x_a
				scanf("%f",&x_a);
				printf("Valeur decimale de y_a :"); //y_a
				scanf("%f",&y_a);
				printf("Valeur decimale de x_b :"); //x_b
				scanf("%f",&x_b);
				printf("Valeur decimale de y_b :"); //y_b
				scanf("%f",&y_b);
				printf("a(%f;%f)\n",x_a,y_a); //coordonnees de a
				printf("b(%f;%f)\n",x_b,y_b); //coordonnees de b
				//calcul du resultat
				//soit k le milieu de [AB]
				x_k = (x_a+x_b)/2;
				y_k = (y_a+y_b)/2;
				printf("=> k(%f;%f)\n",x_k,y_k); //print the result
			break;
			case 2: //Longueur d'un segment
				printf("Valeur decimale de x_a :"); //x_a
				scanf("%f",&x_a);
				printf("Valeur decimale de y_a :"); //y_a
				scanf("%f",&y_a);
				printf("Valeur decimale de x_b :"); //x_b
				scanf("%f",&x_b);
				printf("Valeur decimale de y_b :"); //y_b
				scanf("%f",&y_b);
				printf("a(%f;%f)\n",x_a,y_a); //coordonnees de a
				printf("b(%f;%f)\n",x_b,y_b); //coordonnees de b
				//calcul
				ab = sqrt((x_b-x_a)*(x_b-x_a)+(y_b-y_a)*(y_b-y_a));
				printf("=> La distance est %f\n",ab);
				scanf("%c",&check_continue);
			break;
			case 3: //another switch to make a "subfolder" of the first switch
				printf("here\n");
				printf("######## maths ########\n");
				printf("0. Quitter\n"); //exit(1)
				printf("1. Racine carre\n");
				printf("2. xxx\n");
				printf("3. xxx\n");
				switch(sw2) {
					case 0:
						exit(1); //exit the programm
					break;
					case 1:
						printf("1");
						scanf("%f",&user_float);
						printf("%f", user_float);
						// result=sqrt(user_float)
					break;
					case 2:
						printf("2");
					break;
					case 3:
						printf("3");
					break;
					default:
						printf("Error, you didn't use a correct number or an inexepted error occured\n");
						exit(1); //exit the programm
					break;
				}
			break;
			default:
				printf("Error, you didn't use a correct number or an inexepted error occured\n");
				exit(1); //exit the programm
			break;
		}//end of the switch
	}//enf of the while
}//end of the main function
