/*
 * 
 * 23. Faça um programa que leia uma string e um caractere e escreva a primeira posição que esse caractere se encontra na string. 
 * Dica: utilize a função strchr().
 * 
 */
 
?include <stdio.h>
?include <string.h>


??? main()
{
   ???? palavra[50];
   ???? caractere;

   printf("Informe uma string: ");
   scanf("??", palavra);
   
   __fpurge(?????); //no Linux
   //fflush(?????); //no Windows

   ??????("Informe um char: ");
   scanf("??", &caractere);

   printf("O caracter informado esta presente na string? ??\n", ??????(???????, ?????????));
   
   return 0?
}
