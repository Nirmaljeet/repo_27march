<<<<<<< HEAD
#include <stdio.h>
=======
#include <stdio>
>>>>>>> test

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
};

int main()
{
    linked_list a;
    return 10;
}
