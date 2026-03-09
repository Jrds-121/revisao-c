#include <stdio.h>

/* 
Resposta do exercício 5:

Pode se dizer que vetor é uma variável composta, 
capaz de armazenar vários valores do mesmo tipo em uma unica estrutura,
diferente das variáveis simples que só armazenam um valor por vez.

*/


int main (){
	
 // QUESTAO A:
 // Assim que se declara um vetor em c:
 int x[5];
 // Definindo o tipo, nome e tramanho no []
 
 // Em um vetor os elementos são acessados especificando o índice 
 // O índice sempre começa em 0
 
 // Forma de atribuir um valor a um elemento do vetor:
 x[0] = 1;
	
 // Forma de inicialização na declaração do vetor:
 int y [] = {1, 2, 3, 4, 5};
 // Sem o tamanho definido o compilador adiciona automaticamene
 
 // QUESTAO B:
 // Em c uma string é uma sequência/vetor de caracteres
 // É declarada da mesma forma que um vetor mas seu tipo sendo char
 
 // Podendo ser iniciada em sua declaração de 2 formas principais:
 
 char nome1[10] = {'J', 'e', 'f', 'f', 'e', 'r', 's', 'o', 'n','\0'};
 // \0 é o caractere nulo, indicando o final da string
 // um char[] obrigatoriamente termina com \0 em c
 
 char nome2[] = "Julia"; 
 // O compilador adiciona \0 e o tamanho automaticamente 
 
}

