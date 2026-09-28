#include<stdio.h>
#define SIZE 100
struct student{
    int stu_id;
    int stu_age;
    int stu_marks;
};
void accept_input(struct student *s1)
{
    printf("Enter student ID:");
    scanf("%d",&s1->stu_id);
    printf("Enter student age:");
    scanf("%d",&s1->stu_age);
    printf("Enter student marks:");
    scanf("%d",&s1->stu_marks);
}

void display(struct student s1)
{
    printf("Student ID: %d\t",s1.stu_id);
    printf("Student age: %d\t",s1.stu_age);
    printf("Student marks: %d\n",s1.stu_marks);
}
int main()
{
    struct student s[SIZE];
    int n;
    printf("Enter no of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        accept_input(&s[i]);
    }
    for(int i=0;i<n;i++)
    {
        display(s[i]);
    }
    return 0;
}
