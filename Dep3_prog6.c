/*Dep3_Prog6:
 Que cuente el numero de veces que ahorras y nos diga el acumulado de ahorro*/

#include <stdio.h>
 int main()
 {
    int banco; //Acumular
    int monto; //Monto a ahorrar por evento
    int numdepositos; //La cantidad de veces que fui al banco
    char respuesta; //es para saber si 

    numdepositos=0;
    banco=0;
    monto=0;
    respuesta = 's';
    //voy al banco
    printf("\n\n Monto a depositar: ");
    scanf("%d",&monto);
    banco = banco + monto; //acumulador
    numdepositos = numdepositos + 1; //Contador

    printf("Dinero que tienes en el banco %d",&banco);
    printf("Numero de depositos %d",&numdepositos);


    do
    {
        //voy al banco
        respuesta = 's';
        printf("\n\n Monto a depositar: ");
        scanf("%d",&monto);
        banco = banco + monto; //acumulador
        numdepositos = numdepositos + 1; //Contador

        printf("¿Quieres realizar otro deposito (s/n)");
        scanf("%c",&respuesta);
        if (    (respuesta == 's' || respuesta == 'S') ||
            (respuesta == 'n' || respuesta == 'N') ||
        )
    {
        printf("\n ES UNA RESPUESTA ");
    }
    else
    {
        printf("\n NO ES UNA RESPUESTA ");

    }
    } while ( respuesta != 'n' ); // condition while = mientras
    
    printf("Dinero que tienes en el banco %d",&banco);
    printf("Numero de depositos %d",&numdepositos); 

    return 0;

 }