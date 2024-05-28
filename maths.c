#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int sw = 0;
	float ab = 0;
	float ab_nosqrt = 0;
	float x_k = 0;
	float y_k = 0;
	float x_a = 0;
	float y_a = 0;
	float x_b = 0;
	float y_b = 0;
	printf("######## maths ########\n");
	printf("1. Coordonées k du milieu d'un segment\n");
	printf("2. Longueur d'un segment\n");
	while (i==1) {
		printf("here\n");
	}
	scanf("%d",&sw);
	switch (sw) {
		case 1:
			printf("Valeur décimale de x_a :\n"); //x_a
			scanf("%f",&x_a);
			printf("Valeur décimale de y_a :\n"); //y_a
			scanf("%f",&y_a);
			printf("Valeur décimale de x_b :\n"); //x_b
			scanf("%f",&x_b);
			printf("Valeur décimale de y_b :\n"); //y_b
			scanf("%f",&y_b);
			printf("a(%f;%f)\n",x_a,y_a); //coordonnées de a
			printf("b(%f;%f)\n",x_b,y_b); //coordonnées de b
			//calcul du résultat
			//soit k le milieu de [AB]
			x_k = (x_a+x_b)/2;
			y_k = (y_a+y_b)/2;
			printf("k(%f;%f)\n",x_k,y_k);
		break;
		case 2:
			printf("");
			printf("Valeur décimale de x_a :\n"); //x_a
			scanf("%f",&x_a);
			printf("Valeur décimale de y_a :\n"); //y_a
			scanf("%f",&y_a);
			printf("Valeur décimale de x_b :\n"); //x_b
			scanf("%f",&x_b);
			printf("Valeur décimale de y_b :\n"); //y_b
			scanf("%f",&y_b);
			printf("a(%f;%f)\n",x_a,y_a); //coordonnées de a
			printf("b(%f;%f)\n",x_b,y_b); //coordonnées de b
			//calcul
			ab_nosqrt = (x_b+x_a)*(x_b+x_a)-(y_b+y_a)*(y_b+y_a);
			ab = sqrt(ab_nosqrt);
			printf("%f",ab);
		break;
		default:
			printf("Error, you didn't use a correct number or a inexepted error occured\n");
		break;
	}
}