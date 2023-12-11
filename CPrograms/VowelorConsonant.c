#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
char ch ;
bool  vowel = false;
printf("Enter the Alphabet:");
scanf("%c",&ch);
if (ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
vowel = true;
}
if(vowel == true){
printf("its an vowel");
}
else{
printf("its an consonant");
}
return 0;
}
