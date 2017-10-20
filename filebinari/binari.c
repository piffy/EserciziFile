#include <iostream>
#include <stdio.h>
#include <string.h>

//Ho messo i commenti in un commento al commit.

using namespace std;

typedef struct carta{
    int valore;
    char seme[10];
}elemento;
;

void mazzo(FILE *f){
    
    }
    strncpy(elemento.seme,"spade",sizeof(elemento.seme));
    for(int i1=1;i1<11;i1++){elemento.valore=i1;
        fwrite(&elemento,sizeof(elemento),1,f);
    }
   strncpy(elemento.seme,"denari",sizeof(elemento.seme));
          for(int i=1;i<11;i++){elemento.valore=i;
            fwrite(&elemento,sizeof(elemento),1,f);
    }
    strncpy(elemento.seme,"coppe",sizeof(elemento.seme));
        for(int i2=1;i2<11;i2++){elemento.valore=i2;
           fwrite(&elemento,sizeof(elemento),1,f);
    }
       strncpy(elemento.seme,"bastoni",sizeof(elemento.seme));
          for(int i3=1;i3<11;i3++){elemento.valore=i3;
        fwrite(&elemento,sizeof(elemento),1,f);
    }
}
void mischia(FILE *f){ //NON SONO ANCORA SICURISSIMO RIGUARDO IL FUNZIONAMENTO DI QUESTA FUNZIONE
    int i1=0;
    int i2=1;
    int s,c;
    do{
    fseek (f, i1, SEEK_END);
    fread(&s,sizeof(int),1,f);
        fseek (f, i2, SEEK_END);
        fread(&c,sizeof(int),1,f);
        fwrite(&s,sizeof(int),1,f);
        fseek (f, i1, SEEK_END);
        fwrite(&c,sizeof(int),1,f);
        i1++;
        i2++;
        
}while(feof)
}

carta ultima(FILE *f){
    fseek(f,sizeof(carta),SEEK_END);
    fread(&elemento,sizeof(carta),1,f);
    cout<<elemento.valore<<" "<<elemento.seme;
}
int main(){
    
    FILE *f;
    f=fopen("carte.dat","wb");
    mazzo(f);
    fclose(f);
    f=fopen("carte.dat","rb");
    c=ultima(f);
    fclose(f);
}
