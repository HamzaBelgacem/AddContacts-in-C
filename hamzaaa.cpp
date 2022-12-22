#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


struct contact {
    
    char Number[15];
    char address[14];
    char codedep[15];
    char Name[29];
};

int main() {
    struct contact contact[100];
    int menu;
    int n = 0;
    int i, j, n1, n2, n3, n4, R,n5,n6,n7,n8,n9,n10;
    char temp[29];
    int x = 0;
    int c;
  char num[20];
   int s = 0;
    int f = 0;
   char Delete_Name[20];  
    
   char Name[20]; 

system("color 4F");
    do {
        R = 0;
        printf("\n Mobile List\n");
        printf("===========================\n");
        printf("1. Add a contact\n");
        printf("2. Display list of contacts\n");
        printf("3. search for a Contact\n");
        printf("4. Delete a Contact\n");
        printf("5. Quit\n");
        printf("CHOSE MENU: ");
        scanf("%d", &menu); 
        system("cls");

        switch (menu) {
        case 1:

            printf("Add a contact\n");
            do {
                n1 = n2 = 1;
                printf("Enter the name : ");
                scanf(" %[^\n]", contact[n].Name); 

                if (strlen(contact[n].Name) > 30) {
                    printf("between 1 and 30 please !.\n");
                    n1 = 0;
                }

                if (!isalpha(contact[n].Name[0])) {
                    printf("The letters must be into (A-Z ou a-z).\n");
                    n1 = 0;
                }

            } while (n1 == 0 || n2 == 0);

            do {
                n3 = n4 = 1;
                printf("Enter a mobile number (between 6 and 12):");
                scanf("%s", contact[n].Number); 

                if (strlen(contact[n].Number) < 6 || strlen(contact[n].Number) > 12) {
                    printf("between 6 and 10 please.\n");
                    n3 = 0;
                }

                for (i = 0; i < strlen(contact[n].Number); i++) {
                    if (!isdigit(contact[n].Number[i])) {
                        n4 = 0;
                    }
                }
                if (n4 == 0) {
                    printf("Numeric Letters PLEASE ! (0-9).\n");
                }
            } while (n3 == 0 || n4 == 0);
  do {
                n5 = n6 = 1;
                printf("Enter the address of your contact: ");
                scanf(" %[^\n]", contact[n].address); 

                if (strlen(contact[n].address) > 30) {
                    printf("between 1 and 30 please !.\n");
                    n5 = 0;
                }

                if (!isalpha(contact[n].address[0])) {
                    printf("The letters must be into (A-Z ou a-z).\n");
                    n5 = 0;
                }
                

            } while (n5 == 0 || n6 == 0);
            do {
                n7 = n8 = 1;
                printf("Eneter the department code: ");
                scanf(" %[^\n]", contact[n].codedep); 

                if (strlen(contact[n].Name) > 30) {
                    printf("between 1 and 30 please !.\n");
                    n7 = 0;
                }

                

            } while (n7 == 0 || n8 == 0);
            
            printf("\n");
            printf("New contact successfully added!\n\n");
            printf("Name : %s\n", contact[n].Name);
            printf("Number : %s\n", contact[n].Number);
            printf(" E-mail address : %s\n\n",contact[n].address);
            printf("The departement code :%s\n\n",contact[n].codedep);
            printf("Press Enter to continue...");
            n++;
            getchar();
            getchar();
            system("cls");
            R = 0;
          
            break;


        case 2:
            printf("Display list of contacts.\n\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n - 1; j++) {
                    if (strcmp(contact[j].Name, contact[j + 1].Name) > 0) {
                        strcpy(temp, contact[j].Name);
                        strcpy(contact[j].Name, contact[j + 1].Name);
                        strcpy(contact[j + 1].Name, temp);

                        strcpy(temp, contact[j].Number);
                        strcpy(contact[j].Number, contact[j + 1].Number);
                        strcpy(contact[j + 1].Number, temp);




 strcpy(temp, contact[j].address);
                        strcpy(contact[j].address, contact[j + 1].address);
                        strcpy(contact[j + 1].address, temp);
                        
                        
                        
                         strcpy(temp, contact[j].codedep);
                        strcpy(contact[j].codedep, contact[j + 1].codedep);
                        strcpy(contact[j + 1].codedep, temp);
                    }
                }
            }
            printf("     # Name                      mobile_num         address            departement code\n");
            for (i = 0; i < n; i++) {
                printf("    %d %s                %s          %s           %s\n", i + 1, contact[i].Name, contact[i].Number,contact[i].address,contact[i].codedep);
            }

            getchar();
            getchar();
            system("cls");
            R = 0;
            break;
case 3:
          
     printf("search for a contact\n");
           printf("\n PLEASE GIVE YOUR CONTACT'S NUMBER TO KNOW THE NAME !");
   printf("\n Number: ");
  
   scanf("%s", num);
   s=0;
   i=0;
    do 
    {

if(strcmp(num, contact[i].Number) == 0) 
         s=1;
         else 
         { i++;
         s=0;
        }
         }
while ((i>n)&&(s==0));
if (s==1)
            printf("\n your desired contact is : %s ",contact[i].Name);          
else 

printf("The name does not exist, please insert another one \n");

    
  break;
  
   
   case 4 :
   	  
      printf("Name: ");
      scanf("%s", Delete_Name);

      for (i = 0; i < n; i++)
      {
    
      
        if (strcmp(Delete_Name, contact[i].Name) == 0) 
            {
             
                 
                  strcpy(contact[n].Name, contact[n].Name); 
                  strcpy(contact[n].Number, contact[n].Number); 
              
               printf("Number deleted from the directory.\n\n");
              n=n-1; 
              
            } 
            else printf("the number does'nt exist");
        }
        

     getchar();
          getchar();
            system("cls");
            R=0;
        
         
break;
case 5:
    exit(0);
default:
    printf("give a Number that exists please !\n");
   
        }

   
   
   
        }

    
	 while (R == 0);
    getchar();
    return 0;
}

