/*
 * XREFs of HvlpSetRegister64 @ 0x1404F9F80
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7298 (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404F146C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x1404F184C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA514 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404FA6D0 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpSetRegister64 @ 0x1404F9F80
 * Reason: Hex-Rays returned no pseudocode for 0x1404F9F80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F9F80: sub     rsp, 28h
 * 00000001404F9F84: mov     eax, 90007h
 * 00000001404F9F89: cmp     ecx, eax
 * 00000001404F9F8B: jg      short loc_1404F9FDB
 * 00000001404F9F8D: jz      short loc_1404F9FD4
 * 00000001404F9F8F: cmp     ecx, 210h
 * 00000001404F9F95: jl      short loc_1404FA012
 * 00000001404F9F97: cmp     ecx, 214h
 * 00000001404F9F9D: jle     short loc_1404F9FCC
 * 00000001404F9F9F: cmp     ecx, 215h
 * 00000001404F9FA5: jz      short loc_1404F9FC5
 * 00000001404F9FA7: cmp     ecx, 270h
 * 00000001404F9FAD: jz      short loc_1404F9FBE
 * 00000001404F9FAF: cmp     ecx, 90002h
 * 00000001404F9FB5: jnz     short loc_1404FA012
 * 00000001404F9FB7: mov     ecx, 40000000h
 * 00000001404F9FBC: jmp     short loc_1404FA02C
 * 00000001404F9FBE: mov     ecx, 40000116h
 * 00000001404F9FC3: jmp     short loc_1404FA02C
 * 00000001404F9FC5: mov     ecx, 40000105h
 * 00000001404F9FCA: jmp     short loc_1404FA02C
 * 00000001404F9FCC: add     ecx, 3FFFFEF0h
 * 00000001404F9FD2: jmp     short loc_1404FA02C
 * 00000001404F9FD4: mov     ecx, 40000004h
 * 00000001404F9FD9: jmp     short loc_1404FA02C
 * 00000001404F9FDB: cmp     ecx, 90013h
 * 00000001404F9FE1: jz      short loc_1404FA027
 * 00000001404F9FE3: cmp     ecx, 90017h
 * 00000001404F9FE9: jz      short loc_1404FA020
 * 00000001404F9FEB: cmp     ecx, 9FFFFh
 * 00000001404F9FF1: jle     short loc_1404FA012
 * 00000001404F9FF3: cmp     ecx, 0A000Fh
 * 00000001404F9FF9: jle     short loc_1404FA00A
 * 00000001404F9FFB: cmp     ecx, 0A0013h
 * 00000001404FA001: jnz     short loc_1404FA012
 * 00000001404FA003: mov     ecx, 40000083h
 * 00000001404FA008: jmp     short loc_1404FA02C
 * 00000001404FA00A: add     ecx, 3FF60090h
 * 00000001404FA010: jmp     short loc_1404FA02C
 * 00000001404FA012: lea     rcx, unk_140C12590
 * 00000001404FA019: call    RtlRaiseException
 * 00000001404FA01E: jmp     short loc_1404FA035
 * 00000001404FA020: mov     ecx, 40000021h
 * 00000001404FA025: jmp     short loc_1404FA02C
 * 00000001404FA027: mov     ecx, 40000073h
 * 00000001404FA02C: mov     rax, rdx
 * 00000001404FA02F: shr     rdx, 20h
 * 00000001404FA033: wrmsr
 * 00000001404FA035: add     rsp, 28h
 * 00000001404FA039: retn
 */
