#ifndef LIST_TYPE_H
#define LIST_TYPE_H

/* ===================================================================
 *
 *                 -*-  A resume of a static list struct    -*-
 *
 * const char *subclass := "queue" || "stack" || "deque"
 *  meta_data *elements := {something data, identifier type}
 *       id_state state := {0:empty, 1:available, 2:full}
 *       int last_index := index of vector whose is used to control i/o
 *
 * ====================================================================
 */


// for aux the enums
static const char *type_strings[] = { "integer", "character",  "real"};
static const char *state_strings[] = {"empty", "available", "full"};

typedef enum {
    empty,
    available,
    full
} id_state;


typedef struct {
    char subclass[10];
    meta_data *elements;
    id_state state;
    int last_index;
    int size;
} list;

#endif //LIST_TYPE_H