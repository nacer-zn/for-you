#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//un function qui charger une chaine avec n elements
char *ChargerChaine(int N){
char *ch = (char*)malloc((N  ) * sizeof(char)); 
    scanf("%s", ch);
return charchar;
}
//un function qui envers a tableau 
void InverserTab(char Tab[], char T[], int m){
for (int i = 0; i < m; i++) {
T[i] = Tab[m-i-1];
}
}
//un fonction qui charger une tableau
void ChargerTab(char *ch, char Tab[]){
for(int i=0;i<strlen(ch);i++)
Tab[i]=ch[i];
}
//un fonction qui calcule le longueur d'un char
int Longueur(char *ch){
    int longueur = 0;
    while (ch[longueur] != '\0') {
        longueur++;
    }
    return longueur;
}
//un fonction qui affiche an tableau
void AfficherTab(char Tab[], int m){
for (int i = 0; i < m; i++) {
printf("%c", Tab[i]);	   
}
}
int main(){
char *ch;
int n;
printf("veuillezsaisir la taille maximale de la chaine:\n");
scanf("%d",&n); 
ch=ChargerChaine(n);
int m=Longueur(ch);
char Tab[m], T[m];
ChargerTab(ch,Tab);
AfficherTab(ch,m);
InverserTab(Tab,T,m);
AfficherTab(T,m);
free(ch);
}
