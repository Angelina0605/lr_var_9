#define _CRT_SECURE_NO_WARNINGS
#include "lab.h"

int lr1(){

 float L; // расстояние между пунктами А и В
 float V1; // скорость первого пешехода
 float V2; // искомая скорость второго пешехода
 float t; // время через которое пешеходы встретились
 
 printf("L =");
 scanf("%f", &L);
 
 printf("V1 =");
 scanf("%f", &V1);
 
 printf("t =");
 scanf("%f", &t);
 
 V2=(L/t)-V1;
 printf("V2 = %f/n", V2);
 getchar();
return 0;
}


void info() 
{
 float L; // расстояние между пунктами А и В
 float V1; // скорость первого пешехода
 float V2; // искомая скорость второго пешехода
 int t; // время через которое пешеходы встретились
 
 printf("L =");
 scanf("%f", &L);
 
 printf("V1 =");
 scanf("%f", &V1);
 
 printf("t =");
 scanf("%d", &t);
 
 V2=(L/t)-V1;
 printf("V2 = %f/n", V2); 
}
int lr1d(){

 info();
getchar();
 return 0;

}

int lr2(){ 
float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель очередного элемента ряда
float x; // входной параметр ряда
int n; // число элементов ряда
int i; // номер очередного элемента ряда
int sign; // знак очередного элемента ряда
printf("n=");
scanf("%d", &n);
printf("x=");
scanf("%f", &x);
s = 0;
sign = 1;
i = 0;
c = x;
b = 1;
while( i < n )
{ 
a = c / b;
s = s + a*sign;
sign = -sign;
c = c * x;
b = b + 1;
i = i + 1;
} 
printf("s = %f\n", s);
getchar();
return 0;
}

int lr2d(){ 
float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель очередного элемента ряда
float x; // входной параметр ряда
int n; // число элементов ряда
int sign; // знак очередного элемента ряда
printf("n=");
scanf("%d", &n);
printf("x=");
scanf("%f", &x);
s = 0;
sign = 1;
c = x;
b = 1;
for( int i=0; i < n; i++)
{ 
a = c / b;
s = s + a*sign;
sign = -sign;
c = c * x;
b = b + 1;
} 
printf("s = %f\n", s);
getchar();
return 0;

}

int lr3(){
int c; // текущий символ из потока
int flag; // признак слова
int WL; // длина слова
int cntW; // счётчик длины
int cnt; // счётчик слов
// обнаружен
// начальные присваивания (инициализация)
WL = 0; 
cntW = 0;
cnt = 0;
flag = NO;
printf("write world length\n");
scanf("%d", &WL);
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
// найден разделитель
if( flag == YES ){
// это первый разделитель после слова
if( cntW > WL ){
cnt++;
}
cntW = 0;
}
flag = NO;
}else{
cntW++;
flag = YES;
}
}
printf("\nnumber of words = %d\n", cnt );
getchar();
return 0;

}

int lr3d(){
int c; // текущий символ из потока
int flag; // признак слова
int WL; // длина слова
int cntW; // счётчик длины
int cnt; // счётчик слов
// обнаружен
// начальные присваивания (инициализация)
WL = 0; 
cntW = 0;
cnt = 0;
flag = NO;
printf("write world length\n");
scanf("%d", &WL);
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
// найден разделитель
if( flag == YES ){
// это первый разделитель после слова
if( cntW > WL ){
cnt++;
}
cntW = 0;
}
flag = NO;
}else{
cntW++;
flag = YES;
}
}
printf("\nnumber of words = %d\n", cnt );
getchar();
return 0;
}

int lr4(){
int c;
char str[100];
int f = 0;
while( (c = getchar()) != EOF && f<100){
 if (c == '\n' && f != 0){
 break;
 }
 str[f] = c;
 f++;
}
int j = 0;
char word[100];
for (int i = 0; i <= f+1; i++) {
 if (str[i] != ' ' && i!=f ) {
 word[j++] = str[i];
 } else {
 if(i==f) word[j++] = str[i];
 word[j++]='\0';
 j = 0;
 if (word[j]!='\0') { //
 printf("%s ", word);
 }
 }
}
getchar();
return 0;

} 

