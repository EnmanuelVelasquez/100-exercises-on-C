#include <stdio.h>

//1. Leer un número entero y determinar si es un número terminado en 4.
/*int main (){
    int numero;
    printf("Enter an integer number if you want to validate if is ended in 4: ");
    scanf("%d", &numero);
    if (numero % 10  == 4){
        printf("The number %d ends in 4", numero);
    }else{
        printf("The number %d doesn't end in 4", numero);
    }
    return 0;
}*/

//2.Leer un número entero y determinar si tiene 3 dígitos.
/*int main (){
    int number;
    printf("Enter a number if you want to know if has 3 digits: ");
    scanf("%d",&number);
    if (number > 99 || number < -99){
        printf("The number %d has at least 3 digits ", number);
    }else{
        printf("The number %d doesn't have 3 digits", number);
    }
}*/

//3.Leer un número entero y determinar si es negativo.
/*int main (){
    int number;
    printf("Enter a number if you want to know if is negative: ");
    scanf("%d",&number);
    if (number < 0){
        printf("The number %d is negative ", number);
    }else{
        printf("The number %d isn't negative", number);
    }
}*/

//4.Leer un número entero de dos dígitos y determinar a cuánto es igual la suma de sus dígitos.
/*int main (){
    int number;
    printf("Enter a number of two digits if you want to know the adittion of these two: ");
    scanf("%d",&number);
    int decena = number / 10;
    int unidad = number % 10;
    int suma = decena + unidad;
    printf("The adittion of the digits of the number is %d: ", suma);
}*/

//5.Leer un número entero de dos dígitos y determinar si ambos dígitos son pares.
/*int main (){
    int number, decena, unidad;
    printf("Enter a number of two digits if you want to know if both are even number: ");
    scanf("%d",&number);
    decena = number / 10;
    unidad = number % 10;
    if (decena % 2 == 0 && unidad %2 == 0){
        printf("The digits of the number %d are even numbers", number);
    }else{
        printf("Both digits aren't even ", number);
    }
}*/

//6.Leer un número entero de dos dígitos menor que 20 y determinar si es primo.
    
/*int main (){
    int number;
    printf("Enter a number of two digits less than 20: ");
    scanf("%d",&number);

    if (number < 20 && number > 9){
        if(number % 2 == 0|| number % 5 == 0){
            printf("The number isn't a prime number");
        }else{
            printf("The number is a prime number");
        }
    }else{
        printf("Please, enter a number less than 20 and more than 1");
    }
}*/

//VALIDAR SI CUALQUIER NÚMERO ES PRIMO

/*int verificarPrimo(int number){
    int verificar;
    verificar = 0;
    for (int divisor = number-1; divisor > 1; divisor--){
        if (number % divisor == 0){
            return 0; //FALSE
        }
    }
    return 1;
}

int main (){
    int number, resultado;
    printf("Enter a number of two digits less than 20: \n");
    scanf("%d",&number);
    resultado = verificarPrimo(number);
    if (resultado == 1){
        printf("El número es primo \n");
    }else{
        printf("El número no es primo");
    }
}*/

// 7. Leer un número entero de dos dígitos y determinar si es primo y además si es negativo.

/*int verificarPrimo(int number){
    for (int divisor = number-1; divisor > 1; divisor--){
        if (number % divisor == 0){
            return 0; //FALSE
        }
    }
    return 1;
}

int main (){
    int number, resultado;
    number = 1;
    while (number != 0){
        printf("Enter a number of two digits if you want to know if is prime and negative: ");
        scanf("%d",&number);
        resultado = verificarPrimo(number);
        if(number > 9 && number < 100){
            if (resultado == 1){
                printf("\nThe number is prime and isn't negative \n\n");
            }else{
                printf("\nThe number isn't prime and neither negative \n\n");
            }
        }else if (number < 0 ){
            printf("\nThere are no prime negative numbers \n\n");
        }else{
            printf("\nPlease enter a value of two digits \n\n");
        }
    }
}*/

// 8. Leer un número entero de dos dígitos y determinar si sus dos dígitos son primos.

