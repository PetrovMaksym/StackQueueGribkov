#pragma once
#include <iostream>
struct list;
struct queue;
void init(queue* q);
int  isempty(queue* q);
void insert( queue* q, std::string strvar);
list* addelem(list* lst, std::string strvar);
list* push_back(std::string strvar);
void print( queue* q);
std::string remove( queue* q);

void midle();