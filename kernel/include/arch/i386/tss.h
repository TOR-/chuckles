#ifndef ARCH_I386_TSS_H
#define ARCH_I386_TSS_H

struct tss_entry_struct
{
   uint32_t prev_tss;   // If hardware task switching was to be done
   uint32_t esp0;       // Stack pointer for return to kernel mode
   uint32_t ss0;        // Stack segment for return to kernel mode
   // All below unused in software task switching
   uint32_t esp1;
   uint32_t ss1;
   uint32_t esp2;
   uint32_t ss2;
   uint32_t cr3;
   uint32_t eip;
   uint32_t eflags;
   uint32_t eax;
   uint32_t ecx;
   uint32_t edx;
   uint32_t ebx;
   uint32_t esp;
   uint32_t ebp;
   uint32_t esi;
   uint32_t edi;
   uint32_t es;
   uint32_t cs;
   uint32_t ss;
   uint32_t ds;
   uint32_t fs;
   uint32_t gs;
   uint32_t ldt;
   uint16_t trap;
   uint16_t iomap_base;
} __attribute__ ((packed));

typedef struct tss_entry_struct tss_entry_t;

#endif