/*int verificarPrimo(int number){
    for (int divisor = number-1; divisor > 1; divisor--){
        if (number % divisor == 0){
            return 0; //FALSE
        }
    }
    return 1;
}

int main(){
    int number, decena, unidad;
    number = 1;
    while (number != 0){
        printf("Enter a number of two digits if you want to know both digits are prime or enter 0 for exit: ");
        scanf("%d", &number);
        decena = number / 10;
        unidad = number % 10;
        if (number > 9 && number < 100){
            if (verificarPrimo(decena) == 1 && verificarPrimo(unidad) == 1){
                printf("\nBoth digits are prime numbers\n\n");
            }else{
                printf("\nOne or none of the digits are prime\n\n");
            }
        }else{
            printf("\nPlease enter a digit of two digits \n\n");
        }
    }
    return 0;
}*/

//9. Leer un número entero de dos dígitos y determinar si un dígito es múltiplo del otro.

/*int main(){
    int number, decena, unidad;
    number = 1;
    while (number != 0){
        printf("Enter a number of two digits if you want to know if they're mupliple of each other: ");
        scanf("%d", &number);
        decena = number / 10;
        unidad = number % 10;
        if (number > 9 && number < 100){
            if (decena % unidad == 0 ){
                printf("\n%d is multiple of %d\n\n", decena, unidad);
            }else if (unidad % decena == 0){
                printf("\n\n%d is multiple of %d\n\n", unidad, decena);
            }else{
                printf("\nNone of them is multiple of each other\n\n");
            }
        }else{
            printf("\nPlease enter a digit of two digits \n\n");
        }
    }
    return 0;
}*/

// 10. Leer un número entero de dos dígitos y determinar si los dos dígitos son iguales.
/*int main(){
    int number, decena, unidad;
    number = 1;
    while (number != 0){
        printf("Enter a number of two digits if you want to know if they've the same value: ");
        scanf("%d", &number);
        decena = number / 10;
        unidad = number % 10;
        if (number > 9 && number < 100){
            if (decena == unidad ){
                printf("\n%d is equal to %d\n\n", decena, unidad);
            }else{
                printf("\nThe digits aren't the same\n\n");
            }
        }else{
            printf("\nPlease enter a digit of two digits \n\n");
        }
    }
    return 0;
}*/

//11. Leer dos números enteros y determinar cuál es el mayor.
/*int main(){
    int number, number2;
    number = 1;
    while (number != 0){
        printf("Enter a number of two digits or enter 0 for exiting: ");
        scanf("%d", &number);
        printf("Enter another number of two digits or enter 0 for exiting: ");
        scanf("%d", &number2);
        if (number > 9 && number < 100 && number2 > 9 && number2 < 100 ){
            if (number > number2 ){
                printf("\n%d is higher than %d\n\n", number, number2);
            }else if (number == number2){
                printf("\n%d is equak to %d\n\n", number, number2);
            }else{
                printf("\n%d is higher than %d\n\n", number2, number);
            }
        }else{
            printf("\nPlease enter a digit of two digits \n\n");
        }
    }
    return 0;
}*/

// 12. Leer dos números enteros de dos dígitos y determinar si tienen dígitos comunes.
/*int main(){
    int number, number2, unidad, unidad2, decena, decena2;
    number = 1;
    while (number != 0){
        printf("Enter a number of two digits or enter 0 for exiting: ");
        scanf("%d", &number);
        printf("Enter another number of two digits or enter 0 for exiting: ");
        scanf("%d", &number2);
        decena = number / 10; // primer dígito
        unidad = number % 10; // segundo dígito
        decena2 = number2 / 10; // primer dígito
        unidad2 = number2 % 10; // segundo dígito
        if (number > 9 && number < 100 && number2 > 9 && number2 < 100 ){
            if (decena == decena2 || decena == unidad2 || unidad == decena2 || unidad == unidad2){
                printf("\nThere are common digits between the numbers \n\n");
            }else{
                printf("\nThe numbers have nothing in common\n\n");
            }
        }else{
            printf("\nPlease enter a digit of two digits \n\n");
        }
    }
    return 0;
}*/

//13. Leer dos números enteros de dos dígitos y determinar si la suma de los dos números origina un número par.
/*int main(){
    int number, number2, result;
    printf("Enter a number of two digits: \n");
    scanf("%d", &number);
    printf("Enter another number of two digits: \n");
    scanf("%d", &number2); 
    result = number + number2;
    result = result % 2;
    if (result == 0){
        printf("\nThe addition of the numbers is even ");
    }else{
        printf("\nThe addition of the numbers isn't even ");
    }
    return 0;
}*/

