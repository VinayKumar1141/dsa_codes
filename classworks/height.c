#include <stdio.h>
#include <stdlib.h>
 struct candidate
{
    int height;
};
void readcandidate(struct  candidate   *ptr, int n);
void displaycandidate(struct candidate  *ptr, int n);

int main()
{
    int n;
    struct  candidate *ptr;
    printf("Enter total number of candidates : \n");
    scanf("%d \n", &n);
    ptr = (struct  candidate*)malloc(sizeof(struct  candidate) * n);
    readcandidate(ptr, n);
    displaycandidate(ptr, n);
    free(ptr);
    return 0;
}
void readcandidate(struct candidate *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter candidate height: \n", i + 1);
        scanf("%d \n", &(ptr + i)->height);
     }
}
void displaycandidate(struct candidate *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d height of candidate : %d \n", i + 1, (ptr + i)->height );
    }

}
