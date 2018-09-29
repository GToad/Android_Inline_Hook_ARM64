#ifndef _FIXOPCODE_H
#define _FIXOPCODE_H

#include <stdio.h>
#include "Ihook.h"

#define ALIGN_PC(pc)	(pc & 0xFFFFFFFC)

bool isTargetAddrInBackup(uint64_t target_addr, uint64_t hook_addr, int backup_length);

int lengthFixArm64(uint32_t opcode);

static int getTypeInArm64(uint32_t instruction);
static int getTypeInArm32(uint32_t instruction);

int fixPCOpcodeArm(void *fixOpcodes , INLINE_HOOK_INFO* pstInlineHook);

int fixPCOpcodeArm64(uint64_t pc, uint64_t lr, uint32_t instruction, uint32_t *trampoline_instructions, INLINE_HOOK_INFO* pstInlineHook);


#endif