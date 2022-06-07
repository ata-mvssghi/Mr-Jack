#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "./Ata.h"
int main()
{
	cell[0][0].type=1;
  map[0][0] = '\\';
  map[1][0] = '_';
  map[2][0] = '_';
  map[3][0] = '_';
  map[4][0] = '/';
  map[0][1] = '/';
  map[4][1] = '\\';
  map[1][2] = '_';
  map[2][2] = '_';
  map[3][2] = '_';
  mip();
 mapm();
  //
  //
  //
  //
  //
  for (int i = 19;  0 <= i; i--)
    {
      for (int j = 0; j < 53; j++)
        printf("%c", fmap[j][i]);
      printf("\n");
    }
    node*head=(node*)malloc(sizeof(node));
head->next=NULL;
//-------------------------------------------------------SUSPICIOS LIST----------------------------------------------------------------------
node*head4=(node*)malloc(sizeof(node));
head4->next=NULL;
  // building linked list for cards
  int sign;
temp[0]='j';
temp[1]='w';
sign=4;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='i';
temp[1]='l';
sign=7;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='s';
temp[1]='g';
sign=8;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='s';
temp[1]='h';
sign=6;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='j';
temp[1]='s';
sign=10;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='w';
temp[1]='g';
sign=11;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='j';
temp[1]='b';
sign=9;
insert(head,temp,sign);
insert(head4,temp,sign);
temp[0]='m';
temp[1]='s';
sign=7;
insert(head,temp,sign);
insert(head4,temp,sign);
node*head2=(node*)malloc(sizeof(node));
head2->next=NULL;
node*head3=(node*)malloc(sizeof(node));
head3->next=NULL;
node *curr;
int d;
//random card selection
//
//
//

//
//
printf("even round's cards are:\n");
for(int f=0;f<4;f++){
	curr=head;
	 d=rand()%4+1;
	for(int j=0;j<d;j++){
	curr=curr->next;
	}
	curr->flag=1;
	strcpy(temp2,curr->name);
	insert(head2,temp2,sign);
}print(head2->next);
curr=head->next;
printf("odd round's cards are:\n");
for(int j=0;j<8;j++){
	if(curr->flag!=1){
strcpy(temp2,curr->name);
insert(head3,temp2,sign);
}
	curr=curr->next;
}
print(head3->next);
/*srand(time(NULL));
   curr=head;
 for(int y=0;y<8;y++){
        curr=curr->next;
 curr->flag=0;
 }


printf("even round's cards are:\n");
for(int f=0;f<4;f++){
	curr=head;
	 d=rand()%8+1;
	for(int j=0;j<d;j++){
	curr=curr->next;
	}if(curr->flag==1){
	while(curr->flag==1)
	{if(curr->next==NULL){
	    break;
	}
	    curr=curr->next;
	}
	}

	curr->flag=1;
	strcpy(temp2,curr->name);
	insert(head2,temp2,sign);
}print(head2->next);
curr=head->next;
printf("odd round's cards are:\n");
for(int j=0;j<8;j++){
	if(curr->flag!=1){
strcpy(temp2,curr->name);
insert(head3,temp2,sign);
}
	curr=curr->next;
}
print(head3->next);*/





//
///
//printf("even round's cards are:\n");
/*for(int f=0;f<4;f++){
	curr=head;
	 d=rand()%4+1;
	for(int j=0;j<d;j++){
	curr=curr->next;
	}
	curr->flag=1;
	strcpy(temp2,curr->name);
	insert(head2,temp2,sign);
}print(head2->next);
curr=head->next;
printf("odd round's cards are:\n");
for(int j=0;j<8;j++){
	if(curr->flag!=1){
strcpy(temp2,curr->name);
insert(head3,temp2,sign);
}
	curr=curr->next;
}
print(head3->next);*/
//
//
//
//
 	int g=rand()%8+1;
 	node* curr2;
 	curr2=head->next;
 	for(int k=0;k<g;k++){
 		curr2=curr2->next;
	 }
	 strcpy(jack,curr2->name);
		printf("\n\t\t\tmr.jack is |--%s--|",jack);
		curr=head2->next;
		/*for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (!strcmp(cell[j][i].ch,curr->name)){
					printf("\n\n%s\n\n\n",cell[j][i].ch);
					i2=i;
					j2=j;
					break;
				}

			}
			if(i2!=-1)
			break;
		}*/
		//playing
		//
		//
		curr=head2->next;
		int tendency;
		int move_count;
		int rounnd_count=0;
		int total_round=1;
		//-----------------------------------------------------------------------------------------------
	while(total_round!=9){
                	printf("\n\t\t\tstart of round %d\n",total_round);
		    if(total_round%2==1){
                   // menue();
                    mapm();
		//-------------------------------------------------------------------------------------------------
		for(int g=0;g<4;g++){
                int i=0;int j=0;
		int i2=-1,j2=-1;
		int char_choice;
        for (int i = 19;  0 <= i; i--)
    {
      for (int j = 0; j < 53; j++)
      if(fmap[j][i]=='\0'){
      	printf(" ");
	  }
	  else{

        printf("%c", fmap[j][i]);}
      printf("\n");
    }
		    if(rounnd_count==0)
                printf("\n-----detective's turn-----\n");
                action_info();
                print(head2->next);
                printf("which character?");
                scanf("%d",&char_choice);
                curr=head2->next;
               for(int y=0;y<char_choice-1;y++){
                curr=curr->next;
               }
               printf("\n you chose %s\n\n",curr->name);
               //this is for finding i&j;----------------------------------------------------------------------------------------------
               for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (!strcmp(cell[j][i].ch,curr->name)){
					i2=i;
					j2=j;
					break;
				}

			}
			if(i2!=-1)
			break;
		}
		//-----------------------------------------------------------------------------------------------------------------------------
                if(cell[j][i].type==10){
                     int action_choice;
 printf("\n take the action now or after moving?1 for now  \t2 for after");
 scanf("%d",&action_choice);
 if(action_choice==1){
   actions(i,j,i2,j2,head4,jack);
  printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
 }
 else if(action_choice==2){
  printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
    actions(i,j,i2,j2,head4,jack);
 }
                }
        else if(cell[j][i].type==11){
                     int action_choice;
 printf("\n move   or change place with another character?1for move   \t2 for action");
 scanf("%d",&action_choice);
 if(action_choice==1){
  printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
 }
 else if(action_choice==2){
    actions(i,j,i2,j2,head4,jack);
 }
        }
        else{
                printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
                actions(i,j,i2,j2,head4,jack);}
                 mapm();
   // actions(i,j,i2,j2,head4,jack);
        rounnd_count++;
        curr=curr->next;
        deleteNode(&head2,char_choice);
        if(rounnd_count==1||rounnd_count==2)
        printf("\n---------mr jack's turn---------\n");
        else if(rounnd_count==3)
        printf("\n--------detective's turn----------\n");
        mapm();
        printf("\nada gaz verma\n");
		}
        int call_char;

		//
		//
		//
		printf("\nround  %d finished\n",total_round);
		total_round++;
		 int  yes_or_no;
		  for (int i = 19;  0 <= i; i--)
    {
      for (int j = 0; j < 53; j++)
      if(fmap[j][i]=='\0'){
      	printf(" ");
	  }
	  else{

        printf("%c", fmap[j][i]);}
      printf("\n");
    }
    printf("\ngadad print ele gorakh\n");
    for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].v_or_iv==2){
					printf("\n\n haaaaaa i=%d     j=%d\n",i,j);
					break;
				}

			}
		}
		cell[5][5].char_in_or_not=2;
		for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){
				if (cell[j][i].char_in_or_not==2){
					printf("\n\n adaaaaaaaaaaaaaaaaaaaai=%d     j=%d\n",i,j);
					break;
				}

			}
		}
          printf("\nis mr.jack visiable?\t1for vsiable\t0 for invisable the currunt list is : \n");
          print(head4->next);
          scanf("%d",&yes_or_no);
         if(yes_or_no==1){
            printf("delete  the invisiable characters from suspicou's list\n");
            int dell=2;
            print(head4->next);
            while(dell!=0){
                printf("\nwhich character to delete?\n");
                scanf("%d",&dell);
                deleteNode(&head4,dell);
                printf("\ncurrucnt SUSPICIOUS list is:\n");
          print(head4->next);
            }

         }
      else if(yes_or_no==0){
            printf("delete  the visiable characters from suspicou's list\n");
            int dell2=2;
            print(head4->next);
            while(dell2!=0){
                printf("\nwhich character to delete?\n");
                if(head4->next!=NULL)
          print(head4->next);
                scanf("%d",&dell2);
                deleteNode(&head4,dell2);
                printf("\ncurrucnt SUSPICIOUS list is:\n");
            }
         }
         ////hoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooles///
