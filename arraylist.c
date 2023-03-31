#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  ArrayList *aux = (ArrayList*)malloc(sizeof(ArrayList));
  aux->capacity = 2;
  aux->size = 0;
  aux->data = (void*)malloc(sizeof(void)*aux->capacity);
    return aux;
}

void append(ArrayList * l, void * data){
  if(l == NULL)
  {
    return;
  }

  if(l->size == l->capacity)
  {
  
    l->data = realloc(l->data, (l->capacity*2)*sizeof(void*));
    l->data[l->size] = data;
    l->size++;
    l->capacity*=2;
    
  }
  else
  {
    l->data[l->size] = data;
    l->size++;
    
  }
}

void push(ArrayList * l, void * data, int i){
  if(i>l->size)
  {
    return;
  }
  if(l->size == l->capacity)
  {
    l->data = realloc(l->data, (l->capacity*2)*sizeof(void*));
    l->capacity*=2;
  }
  
    for(int j = l->size; j>i;j--)
      {
  
        l->data[j]=l->data[j-1];
        
      }
    l->data[i]=data;
    l->size++;
    
}

void* pop(ArrayList * l, int i){
  

  
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
