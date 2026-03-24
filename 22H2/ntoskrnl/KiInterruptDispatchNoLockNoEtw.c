/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FF4B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1403FFDA0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FFDA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FFDA0: mov     rdx, rsp
 * 00000001403FFDA3: mov     rcx, gs:8758h
 * 00000001403FFDAC: lea     rax, [rcx-6000h]
 * 00000001403FFDB3: cmp     rax, rsp
 * 00000001403FFDB6: ja      short loc_1403FFDBD
 * 00000001403FFDB8: cmp     rsp, rcx
 * 00000001403FFDBB: jb      short loc_1403FFDC9
 * 00000001403FFDBD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FFDC4: jnz     short loc_1403FFDC9
 * 00000001403FFDC6: mov     rsp, rcx
 * 00000001403FFDC9: sub     rsp, 20h
 * 00000001403FFDCD: mov     [rsp+20h+var_10], rdx
 * 00000001403FFDD2: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001403FFDD7: mov     rsp, [rsp+20h+var_10]
 * 00000001403FFDDC: mov     rcx, rsi
 * 00000001403FFDDF: call    HalPerformEndOfInterrupt
 * 00000001403FFDE4: mov     rcx, gs:20h
 * 00000001403FFDED: cmp     byte ptr [rcx+20h], 1
 * 00000001403FFDF1: ja      short loc_1403FFE6D
 * 00000001403FFDF3: rdtsc
 * 00000001403FFDF5: shl     rdx, 20h
 * 00000001403FFDF9: or      rax, rdx
 * 00000001403FFDFC: sub     rax, [rcx+7EC0h]
 * 00000001403FFE03: add     [rcx+7F38h], rax
 * 00000001403FFE0A: add     [rcx+7EC0h], rax
 * 00000001403FFE11: mov     r8, rax
 * 00000001403FFE14: mov     rax, [rcx+8]
 * 00000001403FFE18: test    byte ptr [rax+2], 72h
 * 00000001403FFE1C: jz      short loc_1403FFE31
 * 00000001403FFE1E: xor     edx, edx
 * 00000001403FFE20: call    KiBeginThreadAccountingPeriod
 * 00000001403FFE25: mov     rcx, gs:20h
 * 00000001403FFE2E: inc     byte ptr [rcx+20h]
 * 00000001403FFE31: mov     dl, [rcx+6]
 * 00000001403FFE34: and     byte ptr [rcx+6], 0
 * 00000001403FFE38: cmp     byte ptr [rcx+7], 0
 * 00000001403FFE3C: jnz     short loc_1403FFE6D
 * 00000001403FFE3E: test    dl, dl
 * 00000001403FFE40: jz      short loc_1403FFE6D
 * 00000001403FFE42: cmp     byte ptr [rbp-57h], 2
 * 00000001403FFE46: jnb     short loc_1403FFE53
 * 00000001403FFE48: and     byte ptr [rcx+20h], 0
 * 00000001403FFE4C: call    KiDpcInterruptBypass
 * 00000001403FFE51: jmp     short loc_1403FFE70
 * 00000001403FFE53: mov     ecx, 2
 * 00000001403FFE58: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FFE5F: nop     dword ptr [rax+rax+00h]
 * 00000001403FFE64: mov     rcx, gs:20h
 * 00000001403FFE6D: dec     byte ptr [rcx+20h]
 * 00000001403FFE70: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FFE74: cmp     cs:KiIrqlFlags, 0
 * 00000001403FFE7B: jz      short loc_1403FFE84
 * 00000001403FFE7D: call    KzSetIrqlUnsafe
 * 00000001403FFE82: jmp     short loc_1403FFE88
 * 00000001403FFE84: mov     cr8, rcx
 * 00000001403FFE88: mov     rsi, [rbp+0D0h]
 * 00000001403FFE8F: test    byte ptr [rbp+0F0h], 1
 * 00000001403FFE96: jz      loc_140400138
 * 00000001403FFE9C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FFEA3: jz      short loc_1403FFEA8
 * 00000001403FFEA5: stac
 * 00000001403FFEA8: mov     rcx, gs:188h
 * 00000001403FFEB1: test    byte ptr [rcx+0C2h], 3
 * 00000001403FFEB8: jz      short loc_1403FFED5
 * 00000001403FFEBA: mov     ecx, 1
 * 00000001403FFEBF: mov     cr8, rcx
 * 00000001403FFEC3: sti
 * 00000001403FFEC4: call    KiInitiateUserApc
 * 00000001403FFEC9: cli
 * 00000001403FFECA: mov     ecx, 0
 * 00000001403FFECF: mov     cr8, rcx
 * 00000001403FFED3: jmp     short loc_1403FFEA8
 * 00000001403FFED5: test    byte ptr gs:86Ch, 2
 * 00000001403FFEDE: jz      short loc_1403FFEE7
 * 00000001403FFEE0: xor     ecx, ecx
 * 00000001403FFEE2: call    KiUpdateStibpPairing
 * 00000001403FFEE7: mov     rcx, gs:188h
 * 00000001403FFEF0: test    dword ptr [rcx], 8000000h
 * 00000001403FFEF6: jz      short loc_1403FFEFD
 * 00000001403FFEF8: call    KiRestoreSetContextState
 * 00000001403FFEFD: mov     rcx, gs:188h
 * 00000001403FFF06: test    dword ptr [rcx], 40010000h
 * 00000001403FFF0C: jz      short loc_1403FFF22
 * 00000001403FFF0E: test    byte ptr [rcx+2], 1
 * 00000001403FFF12: jz      short loc_1403FFF22
 * 00000001403FFF14: call    KiCopyCounters
 * 00000001403FFF19: mov     rcx, gs:188h
 * 00000001403FFF22: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FFF26: cmp     word ptr [rbp+80h], 0
 * 00000001403FFF2E: jz      short loc_1403FFF35
 * 00000001403FFF30: call    KiRestoreDebugRegisterState
 * 00000001403FFF35: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FFF39: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FFF3D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FFF41: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FFF45: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FFF49: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FFF4D: mov     r11, [rbp-20h]
 * 00000001403FFF51: mov     r10, [rbp-28h]
 * 00000001403FFF55: mov     r9, [rbp-30h]
 * 00000001403FFF59: mov     r8, [rbp-38h]
 * 00000001403FFF5D: mov     byte ptr gs:856h, 0
 * 00000001403FFF66: movzx   eax, word ptr gs:86Ah
 * 00000001403FFF6F: cmp     gs:864h, ax
 * 00000001403FFF78: jz      short loc_1403FFF8C
 * 00000001403FFF7A: mov     gs:864h, ax
 * 00000001403FFF83: mov     ecx, 48h ; 'H'
 * 00000001403FFF88: xor     edx, edx
 * 00000001403FFF8A: wrmsr
 * 00000001403FFF8C: btr     word ptr gs:860h, 2
 * 00000001403FFF97: jnb     short loc_1403FFFA7
 * 00000001403FFF99: mov     eax, 1
 * 00000001403FFF9E: xor     edx, edx
 * 00000001403FFFA0: mov     ecx, 49h ; 'I'
 * 00000001403FFFA5: wrmsr
 * 00000001403FFFA7: btr     word ptr gs:860h, 5
 * 00000001403FFFB2: jnb     loc_1404000DD
 * 00000001403FFFB8: call    loc_1404000CB
 * 00000001403FFFBD: add     rsp, 8
 * 00000001403FFFC1: call    loc_1404000D4
 * 00000001403FFFC6: add     rsp, 8
 * 00000001403FFFCA: call    loc_1403FFFBD
 * 00000001403FFFCF: add     rsp, 8
 * 00000001403FFFD3: call    loc_1403FFFC6
 * 00000001403FFFD8: add     rsp, 8
 * 00000001403FFFDC: call    loc_1403FFFCF
 * 00000001403FFFE1: add     rsp, 8
 * 00000001403FFFE5: call    loc_1403FFFD8
 * 00000001403FFFEA: add     rsp, 8
 * 00000001403FFFEE: call    loc_1403FFFE1
 * 00000001403FFFF3: add     rsp, 8
 * 00000001403FFFF7: call    loc_1403FFFEA
 * 00000001403FFFFC: add     rsp, 8
 * 0000000140400000: call    loc_1403FFFF3
 * 0000000140400005: add     rsp, 8
 * 0000000140400009: call    loc_1403FFFFC
 * 000000014040000E: add     rsp, 8
 * 0000000140400012: call    loc_140400005
 * 0000000140400017: add     rsp, 8
 * 000000014040001B: call    loc_14040000E
 * 0000000140400020: add     rsp, 8
 * 0000000140400024: call    loc_140400017
 * 0000000140400029: add     rsp, 8
 * 000000014040002D: call    loc_140400020
 * 0000000140400032: add     rsp, 8
 * 0000000140400036: call    loc_140400029
 * 000000014040003B: add     rsp, 8
 * 000000014040003F: call    loc_140400032
 * 0000000140400044: add     rsp, 8
 * 0000000140400048: call    loc_14040003B
 * 000000014040004D: add     rsp, 8
 * 0000000140400051: call    loc_140400044
 * 0000000140400056: add     rsp, 8
 * 000000014040005A: call    loc_14040004D
 * 000000014040005F: add     rsp, 8
 * 0000000140400063: call    loc_140400056
 * 0000000140400068: add     rsp, 8
 * 000000014040006C: call    loc_14040005F
 * 0000000140400071: add     rsp, 8
 * 0000000140400075: call    loc_140400068
 * 000000014040007A: add     rsp, 8
 * 000000014040007E: call    loc_140400071
 * 0000000140400083: add     rsp, 8
 * 0000000140400087: call    loc_14040007A
 * 000000014040008C: add     rsp, 8
 * 0000000140400090: call    loc_140400083
 * 0000000140400095: add     rsp, 8
 * 0000000140400099: call    loc_14040008C
 * 000000014040009E: add     rsp, 8
 * 00000001404000A2: call    loc_140400095
 * 00000001404000A7: add     rsp, 8
 * 00000001404000AB: call    loc_14040009E
 * 00000001404000B0: add     rsp, 8
 * 00000001404000B4: call    loc_1404000A7
 * 00000001404000B9: add     rsp, 8
 * 00000001404000BD: call    loc_1404000B0
 * 00000001404000C2: add     rsp, 8
 * 00000001404000C6: call    loc_1404000B9
 * 00000001404000CB: add     rsp, 8
 * 00000001404000CF: call    loc_1404000C2
 * 00000001404000D4: add     rsp, 8
 * 00000001404000D8: mov     eax, 0DADAh
 * 00000001404000DD: test    word ptr gs:860h, 80h
 * 00000001404000E8: jz      short loc_1404000F6
 * 00000001404000EA: xor     eax, eax
 * 00000001404000EC: xor     edx, edx
 * 00000001404000EE: mov     ecx, 1
 * 00000001404000F3: div     rcx
 * 00000001404000F6: mov     rdx, [rbp-40h]
 * 00000001404000FA: mov     rcx, [rbp-48h]
 * 00000001404000FE: mov     rax, [rbp-50h]
 * 0000000140400102: mov     rsp, rbp
 * 0000000140400105: mov     rbp, [rbp+0D8h]
 * 000000014040010C: add     rsp, 0E8h
 * 0000000140400113: test    cs:KiKvaShadow, 1
 * 000000014040011A: jz      short loc_140400121
 * 000000014040011C: jmp     KiKernelExit
 * 0000000140400121: test    word ptr gs:860h, 100h
 * 000000014040012C: jz      short loc_140400133
 * 000000014040012E: verw    [rsp-1C8h+arg_1E0]
 * 0000000140400133: swapgs
 * 0000000140400136: iretq
 * 0000000140400138: ldmxcsr dword ptr [rbp-54h]
 * 000000014040013C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400140: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400144: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400148: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040014C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400150: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400154: mov     r11, [rbp-20h]
 * 0000000140400158: mov     r10, [rbp-28h]
 * 000000014040015C: mov     r9, [rbp-30h]
 * 0000000140400160: mov     r8, [rbp-38h]
 * 0000000140400164: mov     rdx, [rbp-40h]
 * 0000000140400168: mov     rcx, [rbp-48h]
 * 000000014040016C: mov     rax, [rbp-50h]
 * 0000000140400170: mov     rsp, rbp
 * 0000000140400173: mov     rbp, [rbp+0D8h]
 * 000000014040017A: add     rsp, 0E8h
 * 0000000140400181: iretq
 */
