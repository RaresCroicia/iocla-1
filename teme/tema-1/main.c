#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "structs.h"

int add_last(void **arr, int *len, data_structure *data)
{

}

int add_at(void **arr, int *len, data_structure *data, int index)
{

}

void find(void *data_block, int len, int index) 
{

}

int delete_at(void **arr, int *len, int index)
{

}

//sa citesti toata linia, mortii ma-tii hodoboc-velescu
//sa initializezi memoriile pe header + data
int main() {
	void *arr = NULL;
	int len = 0;
	char *command;
	char type;
	head *actual_type;
	actual_type = (head*)malloc(sizeof(*actual_type));
	int8_t aux8, aux8_1;
	int16_t aux16;
	int32_t aux32, aux32_1;
	char *nume1, *nume2;
	fscanf(stdin, "%s", command);
	while(!strcmp(command, "exit")){
		/// code
		if(!strcmp(command, "insert")){
			fscanf(stdin, "%c", &type);
			if(type == '1'){
				fscanf("%s%"PRId8"%"PRId8"%s", nume1, &aux8, &aux8_1, nume2); //astea sunt datele
				actual_type->type = '1';
				actual_type->len = sizeof(nume1) + sizeof(aux8) + sizeof(aux8_1) + sizeof(nume2);
				insert_pe_masa(); //ideea de baza asta e, sa nu uiti
			}
		}

		continue;
	}

	return 0;
}
