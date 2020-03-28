int store[4][5]={{0,0,0,0,0},{0,0,0,0,0},{20,30,40,20,30},{10,25,70,30,35}};
/*las filas representan los datos: 0=elementos eliminados del carrito, 1=elementos agregados al carrito, 2=elementos en inventario, 3=precio de cada elemento*/
/*Las columnas corresponen a cada uno de los productos: 0=a, 1=b, 2=c, 3=d, 4=e*/
void mostrarelementos(){
printf(" 1) Producto a Costo unitario= %i",store[3][0]);
printf("\n 2) Producto b Costo unitario= %i",store[3][1]);
printf("\n 3) Producto c Costo unitario= %i",store[3][2]);
printf("\n 4) Producto d Costo unitario= %i",store[3][3]);
printf("\n 5) Producto e Costo unitario= %i",store[3][4]);
}

int mostrarcarrito(){
	if(store[1][0]!=0){
	printf("Producto a\n Cantidad= %i",store[1][0]);
	printf("\tPrecio= %i",store[3][0]);
}
	if(store[1][1]!=0){
        printf("\nProducto b\n Cantidad= %i",store[1][1]);
	printf("\tPrecio= %i",store[3][1]);
}
	if(store[1][2]!=0){
	printf("\nProducto c\n Cantidad= %i",store[1][2]);
	printf("\tPrecio= %i",store[3][2]);
}
	if(store[1][3]!=0){
	printf("\nProducto d\n Cantidad= %i",store[1][3]);
	printf("\tPrecio= %i",store[3][3]);
}
	if(store[1][4]!=0){
	printf("\nProducto e\n Cantidad= %i",store[1][4]);
	printf("\tPrecio= %i",store[3][4]);
}
printf("\n Total= %i",(store[3][0]*store[1][0])+(store[3][1]*store[1][1])+(store[3][2]*store[1][2])+(store[3][3]*store[1][3])+(store[3][4]*store[1][4]));
}

int agregaralcarrito(){
short agregar=0;
while(1){
printf("\nIngrese el numero de producto que desee agregar o presione 0 para salir.\n");
int res = scanf("%i",&agregar);
fflush(stdin);
getchar();
if(res==1){

switch(agregar){
	case 1:
		printf("¿Cuántas unidades del producto num. %d",agregar);
		printf(" desea agregar?\n");
		scanf("%i",&store[1][agregar-1]);
		if(store[1][agregar-1]>store[2][agregar-1]){
		printf("Actualmente solo contamos con %i",store[2][agregar-1]);
		printf(" unidades.\n Favor de elegir una cantidad menor.\n");
		}
		break;
	case 2:
		printf("¿Cuántas unidades del producto num. %d",agregar);
                printf(" desea agregar?\n");
		scanf("%i",&store[1][agregar-1]);
                if(store[1][agregar-1]>store[2][agregar-1]){
                printf("Actualmente solo contamos con %i",store[2][agregar-1]);
                printf(" unidades.\n Favor de elegir una cantidad menor.\n");
                }
		break;
	case 3:
		printf("¿Cuántas unidades del producto num. %d",agregar);
                printf(" desea agregar?\n");
		scanf("%i",&store[1][agregar-1]);
                if(store[1][agregar-1]>store[2][agregar-1]){
                printf("Actualmente solo contamos con %i",store[2][agregar-1]);
                printf(" unidades.\n Favor de elegir una cantidad menor.\n");
		}
		break;
	case 4:
		printf("¿Cuántas unidades del producto num. %d",agregar);
                printf(" desea agregar?\n");
		scanf("%i",&store[1][agregar-1]);
                if(store[1][agregar-1]>store[2][agregar-1]){
                printf("Actualmente solo contamos con %i",store[2][agregar-1]);
                printf(" unidades.\n Favor de elegir una cantidad menor.\n");
		}	
		break;
	case 5:
		printf("¿Cuántas unidades del producto num. %d",agregar);
                printf(" desea agregar?\n");
		scanf("%i",&store[1][agregar-1]);
                if(store[1][agregar-1]>store[2][agregar-1]){
                printf("Actualmente solo contamos con %i",store[2][agregar-1]);
                printf(" unidades.\n Favor de elegir una cantidad menor.\n");
                }
		break;
	case 0:
		return 0;
	default:
		printf("Producto inexistente.\n");
}
}
}
return 0;
}


int eliminardelcarrito(){
short eliminar=0;
while(1){
printf("\nIngrese el numero de producto que desee eliminar o presione 0 para salir\n");

int res = scanf("%d",&eliminar);
fflush(stdin);
getchar();
if(res==1){
switch(eliminar){
        case 1:
                printf("¿Cuántas unidades del producto num. %d",eliminar);
                printf(" desea eliminar?\n");
                scanf("%i",&store[0][eliminar-1]);
                if(store[0][eliminar-1]>store[1][eliminar-1]){
                printf("Únicamente cuenta con %i",store[1][eliminar-1]);
                printf(" unidades en su carrito.\n Favor de elegir una cantidad menor.\n");
                }
	        break;
        case 2:
        	printf("¿Cuántas unidades del producto num. %d",eliminar);
                printf(" desea eliminar?\n");
                scanf("%i",&store[0][eliminar-1]);
                if(store[0][eliminar-1]>store[1][eliminar-1]){
                printf("Únicamente cuenta con %i",store[1][eliminar-1]);
                printf(" unidades en su carrito.\n Favor de elegir una cantidad menor.\n");
                }       
		break;
        case 3:
                printf("¿Cuántas unidades del producto num. %d",eliminar);
                printf(" desea eliminar?\n");
                scanf("%i",&store[0][eliminar-1]);
                if(store[0][eliminar-1]>store[1][eliminar-1]){
                printf("Únicamente cuenta con %i",store[1][eliminar-1]);
                printf(" unidades en su carrito.\n Favor de elegir una cantidad menor.\n");
                }  
                break;
        case 4:               
               printf("¿Cuántas unidades del producto num.  %d",eliminar);
                printf(" desea eliminar?\n");
                scanf("%i",&store[0][eliminar-1]);
                if(store[0][eliminar-1]>store[1][eliminar-1]){
                printf("Únicamente cuenta con %i",store[1][eliminar-1]);
                printf(" unidades en su carrito.\n Favor de elegir una cantidad menor.\n");
                }  
		 break;
        case 5:
               	printf("¿Cuántas unidades del producto num. %d",eliminar);
                printf(" desea eliminar?\n");
                scanf("%i",&store[0][eliminar-1]);
                if(store[0][eliminar-1]>store[1][eliminar-1]){
                printf("Únicamente cuenta con %i",store[1][eliminar-1]);
                printf(" unidades en su carrito.\n Favor de elegir una cantidad menor.\n");
                }  
                break;
        case 0:
                return 0;
        default:
                printf("Producto inexistente.\n");
}
}
}
return 0;
}