//14. Leer dos números enteros de dos dígitos y determinar a cuánto es igual la suma de todos los dígitos.
/*int main(){
    int number, number2, unidad, decena, unidad2, decena2, result;
    printf("Enter a number of two digits: \n");
    scanf("%d", &number);
    printf("Enter another number of two digits: \n");
    scanf("%d", &number2); 
    unidad = number % 10;
    decena = number / 10;
    unidad2 = number2 % 10;
    decena2 = number2 / 10;
    result = unidad + decena + unidad2 + decena2;
    printf("The addition of the digits is %d", result);
    return 0;
}*/

//15. Leer un número entero de tres dígitos y determinar a cuánto es igual la suma de sus dígitos.
/*int main(){
    int number, centena, decena, decenaTotal, unidad, resultado;
    printf("Enter a number of three digits: ");
    scanf("%d", &number);
    centena = number / 100;
    decena = number / 10;
    unidad = number % 10;
    decenaTotal = decena % 10;
    resultado = centena + decenaTotal + unidad;
    printf("The addition of the digits of the number is %d", resultado);
    return 0;
}*/

//16. Leer un número entero de tres dígitos y determinar si al menos dos de sus tres dígitos son iguales.
/*int main(){
    int number, centena, decena, unidad, resultado;
    printf("Enter a number of three digits: ");
    scanf("%d", &number);
    centena = number / 100;
    decena = number / 10;
    decena = decena % 10;
    unidad = number % 10;
    if (centena == decena || decena == unidad){
        printf("At least two of the digits are equal");
    }else{
        printf("None of the digits are equal");
    }
    return 0;
}*/

//17. Leer un número entero de tres dígitos y determinar en qué posición está el mayor dígito.
/*int main(){
    int number, centena, decena, unidad, resultado;
    printf("Enter a number of three digits: ");
    scanf("%d", &number);
    centena = number / 100;
    decena = number / 10;
    decena = decena % 10;
    unidad = number % 10;
    if (centena > decena && centena > unidad){
        printf("The first digit is the biggest ");
    }else if(decena > centena && decena > unidad){
        printf("The second digit is the biggest ");
    }else if(unidad > centena && unidad > decena){
        printf("The last digit is the biggest ");
    }else{
        printf("Please enter digits of different value ");
    }
    return 0;
}*/

//18. Leer un número entero de tres dígitos y determinar si algún dígito es múltiplo de los otros.
/*int main(){
    int number, centena, decena, unidad;
    printf("Enter a number of three digits: ");
    scanf("%d", &number);
    centena = number / 100;
    decena = number / 10;
    decena = decena % 10;
    unidad = number % 10;
    if (centena % decena == 0 || centena % unidad == 0 || decena % centena == 0 || decena % unidad == 0 || unidad % centena == 0 || unidad % decena == 0){
        printf("At least one of the digits is multiple of the others");
    }else{
        printf("None of the digits are multiple of the others");
    }
    return 0;
}*/

//19. Leer tres números enteros y determinar cuál es el mayor. Usar solamente dos variables.
/*int main(){
    int number, number2, number3;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a number: ");
    scanf("%d", &number2);
    printf("Enter a number: ");
    scanf("%d", &number3);
    if (number > number2 && number > number3){
        printf("The first number is the biggest");
    }else if(number2 > number && number2 > number3){
        printf("The second number is the biggest");
    }else{
        printf("The third number is the biggest");
    }
    return 0;
}*/

//20. Leer tres números enteros y mostrarlos ascendentemente.
/*int main(){
    int number, number2, number3;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a number: ");
    scanf("%d", &number2);
    printf("Enter a number: ");
    scanf("%d", &number3);
    if(number < number2 && number2 < number3){
        printf("%d\n", number);
        printf("%d\n", number2);
        printf("%d\n", number3);
    }else if(number < number2 && number3 < number2){
        printf("%d\n", number);
        printf("%d\n", number3);
        printf("%d\n", number2);
    }else if(number2 < number && number < number3){
        printf("%d\n", number2);
        printf("%d\n", number);
        printf("%d\n", number3);
    }else if(number2 < number && number3 < number){
        printf("%d\n", number2);
        printf("%d\n", number3);
        printf("%d\n", number);
    }else if(number2 < number && number3 < number){
        printf("%d\n", number2);
        printf("%d\n", number3);
        printf("%d\n", number);
    }
    return 0;
}*/

