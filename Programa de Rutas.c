/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Declaramos las variables
    int ruta;
    
    printf("Hola, bienvenido a SITP S.A.S. Ingrese por favor la ruta que desea consultar: ");
    scanf("%d", &ruta);
    
    if(ruta==607)
    {
        printf("Las paradas para esta ruta H607 son: Avenida Morato (Ak 70 - Cl 106), Cafam Floresta(Ak 68 - Cl 95), Centro Comercial Metrópolis (Ak 68 - Cl 76a), Br. Montevideo (Ak 68 - Cl 20), Br. Venecia (Kr 53 - Dg 45b Sur), Universidad Distrital (Av. V/cio - Kr 49c) y Br. Arborizadora Alta (Cl 69j Sur - Kr 32)");
    }
    
    if(ruta==605)
    {
        printf("Las paradas para la ruta H605 son: Cai Polo Club (Ak 24 - Cl 86a), Estación Universidad Nacional (Av. NQS - Cl 45), Sena (Av. NQS - Av. 1 De Mayo), Br. San Vicente (Av. J. Gaitán C. - Av. Boyacá) y Br. Candelaria La Nueva (Av. V/cio - Kr 44c) y Br. Arborizadora Alta (Cl 69j Sur - Kr 32)");
    }
    
    if(ruta==609)
    {
        printf("Las paradas para la ruta H609 son: Br. Santa Bárbara Oriental (Ak 7 - Cl 124), Autopista Norte (Ac 127 - Kr 46), Avenida 1° De Mayo (Av. Boyacá - Av. 1 De Mayo), Universidad Distrital (Av. J. Gaitán C. - Dg 68b Sur) y Br. Arborizadora Alta (Cl 69j Bis Sur - Kr 43)");
        
    }
    
        if(ruta==615)
    {
        printf("Las paradas para la ruta H615 son: Br. María Paz (Av. C. De Cali - Cl 1a Sur), Corabastos (Av. A. Mejía - Cl 36 Sur), Br. El Ensueño (Av. V/cio - Cl 68 Sur), Br. Juan José Rondón (Tv 22 - Cl 69c Bis Sur) y Br. Arborizadora Alta I (Cl 69j Sur - Tv 38)");
        
    }
    
}

int rutasf()

{
    int rutaferiados;
    
    printf("Hola, bienvenido a SITP S.A.S. Ingrese por favor la ruta que desea consultar para los días feriados: ");
    scanf("%d", &rutaferiados);
    
    if(rutaferiados==607, 605)
    {
        printf("Esta ruta si trabaja los días feriados");
    }


    else
    {
        printf("Esta ruta no trabaja los días feriados");
    }

    return 0;
}
