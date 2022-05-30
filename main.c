#include <stdio.h>

int main(void) {

// VARIABLES
  
// int age;
// int currentYear;
// int birthYear;
// currentYear = 2021;
// birthYear = 1998;
//   age = currentYear - birthYear;

  
//   printf("Juanmi is %d years old", age);


// STRING TERMINATOR
  
// char name[20] = "Juan Martinez";
//   printf("My name is %s \n", name);

//   name[2] = 'i';
// printf("My name is %s \n", name);

//   char food[] = "tuna";
//   printf("the best food is %s \n", food);

// strcpy(food, "bacon");
// printf("the best food is %s \n", food);

  //loops
/*for(int i = 0 ; i < 3 ; i++) {

printf("%d", i);
  
}*/
// Arrays y loop(for)
//int numeros[5] = {10, 15, 20, 25, 30};

 /* for(int i = 0 ; i < 5; i = i + 1){

    printf("%d\n", numeros[i]);
  } */
  
 /* int i = 0;
  while(i < 5){
printf("%d\n", numeros[i]);
    i = i + 1;
    
  }
*/
  // While loops
  
/*  int numero;
printf("Digite un numero mmg\n");
  scanf("%d", &numero);
int total = 0; 
  
while(numero != -1){

  total = numero + total;
  printf("Total: %d\n", total);
scanf("%d", &numero);
  }
  */

// TAREA #1: Write a C program to print alphabets letters from A to M in reverse . - using loop and array 


 /* printf("Saludos, buenas tardes mmg javier por ponerme esta tarea\n"); 
  char letras[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M'};

 for(char i = 12; i >= 0; i=i-1){
 printf("%c\n", letras[i]);
  }*/


// TAREA #2: Write a C program to find sum of all natural numbers between 1 to n (including n), sum of all even numbers between 1 to n , sum of all odd numbers between 1 to n. 

  int numero;
printf("Saludos, buenas tardes mmg javier por ponerme esta tarea\n");
printf("Ingrese un numero: \n");
scanf("%d", &numero);
printf("El numero que ingresaste es: %d\n", numero);

//  for(int i = 0; i <= numero;i=i+1){
//  int suma = 0;
//  suma = suma + i;
//printf("%d", suma);
//}
int suma = 0;
for(int i = 0; i <= numero;i=i+1){
  
  //suma += i;
  suma = suma + i;  
}
printf("Total: %d\n", suma);

printf("\n+-----------------------------+\n");
printf("+---------PUNTO 2-------------+\n");
int numeroEven;
printf("\nIngreae un numero: ");
scanf("%d", &numeroEven);
int sumaEven = 0;

int i = 0;
do {
  printf("%d es multiplo de 2?\n", i);
  if (i % 2 == 0) {
    printf("sumaEven: %d + indice: %d\n",sumaEven, i);
    sumaEven = sumaEven + i;
    printf("sumaEven = %d\n", sumaEven);
  } else {
    printf("%d NO es multiplo de 2\n", i);
  }
  printf("El indice se va a sumar ahora (valor anterior: %d)\n", i);
  i++;
  printf("El indice despues de i++ ahora es: %d\n", i);
} while (i <= numeroEven);

  //for(int i = 0; i <= numeroEven; i=i+1) {
//  if (i%2 == 0){
//    sumaEven = sumaEven + i;  
//  }
//}
printf("Total:%d", sumaEven);


printf("\n+-----------------------------+\n");
printf("+---------PUNTO 3-------------+\n");

  int numeroOdd; 
  printf("ingrese un Numero: ");
  scanf("%d", &numeroOdd);
int sumaOdd = 0;

  for(int i = 0; i <= numeroOdd; i++){

    if(i%2 != 0){
      sumaOdd += i;
    }
  }


/* Un programa que imprima un patron de N asteriscos , tal como el ejemplo de abajo.

O si quieres hacer una diferente. Haga un programa que me pregunte 2 numeros y un operador ( + , - , * , / ) y haga el resultado de lo que yo le mande. 
Ejemplo:  2 + 4  resultado : 6
Ejemplo 2:   3 - 1 resultado : 2 
  */















  
  return 0;
}
