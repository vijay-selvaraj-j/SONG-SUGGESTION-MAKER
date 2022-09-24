#include<stdio.h>
#include<conio.h>
#include<string.h>

int n=20;
struct song
{
 char na[50];
 char la[50];
 char ge[50];
 char ar[50];
 char al[50];
 char li[50];

};

void insert()
{
 FILE*fp1,*fp2,*fp3,*fp4,*fp5,*fp6;
 char name[50],artist[50],genre[50],album[50],lan[50],link[100];
     fp1=fopen("SONGNAME.txt","a");
	 fp2=fopen("LANG.txt","a");
	 fp3=fopen("GENRE.txt","a");
	 fp4=fopen("ARTIST.txt","a");
	 fp5=fopen("ALBUM.txt","a");
	 fp6=fopen("LINK.txt","a");

     if(fp1==NULL||fp2==NULL||fp3==NULL||fp4==NULL||fp5==NULL||fp6==NULL)
     {
      printf("Error............\n");
      return;
     }
     else
    {
     printf("\nEnter Name: ");
     scanf("%s",name);
     fprintf(fp1,"\n%s",name);
	 printf("Enter Language: ");
     scanf("%s",lan);
     fprintf(fp2,"\n%s",lan);
	 printf("Enter Genre: ");
     scanf("%s",genre);
     fprintf(fp3,"\n%s",genre);
	 printf("Enter Artist: ");
     scanf("%s",artist);
     fprintf(fp4,"\n%s",artist);
	 printf("Enter Album: ");
     scanf("%s",album);
     fprintf(fp5,"\n%s",album);
	 printf("Enter Link: ");
     scanf("%s",link);
     fprintf(fp6,"\n%s",link);
	 
	 fclose(fp1);
	 fclose(fp2);
	 fclose(fp3);
	 fclose(fp4);
	 fclose(fp5);
	 fclose(fp6);
     }
}

struct node
{
  int data;
  struct node *next;
}*head;

