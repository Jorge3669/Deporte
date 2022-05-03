//Construir un programa que capture un deporte cualesquiera y despliegue dos implementos deportivos apropiados.
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	char op;
	printf("INGRESE EL DEPORTE QUE PRACTICA\n");
	printf("1. Basquetball\n");
	printf("2. Polo\n");
	printf("3. Tennis\n");
	printf("4. Andinismo\n");
	printf("5. Golf\n");
	cin>>op;
	switch(op){
		case'1':
			printf("Los implementos necesarios son: \nTennis\nPantaloneta");
		break;
		case'2':
			printf("Los implementos necesarios son: \nCasco\nBrida");
		break;
		case'3':
			printf("Los implementos necesarios son: \nRedes\nGorro");
		break;
		case'4':
			printf("Los implementos necesarios son: \nArnes\nCasco");
		break;
		case'5':
			printf("Los implementos necesarios son: \nGorra\nTees ");
		break;
		default: printf("INGRESE UNA OPCION VALIDA");
	}
	system("pause");
}
