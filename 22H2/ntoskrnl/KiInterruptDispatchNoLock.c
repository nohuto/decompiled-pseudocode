/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1403FF9B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FF360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1403FF9B0 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1403FF9B0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FF9B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FF9B0: mov     rdx, rsp
 * 00000001403FF9B3: mov     rcx, gs:8758h
 * 00000001403FF9BC: lea     rax, [rcx-6000h]
 * 00000001403FF9C3: cmp     rax, rsp
 * 00000001403FF9C6: ja      short loc_1403FF9CD
 * 00000001403FF9C8: cmp     rsp, rcx
 * 00000001403FF9CB: jb      short loc_1403FF9D9
 * 00000001403FF9CD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FF9D4: jnz     short loc_1403FF9D9
 * 00000001403FF9D6: mov     rsp, rcx
 * 00000001403FF9D9: sub     rsp, 20h
 * 00000001403FF9DD: mov     [rsp+20h+var_10], rdx
 * 00000001403FF9E2: call    KiInterruptSubDispatchNoLock
 * 00000001403FF9E7: mov     rsp, [rsp+20h+var_10]
 * 00000001403FF9EC: mov     rcx, rsi
 * 00000001403FF9EF: call    HalPerformEndOfInterrupt
 * 00000001403FF9F4: mov     rcx, gs:20h
 * 00000001403FF9FD: cmp     byte ptr [rcx+20h], 1
 * 00000001403FFA01: ja      short loc_1403FFA7D
 * 00000001403FFA03: rdtsc
 * 00000001403FFA05: shl     rdx, 20h
 * 00000001403FFA09: or      rax, rdx
 * 00000001403FFA0C: sub     rax, [rcx+7EC0h]
 * 00000001403FFA13: add     [rcx+7F38h], rax
 * 00000001403FFA1A: add     [rcx+7EC0h], rax
 * 00000001403FFA21: mov     r8, rax
 * 00000001403FFA24: mov     rax, [rcx+8]
 * 00000001403FFA28: test    byte ptr [rax+2], 72h
 * 00000001403FFA2C: jz      short loc_1403FFA41
 * 00000001403FFA2E: xor     edx, edx
 * 00000001403FFA30: call    KiBeginThreadAccountingPeriod
 * 00000001403FFA35: mov     rcx, gs:20h
 * 00000001403FFA3E: inc     byte ptr [rcx+20h]
 * 00000001403FFA41: mov     dl, [rcx+6]
 * 00000001403FFA44: and     byte ptr [rcx+6], 0
 * 00000001403FFA48: cmp     byte ptr [rcx+7], 0
 * 00000001403FFA4C: jnz     short loc_1403FFA7D
 * 00000001403FFA4E: test    dl, dl
 * 00000001403FFA50: jz      short loc_1403FFA7D
 * 00000001403FFA52: cmp     byte ptr [rbp-57h], 2
 * 00000001403FFA56: jnb     short loc_1403FFA63
 * 00000001403FFA58: and     byte ptr [rcx+20h], 0
 * 00000001403FFA5C: call    KiDpcInterruptBypass
 * 00000001403FFA61: jmp     short loc_1403FFA80
 * 00000001403FFA63: mov     ecx, 2
 * 00000001403FFA68: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FFA6F: nop     dword ptr [rax+rax+00h]
 * 00000001403FFA74: mov     rcx, gs:20h
 * 00000001403FFA7D: dec     byte ptr [rcx+20h]
 * 00000001403FFA80: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FFA84: cmp     cs:KiIrqlFlags, 0
 * 00000001403FFA8B: jz      short loc_1403FFA94
 * 00000001403FFA8D: call    KzSetIrqlUnsafe
 * 00000001403FFA92: jmp     short loc_1403FFA98
 * 00000001403FFA94: mov     cr8, rcx
 * 00000001403FFA98: mov     rsi, [rbp+0D0h]
 * 00000001403FFA9F: test    byte ptr [rbp+0F0h], 1
 * 00000001403FFAA6: jz      loc_1403FFD48
 * 00000001403FFAAC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FFAB3: jz      short loc_1403FFAB8
 * 00000001403FFAB5: stac
 * 00000001403FFAB8: mov     rcx, gs:188h
 * 00000001403FFAC1: test    byte ptr [rcx+0C2h], 3
 * 00000001403FFAC8: jz      short loc_1403FFAE5
 * 00000001403FFACA: mov     ecx, 1
 * 00000001403FFACF: mov     cr8, rcx
 * 00000001403FFAD3: sti
 * 00000001403FFAD4: call    KiInitiateUserApc
 * 00000001403FFAD9: cli
 * 00000001403FFADA: mov     ecx, 0
 * 00000001403FFADF: mov     cr8, rcx
 * 00000001403FFAE3: jmp     short loc_1403FFAB8
 * 00000001403FFAE5: test    byte ptr gs:86Ch, 2
 * 00000001403FFAEE: jz      short loc_1403FFAF7
 * 00000001403FFAF0: xor     ecx, ecx
 * 00000001403FFAF2: call    KiUpdateStibpPairing
 * 00000001403FFAF7: mov     rcx, gs:188h
 * 00000001403FFB00: test    dword ptr [rcx], 8000000h
 * 00000001403FFB06: jz      short loc_1403FFB0D
 * 00000001403FFB08: call    KiRestoreSetContextState
 * 00000001403FFB0D: mov     rcx, gs:188h
 * 00000001403FFB16: test    dword ptr [rcx], 40010000h
 * 00000001403FFB1C: jz      short loc_1403FFB32
 * 00000001403FFB1E: test    byte ptr [rcx+2], 1
 * 00000001403FFB22: jz      short loc_1403FFB32
 * 00000001403FFB24: call    KiCopyCounters
 * 00000001403FFB29: mov     rcx, gs:188h
 * 00000001403FFB32: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FFB36: cmp     word ptr [rbp+80h], 0
 * 00000001403FFB3E: jz      short loc_1403FFB45
 * 00000001403FFB40: call    KiRestoreDebugRegisterState
 * 00000001403FFB45: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FFB49: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FFB4D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FFB51: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FFB55: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FFB59: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FFB5D: mov     r11, [rbp-20h]
 * 00000001403FFB61: mov     r10, [rbp-28h]
 * 00000001403FFB65: mov     r9, [rbp-30h]
 * 00000001403FFB69: mov     r8, [rbp-38h]
 * 00000001403FFB6D: mov     byte ptr gs:856h, 0
 * 00000001403FFB76: movzx   eax, word ptr gs:86Ah
 * 00000001403FFB7F: cmp     gs:864h, ax
 * 00000001403FFB88: jz      short loc_1403FFB9C
 * 00000001403FFB8A: mov     gs:864h, ax
 * 00000001403FFB93: mov     ecx, 48h ; 'H'
 * 00000001403FFB98: xor     edx, edx
 * 00000001403FFB9A: wrmsr
 * 00000001403FFB9C: btr     word ptr gs:860h, 2
 * 00000001403FFBA7: jnb     short loc_1403FFBB7
 * 00000001403FFBA9: mov     eax, 1
 * 00000001403FFBAE: xor     edx, edx
 * 00000001403FFBB0: mov     ecx, 49h ; 'I'
 * 00000001403FFBB5: wrmsr
 * 00000001403FFBB7: btr     word ptr gs:860h, 5
 * 00000001403FFBC2: jnb     loc_1403FFCED
 * 00000001403FFBC8: call    loc_1403FFCDB
 * 00000001403FFBCD: add     rsp, 8
 * 00000001403FFBD1: call    loc_1403FFCE4
 * 00000001403FFBD6: add     rsp, 8
 * 00000001403FFBDA: call    loc_1403FFBCD
 * 00000001403FFBDF: add     rsp, 8
 * 00000001403FFBE3: call    loc_1403FFBD6
 * 00000001403FFBE8: add     rsp, 8
 * 00000001403FFBEC: call    loc_1403FFBDF
 * 00000001403FFBF1: add     rsp, 8
 * 00000001403FFBF5: call    loc_1403FFBE8
 * 00000001403FFBFA: add     rsp, 8
 * 00000001403FFBFE: call    loc_1403FFBF1
 * 00000001403FFC03: add     rsp, 8
 * 00000001403FFC07: call    loc_1403FFBFA
 * 00000001403FFC0C: add     rsp, 8
 * 00000001403FFC10: call    loc_1403FFC03
 * 00000001403FFC15: add     rsp, 8
 * 00000001403FFC19: call    loc_1403FFC0C
 * 00000001403FFC1E: add     rsp, 8
 * 00000001403FFC22: call    loc_1403FFC15
 * 00000001403FFC27: add     rsp, 8
 * 00000001403FFC2B: call    loc_1403FFC1E
 * 00000001403FFC30: add     rsp, 8
 * 00000001403FFC34: call    loc_1403FFC27
 * 00000001403FFC39: add     rsp, 8
 * 00000001403FFC3D: call    loc_1403FFC30
 * 00000001403FFC42: add     rsp, 8
 * 00000001403FFC46: call    loc_1403FFC39
 * 00000001403FFC4B: add     rsp, 8
 * 00000001403FFC4F: call    loc_1403FFC42
 * 00000001403FFC54: add     rsp, 8
 * 00000001403FFC58: call    loc_1403FFC4B
 * 00000001403FFC5D: add     rsp, 8
 * 00000001403FFC61: call    loc_1403FFC54
 * 00000001403FFC66: add     rsp, 8
 * 00000001403FFC6A: call    loc_1403FFC5D
 * 00000001403FFC6F: add     rsp, 8
 * 00000001403FFC73: call    loc_1403FFC66
 * 00000001403FFC78: add     rsp, 8
 * 00000001403FFC7C: call    loc_1403FFC6F
 * 00000001403FFC81: add     rsp, 8
 * 00000001403FFC85: call    loc_1403FFC78
 * 00000001403FFC8A: add     rsp, 8
 * 00000001403FFC8E: call    loc_1403FFC81
 * 00000001403FFC93: add     rsp, 8
 * 00000001403FFC97: call    loc_1403FFC8A
 * 00000001403FFC9C: add     rsp, 8
 * 00000001403FFCA0: call    loc_1403FFC93
 * 00000001403FFCA5: add     rsp, 8
 * 00000001403FFCA9: call    loc_1403FFC9C
 * 00000001403FFCAE: add     rsp, 8
 * 00000001403FFCB2: call    loc_1403FFCA5
 * 00000001403FFCB7: add     rsp, 8
 * 00000001403FFCBB: call    loc_1403FFCAE
 * 00000001403FFCC0: add     rsp, 8
 * 00000001403FFCC4: call    loc_1403FFCB7
 * 00000001403FFCC9: add     rsp, 8
 * 00000001403FFCCD: call    loc_1403FFCC0
 * 00000001403FFCD2: add     rsp, 8
 * 00000001403FFCD6: call    loc_1403FFCC9
 * 00000001403FFCDB: add     rsp, 8
 * 00000001403FFCDF: call    loc_1403FFCD2
 * 00000001403FFCE4: add     rsp, 8
 * 00000001403FFCE8: mov     eax, 0DADAh
 * 00000001403FFCED: test    word ptr gs:860h, 80h
 * 00000001403FFCF8: jz      short loc_1403FFD06
 * 00000001403FFCFA: xor     eax, eax
 * 00000001403FFCFC: xor     edx, edx
 * 00000001403FFCFE: mov     ecx, 1
 * 00000001403FFD03: div     rcx
 * 00000001403FFD06: mov     rdx, [rbp-40h]
 * 00000001403FFD0A: mov     rcx, [rbp-48h]
 * 00000001403FFD0E: mov     rax, [rbp-50h]
 * 00000001403FFD12: mov     rsp, rbp
 * 00000001403FFD15: mov     rbp, [rbp+0D8h]
 * 00000001403FFD1C: add     rsp, 0E8h
 * 00000001403FFD23: test    cs:KiKvaShadow, 1
 * 00000001403FFD2A: jz      short loc_1403FFD31
 * 00000001403FFD2C: jmp     KiKernelExit
 * 00000001403FFD31: test    word ptr gs:860h, 100h
 * 00000001403FFD3C: jz      short loc_1403FFD43
 * 00000001403FFD3E: verw    [rsp-1C8h+arg_1E0]
 * 00000001403FFD43: swapgs
 * 00000001403FFD46: iretq
 * 00000001403FFD48: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FFD4C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FFD50: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FFD54: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FFD58: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FFD5C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FFD60: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FFD64: mov     r11, [rbp-20h]
 * 00000001403FFD68: mov     r10, [rbp-28h]
 * 00000001403FFD6C: mov     r9, [rbp-30h]
 * 00000001403FFD70: mov     r8, [rbp-38h]
 * 00000001403FFD74: mov     rdx, [rbp-40h]
 * 00000001403FFD78: mov     rcx, [rbp-48h]
 * 00000001403FFD7C: mov     rax, [rbp-50h]
 * 00000001403FFD80: mov     rsp, rbp
 * 00000001403FFD83: mov     rbp, [rbp+0D8h]
 * 00000001403FFD8A: add     rsp, 0E8h
 * 00000001403FFD91: iretq
 */