void createList(int n, char na[30], char li[30])
{
 struct node *newNode, *temp;
 int data, i;
 head=(struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 {
  printf("1. Unable to allocate memory");
 }
 else
 {
  data=na;
  head->data=data;
  head->next = NULL;

  temp=head;

  for(i=2;i<=n;i++)
  {
   newNode=(struct node*)malloc(sizeof(struct node));
   if(newNode==NULL)
   {
    printf("Unable to allocate memory");
	break;
   }
   else
   {
    data=li;
	newNode->data=data;
	newNode->next=NULL;
	temp->next=newNode;
	temp=temp->next;
   }
  }
 } }

void deleteList()
{
    struct node *temp;

    while(head != NULL)
    {
	temp = head;
	head = head->next;

	free(temp);
    }


}



void displayList()
{
    struct node *temp;


    if(head == NULL)
    {
	printf("List is empty.");
    }
    else
    {
	temp = head;
	while(temp != NULL)
	{
	    printf("%s\t", temp->data);
	    temp = temp->next;
	}
    }
}








void sugg(char al[30],char ge[30],char ar[30],char la[30])
{

  char l1[30],a1[20],cp1[20],cp2[20],cp3[20],cp4[20],cp5[20],cp6[20],cp7[20],cp8[20],cp9[20],cp10[20],cp11[20],cp12[20],cp13[20],cp14[20];
  int i,j,k,c1,l=2,c2,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14;
  FILE *fp1, *fp2, *fp3, *fp4, *fp5, *fp6;
  struct song s[20];

fp1=fopen("SONGNAME.txt","r");
 if(fp1==NULL)
 {
 printf("\nError in opening file");
 }
 fp2=fopen("LANG.txt","r");
 if(fp2==NULL)
 {
 printf("\nError in opening file");
 }
 fp3=fopen("GENRE.txt","r");
 if(fp3==NULL)
 {
 printf("\nError in opening file");
 }
 fp4=fopen("ARTIST.txt","r");
 if(fp4==NULL)
 {
 printf("\nError in opening file");
 }
 fp5=fopen("ALBUM.txt","r");
 if(fp5==NULL)
 {
 printf("\nError in opening file");
 }
 fp6=fopen("LINK.txt","r");
 if(fp6==NULL)
 {
 printf("\nError in opening file");
 }


// {
   while(!feof(fp1)||!feof(fp2)||!feof(fp3)||!feof(fp4)||!feof(fp5)||!feof(fp6))
   {
    for(i=0;i<n;i++)
	fscanf(fp1,"%s\n",s[i].na);
	for(i=0;i<n;i++)
	fscanf(fp2,"%s\n",s[i].la);
	for(i=0;i<n;i++)
	fscanf(fp3,"%s\n",s[i].ge);
	for(i=0;i<n;i++)
	fscanf(fp4,"%s\n",s[i].ar);
	for(i=0;i<n;i++)
	fscanf(fp5,"%s\n",s[i].al);
	for(i=0;i<n;i++)
	fscanf(fp6,"%s\n",s[i].li);
   }
   
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(fp4);
   fclose(fp5);
   fclose(fp6);  

   
   


 //  strcpy(cp1,"English");
 //  strcpy(cp2,"Tamil");
 //  strcpy(cp3,"Telugu");
 //  strcpy(cp4,"Hindi");
 //  strcpy(cp5,"Malayalam");
  // strcpy(cp6,"Kannada");
  //strcpy(cp6,"Kannada");
   strcpy(cp7,"Pop");
   strcpy(cp8,"Melody");
   strcpy(cp9,"Trap");
   strcpy(cp10,"Classical");
   strcpy(cp11,"South_Indian");
  // strcpy(cp12,"Renjith_Unni");
   //strcpy(cp13,"Hamsalekha");
   //strcpy(cp14,"Sanjay_Leela_Bhansali");


   //b1=strcmp(la,cp1);
   //b2=strcmp(la,cp2);
   //b3=strcmp(la,cp3);
   //b4=strcmp(la,cp4);
   //b5=strcmp(la,cp5);
   //b6=strcmp(la,cp6);
   b7=strcmp(ge,cp7);
   b8=strcmp(ge,cp8);
   b9=strcmp(ge,cp9);
   b10=strcmp(ge,cp10);
   b11=strcmp(ge,cp11);
   //b12=strcmp(ar,cp12);
   //b13=strcmp(ar,cp13);
   //b14=strcmp(ar,cp14);
/*  fflush(stdin);
 if(b1==0)
   {
     strcpy(l1,"English");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
			fflush(stdin);
		   }
		  }

 }


 if(b2==0)
   {
     strcpy(l1,"Tamil");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
	      createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
fflush(stdin);	   }
		  }
 }



 if(b4==0)
   {
     strcpy(l1,"Hindi");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
	     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
fflush(stdin);		   }
		  }
 }



 if(b3==0)
   {
     strcpy(l1,"Telugu");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
	      createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
fflush(stdin);		   }
		  }
 }

 if(b6==0)
   {
     strcpy(l1,"Kannada");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
	      createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
fflush(stdin);		   }
		  }
 }


 if(b5==0)
   {
     strcpy(l1,"Malayalam");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
	      createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
fflush(stdin);
	   }
		  }
 }     */  

  if(b7==0)
   {
     strcpy(a1,"Pop");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();

		   }
		  }

 }




 if(b8==0)
   {
     strcpy(a1,"Melody");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
					   }
		  }

 }



 if(b9==0)
   {
     strcpy(a1,"Trap");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();

		   }
		  }

 }

 if(b10==0)
   {
     strcpy(a1,"Classical");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
			
		   }
		  }

 }


 if(b11==0)
   {
     strcpy(a1,"South_Indian");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();

		   }
		  }

 }

/* if(b12==0)
   {
     strcpy(a1,"Renjith_Unni");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
			fflush(stdin);
		   }
		  }

 }

 if(b13==0)
   {
     strcpy(a1,"Hamsalekha");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
			fflush(stdin);
		   }
		  }

 }

 if(b14==0)
   {
     strcpy(a1,"Sanjay_Leela_Bhansali");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ge);
		   if(c2==0)
		   {
		     createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
			 fflush(stdin);

		   }
		  }

 }   */

}












