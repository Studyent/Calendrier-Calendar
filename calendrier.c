#include <stdio.h>








int main(int argc, char**argv[]){
printf("Bienvenue dans le calendrier\n");
printf("Merci d'indiquer l'annee a laquelle vous etes:\n");
int annee = 0;
scanf("%d",&annee); 

char *Semaine[] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
short jto = 4;
size_t size = sizeof(Semaine)/sizeof(Semaine[0]);
char *mois[] = {"Janvier","Fev","Mars","Avril","Mai","Juin","Juilet","Aout","Septembre","Octobre","Novembre","Decembre"};
int nbj[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int jour;
int jsem = 0;
if(((annee%4 == 0) && (annee%100 != 0)) || ((annee%400 == 0))){

nbj[1] = 29;

for(int i = 0;i< 12;i++){

jour = nbj[i];

printf("\n\n---------%s---------\n",mois[i]);
printf("\n Lun Mar Mer Jeu Vend Sam Dim \n");


for(int j = 1; j <= jour; j++){
    printf("%4d",j);
   
    if(++jsem > 6){
        printf("\n");
        jsem = 0;
    }
}
}
}else{

for(int i = 0;i< 12;i++){

jour = nbj[i];

printf("\n\n---------%s---------\n",mois[i]);
printf("\n Lun Mar Mer Jeu Vend Sam Dim \n");


for(int j = 1; j <= jour; j++){
    printf("%4d",j);
   
    if(++jsem > 6){
        printf("\n");
        jsem = 0;
    }
}
}
}














/*
for(int i=0; i<7;i++){

 printf("%s\n",Semaine[i]);


}*/




/* Fonction pour retirer un élément de la liste, innéficace si l'on a besoin de supprimer plusieurs élements, utilisation de linked list requise*/

/*
int pos = 2;
printf("%d\n", size);
for(int i = pos; i < size;i++){

  Semaine[i] = Semaine[i + 1];

}
size--; // On réduit la taille de la liste
 
for(int i=0; i< size;i++){

 printf("%s\n",Semaine[i]);


}

printf("%d",size);
*/

















    return 0;
}