int main(int argc, char *argv[])
{
    int empno, day;
    float rpd, salary;
    char empna[10], ans;
    do {
        printf("\nENTER THE EMPLOYEE NUMBER: ");
        scanf("%d", &empno);
        printf("ENTER THE EMPLOYEE NAME: ");
        scanf("%s", &empna);
        printf("ENTER THE NO. OF DAYS WORK: ");
        scanf("%d", &day);
        printf("ENTER THE RATE PER DAY: ");
        scanf("%f", &rpd);
        salary = rpd *day;  
        printf("YOUR SALARY IS: %.2f", salary);
        printf("\nPROCESS ANOTHER: (Y OR N)?");
        scanf("%s", &ans);
               
        }while((ans=='Y')||(ans=='y'));
        printf("\nTHANK YOU FOR USING THE SYSTEM!\n");
  system("PAUSE");	
  return 0;
}

