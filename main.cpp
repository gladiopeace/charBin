#include<stdio.h>

 
void inttobin(int); //the function that will convert the integer value to binary
 
main(){
int n, count;
//array of small letters
char sletter[27] = "abcdefghijklmnopqrstuvwxyz";
//array of big letters
char bletter[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//check the int value of small letters from a to z
for(count = 0; count<26; count++){
n=sletter[count]; //get int value of a characters
printf("%c = %d = ",sletter[count],n ); //print a character and its integer value
inttobin(n);//calls function to convert integer value to binary and prints it
printf("\n");
}
printf("\nThe Big Letters\n\n");
//check the int value of BIG letters from A to Z
for(count = 0; count<26; count++){
n=bletter[count];//get int value of a characters
printf("%c = %d = ",bletter[count],n );//print a character and its integer value
inttobin(n);//calls function to convert integer value to binary and prints it
printf("\n");
}
getch(); //i don't know, it's my practice so the program won't terminate immediately after running.
return 0;
}
 
//code for int to bin
void inttobin(int n){
/*
>This function convert the integer parameter to binary and displays the results
>The binary is stored on the array bin[] defined inside this function
>This function only converts integer value form 1 to 127
*/
char bin[7]; //the array of char that will represent the binary value
int count;
//check if the integer value is divisible by 64
if((n/64)==1){
bin[0]='1'; //if TRUE, set the 64 value in binary array by seting it 1
n=n%64; //set n to n mod 64 for futher computation
}
else{bin[0]='0';}//if FALSE, set it as 0
//check if the integer value is divisible by 32
if((n/32)==1){
bin[1]='1'; //if TRUE, set the 32 value in binary array by setting it 1
n=n%32; //set n to n mod 32 for futher computation
}
else{bin[1]='0';}//if FALSE, set is as 0
//the same process will continue until...
if((n/16)==1){ //***16***
bin[2]='1';
n=n%16;
}
else{bin[2]='0';}
//until....
if((n/8)==1){ //***8***
bin[3]='1';
n=n%8;
}
else{bin[3]='0';}
//wait for it...
if((n/4)==1){ //***4***
bin[4]='1';
n=n%4;
}
else{bin[4]='0';}
//almost there...
if((n/2)==1){ //***2***
bin[5]='1';
n=n%2;
}
else{bin[5]='0';}
//Tadah!!! it reaches the last binary digit which represent the integer 1
if((n/1)==1){//***1***
bin[6]='1';
n=n%1;
}
else{bin[6]='0';}
//after the binary array is set, the function will output the produced string of binary digit
for(count=0;count<7;count++){
printf("%c ",bin[count]);
}
 
}
