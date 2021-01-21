#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
	printf("Enter the your sentence.\n");
	char sentence[50];
	gets(sentence);
	int a;
	a=strlen(sentence);
	printf("Total characters entered: %d\n",a);
	
	int dif='a'-'A';//Ascii'de a=97 ve A=65. Yani int dif=32;
	int i=0;
	while (sentence[i] != '\0')
{
    if (sentence[i] >= 'A' && sentence[i] <= 'Z')
{
    sentence[i] += dif;
}
	i++;
}
//Büyük harfleri küçük harfe çevirdik.
//Küçültülmüþ halini ekrana yazdýrma.
	printf("No have upper case;\n");
	int u=0;
	for(u=0;u<a;u++)
{
	printf("%c",sentence[u]);
}
printf("\n");
//char alphabet[];{a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
//char alphabet[];{97,98,99,100,101,102,103,...,122};
int p=0;
int sum=0;
while (sentence[p] != '\0')
{
    if (sentence[p] >= 'a' && sentence[p] <= 'z')
{
    sum++;
}
p++;
}//küçük harf sayýsýný bulduk.	
// küçük harf sayýsýný ekrana bastýrýr.
printf("Total lowercase number: %d\n",sum);

int c=0;
char letter;	
int m=0;
int x=0,y=0,z=0;
int alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
for(x=0;x<25;x++){
for(m=0;m<a;m++){
if(sentence[m]==alphabet[(x)])
y++;
if(sentence[m]==alphabet[x+1])
z++;}
if(c<=y||c<=z){
if(y>=z){
c=y;
letter = alphabet[x];}
else
{
c=z;
letter = alphabet[x+1];}
}
y=0;
z=0;
}
letter -= dif;

int j,k,tot;
j=0;
k=a-1;
tot=0;
for(j=0;j<a;j++)
{
for(k=a-1;k>j;k--)
{
if(sentence[j] >= 'a' && sentence[j] <= 'z' && sentence[k] >= 'a' && sentence[k] <= 'z')
{	
if(sentence[j]==sentence[k])
{
	tot++;
	sentence[k]='\n';//1.3. ve 5. ayný olduðunda (1.-3.) , (1.-5.) , (3.-5.) 3 tane çýkartma yapýyor bunu engellemek için (1.-3.) bulunduðunda 3.harf cümleden siliniyor. 
	}}}}
sum=sum-tot;
printf("Total different number of different letters: %d\n",sum);
if(sum==26)
{
	printf("This sentence is a fully sentence.\n");
}
else
	printf("This sentence is not a fully sentence.\n");
	
printf("The frequency of the letter that most occurred in the sentence:%d\nAnd the letter is:%c\n",c,letter);
return 0;}
