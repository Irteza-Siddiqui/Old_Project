#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>
int noc=0,cash=0,gari=0,nob=0,nos=0,ch,l,q[3][10],m,z=0,k=0,j=0,c,f,po,carrs=0,busrs=0,scooterrs=0,info,u;
char s[3][50][10];
char p[3][50][15];
char i[3][50][10];
int menu();
void subinfo();
void bhaijan();
int login();
void departcar();
void departbus();
void departscooter();
void intro();
void check();
void scooterwash();
void status();
void car();
void carwash();
void choice(int);
void bus();
void buswash();
void scooter();
void total();
int main()
{
	intro();
	system("cls");
	int b;
	//b=login();
	b=1;
	if(b==1)
	{
	
while(1)	
{
info=0;
system("cls");
	switch(menu())
	{
		case 1:
			{
				car();
					printf("\nENTER FIRST NAME ONLY:\n\n");
					scanf("%s",&s[0][k][10]);
					printf("\n");
	printf("ENTER LAST 3/4 DIGITS OF VEHICLE:\n\n");
	scanf("%d",&q[0][k]);
	printf("\n");
		printf("ENTER CAR NAME:\n\n");
	scanf("%s",&p[0][k][15]);
	printf("\n");
	printf("ENTER CAR COLOR:\n\n");
	scanf("%s",&i[0][k][10]);
	printf("\n");
	k++;
	carwash();
	break;
			}
			
			case 2:
			{
			bus();
						printf("\nENTER FIRST NAME ONLY:\n\n");
					scanf("%s",&s[1][z][10]);
					printf("\n");
	printf("ENTER LAST 3/4 DIGITS OF VEHICLE:\n\n");
	scanf("%d",&q[1][z]);
	printf("\n");
	printf("ENTER BUS NAME:\n\n");
	scanf("%s",&p[1][z][15]);
	printf("\n");
	printf("ENTER BUS COLOR:\n\n");
	scanf("%s",&i[1][z][10]);
	printf("\n");
	z++;
		buswash();
			break;	
			}
			case 3:
			{
				scooter();
					printf("\nENTER FIRST NAME ONLY:\n\n");
					scanf("%s",&s[2][j][10]);
					printf("\n");
	printf("ENTER SCOOTER NUMBER:\n\n");
	scanf("%d",&q[2][j]);
	printf("\n");
		printf("ENTER SCOOTER NAME:\n\n");
	scanf("%s",&p[2][j][15]);
	printf("\n");
	printf("ENTER SCOOTER COLOR:\n\n");
	scanf("%s",&i[2][j][10]);
	printf("\n");
	j++;
				scooterwash();
				break;
			}
			case 4:
			{
				while(info!=13)
				{
				system("cls");
				printf("\n1>>  ENTER 1 FOR NO.OF CAR/CARS:\n\n");
						printf("2>>  ENTER 2 FOR NO.OF BUS/BUSES:\n\n");
								printf("3>>  ENTER 3 FOR NO.OF SCOOTER/SCOOTERS:\n\n");
										printf("4>>  ENTER 4 FOR CAR AMOUNT COLLECTED:\n\n");
												printf("5>>  ENTER 5 FOR BUS AMOUNT COLLECTED:\n\n");
													printf("6>>  ENTER 6 FOR SCOOTER AMOUNT COLLECTED:\n\n");
														printf("7>>  ENTER 7 FOR CAR OWNER'S NAME:\n\n");
																printf("8>>  ENTER 8 FOR BUS OWNER'S NAME:\n\n");
																		printf("9>>  ENTER 9 FOR SCOOTER OWNER'S NAME:\n\n");
																				printf("10>>  ENTER 10 FOR TOTAL CASH COLLECTED:\n\n");
																					printf("11>>  ENTER 11 FOR TOTAL VEHICLES PARKED:\n\n");
																						printf("12>>  ENTER 12 FOR OVERALL HISTORY:\n\n");
																				printf("13>>  ENTER 13 TO EXIT FROM DETAILS:\n\n");
																					printf ("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
						printf("\nENTER YOUR CHOICE:  \n\n");
																				scanf("%d",&info);
																				subinfo();
																			}
				break;
		}
			
			
				
			
			case 5:
			{
				printf("PRESS 1 FOR DEPARTURE OF CAR\n\n");
				printf("PRESS 2 FOR DEPARTURE OF BUS\n\n");
				printf("PRESS 3 FOR DEPARTURE OF SCOOTER\n");
				printf ("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
						printf("\nENTER YOUR CHOICE:  \n\n");
				scanf("%d",&u);
				printf("\n");
				bhaijan();
				getch();
				break;
			
			}
			case 6:
				{
					printf("\n\nALLAH HAFIZ\n");
					getch();
			exit(0);
			
	
}
}
}

}
return 0;
}
int menu()
{ 
		printf ( "\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb VEHICLE PARKING \xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" ) ;
	printf("\n\t1>>  PRESS 1 FOR CAR Rs.80\n\n\n");
		printf("\n\t2>> PRESS 2 FOR BUS Rs.100\n\n\n");
			printf("\n\t3>>  PRESS 3 FOR SCOOTER Rs.50\n\n\n");
					printf("\n\t4>>  PRESS 4 FOR DETAILS\n\n\n");
						printf("\n\t5>>  PRESS 5 FOR DEPARTURE\n\n\n");
						printf("\n\t6>>  PRESS 6 FOR EXIT\n\n\n");
							printf ("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
						printf("\nENTER YOUR CHOICE:  \n\n");
					scanf("%d",&ch);
					system("cls");
					return ch;
								
	}

void car()
{
	noc++;
	carrs=carrs+80;
	cash=cash+80;
	gari++;
}
void bus()
{
	nob++;
	busrs=busrs+100;
	cash=cash+100;
	gari++;
	
}
void scooter()
{
	nos++;
	scooterrs=scooterrs+50;
	cash=cash+50;
	gari++;
}
void total()
{
	noc+nos+nob;
}
void status()
{
	printf("TOTAL NUMBER OF CAR PARKED ARE: %d\n\n\n",noc);
	printf("TOTAL NUMBER OF BUS PARKED ARE: %d\n\n\n",nob);
	printf("TOTAL NUMBER OF SCOOTER PARKED ARE: %d\n\n\n",nos);
	printf("TOTAL AMOUNT COLLECTED: %d\n\n\n",cash);
	printf("TOTAL NUMBER OF VEHICLES PARKED ARE: %d\n\n\n",gari);
		printf("\nNAME\t\t\t CAR/BUS/SCOOTER NUMBER\t\t\tCAR/BUS/SCOOTER NAME\t\t\t\tCOLOR\n\n");
				printf("THE NAME AND NUMBER PLATE OF THE OWNERS WHOM CAR ARE PAKED HERE ARE:\n");
				for(c=0;c<k;c++)
				{
					printf("\n%s\t\t\t\t\t%d\t\t\t\t%s\t\t\t\t\t%s\n",&s[0][c][10],q[0][c],&p[0][c][15],&i[0][c][10]);
					
				}	
				printf("\nTHE NAME AND NUMBER PLATE OF THE OWNERS WHOM BUS ARE PAKED HERE ARE:\n");
				for(c=0;c<z;c++)
				{
					printf("\n%s\t\t\t\t\t%d\t\t\t\t%s\t\t\t\t\t%s\n",&s[1][c][10],q[1][c],&p[1][c][15],&i[1][c][10]);
				}	
					printf("\nTHE NAME AND NUMBER PLATE OF THE OWNERS WHOM SCOOTERS ARE PAKED HERE ARE:\n");
				for(c=0;c<j;c++)
				{
						printf("\n%s\t\t\t\t\t%d\t\t\t\t%s\t\t\t\t\t%s\n",&s[2][c][10],q[2][c],&p[2][c][15],&i[2][c][10]);
				}	
					printf("\n\nPress any key to continue...\n");	
			getch();
}
void carwash()
{
	int i;
		printf("YOU WANT TO WASH YOUR CAR IN JUST 150RS?\n");
				printf("\nPRESS 1 FOR YES  /  PRESS 2 FOR NO\n\n");
				scanf("%d",&i);
				if(i==1)
				{
				printf("\nWE HAVE SENT YOUR CAR TO THE SERVICE STATION\n");
				cash=cash+150;
				carrs=carrs+150;
				
				printf("\nAFTER WASH YOU WANT TO PARK CAR IN SHADE RS.50RS?\n");
						printf("\nPRESS 1 FOR YES  /  PRESS 2 FOR NO\n\n");
					scanf("%d",&po);
					if(po==1)
				{
						cash=cash+50;
						carrs=carrs+50;
					printf("\nPress any key to continue...\n");
				}
					else
			{
				printf("\nYour answer is no\n");
					printf("\nPress any key to continue...\n");
				}
			}
				else
				{
				printf("\nYour answer is no\n\n");
					printf("\nPress any key to continue...\n");
					}
					
				getch();
}
void buswash()
{
	int i;
		printf("YOU WANT TO WASH YOUR CAR IN JUST 200RS?\n");
				printf("\nPRESS 1 FOR YES  /  PRESS 2 FOR NO\n\n");
				scanf("%d",&i);
				if(i==1)
				{
				printf("\nWe have sent your bus to the service station\n");
				cash=cash+200;
				busrs=busrs+200;
					printf("\nAFTER WASH YOU WANT TO PARK BUS IN SHADE RS.50RS?\n");
						printf("\nPRESS 1 FOR YES  /  PRESS 2 FOR NO\n\n");
					scanf("%d",&po);
					if(po==1)
					{
					cash=cash+50;
					busrs=busrs+50;
					printf("\nPress any key to continue...\n");
				}
					else
			{
				printf("\nYour answer is no\n");
					printf("\nPress any key to continue...\n");
				}
			}
				else
			{
					printf("\nYour answer is no\n");
					printf("\nPress any key to continue...\n");
				}
				getch();
}
void scooterwash()
{
	int i;
		printf("YOU WANT TO WASH YOUR CAR IN JUST 100RS?\n");
				printf("\nPRESS 1 FOR YES  /  PRESS 2 FOR NO\n\n");
				scanf("%d",&i);
				if(i==1)
				{
				printf("\nWe have sent your scooter to the service station\n");
				cash=cash+100;
				scooterrs=scooterrs+100;
				printf("\nAFTER WASH YOU WANT TO PARK SCOOTER IN SHADE RS.50RS?");
					printf("\n\nPRESS 1 FOR YES/PRESS 2 FOR NO\n\n");
					scanf("%d",&po);
					printf("\n");
					if(po==1)
				{
				cash=cash+50;
				scooterrs=scooterrs+50;
					printf("\nPress any key to continue...\n");
					}	
						else
			{
				printf("\nYour answer is no\n");
					printf("\nPress any key to continue...\n");
				}
			}
				else
			{
				printf("\nYour answer is no\n");
					printf("\nPress any key to continue...\n");
				}
				getch();
}
void intro()
{
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb  WELCOME TO PROGRAMMING FUNDAMENTAL'S PROJECT \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb          KIET PARKING  MANAGEMENT             \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb       *       KIETIANS      **                \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb         PRESENTED BY                          \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
    printf("\t\t\xdb          AREEBA ABBASI 12212                  \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb          IRTEZA SIDDIQUI 11971                \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb          AREESH AIJAZ 11565                   \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb      CONTACT US:03378057847,03102918707       \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf(" \n\t Press Any Key To Continue:");
	getch();
}
   


int login()
{	 
char username[10];
char password[10];
int ha=0;
while(ha<5)
{
  printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n\n                       ENTER USERNAME:-");
gets(username);
    	printf(" \n\n                       ENTER PASSWORD:-");
    gets(password);;
    if(strcmp(username,"KIETIANS")==0 && strcmp(password,"KIET")==0)
    {
	printf("Login is successfull\n\n\n");
	printf("Press any key to continue.....\n\n");
	getch();
	return 1;
	}
    else
    {
	printf("Login is unsuccessfull\n\n\n\n");
 
}
ha++;
}
}
void subinfo()
{
	switch(info)
	{
		case 1:
			{
				system("cls");
				printf("\n");
				printf("No of car/cars parked are = %d\n",noc);
				printf("\nPress any key to continue...\n");
					getch();
					break;
			}
			case 2:
			{
				system("cls");
					printf("\n");
				printf("No of bus/buses parked are = %d\n",nob);
				printf("\nPress any key to continue...\n");
					getch();
					break;
			}
				case 3:
			{
				system("cls");
					printf("\n");
				printf("No of scooter/scooters parked are = %d\n",nos);
				printf("\nPress any key to continue...\n");
					getch();
					break;
			}
				case 4:
			{
				system("cls");
					printf("\n");
				printf("Car Amount Collected= %d\n",carrs);
				printf("\n\nPress any key to continue...\n");
					getch();
					break;
			}
				case 5:
			{
				system("cls");
					printf("\n");
				printf("Bus Amount Collected= %d\n",busrs);
				printf("\n\nPress any key to continue...\n");
					getch();
					break;
			}
				case 6:
			{
				system("cls");
					printf("\n");
				printf("Scooter Amount Collected= %d\n",scooterrs);
				printf("\n\nPress any key to continue...\n");
					getch();
					break;
			}
				case 7:
			{
				system("cls");
					printf("\n");
					printf("\nThe name and number plate of the owners whom cars are paked here are:\n");
					printf("\nNAME\t\t\t CAR/BUS/SCOOTER NUMBER\t\t\tCAR/BUS/SCOOTER NAME\t\t\t\tCOLOR\n\n");
			for(c=0;c<k;c++)
				{
						
					printf("\n%s\t\t\t\t\t%d\t\t\t\t%s\t\t\t\t\t%s\n",&s[0][c][10],q[0][c],&p[0][c][15],&i[1][c][10]);
					
				}	
				printf("\n\nPress any key to continue...\n");
					getch();
					break;
			}
			case 8:
				{
					system("cls");
						printf("\n");
						printf("\nThe name and number plate of the owners whom bus are paked here are:\n");
						printf("\nNAME\t\t\t CAR/BUS/SCOOTER NUMBER\t\t\tCAR/BUS/SCOOTER NAME\t\t\t\tCOLOR\n\n");
				for(c=0;c<z;c++)
				{
					printf("\n%s\t\t\t\t\t%d\t\t\t\t%s\t\t\t\t\t%s\n",&s[1][c][10],q[1][c],&p[1][c][15],&i[2][c][10]);
				}	
				printf("\n\nPress any key to continue...\n");
				getch();
					break;
				}
				case 9:
					{
						system("cls");
							printf("\n");
							printf("\nThe name and number plate of the owners whom scooters are paked here are:\n");
							printf("\nNAME\t\t\t CAR/BUS/SCOOTER NUMBER\t\t\tCAR/BUS/SCOOTER NAME\t\t\t\tCOLOR\n\n");
				for(c=0;c<j;c++)
				{
						printf("\n%s\t\t\t\t\t%d\t\t\t\t%s\t\t\t\t\t%s\n",&s[2][c][10],q[2][c],&p[2][c][15],&i[3][c][10]);
				}	
				printf("\n\nPress any key to continue...\n");
					getch();
					break;	
					}
					case 10:
						{
							system("cls");
								printf("\n");
							printf("Total Amount Collected= %d ",cash);
							printf("\n\nPress any key to continue...\n");
								getch();
								break;
								
						}
						case 11:
							{
								system("cls");
									printf("\n");
								printf("Total no.of vehicles parked are = %d",gari);
								printf("\n\nPress any key to continue...\n");
									getch();
									break;
							}
					case 12:
						{
							system("cls");
							status();
							break;
						}
			
					
			default:
				printf("\nPress any key to continue.....\n");
				
				getch();
	}
	}
void departcar()
{
	int op=0,d,value=0;
	printf("Enter your Number plate\n");
	scanf("%d",&d);
for(op=0;op<=noc;op++)
{

if(d==q[0][op])
{
	int pop;
	for(pop=op;pop<=noc;pop++)
	{
strcpy(&s[0][op][10],&s[0][op+1][10]);
strcpy(&p[0][op][15],&p[0][op+1][15]);
strcpy(&i[0][op][10],&i[0][op+1][10]);
q[0][op]=q[0][op+1];
}
printf("\nDEPARTURE COMPLETED");
noc--;
gari--;
value=90;
break;
}
}
if(value!=90)
printf("\n\nThe car with such number plate is not parked here.\n");
printf("\nPress any key to continue....");
}


void departbus()
{
	int op=0,d,value=0;
	printf("Enter your Number plate\n");
	scanf("%d",&d);
for(op=0;op<=10;op++)
{

if(d==q[1][op])
{
strcpy(&s[1][op][10],"-");
strcpy(&p[1][op][15],"-");
strcpy(&i[1][op][10],"-");
q[1][op]=0;
printf("\nDEPARTURE COMPLETED");
nob--;
gari--;
value=90;
break;
}
}
if(value!=90)
printf("\n\nThe bus with such number plate is not parked here.\n");
printf("\nPress any key to continue....");
getch();
}
void departscooter()
{
	int op=0,d,value=0;
	printf("Enter your Number plate\n");
	scanf("%d",&d);
for(op=0;op<=10;op++)
{

if(d==q[2][op])
{
strcpy(&s[2][op][10],"-");
strcpy(&p[2][op][15],"-");
strcpy(&i[2][op][10],"-");
q[2][op]=0;
printf("\nDEPARTURE COMPLETED");
printf("\nPress any key to continue....");
nos--;
gari--;
value=90;
break;
}
}
if(value!=90)
{
printf("\n\nThe scooter with such number plate is not parked here.\n");
printf("\nPress any key to continue....");
getch();
}
}
void bhaijan()
{

		switch(u)
				{
					case 1:
					{
							departcar();
						break;
				
				}
					case 2:
						{
						
						departbus();
						break;
				}
					
					case 3:
						{
						
						departscooter();
						break;
				}
				
		
			
			default:
			{
					printf("Invalid choice");
					printf("\nPress any key to continue....");
					getch();
			}
}
}
