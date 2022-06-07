#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct data{
	int type;
	char ch[2];
	int v_or_iv;
	int char_in_or_not;
};
char temp[2];//this is used for  building linked list
char temp2[2];
char jack[2];//for selecting jack's character
struct data cell[13][9];
//build_map(struct dat[]){
//data[0][0].ty
typedef struct chracters{
  char name[2];
  int flag;
  int sign;
  struct characters*next;
}node;
//insert function
 void insert(node*head,char*name,int sign){
  node*temp=(node*)malloc(sizeof(node));
    node*curr=(node*)malloc(sizeof(node));
  if(head->next==NULL){
    head->next=temp;
    temp->next=NULL;
  }
  for(curr=head;curr->next!=NULL;curr=curr->next){
  }
  curr->next=temp;
strcpy(temp->name,name);
temp->sign=sign;
  temp->next=NULL;
}
//print function
void print (node*head){

    node*curr=head;
    while(curr->next!=NULL){
           printf("%s\n",curr->name);

            curr=curr->next;

    }
    if(curr->next==NULL){
        printf("%s\n",curr->name);
    }
}
void mip(){

cell[0][0].type=-1;
cell[0][1].type=-1;
cell[0][4].type=4;
strcpy(cell[0][4].ch,"jw");
cell[0][6].type=12;
cell[0][7].type=-1;
cell[0][8].type=-1;

//
cell[1][0].type=15;
cell[1][2].type=2;
cell[1][4].type=1;
cell[1][6].type=1;
cell[1][8].type=14;
//


cell[2][0].type=-1;
cell[2][1].type=-1;
cell[2][2].type=13;
cell[2][5].type=1;
cell[2][7].type=2;
cell[2][8].type=-1;
//
cell[3][0].type=-1;
cell[3][1].type=-1;
cell[3][2].type=-1;
cell[3][4].type=1;
cell[3][6].type=1;
cell[3][7].type=-1;
cell[3][8].type=-1;
//

cell[4][0].type=-1;
cell[4][1].type=-1;
cell[4][4].type=5;
strcpy(cell[4][4].ch,"il");
cell[4][7].type=11;
strcpy(cell[4][7].ch,"wg");
cell[4][8].type=-1;
//

cell[5][0].type=-1;
cell[5][2].type=1;
cell[5][3].type=2;
cell[5][4].type=1;
cell[5][5].type=12;
cell[5][6].type=3;
cell[5][7].type=12;
cell[5][8].type=-1;
//

cell[6][2].type=6;
strcpy(cell[6][2].ch,"sh");

cell[6][5].type=10;
strcpy(cell[6][5].ch,"js");
cell[6][8].type=-1;
//

cell[7][8].type=-1;
cell[7][0].type=12;
cell[7][1].type=3;
cell[7][2].type=1;
cell[7][3].type=12;
cell[7][4].type=1;
cell[7][5].type=2;
cell[7][6].type=1;
//

cell[8][0].type=-1;
cell[8][1].type=7;
strcpy(cell[8][1].ch,"ms");
cell[8][5].type=9;
strcpy(cell[8][5].ch,"jb");
cell[8][8].type=-1;
//

cell[9][0].type=-1;
cell[9][1].type=-1;
cell[9][3].type=1;
cell[9][5].type=1;
cell[9][7].type=-1;
cell[9][8].type=-1;
//

cell[10][0].type=-1;
cell[10][1].type=-1;
cell[10][2].type=2;
cell[10][4].type=1;
cell[10][8].type=-1;
//
cell[11][0].type=-1;
cell[11][1].type=14;
cell[11][3].type=1;
cell[11][4].type=1;
cell[11][6].type=2;
cell[11][7].type=13;
cell[11][8].type=15;
//
cell[12][0].type=-1;
cell[12][1].type=-1;
cell[12][4].type=12;
cell[12][5].type=8;
strcpy(cell[12][5].ch,"sg");
cell[12][7].type=-1;
cell[12][8].type=-1;

for (int v = 0; v < 9; v++){
	for(int b=0;b<13;b++){
	if(cell[b][v].type==0){
		cell[b][v].type=16;
	}
	}
}
}
char map[5][3];
char fmap[12 * 4 + 5][20];
void mapm(){
int x=0,y=0;for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 13; j++)
      {
      	if(cell[j][i].type!= -1)
        for(int z = 0; z < 3; z++)
          for(int q = 0; q < 5; q++)
            {
              if(fmap[x + q][y + z] == '\0')
                fmap[x + q][y + z] = map[q][z];
                if(q==1&&z==1){
                if(cell[j][i].type==12){
                fmap[x + q][y + z]='O';
				fmap[x + q+1][y + z]='O';
				fmap[x + q+1+1][y + z]='O';
				}
				else if(cell[j][i].char_in_or_not==2){
					 fmap[x + q][y + z]='O';
					 fmap[x +1+ q][y + z]='O';
					 fmap[x +2+ q][y + z]='O';

				}
				else if(cell[j][i].type==4){
					fmap[x + q][y + z]=2;
					 fmap[x + q+1][y + z]='j';
				fmap[x + q+2][y + z]='w';
				}
				else if(cell[j][i].type==14){
					fmap[x + q][y + z]='|';
					 fmap[x + q+1][y + z]='|';
				fmap[x + q+2][y + z]='|';
				}
				else if(cell[j][i].type==5){
					fmap[x + q][y + z]=2;
					 fmap[x + q+1][y + z]='i';
				fmap[x + q+2][y + z]='l';
				}
					else if(cell[j][i].type==13){
					 fmap[x + q][y + z]='#';
					 fmap[x +1+ q][y + z]='O';
					 fmap[x +2+ q][y + z]='#';

				}
				else if(cell[j][i].type==15){
					 fmap[x + q][y + z]=237;
					 fmap[x +1+ q][y + z]=237;
					 fmap[x +2+ q][y + z]=237;

				}
				else if(cell[j][i].type==2){
					 fmap[x + q][y + z]='*';
					 fmap[x +1+ q][y + z]='*';
					 fmap[x +2+ q][y + z]='*';

				}
				else if(cell[j][i].type==3){
					 fmap[x + q][y + z]='#';
					 fmap[x +1+ q][y + z]='*';
					 fmap[x +2+ q][y + z]='#';

				}
					else if(cell[j][i].type==1){
					 fmap[x + q][y + z]='h';
					 fmap[x +1+ q][y + z]='o';
					 fmap[x +2+ q][y + z]='m';

				}
					else if(cell[j][i].type==6){
					 fmap[x + q][y + z]=2;
					 fmap[x +1+ q][y + z]='S';
					 fmap[x +2+ q][y + z]='H';

				}
					else if(cell[j][i].type==7){
					 fmap[x + q][y + z]=2;
					 fmap[x +1+ q][y + z]='M';
					 fmap[x +2+ q][y + z]='S';

				}
					else if(cell[j][i].type==8){
					fmap[x + q][y + z]=2;
					 fmap[x +1+ q][y + z]='S';
					 fmap[x +2+ q][y + z]='G';

				}
					else if(cell[j][i].type==9){
					 fmap[x + q][y + z]=2;
					 fmap[x +1+ q][y + z]='J';
					 fmap[x +2+ q][y + z]='B';

				}
					else if(cell[j][i].type==10){
					 fmap[x + q][y + z]=2;
					 fmap[x +1+ q][y + z]='j';
					 fmap[x +2+ q][y + z]='s';

				}
					else if(cell[j][i].type==11){
					 fmap[x + q][y + z]=2;
					 fmap[x +1+ q][y + z]='W';
					 fmap[x +2+ q][y + z]='g';

				}
					else if(cell[j][i].type==16){
					 fmap[x + q][y + z]='\0';
					 fmap[x +1+ q][y + z]='\0';
					 fmap[x +2+ q][y + z]='\0';

				}
				}
            }
        x += 4;
        if(j % 2 == 0)
          y += 1;
        else
          y -= 1;
      }
    x = 0;
    y += 1;
  }
}
//void menu(){
//printf("\t\t\t1-");





