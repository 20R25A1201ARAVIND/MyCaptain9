#include<stdio.h>
#include<stdlib.h>
struct EMPLOYEE{
    char empName[15],department[25];
    int empNo,age;
    float salary;
};
typedef struct EMPLOYEE employees;
int main(){
    int i,n;
    scanf("%d",&n);//n=number of employees can store
    employees emp[n];
    printf("Enter Employee details: \n");
    for(i=0;i<n;i++){
        printf("\nEnter Employee Number:");
        scanf("%d",&emp[i].empNo);
        printf("\nEnter Employee Name:");
        scanf("%s",&emp[i].empName);
        printf("\nEnter Employee Age:");
        scanf("%d",&emp[i].age);
        printf("\nEnter Employee Department:");
        scanf("%s",&emp[i].department);
        printf("\nEnter Employee Salary:");
        scanf("%f",&emp[i].salary);
    }
    for(i=0;i<n;i++){
        printf("EmpNo \t:");
        printf("%d \n",emp[i].empNo);
         printf("Name \t:");
        printf("%s \n",emp[i].empName);
         printf("Age \t:");
        printf("%d \n",emp[i].age);
         printf("Department\t:");
        printf("%s \n",emp[i].department);
         printf("Salary \t:");
        printf("%f \n",emp[i].salary);
    }
}

//OutPut May Like Follows
/*
1
Enter Employee details:

Enter Employee Number:12345

Enter Employee Name:Chirag

Enter Employee Age:24

Enter Employee Department:IT

Enter Employee Salary:20000
EmpNo   :12345
Name    :Chirag
Age     :24
Department      :IT
Salary  :20000.000000
*/
