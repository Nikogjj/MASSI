#include <stdlib.h>
#include <string.h>
#include <stdio.h>


struct jeu {
    char question [255];
    int argent;
};

int main(){
    
    char buf[10];memset(buf,0,10);
    
    FILE * jeu=fopen("jeu","r");
    int NBligne=0;      
    fseek(jeu,0,SEEK_SET);

    // char texteEntier[nbCharDansLeTexte];
    // fread(texteEntier,sizeof(char),nbCharDansLeTexte,fd);

    // char*  token = strtok(texte," ");
    // while(token != NULL){
    // token = strtok(texteEntier," ");
    // if(strcmp(token,"!PALIER") == 0){
    //     // palier detecté
    // }
    // }

    while(strcmp(buf,"!PALIER!\n")!=0){
        // memset(buf,0,11);
        fgets(buf,10,jeu);
        // if (strcmp(buf,"PALIERS!\n")==0)
        // {
        //     break;
        // }
        NBligne++;    
    }
    printf("%d\n",NBligne);

return 0;
    // fseek(jeu,0,SEEK_SET);
    // for (int i = 0; i < 3; i++)
    // {
    //     memset(buf,0,1000);
    //     fgets(buf,1000,jeu);
    //     printf("%s",buf);
    // }


    // printf("\nVoir quel palier ?\n");
    // for (int i = 0; i < taillefichierjeu-4; i++)
    // {
    //     printf("%d\t",i);
    // }
    // printf("\n");
    // memset(buf,0,1000);
    // fgets(buf,1000,stdin);

    // fseek(jeu,0,SEEK_SET);
    // int palier=atoi(buf);
    // for (int i = 0; i < 4+palier;)
    // {
    //     fgets(buf,1000,jeu);
    //     i++;
    // }
    // printf("%s",buf);

}