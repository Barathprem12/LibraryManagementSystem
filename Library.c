#include <stdio.h>
struct book
{
    int b_id,b_version,c;
    char b_name[100];
    char a_name[100];
}s[100];
int main()
{
    int o,t=0,n,i,id=1;
     printf("\n\t\t*");
    printf("\n\t\t\t\tLIBRARY");
    printf("\n\t\t*");
    do{
    printf("\n1.ADD BOOKS\n2.VIEW BOOKS\n3.ISSUE BOOK\n4.VIEW ISSUED BOOKS\n5.RETURN BOOKS\n\n");
    printf("ENTER THE OPERATION YOU NEED TO PERFORM: ");
    scanf("%d",&o);  
            if(o==1)
            {
                printf("\n\t\t---------------------------------");
                printf("\n\t\t\t ADDING BOOKS");
                printf("\n\t\t---------------------------------");
                printf("\nENTER THE BOOK NAME TO BE ADDED: ");
                scanf("%s",s[t].b_name);
                printf("ENTER THE AUTHOR NAME: ");
                scanf("%s",s[t].a_name);
                printf("ENTER THE PRINTED VERSION: ");
                scanf("%d",&s[t].b_version);
                printf("BOOK ADDED SUCCESSFULLY........");
                s[t].b_id=id;
                s[t].c=1;
                t++;
                id++;
            }
            if(o==2)
            {
                int flag=1;
                printf("\n\t\t---------------------------------");
                printf("\n\t\t\t DISPLAYING BOOKS");
                printf("\n\t\t---------------------------------");
                printf("\n--------------------------------------------------------------------------------------------");
                printf("\nBOOK ID\t\tBOOK NAME\t\tAUTHOR NAME\t\tVERSION");
                printf("\n--------------------------------------------------------------------------------------------\n");
                for(i=0;i<t;i++)
                {
                    if(s[i].c==1)
                    {
                        printf("%d      \t\t%s       \t\t%s          \t\t%d\n",s[i].b_id,s[i].b_name,s[i].a_name,s[i].b_version);
                        flag=0; 
                    }
                }
                if(flag)
                {
                    printf("NO BOOKS FOUND");
                }
            }
            if(o==3)
            {
                printf("\n\t\t---------------------------------");
                printf("\n\t\t\t ISSUING BOOKS");
                printf("\n\t\t---------------------------------");
                int flag=1,n,x;
                printf("\nENTER THE BOOK ID:");
                scanf("%d",&x);
                for(i=0;i<t;i++)
                {
                    if(x==s[i].b_id && s[i].c==1)
                    {
                        s[i].c=0;
                        printf("\nBOOK IS ISSUED....");
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    printf("\nNO BOOK FOUND!!!!!");
                    printf("\nTRY AGAIN....");
                }
            }
            if(o==4)
            {
                int flag=1;
                printf("\n\t\t---------------------------------");
                printf("\n\t\t\t ISSUED BOOKS");
                printf("\n\t\t---------------------------------");
                printf("\n--------------------------------------------------------------------------------------------");
                printf("\nBOOK ID\t\tBOOK NAME\t\tAUTHOR NAME\t\tVERSION");
                printf("\n--------------------------------------------------------------------------------------------\n");
                for(i=0;i<t;i++)
                {
                    if(s[i].c==0)
                    {
                    printf("%d      \t\t%s       \t\t%s          \t\t%d\n",s[i].b_id,s[i].b_name,s[i].a_name,s[i].b_version);
                    //printf("%d %s %s %d\n",s[i].b_id,s[i].b_name,s[i].a_name,s[i].b_version);
                    flag=0;
                    }
                }
            if(flag)
                printf("ERROR");
            }
            if(o==5)
            {
                int flag=1,n,x;
                 printf("\n\t\t---------------------------------");
                printf("\n\t\t\t RETURN BOOKS");
                printf("\n\t\t---------------------------------");
                printf("\nENTER THE BOOK ID:");
                scanf("%d",&x);
                for(i=0;i<t;i++)
                {
                    if(x==s[i].b_id && s[i].c==0)
                    {
                        s[i].c=1;
                        printf("\nRETURNED SUCCESSFULLY");
                        flag=0;
                        break;
                    }
                }
                    if(flag)
                    printf("\nINVALD ID");
            }
            
            printf("\n\nDO YOU WANT TO CONTINUE...");
            printf("\n1.YES");
            printf("\n2.NO\n");
            scanf("%d",&n);
            if(n==2)
            {
                printf("Thank you");
            }

    }while(n==1);
}