//21. Leer tres números enteros de dos dígitos cada uno y determinar en cuál de ellos se encuentra el mayor dígito.
/*int main(){
    int number1, number2, number3, unidad1, unidad2, unidad3, decena1, decena2, decena3;
    printf("Enter a number: ");
    scanf("%d", &number1);
    printf("Enter another number: ");
    scanf("%d", &number2);
    printf("Enter the last number: ");
    scanf("%d", &number3);
    unidad1 = number1 % 10;
    unidad2 = number2 % 10;
    unidad3 = number3 % 10;
    decena1 = number1 / 10;
    decena2 = number2 / 10;
    decena3 = number3 / 10;
    if (unidad1 && decena1 > unidad2 && decena2){
        if (unidad1 && decena1 > unidad3 && decena3){
            printf("El digito mayor se encuentra en el primer número ingresado");
        }
    }else if(unidad1 && decena1 < unidad2 && decena2){
        if (unidad2 && decena2 > unidad3 && decena3){
            printf("El digito mayor se encuentra en el segundo número ingresado");
        }
    }else{
        printf("El digito mayor se encuentra en el tercer número ingresado");
    }
    return 0;
}*/

//Ejercicio tipo parcial:

/*void mostrarAsteriscos(int cantidad){
    for(int contador = 1; contador <= cantidad; contador++){
        for (int contador2 = 1; contador2 <= contador ; contador2++){
            printf("%d",contador2);
        }
        printf("\n");
    }
}

int main(){
    mostrarAsteriscos(5);
    return 0;
}*/

/*void funcion2(int cantidad){
    for(int contador2 = 0; contador2 < cantidad ; contador2++){
        for (int contador = 0; contador <= contador2 ; contador++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    funcion2(4);
    return 0;
}*/

//Ejercicio tipo parcial #2.
/*void promedioDigitosLeidos(){
    int numero, divisor, aux, resultado;
    numero = 1;
    aux = 0;
    for (divisor = 0; numero != 0; divisor++){
        scanf("%d", &numero);
        aux = aux + numero;
    }
    divisor -= 1;   
    resultado = aux / divisor;
    printf("El resultado es: %d", resultado);
}

int main(){
    promedioDigitosLeidos();
    return 0;
}*/



// NIVEL2
// 1. Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.
/*void showNumber(){
    int number;
    scanf("%d", &number);
    for (int counter = 1; counter <= number; counter++){
        printf("%d\n", counter);
    }
}
int main(){
    showNumbers();
    return 0;
}*/

//2. Leer un número entero y mostrar todos los pares comprendidos entre 1 y el número leído.
/*void showEven(int number){
    scanf("%d", &number);
    for (int counter = 1; counter <= number; counter++){
        if (counter %2 == 0){
            printf("%d\n", counter);
        }
    }
}

int main (){
    showEven(20);
    return 0;
}*/

//3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.
/*void showDividers(){
    int number;
    scanf("%d", &number);
    printf("Dividers: \n");
    for (int counter = 1; counter <= number; counter++){
        if (number % counter == 0){
            printf("%d\n", counter);
        }
    }
}

int main(){
    showDividers();
    return 0;
}*/

//4. Leer dos números y mostrar todos los enteros comprendidos entre ellos.
/*void showNumbers2(){
    int number, number2;
    scanf("%d", &number);
    scanf("%d", &number2);
    if (number < number2){
        for (int counter = number; counter <= number2; counter++){
            printf("%d\n", counter);
        }
    }else{
        for (int counter = number2; counter <= number; counter++){
            printf("%d\n", counter);
        }
    }
}

int main(){
    showNumbers2();
    return 0;
}*/

//5. Leer dos números y mostrar todos los números terminados en 4 comprendidos entre ellos.
/*void showNumbersFinishedIn4(){
    int number, number2;
    scanf("%d", &number);
    scanf("%d", &number2);
    if (number < number2){
        for (int counter = number; counter <= number2; counter++){
            if (counter %10 == 4){
                printf("%d\n", counter);
            }
        }
    }else{
        for (int counter = number2; counter <= number; counter++){
            if (counter %10 == 4){
                printf("%d\n", counter);
            }
        }
    }
}

int main(){
    showNumbersFinishedIn4();
    return 0;
}*/

