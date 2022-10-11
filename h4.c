#include <pthread.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <stdio.h> 
int global_positives = 0; 
typedef struct list {         struct list *next;         double val; 
} * list;  
void *count_positives(struct list *l) {         struct list *p; 
        for(p = l; p->next ; p = p -> next) 
        { 
                if (p -> val > 0.0) 
                        ++global_positives; 
        } 
