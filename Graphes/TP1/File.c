#include "File.h"

void Enfiler(int *file,int *fin, int x){
	
	if(*fin<TabNiveauxMax){
	
		*fin = *fin + 1;
		file[*fin] = x;
	}
}

int Defiler(int *file, int*fin){
	
	int res = file[0];
	int i;
	
	if(*fin>=1){
		
		for(i=1; i<=*fin ; i++){
		
			file[i-1] = file[i];
		}
	}
	
	*fin = *fin - 1;
	
	return res;
}

int FileVide(int fin){

	return (fin == -1);
}

int FileTaille(int fin){

	return (fin+1);
}

void AfficherFile(int *file, int sommet){

	int i;
	
	printf("\nFile : \n");
	
	for(i=0; i<=sommet; i++){
	
		printf("%i\n", file[i]);
	}
}