//6. Leer un número entero de tres dígitos y mostrar todos los enteros comprendidos entre 1 y cada uno de los dígitos.
/*void showNumbersOf3Digits(){
    int number;
    scanf("%d", &number);
    if(number > 99 && number < 1000){
        for (int counter = 1; counter <= number; counter++){
                printf("%d\n", counter);
        }
    }else{
        printf("\nEnter a number of three digits");
    }
}

int main (){
    showNumbersOf3Digits();
    return 0;
}*/

//7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100.
/*void showNumbersOf100(int number){
    for (int counter = 1; counter <= number; counter++){
        printf("%d\n", counter);
    }
}
int main(){
    showNumbersOf100(100);
    return 0;
}*/

//8. Mostrar en pantalla todos los pares comprendidos entre 20 y 200.
/*void showNumbers20_200(){
    for (int counter = 20; counter <= 200; counter++){
        if (counter %2 == 0){
            printf("%d\n", counter);
        }
    }
}
int main(){
    showNumbers20_200();
    return 0;
}*/

//9. Mostrar en pantalla todos los números terminados en 6 comprendidos entre 25 y 205.
/*void mostrarTerminados6(){
    for (int mostrar = 25; mostrar <= 205; mostrar++){
        int verificar = mostrar % 10;
        if (verificar == 6){
            printf("%d\n", mostrar);
        }
    }
}

int main(){
    mostrarTerminados6();
    return 0;
}*/

//10. Leer un número entero y determinar a cuánto es igual la suma de todos los enteros comprendidos entre 1 y el número leído.}
/*void AdditionOfEnteredNumbers(){
    int number, additioner;
    additioner = 0;
    scanf("%d", &number);
    for (int counter = 1; counter <= number; counter++){
        additioner = additioner + counter;
    }
    printf("%d\n", additioner);
}
int main(){
    AdditionOfEnteredNumbers();
    return 0;
}*/

//11. Leer un número entero de dos dígitos y mostrar en pantalla todos los enteros comprendidos entre un dígito y otro.
/*void showNumbersBtwDigits(){
    int number, unidad, decena;
    scanf("%d", &number);
    unidad = number % 10;
    decena = number / 10;
    if (number < 100 && number > 9){
        if (unidad < decena){
            for (int counter = decena; counter >= unidad; counter--){
                printf("%d\n", counter);
            }
        }else{
            for (int counter = decena; counter <= unidad; counter++){
                printf("%d\n", counter);
            }
        }
    }else{
        printf("\nEnter a value of two digits");
    }
}
int main(){
    showNumbersBtwDigits();
    return 0;
}*/

//12. Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.
/*int main(){
    int number, centena, decena, unidad;
    printf("Enter a number of three digits: ");
    scanf("%d", &number);
    centena = number / 100;
    decena = number / 10;
    decena = decena % 10;
    unidad = number % 10;
    if (unidad == 1 || decena == 1 || centena == 1){        
        printf("There's at least one digit equal to 1");
    }else{
        printf("None of the digits is equal to 1");
    }
    return 0;
}*/

//13. Leer un entero y mostrar todos los múltiplos de 5 comprendidos entre 1 y el número leído.
/*void showMultipleOf5(){
    int number;
    scanf("%d", &number);
    for (int iterator = 1; iterator <= number; iterator++){
        if (iterator % 5 == 0){
            printf("%d\n", iterator);
        }
    }
}
int main(){
    showMultipleOf5();
    return 0;
}*/

//14. Mostrar en pantalla los primeros 20 múltiplos de 3.

/*void showMultiplesOf3(){
    int result;
    for (int iterator = 1; iterator <= 20; iterator++){
        result = 3 * iterator;
        printf("%d. %d\n", iterator, result);
    }
}
int main(){
    showMultiplesOf3();
    return 0;
}*/

//15. Escribir en pantalla el resultado de sumar los primeros 20 múltiplos de 3.
/*void showMultiplesOf3(){
    int result, additioner;
    additioner = 0;
    for (int iterator = 1; iterator <= 20; iterator++){
        result = 3 * iterator;
        additioner += result;
    }
    printf("%d\n", additioner);
}
int main(){
    showMultiplesOf3();
    return 0;
}*/

//16. Mostrar en pantalla el promedio entero de los n primeros múltiplos de 3 para un número n leído.
/*void showMultiplesOf3(){
    int number, result, additioner, divider;
    scanf("%d", &number);
    scanf("%d", &divider);
    additioner = 0;
    for (int iterator = 1; iterator <= number; iterator++){
        result = 3 * iterator;
        additioner += result;
    }
    additioner = additioner / divider;
    printf("%d\n", additioner);
}
int main(){
    showMultiplesOf3();
    return 0;
}*/

