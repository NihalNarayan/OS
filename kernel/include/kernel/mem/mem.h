#ifndef MEM_H
#define MEM_H
    #include <kernel/multiboot_32.h>
    void set_multiboot_info_t(multiboot_info_t* m);
    void allocate_buffer();
    void parse_available_mem();
    uint32_t* get_page();
    void free_page(uint32_t *page);
#endif