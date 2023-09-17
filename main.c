#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    bool lluvia=true;
    bool sensorActivado=true;
    bool encendidoManual=true;
    int velocidad=0;
    char opcionDeSensor;
    char opcionManual;
    char estaLloviendo;

    printf ("Bienvenidos al sistema. ");
    //Averiguamos si el sensor esta en automatico
    scanf(" %c",&opcionDeSensor);
    if (opcionDeSensor == 'S'  || opcionDeSensor == 's' )
    {
        sensorActivado = true;
    }
    else if (opcionDeSensor == 'N'  || opcionDeSensor == 'n' )
    {
        sensorActivado = false;
    }


    //Averiguamos velocidad

    scanf("%d",&velocidad);


    //Vemos si activamos el modo manual

    scanf(" %c",&opcionManual);
    if (opcionManual == 'S'  || opcionManual == 's')
    {
        encendidoManual=true;
    }
    else if (opcionManual == 'N'  || opcionManual == 'n')
    {
        encendidoManual=false;
    }

    //Por ultimo vemos si esta lloviendo

    scanf(" %c",&estaLloviendo);

    if (estaLloviendo == 'S'  || estaLloviendo == 's' )
    {
        lluvia=true;
    }
    else if (estaLloviendo == 'N'  || estaLloviendo == 'n')
    {
        lluvia=false;
    }


    //Calculo final

    if (sensorActivado==true && velocidad>0 && velocidad<4)
    {
        if (encendidoManual==false && lluvia==true)
        {
            printf("Se activo el limpiaparabrisas con velocidad %d",velocidad);
            exit(0);
        }
        else if (encendidoManual==false && lluvia==false)
        {
            printf("No se activo el limpiaparabrisas");
            exit(0);
        }
    }


    if (sensorActivado==false && velocidad>0 && velocidad<4)
    {
        if (encendidoManual==false && lluvia==true)
        {
            printf("No se activo el limpiaparabrisas");
        }
        else if (encendidoManual==true && lluvia==true)
        {
            printf("Se activo el limpiaparabrisas con velocidad %d",velocidad);
        }
        else if (encendidoManual==true && lluvia==false)
        {
            printf("Se activo el limpiaparabrisas con velocidad %d",velocidad);
        }
    }
    else
    {
        printf("Error. Alguna opcion de configuracion es incorrecta");
    }


    return 0;
}