int lr4d(){
int cntd=0;
int flag = NO;
int c;
char str[100];
int i = 0;
int f = 0;
while( (c = getchar()) != EOF && f<100){
 if (c == '\n' && f != 0){
 break;
 }
 str[f] = c;
 f++;
}
int j = 0;
char word[100];
for (int i = 0; i <= f+1; i++) {
 /*if (str[i] == ' '  str[i] == ';'  str[i] == '.' || str[i] == ','){
 cntd++;
 word[j++]='\0';
 }
 */
 if (str[i] != ' ' && str[i] != ';' && str[i] != '.' && str[i] != ',' && i!=f) {
 if (cntd<=1&&flag==YES){
 printf("%s ", word);
 }
 cntd = 0;
 flag = NO;
 word[j++] = str[i];
 } else {
 //if(i==f) word[j++] = str[i];
 cntd++;
 word[j++]='\0';
 j = 0;
 flag = YES;
 }
}
getchar();
return 0;

}

int lr5(){
int i;
float midl = 0;
int num[10];
for ( i = 0; i < 10; i++) {
 scanf("%d", &num[i]);
 midl += (int) num[i];
}
midl /= 10;
for ( i = 0; i < 10; i++) {
 if (num[i] < midl){
 num[i] = 0;
 }
}
for( i = 0; i < 10; i++ )
 printf("%d ", num[i]);
printf("\n");
getchar();
return 0;

}

int lr5d(){
int i;
float midl = 0;
int num[10];
int prev = 0;
for ( i = 0; i < 10; i++) {
 scanf("%d", &num[i]);
 midl += (int) num[i];
}
midl /= 10;
for ( i = 0; i < 10; i++) {
 if (num[i] < midl){
 if (i!=0 && i < 8){
 if ((num[i+1] < num[i] && num[i] > prev) || (num[i] < num[i+1] && num[i] < prev)){
 prev = num[i]; 
 num[i] = 0; 
 }else{
 prev = num[i];
 }
 } 
 }
}
for( i = 0; i < 10; i++ )
 printf("%d ", num[i]);
printf("\n");
getchar();
return 0;
 
}

int lr6(){
int K = 3;
int N = 4;
 
int x[3][4]; // массив из K на N элементов
int i, j;
int del;
int sum = 0;
int sumM = 32767;
for( i = 0; i < K; i++ )
for( j = 0; j < N; j++ )
 scanf("%d", &x[i][j]);
for( i = 0; i < K; i++ ){
 for( j = 0; j < N; j++ ){
 sum+=x[i][j];
 }
 if (sumM>sum){
 sumM = sum;
 del = i;
 }
 sum = 0;
}
for( j = 0; j < N; j++ ){
 x[del][j] = 0;
}
for( i = 0; i < K; i++ ){
 for( j = 0; j < N; j++ )
 printf("%4d ", x[i][j]);
 printf("\n");
}
getchar();
return 0; 
}

int lr6d(){
int N =3;
int i;
int j;
int isSorted = 0;
int num[3][3];
int sort[3*3];
int tmp;
for (i = 0; i < N; i++) {
 for (j = 0; j < N; j++) {
 scanf("%d", &num[i][j]);
 sort[j+N*i] = num[i][j];
 }
 }
while (isSorted == 0){
 isSorted = 1;
 for (i = 1; i < N*N-1; i+=2) {
 if (sort[i] > sort[i+1]){
 tmp = sort[i+1];
 sort[i + 1] = sort[i];
 sort[i] = tmp;
 isSorted = 0;
 }
 }
for (i = 0; i < N*N-1; i+=2) {
 if (sort[i] > sort[i+1]){
 tmp = sort[i+1];
 sort[i + 1] = sort[i];
 sort[i] = tmp;
 isSorted = 0;
 }
 }
}
for (i = 0; i < N; i++) {
 for (j = 0; j < N; j++) {
 num[i][j] = sort[j+N*i];
 }
 }
for( i = 0; i < N; i++ ){
 for( j = 0; j < N; j++ )
 printf("%4d ", num[i][j]);
 printf("\n");
}
getchar();
return 0; 

}

int lr7(){
    unsigned int x;
    scanf("%d", &x);
    int p=0;
    while ((x & 1) == 0) {
        x >>= 1;
    p++;
 }
    printf("%d", p);

getchar();
return 0;
}

int lr7d(){}
