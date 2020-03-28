#include<stdio.h>
#include"opciones.c"

menu(){
	short opcion=0;

while(1){
	printf("\n\t *** TIENDA X *** \n");
printf("¿Qué desea realizar?\n");
printf("1) Mostrar productos.\n");
printf("2) Mostrar carrito.\n");
printf("3) Agregar elemento al carrito.\n");
printf("4) Eliminar elemento del carrito.\n");
printf("5) Salir.\n");
int res = scanf("%d",&opcion);
fflush(stdin);
getchar();
if(res==1){
/*if(scanf!=0){
 * printf("Valor inválido.\ņ");
 * break; */
switch(opcion){
	case 1:
		mostrarelementos();
		break;
	case 2:
		mostrarcarrito();
		break;
	case 3:
		mostrarelementos();
		agregaralcarrito();
		break;
	case 4:
		mostrarelementos();
		eliminardelcarrito();
		break;
	case 5:
		return 0;
	default:
		printf("Hasta pronto.\n");
}
}
}
return 0;
}

