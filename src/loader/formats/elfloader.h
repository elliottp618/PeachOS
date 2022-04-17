#pragma once
#include <stdint.h>
#include <stddef.h>
#include "elf.h"
#include "config.h"

struct elf_file {
    char filename[PEACHOS_MAX_PATH];
    int in_memory_size; // how large the elf file is when loaded into memory
    void* elf_memory; // physical memory address where ELF file is loaded
    void* virtual_base_address; // the lowest address of virtual memory
    void* virtual_end_address;
    void* physical_base_address;
    void* physical_end_address;
};
