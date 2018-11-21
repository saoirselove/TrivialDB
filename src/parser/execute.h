#ifndef __TRIVIALDB_PARSER_EXECUTE__
#define __TRIVIALDB_PARSER_EXECUTE__

#include "defs.h"

#ifdef __cplusplus
extern "C" {
#endif

void execute_create_database(const char *db_name);
void execute_use_database(const char *db_name);
void execute_drop_database(const char *db_name);
void execute_show_database(const char *db_name);
void execute_create_table(const table_def_t *table);
void execute_drop_table(const char *table_name);
void execute_show_table(const char *table_name);
void execute_insert(const insert_info_t *insert_info);
void execute_quit();
void traverse_expr(const expr_node_t *expr_node);

#ifdef __cplusplus
}
#endif

#endif