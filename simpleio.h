#ifndef SIMPLEIO_H
#define SIMPLEIO_H

#include <stdbool.h>
#include <stdio.h>

static inline bool createFile(char* fileName , bool debug) {
    FILE* file = fopen(fileName , "r");
    
    if (!file) {
        if (debug) {
            printf("[createFile] Failed to create file: %s\n" , fileName);
        }
        return false;
    }

    fclose(file);

    if (debug) {
        printf("[createFile] Created and closed file successfully.\n");
    }

    return true;
}

static inline FILE* openFile(char* fileName , bool debug) {
    FILE *file = fopen(fileName , "r+");

    if (!file) {
        if (debug) {
            printf("[openFile] Failed to open file: %s\n" , fileName);
        }
        return NULL;
    }
    
    if (debug) {
        printf("[openFile] Opened file successfully.\n");
    }

    return file;
}

static inline void closeFile(FILE* file , bool debug) {
    if (file) {
        fclose(file);
        if (debug) {
            printf("[closeFile] Closed file successfully.\n");
        }
    } else {
        if (debug) {
            printf("[closeFile] File already closed.\n");
        }
    }
}

static inline void writeFile(FILE* file , const char* text , bool debug) {
    if (file) {
        fprintf(file , "%s" , text);
        fflush(file);
        if (debug) {
            printf("[writeFile] Successfully finished writing to file.\n");
        }
    } else {
        if (debug) {
            printf("[writeFile] Failed to write to file: File is closed.");
        }
    }
}

#endif