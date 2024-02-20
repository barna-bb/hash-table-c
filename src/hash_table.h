// Header file for hash_table.c

// Items
typedef struct {
    char* key;
    char* value;
} ht_item;

// Hash Table
typedef struct {
    int size;
    int count;
    int base_size;
    ht_item** items;
} ht_hash_table;

// API Methods
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* ht, const char* key);