void main()
{ struct song s[20];
 char name[50],artist[50],genre[50],album[50],lan[50],link[100],nin[50],a1[50],l1[50],g1[50];
 int i,j,a,pass=8970,q,pas, in1, lin, gin, sin,c1,c2,alin,arin,l=2;
  FILE *fp1, *fp2, *fp3, *fp4, *fp5, *fp6;

 clrscr();
 printf("--------------------------------------------------------------------------------");
 printf("\t\t\t     SONG SUGGESTION MAKER\n");
 printf("--------------------------------------------------------------------------------");
 printf("Enter 1 for user and 2 for developer: ");
 scanf("%d",&q);
 if(q==2)
 {
 printf("Welcome developer!!!\n---------------------");
 printf("\nEnter password: ");
  scanf("%d",&pas);
  printf("---------------------");
  while(pas==pass)
  {printf("\nEnter 1 to add song details or 0 to exit: ");
   
   scanf("%d",&in1);
  
   if(in1==1)
    {
     insert();
    }
  else
  {
  exit(0);
  }
  }
  }
 else if(q==1)
 {
  fp1=fopen("SONGNAME.txt","r");
 if(fp1==NULL)
 {
 printf("\nError in opening file");
 }
 fp2=fopen("LANG.txt","r");
 if(fp2==NULL)
 {
 printf("\nError in opening file");
 }
 fp3=fopen("GENRE.txt","r");
 if(fp3==NULL)
 {
 printf("\nError in opening file");
 }
 fp4=fopen("ARTIST.txt","r");
 if(fp4==NULL)
 {
 printf("\nError in opening file");
 }
 fp5=fopen("ALBUM.txt","r");
 if(fp5==NULL)
 {
 printf("\nError in opening file");
 }
 fp6=fopen("LINK.txt","r");
 if(fp6==NULL)
 {
 printf("\nError in opening file");
 }

// for(i=0;i<12;i++)
// {
   while(!feof(fp1)||!feof(fp2)||!feof(fp3)||!feof(fp4)||!feof(fp5)||!feof(fp6))
   {
   for(i=0;i<n;i++)
	fscanf(fp1,"%s\n",s[i].na);
	for(i=0;i<n;i++)
	fscanf(fp2,"%s\n",s[i].la);
	for(i=0;i<n;i++)
	fscanf(fp3,"%s\n",s[i].ge);
	for(i=0;i<n;i++)
	fscanf(fp4,"%s\n",s[i].ar);
	for(i=0;i<n;i++)
	fscanf(fp5,"%s\n",s[i].al);
	for(i=0;i<n;i++)
	fscanf(fp6,"%s\n",s[i].li);
   }



 
  do
 {
  
 
  printf("\n---------------------------------------------------------");
 printf("\nPlease select an option to browse the song: ");
  printf("\n---------------------------------------------------------");

 printf("\n\n1. Album\n2. Artist\n3. Genre\n4. Language\n5. Search song\n6. Exit\n");
 scanf("%d",&a);
 

  switch(a)
  {
  
   case 1: printf("\n----------------\nSelect an Album\n----------------\n\n1. Padayappa\n2. Atcham Enbadhu Madamayada\n3. Divide\n4. Premam\n5. Just Maath Maathalli\n6. Velipadinte Pusthakam\n7. Geetha Govindham\n8. Aakasmika\n9. OK Jaanu\n10. Goliyon Ki Rasleela Ram leela\n11. Exit\n");
	scanf("%d",&arin);
		switch(arin)
		{

		case 1:strcpy(a1,"Padayappa");
		       printf("\n---------------------------------------------------------\n");
		      for(i=0,j=1;i<n;i++,j++)
		      {
		       c2=strcmp(a1,s[i].al);
		       if(c2==0)
		       {
			   
			      createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //printf("\n\nSuggestions:-\n");
				 //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 
				
		       }
		       }
			   printf("---------------------------------------------------------");


		 break;

		 case 2:strcpy(a1,"Atcham_Enbadhu_Madamayada");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //printf("\n\nSuggestions:-\n");
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 
		   }
		  }
		   printf("---------------------------------------------------------");


		 break;

		 case 3:strcpy(a1,"Divide");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //printf("\n\nSuggestions:-\n");
				 //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
	

		   }
		  }
			 printf("---------------------------------------------------------");
		 break;

		 case 4:strcpy(a1,"Premam");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				// sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);

		   }
		  }
				printf("---------------------------------------------------------");

		 break;

		 case 5:strcpy(a1,"Just_Maath_Maathalli");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		   createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 
		   }
		  }
printf("\n---------------------------------------------------------");

		 break;

		 case 6:strcpy(a1,"Velipadinte_Pusthakam");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
printf("---------------------------------------------------------");
		 break;

		 case 7:strcpy(a1,"Geetha_Govindham");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 
		   }
		  }
printf("---------------------------------------------------------");

		 break;

		 case 8:strcpy(a1,"Aakasmika");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
		   }
		  }
				 printf("---------------------------------------------------------");


		 break;

		 case 9:strcpy(a1,"OK_Jaanu");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