//menue();
//menue();
 for(int i=0;i<9;i++){
			for(int j=0;j<13;j++){

				if (cell[j][i].v_or_iv==2){
                        printf("\ni=%d\tj=%d",i,j);

				}
			}
		}
         }
		//-------------------------------------------------zojzojzojzojzojzojzojzojzojzojzojzjzojzojzojozjozjozjzojzojzojozjoz--------
		else if(total_round%2==0){
               // menue();
                mapm();
         	for(int g=0;g<4;g++){
                int i=0;int j=0;
		int i2=-1,j2=-1;
		int char_choice;
		if(rounnd_count!=3){
		curr=head3->next;}
		    if(rounnd_count==0)
                printf("\n-----mr.jacks turn-----\n");
                print(head3->next);
                printf("which character?");
                scanf("%d",&char_choice);
               for(int y=0;y<char_choice-1;y++){
                curr=curr->next;
               }
               printf("\n chosen character is:%s\n",curr->name);
               //this is for finding i&j;----------------------------------------------------------------------------------------------
               for(i=0;i<9;i++){
			for(j=0;j<13;j++){

				if (!strcmp(cell[j][i].ch,curr->name)){
					i2=i;
					j2=j;
					break;
				}

			}
			if(i2!=-1)
			break;
		}
		//-----------------------------------------------------------------------------------------------------------------------------
                 if(cell[j][i].type==10){
                     int action_choice;
 printf("\n take the action now or after moving?1 for now  \t2 for after");
 scanf("%d",&action_choice);
 if(action_choice==1){
   actions(i,j,i2,j2,head4,jack);
  printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
 }
 else if(action_choice==2){
  printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
    actions(i,j,i2,j2,head4,jack);
 }
                }
        else if(cell[j][i].type==11){
                     int action_choice;
 printf("\n move   or change place with another character?1for move   \t2 for action");
 scanf("%d",&action_choice);
 if(action_choice==1){
  printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
                }
 }
 else if(action_choice==2){
    actions(i,j,i2,j2,head4,jack);
 }
        }
 else{
                printf("how many moves?\n");
                scanf("%d",&move_count);
                for(int q=0;q<move_count;q++){
         play(&i,&j,jack);
         }
         actions(i,j,i2,j2,head4,jack);
         mapm();
                }
        for (int i = 19;  0 <= i; i--)
    {
      for (int j = 0; j < 53; j++)
      if(fmap[j][i]=='\0'){
      	printf(" ");
	  }
	  else{

        printf("%c", fmap[j][i]);}
      printf("\n");
    }
        rounnd_count++;
        if(rounnd_count!=3){
        curr=curr->next;}
        deleteNode(&head3,char_choice);
        if(rounnd_count==1||rounnd_count==2)
        printf("\n--------detective's turn--------\n");
        else if(rounnd_count==3)
        printf("\n---------mrjacks's turn---------\n");
		}
        int call_char;
		//
		//
		//
		printf("round  %d finished",total_round);
          total_round++;
          int  yes_or_no;
          printf("\nis mr.jack visiable?\t1for vsiable\t0 for invisable the currunt list is : \n");
          print(head4->next);
          scanf("%d",&yes_or_no);
         if(yes_or_no==1){
            printf("delete  the invisiable characters from suspicou's list\n");
            int dell=2;
            print(head4->next);
            while(1){
                printf("\nwhich character to delete?\n");
                scanf("%d",&dell);
                if(dell==0){
                    break;
                }
                deleteNode(&head4,dell);
          print(head4->next);
            }

         }
      else if(yes_or_no==0){
            printf("delete  the visiable characters from suspicou's list\n");
            int dell2=2;
            print(head4->next);
            while(1){
                printf("\nwhich character to delete?\n");
                scanf("%d",&dell2);
                if(dell2==0){
                    break;
                }
                deleteNode(&head4,dell2);
          print(head4->next);
            }
         }
         printf("\nlllllllllllll\n");
         srand(time(NULL));
         printf("\n1659\n");
         curr=head;
         curr2=head2;
 for(int y=0;y<6;y++){
        curr=curr->next;
 curr->flag=0;
 }
 printf("\n1666\n");
 printf("even round's cards are:\n");
