#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9

struct item
{
    char productname[40],productcomp[40],c;
    int productid;
    int price;
    int Qnt;
} st;

void wel_come(void);
void title(void);
void login();
void menu(void);
void title(void);
void deleteproduct(void);
void gens(void);
void address(void);
void payment(void);
void BKash(void);
void Nagad(void);
void Visa(void);
void End(void);
void user(void);
void Regular(void);
void Discount(void);
void add(void);


void gotoxy(short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void add_item();
void read_item();
void search_item();
void edit_item();
void product();
void main(void)
{
    wel_come();
    user();

}
void wel_come(void)

{
    time_t t;
    time(&t);
    printf("                                                                                                         \n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t%s",ctime(&t));
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t|\t     WELCOME TO \t |\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t|\t\t""SNAP BUY" "  \t|\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t            Address      \t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t        Number\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t      \"BEST BUY SNAP BUY\"\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|Press any key to continue.........\t\t\t\t\t\t\t\t\t\t|\n");

    printf("---------------------------------------------------------------------------------------------------------\n");

    getch();
    system("cls");

}
void user(void)
{
    int x;
    system("cls");
main:
    printf("\n======================== Welcome To Virtual Stores ========================");
    printf("                                                                                          ");
    printf("                                                                                          ");
    printf("\n\t\tPress (1) Admin Panel");
    printf("\n\t\tPress (2) Customer");
    printf("\n\t\tPress (3) Exit!");

    printf("\n\n\t\tEnter your choice[1-3]: ");
    scanf("%d", &x);

    system("cls");
    switch(x)
    {
    case 1:
        login();
        break;
    case 2:
        gens();
        break;
    case 3:
        printf("System Exit");
        exit(0);
        break;
    default:
        printf("Invalid Choice! System Exit\n");
        getch();
    }
}
void login()
{

    int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="admin";
    char pass[10]="1234";
    do
    {

        printf("\n  ========================  LOGIN   ========================  ");
        printf(" \n                        USERNAME:-");
        scanf("%s", &uname);
        printf(" \n                        PASSWORD:-");
        while(i<10)
        {
            pword[i]=getch();
            c=pword[i];
            if(c==13) break;
            else printf("*");
            i++;
        }
        pword[i]='\0';
        i=0;
        if(strcmp(uname,"admin")==0 && strcmp(pword,"1234")==0)
        {
            printf("  \n\n\n       WELCOME TO PRODUCT MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
            printf("\n\n\n\t\t\t\tPress any key to continue...");
            getch();
            break;
        }
        else
        {
            printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
            a++;

            getch();

        }
    }
    while(a<=2);
    if (a>2)
    {
        printf("\nSorry you have entered the wrong username and password for four times!!!");

        getch();

    }
    system("cls");
    menu();
}

void menu(void)
{
    int choice;
    system("cls");
main:
    printf("\n======================== Welcome To Virtual Stores ========================");
    printf("                                                                             ");
    printf("                                                                             ");
    printf("\n\t\tPress <1> Add Products");
    printf("\n\t\tPress <2> Delete Products");
    printf("\n\t\tPress <3> Search Products");
    printf("\n\t\tPress <4> Read Items");
    printf("\n\t\tPress <5> Edit Items");
    printf("\n\t\tPress <6> Exit!");

    printf("\n\n\t\tEnter your choice[1-6]: ");
    scanf("%d", &choice);

    system("cls");

    switch(choice)
    {
    case 1:
        add_item();
        break;
    case 2:
        deleteproduct();
        break;
    case 3:
        search_item();
        break;
    case 4:
        read_item();
        break;
    case 5:
        edit_item();
        break;
    case 6:
        printf("System Exit");
        exit(0);
        break;


    default:
        printf("Invalid Choice! System Exit\n");
        getch();
    }

}
void gens(void)
{
    int ch;
    system("cls");
main:
    printf("\n======================== Welcome To Virtual Stores ========================");
    printf("                                                                                          ");
    printf("                                                                                          ");
    printf("\n\t\tPress (1) Search Products");
    printf("\n\t\tPress (2) Read Items");
    printf("\n\t\tPress (3) Exit!");

    printf("\n\n\t\tEnter your choice[1-3]: ");
    scanf("%d", &ch);

    system("cls");

    switch(ch)
    {
    case 1:
        search_item();
        break;
    case 2:
        read_item();
        break;
    case 3:
        printf("System Exit");
        exit(0);
        break;
    default:
        printf("Invalid Choice! System Exit\n");
        getch();
    }
}


void add_item()
{
    int index, valid;
    char c;
    int a=0;

    FILE *fp;


    do
    {
        system("cls");
        printf("============ Enter Product Detail ============");
        int ID;
        fp = fopen("NextFile.dat","a+");
        if((fp = fopen("NextFile.dat","a+"))!=NULL)
        {
I:
            printf("\nProduct Code\t :");
            scanf("%i",&ID);
            while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
            {

                if(ID == st.productid)
                {
                    printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
                    goto I;
                }
            }
            st.productid = ID;
        }
        else
        {
            printf("\nProduct Code\t :");
            scanf("%i",&st.productid);
        }

        do
        {

            fflush(stdin);
            printf("\nProduct Name\t :");
            gets(st.productname);
            st.productname[0]=toupper(st.productname[0]);

            for (index=0; index<strlen(st.productname); ++index)
            {
                if(isalpha(st.productname[index]))
                    valid = 1;
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n Name contain invalid character. Please 'Enter' again");
                getch();


            }
        }
        while(!valid);


        do
        {
            char productcomp[40];
            fflush(stdin);
            printf("\nProduct Company\t :");
            gets(st.productcomp);
            st.productcomp[0]=toupper(st.productcomp[0]);

            for (index=0; index<strlen(st.productcomp); ++index)
            {
                if(isalpha(st.productcomp[index]))
                    valid = 1;
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n Name contain invalid character. Please 'Enter' again");
                getch();


            }
        }
        while(!valid);

        do
        {
            printf("\nPrice [10-50000]Taka:");
            scanf("%i",&st.price);
            if(st.price<10 || st.price>50000)
            {
                printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
            }
        }
        while(st.price<10 || st.price>50000);

        do
        {
            printf("\nQuantity [1-500]\t:");
            scanf("%i",&st.Qnt);
            if(st.Qnt<1 || st.Qnt>500)
            {
                printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
            }
        }
        while(st.Qnt<1 || st.Qnt>500);


        fp=fopen("NextFile.dat","a");
        fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
        fclose(fp);
        printf("\nPress 'Enter' to add more item and any other key to go to main menu");

    }
    while((c = getch()) =='\r');
    menu();
}


void search_item()
{
    char target[40];
    int found=0;
    FILE *sfile;
    sfile=fopen("NextFile.dat","r");
    printf("\nEnter name to search:");
    fflush(stdin);
    gets(target);
    target[0]=toupper(target[0]);
    while (!feof(sfile) && found==0)
    {
        fscanf(sfile,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt);
        if(strcmp(target, st.productname)==0)
        {
            found=1;
        }
    }

    if(found)
    {
        printf("\n Record found");
        printf("\nProduct Name\t\t:%s  \nProduct Company\t\t:%s \nProduct Price\t\t:%i \nProduct ID\t\t:%i \nProduct Quantity\t:%i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);

    }
    else
        printf("Noo Record found");
    fclose(sfile);
    printf("\nPress any key to go to Main Menu!");
    while((st.c = getch()) =='\r');
    add();
}

void deleteproduct(void)
{
    char target[40];
    int found=0;
    FILE *sfile, *tfile;
    sfile=fopen("NextFile.dat","r");
    tfile=fopen("TempFile.dat","w+");
    printf("\n Enter name to Delete: ");
    fflush(stdin);
    scanf("%s",target);
    target[0]=toupper(target[0]);
    while (fscanf(sfile,"%s %s %i %i %i\n",st.productname,st.productcomp, &st.price,&st.productid,&st.Qnt)!=EOF)
    {
        if(strcmp(target,st.productname)==0)
        {
            found=1;
        }
        else
        {
            fprintf(tfile,"%s %s %i %i %i\n", st.productname,st.productcomp, st.price,st.productid,st.Qnt);
        }
    }
    if(!found)
    {
        printf("\n Record not Found");
        getch();
        menu();
    }
    else
    {
        printf("\n Record deleted");
    }
    fclose(sfile);
    fclose(tfile);
    remove("NextFile.dat");
    rename("TempFile.dat","NextFile.dat");

    printf("\nPress any key to go to Main Menu!");
    while((st.c = getch()) =='\r');
    menu();
}

void read_item()
{
    FILE *f;
    int i, q;
    if((f=fopen("NextFile.dat","r"))==NULL)
    {

        gotoxy(10,3);
        printf("NO RECORDS");
        printf("\n\t\tPress any key to go back to Menu.");
        getch();
        menu();


    }
    else
    {

        gotoxy(0,5);
        for(i=0; i<100; i++)
        {
            printf("-");
        }
        gotoxy(5,6);
        printf("Product Name");
        gotoxy(25,6);
        printf("Product Price");
        gotoxy(40,6);
        printf("Product Company");
        gotoxy(60,6);
        printf("Product CODE");
        gotoxy(80,6);
        printf("Product Quantity\n");

        for(i=0; i<100; i++)
        {
            printf("-");
        }
        q=8;
        while(fscanf(f,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
        {
            gotoxy(5,q);
            printf("%s",st.productname);
            gotoxy(25,q);
            printf("%i",st.price);
            gotoxy(40,q);
            printf("%s",st.productcomp);
            gotoxy(60,q);
            printf("%i",st.productid);
            gotoxy(80,q);
            printf("%i",st.Qnt);

            q++;
        }
        printf("\n");
        for(i=0; i<100; i++)
            printf("-");
    }
    fclose(f);

    printf("\nPress any key to go to Main Menu!");
    getch();
    product();
}
void product()
{
    char target[40];
    int found=0;
    FILE *sfile;
    sfile=fopen("NextFile.dat","r");
    printf("\nEnter name to Product: ");
    fflush(stdin);
    //scanf(&st.productid);
    gets(target);
    target[0]=toupper(target[0]);
    while (!feof(sfile) && found==0)
    {
        fscanf(sfile,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt);
        if(strcmp(target, st.productname)==0)
        {
            found=1;
        }
    }

    if(found)
    {
        printf("\n Record found");
        printf("\nProduct Name\t\t:%s  \nProduct Company\t\t:%s \nProduct Price\t\t:%i \nProduct ID\t\t:%i \nProduct Quantity\t:%i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);

    }
    else
        printf("No Record found");
    int n;
    printf("\nThis Product Your Quantity : ");
    scanf("%d",&n);
    fclose(sfile);
    printf("\nPress any key to go to The Oder.");
    while((st.c = getch()) =='\r');
    add();
}
void add(void)
{
    int ch;
    system("cls");
    printf("====================== Add To Cart =======================");
    printf("                                                          ");
    printf("\n\t\tPress (1) Yes");
    printf("\n\t\tPress (2) No");

    printf("\n\n\t\tEnter your choice[1-2]: ");
    scanf("%d", &ch);
    getchar();

    system("cls");

    switch(ch)
    {
    case 1:
        read_item();
        break;
    case 2:
        address();
        break;
    default:
        printf("Invalid Choice! System Exit\n");
        getch();
    }

}
void edit_item()
{
    int index, valid;
    char target[40];
    FILE *fp, *rp;
    int a=0;
    int id;
    char edit;
    long int size=sizeof(st);
    if((fp=fopen("NextFile.dat","r+"))==NULL)
    {
        printf("NO RECORD ADDED.");
        menu();
    }
    else
    {
        rp = fopen("TempFile.dat","a");
        system("cls");
        printf("Enter Product Code for edit:");
        scanf("%i",&id);
        fflush(stdin);
        while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
        {
            if(id==st.productid)
            {

                a=1;
                printf("\n\t*****  Record Found  *****");
                printf("\nProduct Name\t\t: %s",st.productname);
                printf("\nProduct Company\t\t: %s",st.productcomp);
                printf("\nPrice\t\t\t: %i",st.price);
                printf("\nProduct Code\t\t: %i",st.productid);
                printf("\nProduct Quantity\t:%i",st.Qnt);

                printf("\n\n\t*** New Record ***");
                do
                {

                    fflush(stdin);
                    printf("\nNew Product Name\t\t: ");
                    gets(st.productname);
                    st.productname[0]=toupper(st.productname[0]);

                    for (index=0; index<strlen(st.productname); ++index)
                    {
                        if(isalpha(st.productname[index]))
                            valid = 1;
                        else
                        {
                            valid = 0;
                            break;
                        }
                    }
                    if (!valid)
                    {
                        printf("\n Name contain invalid character. Please 'Enter' again");
                        getch();


                    }
                }
                while(!valid);



                do
                {
                    char productcomp[40];
                    fflush(stdin);
                    printf("\nNew Product Company\t\t:");
                    gets(st.productcomp);
                    st.productcomp[0]=toupper(st.productcomp[0]);

                    for (index=0; index<strlen(st.productcomp); ++index)
                    {
                        if(isalpha(st.productcomp[index]))
                            valid = 1;
                        else
                        {
                            valid = 0;
                            break;
                        }
                    }
                    if (!valid)
                    {
                        printf("\n Name contain invalid character. Please 'Enter' again");
                        getch();


                    }
                }
                while(!valid);

                do
                {
                    printf("\nNew Price [10-5000]Taka:");
                    scanf("%i",&st.price);
                    if(st.price<10 || st.price>5000)
                    {
                        printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
                    }
                }
                while(st.price<10 || st.price>5000);

                printf("\nEnter New Product Code\t\t:");
                scanf("%i",&st.productid);

                do
                {
                    printf("\nNew Quantity [1-500]\t:");
                    scanf("%i",&st.Qnt);
                    if(st.Qnt<1 || st.Qnt>500)
                    {
                        printf("\n\tEnter New Quantity[1-500] only.Re-Enter.");
                    }
                }
                while(st.Qnt<1 || st.Qnt>500);


                printf("Press 'y' to edit the existing record or any key to cancel...");
                edit=getche();
                if(edit=='y' || edit=='Y')
                {
                    fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
                    fflush(stdin);
                    printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
                }
            }
            else
            {
                fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
                fflush(stdin);
            }

        }
        if(!a)
        {
            printf("\n\nTHIS PRODUCT DOESN'T EXIST!!!!");
        }
        fclose(rp);
        fclose(fp);
        remove("NextFile.dat");
        rename("TempFile.dat","NextFile.dat");
        getch();
    }
    menu();
}
void address(void)
{
    system("cls");
    printf("============ Enter Address Detail ============");
    printf("\nFull-Name(ENG) : ");
    char s[100];
    fgets(s,100,stdin);
    printf("\nAddress : ");
    char a[100];
    fgets(a,100,stdin);
    printf("\nRoad No: ");
    int r;
    scanf("%d",&r);
    printf("\nMobile No: ");
    int no;
    scanf("%d",&no);
    printf("\n\n\t\t\tPress any key to continue...");
    getch();
    Regular();
}
void Regular(void)
{
    int ch;
    system("cls");
    printf("====================== Regular Customer =======================");
    printf("                                                               ");
    printf("\n\t\tPress (1) Yes");
    printf("\n\t\tPress (2) No");

    printf("\n\n\t\tEnter your choice[1-2]: ");
    scanf("%d", &ch);

    system("cls");

    switch(ch)
    {
    case 1:
        Discount();
        break;
    case 2:
        payment();
        break;
    default:
        printf("Invalid Choice! System Exit\n");
        getch();
    }
}
void Discount(void)
{
    system("cls");
    printf("\t\n\nCongratulation !! You got 5%% discount for being our regular customer. [Best Buy Snap Buy].\n\n");
    printf("\nPress any key to go to Main Menu!");
    getch();
    payment();
}
void payment(void)
{
    int ch;
    system("cls");
    printf("====================== Enter Payment Option =======================");
    printf("                                                                   ");
    printf("\n\t\tPress (1) Bkash");
    printf("\n\t\tPress (2) Nagad");
    printf("\n\t\tPress (3) Visa Card");
    printf("\n\t\tPress (4) Cash On Dalivery");
    printf("\n\t\tPress (5) Exit!");

    printf("\n\n\t\tEnter your choice[1-4]: ");
    scanf("%i", &ch);

    system("cls");

    switch(ch)
    {
    case 1:
        BKash();
        break;
    case 2:
        Nagad();
        break;
    case 3:
        Visa();
    case 4:
        End();
    case 5:
        user();
    default:
        printf("Invalid Choice! System Exit\n");
        getch();
    }

}
void BKash(void)
{
    printf("============ Virtual Stores ============");
    system("cls");
    int No;
    printf("Bkash No:+880");
    scanf("%d",&No);
    int tk;
    printf("Amount : ");
    scanf("%d",&tk);
    int pin;
    printf("Bkash Pin No: ");
    scanf("%d",&pin);
    getch();
    system("cls");
    printf("Bkash No: %d\n",No);
    printf("Amount: %d\n",tk);
    printf("\n\n\t\t\tPress any key to confram Order...");
    getch();
    End();

}
void Nagad(void)
{
    system("cls");
    printf("============ Virtual Stores ============");
    int No;
    printf("Bkash No: ");
    scanf("%d",&No);
    int tk;
    printf("Amount : ");
    scanf("%d",&tk);
    int pin;
    printf("Bkash Pin No: ");
    scanf("%d",&pin);
    getch();
    system("cls");
    printf("Bkash No: %d\n",No);
    printf("Amount: %d\n",tk);
    printf("\n\n\t\t\tPress any key to confram Order...");
    getch();
    End();
}
void Visa(void)
{
    system("cls");
    printf("============ Virtual Stores ============");
    int No;
    printf("Bkash No: ");
    scanf("%d",&No);
    int tk;
    printf("Amount : ");
    scanf("%d",&tk);
    int pin;
    printf("Bkash Pin No: ");
    scanf("%d",&pin);
    getch();
    system("cls");
    printf("Bkash No: %d\n",No);
    printf("Amount: %d\n",tk);
    printf("\n\n\t\t\tPress any key to confram Order...");
    getch();
    End();

}
void End(void)
{
    printf("\n\nThank you,Your order confirm .\n Please wait 24 hours for delivary.\n\n\n\n");
    getch();
}
