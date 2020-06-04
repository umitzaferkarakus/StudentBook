#include <stdio.h>

struct student
{
    int id;
    char name[80];
    char surname[80];
    char major[80];
};
void add_new_record(struct student[], int);
void accept(struct student[], int);
void display(struct student[], int);
void search(struct student[], int, int);


int main()
{
    struct student data[20];
    int n, choice, id;

    
    do
    {

        printf("\nResult Menu :\n");
        printf("Press 1 to add new record.\n");
		printf("Press 2 to search a record.\n");
        printf("Press 3 to sort the records of students according to their ID numbers.\n");
		printf("Press 4 to display all records.\n");
        printf("Press 5 to exit\n");
        printf("\nEnter choice(0-3) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Number of records you want to enter? : ");
   			scanf("%d", &n);
    		accept(data, n);
    		break;
			
			case 4:
                display(data, n);
                break;
            case 2:
                printf("Enter id to search : ");
                scanf("%d", &id);
                search(data, n, id);
                break;
            case 3:
                display1(data, n);
                break;
            
        }
    }
    while (choice != 5);

    return 0;
}

void accept(struct student list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter id : ");
        scanf("%d", &list[i].id);
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);

        fflush(stdin);
        printf("Enter surname : ");
        gets(list[i].surname);
        
        fflush(stdin);
        printf("Enter major : ");
        gets(list[i].major);
    } 
}

void display(struct student list[80], int s)
{
    int i;

    printf("\n\nID\tName\tsurname\tMajor\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%s\t%s\n", list[i].id, list[i].name, list[i].surname,list[i].major);
    } 
}

void search(struct student list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].id == number)
        {
            printf("ID : %d\nName : %s\nsurname : %s\nMajor : %s\n", list[i].id,
                list[i].name, list[i].surname,list[i].major);
            return ;
        } 
    }
    printf("Record not Found\n");
}





void display1(struct student list[80], int s)
{
    int i;

    printf("\n\nID\tName\tSurname\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%s\n", list[i].id, list[i].name,list[i].surname);
    } 
}