//17. Promediar los x primeros múltiplos de 2 y determinar si ese promedio es mayor que los y primeros múltiplos de 5 para valores de x y y leídos.
/*void promedioNumeros(){
    int x, y, sumador, iterador, numero, promedio, iterador2, numero2, sumador2, promedio2;
    iterador = 0;
    iterador2 = 0;
    numero = 0;
    numero2 = 0;
    sumador = 0;
    sumador2 = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    while(iterador <= x){
        if (numero %2 == 0){
            sumador = sumador + numero;
            iterador++;
        }
        numero ++;
    }
    promedio = sumador / x;
    printf("promedio: %d\n\n", promedio);
    while(iterador2 <= y){
        if (numero2 %5 == 0){
            sumador2 = sumador2 + numero2;
            iterador2++;
        }
        numero2 ++;
    }
    promedio2 = sumador2 / y;
    printf("promedio2: %d\n\n", promedio2);
    if (promedio < promedio2){
        printf("El promedio de los %d multiplos de 2 es menor que los %d multiplos de 5", x, y);
    }else{
        printf("El promedio de los %d multiplos de 2 es mayor que los %d multiplos de 5", x, y);
    }
}
int main(){
    promedioNumeros();
    return 0;
}*/

//18. Leer dos números entero y mostrar todos los múltiplos de 5 comprendidos entre el menor y el mayor.
/*void mostrarMutilpos5EnRango(){
  int number, number2;
  scanf("%d", &number);
  scanf("%d", &number2);
  if (number < number2){
    for (int iterator = number; iterator <= number2; iterator++){
      if (iterator%5==0){
        printf("%d\n", iterator);
      }
    }
  }else{
    for (int iterator = number2; iterator <= number; iterator++){
      if (iterator%5==0){
        printf("%d\n", iterator);
      }
    }
  }
}
int main(){
  mostrarMutilpos5EnRango();
  return 0;
}*/

//19. Leer un número entero y determinar si es primo.
/*int determinarSiEsPrimo(){
  int number;
  scanf("%d", &number);
  for (int iterator = number-1; iterator > 1; iterator--){
    if(number % iterator == 0){
      return 0;
    }
  }
  return 1;
}
int main(){
    int resultado;
    resultado = determinarSiEsPrimo();
  if (resultado == 0){
    printf("The number isn't prime");
  }else if(resultado == 1){
    printf("The number is prime");
    }
  return 0;
}*/

//20. Leer un número entero y determinar cuántos dígitos tiene.
/*void DetermineDigitsOfNumber(){
    int numero, digitos, resultado, iterador;
    scanf("%d", &numero);
    iterador = 10;
    resultado = 0;
    digitos = numero;
    while (digitos != 0){
        if (digitos != 0){
            digitos = numero / iterador;
            resultado ++;
            iterador = iterador * 10;
        }
    }
    printf("El valor ingresado tiene %d digito(s)", resultado);
}
int main(){
    DetermineDigitsOfNumber();
    return 0;
}*/

//21. Leer un número entero y determinar a cuánto es igual al suma de sus dígitos.
/*int additionerOfDigits(int number){
    int additioner = 0;
    while (number > 0){
        additioner += number % 10;
        number = number / 10;
    }
    return additioner;
}
int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("The addition of the digits is: %d", additionerOfDigits(number));
}*/

//22. Leer un número entero y determinar cuántas veces tiene el dígito 1.
/*int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    int times, result;
    times = 0;
    while (number > 0){
        result = number % 10;
        if (result == 1){
            times ++;
        }
        number = number / 10;
    }
    printf("The amount of digits 1 in the number is: %d", times);
}*/

//23. Leer un número entero y determinar si la suma de sus dígitos es también un número primo.
/*int additionerOfDigits(int number){
    int additioner = 0;
    while (number > 0){
        additioner += number % 10;
        number = number / 10;
    }
    return additioner;
}
void determineIfIsPrime(int number){
    for (int iterator = number-1; iterator > 1; iterator--){
        if(number % iterator == 0){
        printf("The number %d ins't prime: ", number);
        return;
        }
    }
    printf("The number %d is prime: ", number);  
}
int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    determineIfIsPrime(additionerOfDigits(number));
}*/