printf("---------------------------------------------------------");
		 break;

		 case 10:strcpy(a1,"Goliyon_Ki_Rasleela_Ram-leela");
		 printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].al);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 
		   }
		  }
          printf("---------------------------------------------------------");

		 break;


	 case 11: exit(0);

		 default: printf("Wrong Input");
			  break;
	   }
	  break;

   case 2:printf("\n-----------------\nSelect an Artist\n-----------------\n\n1. AR Rahman\n2. Ed Sheeran\n3. Raghu Dixit\n4. Rajesh Murugeshan\n5. Gopi Sundar\n6. Renjith Unni\n7. Hamsalekha\n8. Sanjay Leela Bhansali\n9. Exit\n");
	    /* for(i=0;i<n;i++)
			 {
			  printf("\n%s",s[i].ar);
			 } */

	  scanf("%d",&sin);
	  switch(sin)
	  {
	   case 1:strcpy(a1,"AR_Rahman");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
                  createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");

		 break;

	   case 2:strcpy(a1,"Ed_Sheeran");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

	   case 3:strcpy(a1,"Raghu_Dixit");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=0;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				  

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

	   case 4:strcpy(a1,"Rajesh_Murugeshan");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=0;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

	   case 5:strcpy(a1,"Gopi_Sundar");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=0;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				//  printf("\n\nSuggestions:-\n");
				//  sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				
		  }
		  }
		  printf("---------------------------------------------------------");

		  break;

	   case 6:strcpy(a1,"Renjith_Unni");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=0;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

		case 7:strcpy(a1,"Hamsalekha");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=0;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break; 
 
        case 8:strcpy(a1,"Sanjay_Leela_Bhansali");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(a1,s[i].ar);
		   if(c2==0)
		   {
		          createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				
		   }
		  }
               printf("---------------------------------------------------------");

		 break;
		 
        case 9: exit(0);
		
	   default:printf("Wrong Input...");
		   break;
	  }
	  break;

   case 3: printf("\n--------------------\nSelect the genre:-\n--------------------\n1. Pop\n2. Melody\n3. Trap\n4. Classical\n5. South Indian\n6. Exit\n");
	  scanf("%d",&gin);
	  switch(gin)
	  {
	    case 1:strcpy(g1,"Pop");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(g1,s[i].ge);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		   printf("---------------------------------------------------------");
	    break;

	    case 2:strcpy(g1,"Melody");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(g1,s[i].ge);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				  

		   }
		  }
		  printf("---------------------------------------------------------");
	    break;

	    case 3:strcpy(g1,"Trap");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(g1,s[i].ge);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				  
		   }
		  }
		  printf("---------------------------------------------------------");

	    break;

	    case 4:strcpy(g1,"Classical");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(g1,s[i].ge);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				  

		   }
		  }
		  printf("---------------------------------------------------------");
	    break;

	    case 5:strcpy(g1,"South_Indian");
		printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(g1,s[i].ge);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  //sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		   printf("---------------------------------------------------------");
	    break;

	    case 6:exit(0);

	    default: printf("Wrong input...");
	    }
	  break;

   case 4: printf("\n----------------\nSelect Language\n----------------\n\n1. English\n2. Hindi\n3. Tamil\n4. Kannada\n5. Telugu\n6. Malayalam\n0. Exit\n");
	   scanf("%d",&lin);
	   switch(lin)
	   {
	   case 1:strcpy(l1,"English");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

	   case 2:strcpy(l1,"Hindi");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

	   case 3:strcpy(l1,"Tamil");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;

	   case 4:strcpy(l1,"Kannada");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				

		   }
		  }
		   printf("---------------------------------------------------------");
		  break;

	   case 5:strcpy(l1,"Telugu");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				//  printf("\n\nSuggestions:-\n");
				// sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
			

		   }
		  }
		  	printf("---------------------------------------------------------");
		  break;

	   case 6:strcpy(l1,"Malayalam");
	   printf("\n---------------------------------------------------------\n");
		  for(i=0,j=1;i<n;i++,j++)
		  {
		   c2=strcmp(l1,s[i].la);
		   if(c2==0)
		   {
		    createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				 // printf("\n\nSuggestions:-\n");
				 // sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				 

		   }
		  }
		  printf("---------------------------------------------------------");
		  break;



	   default: printf("Wrong Input...");
	   break;
	   }

	  break;

   case 5:printf("\n----------------\nEnter song name\n---------------- \n(Please give a underscore between words and not a space)\n\n");
	  scanf("%s",nin);
	  printf("\n---------------------------------------------------------\n");
	  for(i=0;i<n;i++)
	  {
	   c1=strcmp(nin,s[i].na);
	   if(c1==0)
	  {
	  createList(l,s[i].na,s[i].li);
				  displayList();
				  printf("\n");
				  deleteList();
				  printf("\n");
				  sugg(s[i].al,s[i].ge,s[i].ar,s[i].la);
				  printf("---------------------------------------------------------");

	   }
	  }

	   break;


   case 6: exit(0);
	   break;

   default: printf("Wrong entry...");
	break;
	}

}while(a!=6);


}
else
{
printf("Wrong Input....");
}

fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(fp4);
   fclose(fp5);
   fclose(fp6);       

 getch();
}