for(int f=0;f<4;f++){
	curr=head;
	 d=rand()%8+1;
	for(int j=0;j<d;j++){
	curr=curr->next;
	}if(curr->flag==1){
	while(curr->flag==1)
	{
	    curr=curr->next;
	}
	}

	curr->flag=1;
	strcpy(temp2,curr->name);
	insert(head2,temp2,sign);
}print(head2->next);
curr=head->next;
printf("odd round's cards are:\n");
for(int j=0;j<8;j++){
	if(curr->flag!=1){
strcpy(temp2,curr->name);
insert(head3,temp2,sign);
}
	curr=curr->next;
}
print(head3->next);
		}//-------------------------------zojzojzojzojzojzojzojzojzojjzojzojzojzjjo-------------------------------------------------------------
		}
		//play(&i,&j);
		//}
		//}*/
		//system("cls");
        //play(&i,&j);
      // play(&i,&j);
		//play(&i,&j);
		//mapm();
	/*	cell[j2][i2+1].type=cell[j2][i2].type;
		cell[j2][i2].type=16;
		i2++;
		cell[j2][i2+1].type=cell[j2][i2].type;
		cell[j2][i2].type=16;
//srand(time(NULL));
//initializing the flags to zero
/*curr=head->next;
for(int w=0;w<8;w++){
    curr->flag=0;
    curr=curr->next;
}
 node*head4=(node*)malloc(sizeof(node));
head4->next=NULL;
 node*head5=(node*)malloc(sizeof(node));
head5->next=NULL;
for(int f=0;f<4;f++){
	curr=head;
	 d=rand()%4+1;
	for(int j=0;j<d;j++){
	curr=curr->next;
	}
	curr->flag=1;
	strcpy(temp2,curr->name);
	insert(head4,temp2,sign);
}printf("\n");
print(head4->next);
curr=head;
printf("odd round's cards are:\n");
for(int j=0;j<8;j++){
	if(curr->flag!=1){
strcpy(temp2,curr->name);
insert(head5,temp2,sign);
}
	curr=curr->next;
}
print(head5->next);*/

//}
}