// 24. Leer un número entero y determinar a cuánto es igual al suma de sus dígitos pares.
/*int additionerOfDigits(int number){
    int additioner = 0;
    int auxiliar;
    while (number > 0){
        auxiliar = number % 10;
        if (auxiliar % 2 == 0){
            additioner += auxiliar;
        }
        number = number / 10;
    }
    return additioner;
}
int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("The addition of the even digits is: %d", additionerOfDigits(number));
}*/

// 25. Leer un número entero y determinar a cuánto es igual el promedio entero de sus dígitos.
/*int averageDigits(int number){
    int additioner = 0;
    int auxiliar, contador;
    for  ( contador = 0; number > 0; contador++){
        auxiliar = number % 10;
        additioner += auxiliar;
        number = number / 10;
    }
    return additioner/contador;
}
int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("The average of the digits without decimals is: %d", averageDigits(number));
}*/

// 26. Leer un número entero y determinar cuál es el mayor de sus dígitos.
/*int determineBiggestDigit(int number){
    int auxiliar, biggest;
    while (number > 0){
        auxiliar = number % 10;
        biggest = number / 10;
        if (biggest < auxiliar){
            biggest = auxiliar;
        }
        number = number / 10;
    }
    return biggest;
}
int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    printf("The biggest digit is: %d", determineBiggestDigit(number));
}*/

//27. Leer 2 números enteros y determinar cuál de los dos tiene mayor cantidad de dígitos.
/*void determineQuantityOfDigits(){
    int result1, result2, number1, number2;
    result1 = 0;
    result2 = 0;
    scanf("%d", &number1);
    scanf("%d", &number2);
    for (int contador = 0; number1 > 0; contador*=10){
        result1 ++;
        number1 = number1 / 10;
    }
    for (int contador = 0; number2 > 0; contador*=10){
        result2 ++;
        number2 = number2 / 10;
    }
    if (result1 > result2){
        printf("The first number has more digits");
    }else{
        printf("The second number has more digits");
    }
}
int main(){
    determineQuantityOfDigits();
}*/

//28. Leer 2 números enteros y determinar cual de los dos tiene mayor cantidad de dígitos primos.
/*int determineIfIsPrime(int number){
    for (int iterator = number-1; iterator > 1; iterator--){
        if(number % iterator == 0){
        return 1;
        }
    }
    return 0;
}
void determineQuantityOfPrimeDigits(){
    int result1, result2, number1, number2;
    result1 = 0;
    result2 = 0;
    scanf("%d", &number1);
    scanf("%d", &number2);
    for (int contador = 0; number1 > 0; contador*=10){
        if (determineIfIsPrime(number1 % 10) == 0){
            result1 ++;
        }
        number1 = number1 / 10;
    }
    for (int contador = 0; number2 > 0; contador*=10){
        if (determineIfIsPrime(number2 % 10) == 0){
            result2 ++;
        }
        number2 = number2 / 10;
    }
    if (result1 > result2){
        printf("The first number has more prime digits");
    }else{
        printf("The second number has more prime digits");
    }
}
int main(){
    determineQuantityOfDigits();
}*/

//29. Leer un número entero y determinar a cuánto es igual el primero de sus dígitos.
/*void determineFirstDigit(){
    int number, auxiliar;
    auxiliar = 1;
    scanf("%d", &number);
    while (number > 0){
        auxiliar = number;
        number = number / 10;
    }
    printf("\nThe first digit is: %d", auxiliar);
}
int main(){
    determineFirstDigit();
}*/

//30. Leer un número entero y mostrar todos sus componentes numéricos o sea aquellos para quienes el sea un múltiplo.
void multiplesOfNumber(){
    int number, auxiliar;
    scanf("%d", &number);
    auxiliar = number;
    while (auxiliar > 0){
        if(number % auxiliar == 0){
            printf("\n%d ", auxiliar);
        }
    auxiliar --;
    }
}
int main(){
    multiplesOfNumber();
}
//FIBONACCI
/*int main (){
    int numeroInicial, numeroSiguiente, numeroSumado;
        numeroInicial = 0;
        numeroSiguiente = 1;
    for (int contador = 0; contador <= 15; contador++){
        printf("%d ", numeroInicial);
        numeroSumado = numeroInicial + numeroSiguiente;
        numeroInicial = numeroSiguiente;
        numeroSiguiente = numeroSumado;
    }
}*/