//}

void action_info(){
printf("\n1=jw:moves 1-3   indicates a direction and characters in  that direction will be able to see\n");
printf("2=il:moves1-3      moves one of blocker tokens and puts it on another gate \n");
printf("3=sh:moves 1-3     takes one of the Suspicious cards\n");
printf("4=ms:moves 1-4     can pass by houses but also should finally be in a house\n");
printf("5=sg:moves 1-3     before or after taking action calls  characters at most 3 steps closer to him self\n");
printf("6=jb:moves 1-3     before or after taking action moves a hole blocker to another non blocked hole\n");
printf("7=js:moves 1-3      before or after taking action turns of alights and turns on another light\n");
printf("8=wg:moves 1-3     moves or changes his place with another character\n");}

void play(int* i,int* j, char *jack){
    cell[5][7].char_in_or_not=2;
     cell[9][10].char_in_or_not=2;
     int arrest;
	printf("1:north west\n2:north east\n3:up\n4:down\n5:south east\n6:south west\n");
	int choice;
scanf("%d",&choice);
	if(*j%2==0){
switch(choice){
	case 1:
		if(cell[*j-1][*i].type!=16){
		    if(cell[*j-1][*i].type>3&&cell[*j-1][*i].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j-1][*i].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		    else if(cell[*j-1][*i].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}
printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;
		    }
		    else{
		printf("can't move here \n");
		return 0;}}
		cell[*j-1][*i].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j-=1;
			break;
	case 2:
		if(cell[*j+1][*i].type!=16){
 if(cell[*j+1][*i].type>3&&cell[*j+1][*i].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j+1][*i].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		   else if(cell[*j+1][*i].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;
		    }
		    else{
		printf("can't move here \n");
		return 0;}
		}
	cell[*j+1][*i].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j+=1;
			break;
	case 3:
		if(cell[*j][*i+1].type!=16){

		 if(cell[*j][*i+1].type>3&&cell[*j][*i+1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j][*i+1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		    else if(cell[*j][*i+1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;  }
		    else{
		printf("can't move here \n");
		return 0;}}
		//else if(cell[*j][*i].type=12){

		//}
		cell[*j][*i+1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*i+=1;
			break;
	case 4:
		if(cell[*j][*i-1].type!=16){

		 if(cell[*j][*i-1].type>3&&cell[*j][*i-1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j][*i-1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------");
                    return 0;
                }
		    }
		  else if(cell[*j][*i-1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;

		    }
		    else{
		printf("can't move here \n");
		return 0;}}
	cell[*j][*i-1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*i-=1;
			break;
	case 5:
		if(cell[*j+1][*i-1].type!=16){
 if(cell[*j+1][*i-1].type>3&&cell[*j+1][*i-1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j+1][*i-1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------");
                    return 0;
                }
		    }
		    else if(cell[*j+1][*i-1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;
		    }
		    else{
		printf("can't move here \n");
		return 0;}}
	cell[*j+1][*i-1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j+=1;
			*i-=1;
			break;
	case 6:
		if(cell[*j-1][*i-1].type!=16){
 if(cell[*j-1][*i-1].type>3&&cell[*j-1][*i-1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j-1][*i-1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		   else if(cell[*j-1][*i-1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;
		    }
		    else{
		printf("can't move here \n");
		return 0;}}
		cell[*j-1][*i-1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j-=1;
			*i-=1;
			break;
}}//end of j%2==0
else if(*j%2==1){

switch(choice){
	case 1:
	    ////////-------------------------------------------------HERE MIGHT BE A PROBLEM------------------------------------------------
		if(cell[*j-1][*i+1].type!=16){

		 if(cell[*j-1][*i+1].type>3&&cell[*j-1][*i+1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j-1][*i+1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		  else if(cell[*j-1][*i+1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;

		    }
		    else{
		printf("can't move here \n");
		return 0;}}
		cell[*j-1][*i+1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*i+=1;
			*j-=1;
			break;
	case 2:
        if(cell[*j+1][*i+1].type!=16){
 if(cell[*j+1][*i+1].type>3&&cell[*j+1][*i+1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j+1][*i+1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		 else if(cell[*j+1][*i+1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;
		    }
		    else{
		printf("can't move here \n");
		return 0;}}
		cell[*j+1][*i+1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j+=1;
			*i+=1;
			break;
	case 3:
		if(cell[*j][*i+1].type!=16){
 if(cell[*j][*i+1].type>3&&cell[*j][*i+1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j][*i+1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		    else if(cell[*j][*i+1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;
		    }
		    else{
		printf("can't move here \n");
		return 0;}}
	cell[*j][*i+1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*i+=1;
			break;
	case 4:
		if(cell[*j-1][*i-1].type!=16){

		 if(cell[*j-1][*i-1].type>3&&cell[*j-1][*i-1].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j-1][*i-1].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		   else if(cell[*j-1][*i-1].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;

		    }
		    else{
		printf("can't move here \n");
		return 0;}}
	cell[*j][*i-1].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*i-=1;
			break;
	case 5:
		if(cell[*j+1][*i].type!=16){
 if(cell[*j+1][*i].type>3&&cell[*j+1][*i].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j+1][*i].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		    else if(cell[*j+1][*i].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;

		    }
		    else{
		printf("can't move here \n");
		return 0;}}
	cell[*j+1][*i].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j+=1;
			break;
	case 6:
		if(cell[*j-1][*i].type!=16){
 if(cell[*j-1][*i].type>3&&cell[*j-1][*i].type<12){
                printf("\nare u sure u want to arrest this character?\t1for YES\t0 for NO\n");
                scanf("%d",&arrest);
                if(arrest==1){
                    if(!(strcmp(cell[*j-1][*i].ch,jack))){
                        printf("\n-----------------------detective wins-------------------------\n");
                        return 0;
                    }
                    else printf("\n----------------------detective lost--------------------------\n");
                    return 0;
                }
		    }
		    else if(cell[*j-1][*i].type==12){
                printf("\n open holes are:\n ");
                for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}printf("\nwhich hole?\n");
int holei,holej;
scanf("%d",&holei);
scanf("%d",&holej);
cell[holej][holei].type=cell[*j][*i].type;
cell[*j][*i].type=16;
*i=holei;
*j=holej;
cell[*j][*i].char_in_or_not=2;
mapm();
return 0;

		    }
		    else{
		printf("can't move here \n");
		return 0;}}
	cell[*j-1][*i].type=cell[*j][*i].type;
			cell[*j][*i].type=16;
			*j--;
			break;
}
}
}
////////////////////////////////////////////ACTIONS FUNCTION////////////////////////////////////////ACTION FUNCTION////////////
 void actions(int i,int j,int i2,int  j2,node * head4,char * jack){
		//
		//
		int call_char;
		if(cell[j][i].type==8){
                printf("\ncharacters are:\n");
          for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (cell[j][i].type>3&&cell[j][i].type<12){
                        printf("\n%s's type is:%d\n",cell[j][i].ch,cell[j][i].type);
					break;
				}

			}
		}
		printf("\nenter the typr of character u want to move\n");
        i2=-1;
        j2=-1;
          scanf("%d",&call_char);
          for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (cell[j][i].type==call_char){
					i2=i;
					j2=j;
					break;
				}

			}
			if(i2!=-1)
			break;
		}
		printf("\nhow many moves do u want to have the chracter moved?\n");
		int moves;
		scanf("%d",&moves);
		for(int x=0;x<moves;x++){
           play(&i,&j,jack);
		}
		}

		//اینجا برای یک نوع j تعریف شده یکیش مونده
		//ناقصه while hash ghalateh
	if(cell[j][i].type==4){
printf("\nwhich direction do u want to have that direction visable?\n");
int direction;
printf("1:north west\n2:north east\n3:up\n4:down\n5:south east\n6:south west\n");
scanf("%d",&direction);
switch(direction){
	case 1:
	while(1){
        if(j%2==1){
            cell[j-1][i-1].v_or_iv!=2;
            j--;i--;
        }
        else if(j%2==0){
           cell[j-1][i].v_or_iv!=2;
           j--;}
            if(cell[j][i].type==-1||cell[j][i].type==1){
                break;
            }
            else if(j<0||j>12) break;
            else if(i<0||i>9) break;

	}
			break;
	case 2:
      while(1){
        if(j%2==1){
            cell[j+1][i+1].v_or_iv!=2;
            j++;i++;
        }
        else if(j%2==0){
           cell[j+1][i].v_or_iv!=2;
           j++;}
            if(cell[j][i].type==-1||cell[j][i].type==1){
                break;
            }
            else if(j<0||j>12) break;
            else if(i<0||i>9) break;
            }
			break;
	case 3:
		while(1){
        if(j%2==1){
            cell[j][i+1].v_or_iv!=2;
            i++;
        }
        else if(j%2==0){
           cell[j][i+1].v_or_iv!=2;
           i++;}
            if(cell[j][i].type==-1||cell[j][i].type==1){
                break;
            }
            else if(j<0||j>12) break;
            else if(i<0||i>9) break;
            }
			break;
	case 4:
		while(1){
        if(j%2==1){
            cell[j-1][i-1].v_or_iv!=2;
            j--;i--;
        }
        else if(j%2==0){
           cell[j][i--].v_or_iv!=2;
           i--;}
           if(cell[j][i].type==-1||cell[j][i].type==1){
                break;
            }
            else if(j<0||j>12) break;
            else if(i<0||i>9) break;

            }
			break;
	case 5:
		while(1){
        if(j%2==1){
            cell[j+1][i].v_or_iv!=2;
            j++;
        }
        else if(j%2==0){
           cell[j+1][i-1].v_or_iv!=2;
           j++;i--;}
            if(cell[j][i].type==-1||cell[j][i].type==1){
                break;
            }
            else if(j<0||j>12) break;
            else if(i<0||i>9) break;
            }
			break;
	case 6:
		while(1){
        if(j%2==1){
            cell[j-1][i].v_or_iv!=2;
            j--;
        }

        else if(j%2==0){
           cell[j-1][i-1].v_or_iv!=2;
           j--;i--;}
           if(cell[j][i].type==-1||cell[j][i].type==1){
                break;
            }
            else if(j<0||j>12) break;
            else if(i<0||i>9) break;
            }
			break;

}

	}


	else	if(cell[j][i].type==5){
                int hole;
                int fhole=0;
                int ohole;
                printf("\nclosed gates are:\n");
                  for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (cell[j][i].type==15){
                       printf("i=:%d    j=%d\n",i,j);
				}

			}
		}
                printf("\nwhich closed gate do u want to change ?\n");
                int cholei,cholej,gatei,gatej;
        scanf("%d",&cholei);
        scanf("%d",&cholej);
        cell[cholej][cholei].type=14;
        printf("\nopen gates are\n");
         for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (cell[j][i].type==14){
                       printf("i=:%d    j=%d\n",i,j);
				}

			}
		}

		printf("\nwhich open gate do u want to close?\n");
scanf("%d",&gatei);
scanf("%d",&gatej);
cell[gatej][gatei].type=15;
		}
		else if(cell[j][i].type==6){
                printf("\nSUSPICIOUS LIST IS:\n");
                print(head4->next);
                printf("Which character to reveal identity?");
                printf("\nme jack is%s\n",jack);
                int identity;
                scanf("%d",&identity);
                node * curr;
                curr=head4;
                for(int e=0;e<identity;e++){
                        curr=curr->next;
                }
                printf("%s",curr->name);
                if(!(strcmp(curr->name,jack))){
                    printf("\nthis character is MR.JACK\n");
                }
                else{printf("\nthis character is not MR JACK\n");}
                if(identity!=0)
                deleteNode(&head4,identity);
                //system("cls");

		}
		//sherlock is remainnign sir heeey
		else if(cell[j][i].type==9){
		    printf("\nopen holes are:\n");
		    for(i=0;i<9;i++){
			for(j=0;j<13;j++){
				if (cell[j][i].type==12){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}
		int hole_choice;
		int  hole_choice2;
printf("which hole??");
scanf("%d",& hole_choice);
scanf("%d",& hole_choice2);
cell[hole_choice][hole_choice2].type=13;
		}
		else if(cell[j][i].type==10)
{
    int lightoffi,lightoffj;
    int lightoni,lightonj;
    printf("\nworking lights are:\n");
for(i=0;i<9;i++){
			for(j=0;j<13;j++){
				if (cell[j][i].type==2){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}
			printf("which light to turn off?");
			scanf("%d",&lightoffj);
			scanf("%d",&lightoffi);
			cell[lightoffj][lightoffi].type=3;
			printf("\nnot working lights are:\n");
			for(i=0;i<9;i++){
			for(j=0;j<13;j++){
				if (cell[j][i].type==3){
					printf("\ni=%d    j=%d\n",i,j);
				}

			}
}
            printf("which light to turn on?");
			scanf("%d",&lightoni);
			scanf("%d",&lightonj);
			cell[lightoni][lightonj].type=2;
}
else if(cell[j][i].type==11){
        int transitioni,transitionj;
        printf("\nlocation of characters are:\n");
  for(int p=0;p<9;p++){
			for(int q=0;q<13;q++){
				if (cell[q][p].type>3&&cell[q][p].type<12){
					printf("\n %s's i&j:\ti=%d    j=%d\n",cell[q][p].ch,p,q);

				}

			}
  }
			printf("\nwhich character? enter i&j\n");
            scanf("%d",&transitioni);
            scanf("%d",&transitionj);
            cell[j][i].type=cell[transitionj][transitioni].type;
            cell[transitionj][transitioni].type=11;
            mapm();
}
//else printf("cant move ");
}
 void deleteNode(struct Node**head_ref, int position)
{
	// If linked list is empty
	if (*head_ref == NULL)
		return;

	// Store head node
	node* temp = *head_ref;

	// If head needs to be removed
	if (position == 0) {
		*head_ref = temp->next; // Change head
		free(temp); // free old head
		return;
	}

	// Find previous node of the node to be deleted
	for (int i = 0; temp != NULL && i < position - 1; i++)
		temp = temp->next;

	// If position is more than number of nodes
	if (temp == NULL || temp->next == NULL)
		return;

	// Node temp->next is the node to be deleted
	// Store pointer to the next of node to be deleted
	node* next = temp->next;
	next = next->next;

	// Unlink the node from linked list
	free(temp->next); // Free memory

	temp->next = next; // Unlink the deleted node from list
}
void menue(){
    int menue_choice;
printf("\n1-saving map\n2-for loading map\n3-ignore\n4-exit game");
scanf("%d",&menue_choice);
if(menue_choice==1){
    FILE*fptr;
    fptr=fopen("mapsave.bin","ab");
    if(fptr==NULL){
        printf("couldn't open the file");
        exit(1);
    }
    for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
fwrite(&cell[j][i].type,sizeof(int),1,fptr);
fwrite(&cell[j][i].ch,sizeof(cell[j][i].ch),1,fptr);
fclose(fptr);

			}
					}
}
else if(menue_choice==2){
        int count=0;
         FILE*fptr;
    fptr=fopen("maps.bin","rb");
    if(fptr==NULL){
        printf("couldn't open the file");
        exit(1);
    }
    for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
fread(&cell[j][i].type,sizeof(int),1,fptr);
fread(&cell[j][i].ch,sizeof(cell[j][i].ch),1,fptr);
count++;
mapm();
			}
					}
					 mapm();
}
else if(menue_choice==4){
    exit(2);
}

}
/////////////////////////////////////////////////////////MAIN/////////////////////////////////////////////////////////////////