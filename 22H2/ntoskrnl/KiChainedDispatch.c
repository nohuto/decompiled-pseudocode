/*
 * XREFs of KiChainedDispatch @ 0x1403FEC40
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FEC40 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1403FF030 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1403FEC40
 * Reason: Hex-Rays returned no pseudocode for 0x1403FEC40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FEC40: mov     rdx, rsp
 * 00000001403FEC43: mov     rcx, gs:8758h
 * 00000001403FEC4C: lea     rax, [rcx-6000h]
 * 00000001403FEC53: cmp     rax, rsp
 * 00000001403FEC56: ja      short loc_1403FEC5D
 * 00000001403FEC58: cmp     rsp, rcx
 * 00000001403FEC5B: jb      short loc_1403FEC69
 * 00000001403FEC5D: cmp     cs:KiBugCheckActive, 0
 * 00000001403FEC64: jnz     short loc_1403FEC69
 * 00000001403FEC66: mov     rsp, rcx
 * 00000001403FEC69: sub     rsp, 20h
 * 00000001403FEC6D: mov     [rsp+20h+var_10], rdx
 * 00000001403FEC72: call    KiScanInterruptObjectList
 * 00000001403FEC77: mov     rsp, [rsp+20h+var_10]
 * 00000001403FEC7C: mov     rcx, rsi
 * 00000001403FEC7F: call    HalPerformEndOfInterrupt
 * 00000001403FEC84: mov     rcx, gs:20h
 * 00000001403FEC8D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FEC91: ja      short loc_1403FED0D
 * 00000001403FEC93: rdtsc
 * 00000001403FEC95: shl     rdx, 20h
 * 00000001403FEC99: or      rax, rdx
 * 00000001403FEC9C: sub     rax, [rcx+7EC0h]
 * 00000001403FECA3: add     [rcx+7F38h], rax
 * 00000001403FECAA: add     [rcx+7EC0h], rax
 * 00000001403FECB1: mov     r8, rax
 * 00000001403FECB4: mov     rax, [rcx+8]
 * 00000001403FECB8: test    byte ptr [rax+2], 72h
 * 00000001403FECBC: jz      short loc_1403FECD1
 * 00000001403FECBE: xor     edx, edx
 * 00000001403FECC0: call    KiBeginThreadAccountingPeriod
 * 00000001403FECC5: mov     rcx, gs:20h
 * 00000001403FECCE: inc     byte ptr [rcx+20h]
 * 00000001403FECD1: mov     dl, [rcx+6]
 * 00000001403FECD4: and     byte ptr [rcx+6], 0
 * 00000001403FECD8: cmp     byte ptr [rcx+7], 0
 * 00000001403FECDC: jnz     short loc_1403FED0D
 * 00000001403FECDE: test    dl, dl
 * 00000001403FECE0: jz      short loc_1403FED0D
 * 00000001403FECE2: cmp     byte ptr [rbp-57h], 2
 * 00000001403FECE6: jnb     short loc_1403FECF3
 * 00000001403FECE8: and     byte ptr [rcx+20h], 0
 * 00000001403FECEC: call    KiDpcInterruptBypass
 * 00000001403FECF1: jmp     short loc_1403FED10
 * 00000001403FECF3: mov     ecx, 2
 * 00000001403FECF8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FECFF: nop     dword ptr [rax+rax+00h]
 * 00000001403FED04: mov     rcx, gs:20h
 * 00000001403FED0D: dec     byte ptr [rcx+20h]
 * 00000001403FED10: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FED14: cmp     cs:KiIrqlFlags, 0
 * 00000001403FED1B: jz      short loc_1403FED24
 * 00000001403FED1D: call    KzSetIrqlUnsafe
 * 00000001403FED22: jmp     short loc_1403FED28
 * 00000001403FED24: mov     cr8, rcx
 * 00000001403FED28: mov     rsi, [rbp+0D0h]
 * 00000001403FED2F: test    byte ptr [rbp+0F0h], 1
 * 00000001403FED36: jz      loc_1403FEFD8
 * 00000001403FED3C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FED43: jz      short loc_1403FED48
 * 00000001403FED45: stac
 * 00000001403FED48: mov     rcx, gs:188h
 * 00000001403FED51: test    byte ptr [rcx+0C2h], 3
 * 00000001403FED58: jz      short loc_1403FED75
 * 00000001403FED5A: mov     ecx, 1
 * 00000001403FED5F: mov     cr8, rcx
 * 00000001403FED63: sti
 * 00000001403FED64: call    KiInitiateUserApc
 * 00000001403FED69: cli
 * 00000001403FED6A: mov     ecx, 0
 * 00000001403FED6F: mov     cr8, rcx
 * 00000001403FED73: jmp     short loc_1403FED48
 * 00000001403FED75: test    byte ptr gs:86Ch, 2
 * 00000001403FED7E: jz      short loc_1403FED87
 * 00000001403FED80: xor     ecx, ecx
 * 00000001403FED82: call    KiUpdateStibpPairing
 * 00000001403FED87: mov     rcx, gs:188h
 * 00000001403FED90: test    dword ptr [rcx], 8000000h
 * 00000001403FED96: jz      short loc_1403FED9D
 * 00000001403FED98: call    KiRestoreSetContextState
 * 00000001403FED9D: mov     rcx, gs:188h
 * 00000001403FEDA6: test    dword ptr [rcx], 40010000h
 * 00000001403FEDAC: jz      short loc_1403FEDC2
 * 00000001403FEDAE: test    byte ptr [rcx+2], 1
 * 00000001403FEDB2: jz      short loc_1403FEDC2
 * 00000001403FEDB4: call    KiCopyCounters
 * 00000001403FEDB9: mov     rcx, gs:188h
 * 00000001403FEDC2: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FEDC6: cmp     word ptr [rbp+80h], 0
 * 00000001403FEDCE: jz      short loc_1403FEDD5
 * 00000001403FEDD0: call    KiRestoreDebugRegisterState
 * 00000001403FEDD5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FEDD9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FEDDD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FEDE1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FEDE5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FEDE9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FEDED: mov     r11, [rbp-20h]
 * 00000001403FEDF1: mov     r10, [rbp-28h]
 * 00000001403FEDF5: mov     r9, [rbp-30h]
 * 00000001403FEDF9: mov     r8, [rbp-38h]
 * 00000001403FEDFD: mov     byte ptr gs:856h, 0
 * 00000001403FEE06: movzx   eax, word ptr gs:86Ah
 * 00000001403FEE0F: cmp     gs:864h, ax
 * 00000001403FEE18: jz      short loc_1403FEE2C
 * 00000001403FEE1A: mov     gs:864h, ax
 * 00000001403FEE23: mov     ecx, 48h ; 'H'
 * 00000001403FEE28: xor     edx, edx
 * 00000001403FEE2A: wrmsr
 * 00000001403FEE2C: btr     word ptr gs:860h, 2
 * 00000001403FEE37: jnb     short loc_1403FEE47
 * 00000001403FEE39: mov     eax, 1
 * 00000001403FEE3E: xor     edx, edx
 * 00000001403FEE40: mov     ecx, 49h ; 'I'
 * 00000001403FEE45: wrmsr
 * 00000001403FEE47: btr     word ptr gs:860h, 5
 * 00000001403FEE52: jnb     loc_1403FEF7D
 * 00000001403FEE58: call    loc_1403FEF6B
 * 00000001403FEE5D: add     rsp, 8
 * 00000001403FEE61: call    loc_1403FEF74
 * 00000001403FEE66: add     rsp, 8
 * 00000001403FEE6A: call    loc_1403FEE5D
 * 00000001403FEE6F: add     rsp, 8
 * 00000001403FEE73: call    loc_1403FEE66
 * 00000001403FEE78: add     rsp, 8
 * 00000001403FEE7C: call    loc_1403FEE6F
 * 00000001403FEE81: add     rsp, 8
 * 00000001403FEE85: call    loc_1403FEE78
 * 00000001403FEE8A: add     rsp, 8
 * 00000001403FEE8E: call    loc_1403FEE81
 * 00000001403FEE93: add     rsp, 8
 * 00000001403FEE97: call    loc_1403FEE8A
 * 00000001403FEE9C: add     rsp, 8
 * 00000001403FEEA0: call    loc_1403FEE93
 * 00000001403FEEA5: add     rsp, 8
 * 00000001403FEEA9: call    loc_1403FEE9C
 * 00000001403FEEAE: add     rsp, 8
 * 00000001403FEEB2: call    loc_1403FEEA5
 * 00000001403FEEB7: add     rsp, 8
 * 00000001403FEEBB: call    loc_1403FEEAE
 * 00000001403FEEC0: add     rsp, 8
 * 00000001403FEEC4: call    loc_1403FEEB7
 * 00000001403FEEC9: add     rsp, 8
 * 00000001403FEECD: call    loc_1403FEEC0
 * 00000001403FEED2: add     rsp, 8
 * 00000001403FEED6: call    loc_1403FEEC9
 * 00000001403FEEDB: add     rsp, 8
 * 00000001403FEEDF: call    loc_1403FEED2
 * 00000001403FEEE4: add     rsp, 8
 * 00000001403FEEE8: call    loc_1403FEEDB
 * 00000001403FEEED: add     rsp, 8
 * 00000001403FEEF1: call    loc_1403FEEE4
 * 00000001403FEEF6: add     rsp, 8
 * 00000001403FEEFA: call    loc_1403FEEED
 * 00000001403FEEFF: add     rsp, 8
 * 00000001403FEF03: call    loc_1403FEEF6
 * 00000001403FEF08: add     rsp, 8
 * 00000001403FEF0C: call    loc_1403FEEFF
 * 00000001403FEF11: add     rsp, 8
 * 00000001403FEF15: call    loc_1403FEF08
 * 00000001403FEF1A: add     rsp, 8
 * 00000001403FEF1E: call    loc_1403FEF11
 * 00000001403FEF23: add     rsp, 8
 * 00000001403FEF27: call    loc_1403FEF1A
 * 00000001403FEF2C: add     rsp, 8
 * 00000001403FEF30: call    loc_1403FEF23
 * 00000001403FEF35: add     rsp, 8
 * 00000001403FEF39: call    loc_1403FEF2C
 * 00000001403FEF3E: add     rsp, 8
 * 00000001403FEF42: call    loc_1403FEF35
 * 00000001403FEF47: add     rsp, 8
 * 00000001403FEF4B: call    loc_1403FEF3E
 * 00000001403FEF50: add     rsp, 8
 * 00000001403FEF54: call    loc_1403FEF47
 * 00000001403FEF59: add     rsp, 8
 * 00000001403FEF5D: call    loc_1403FEF50
 * 00000001403FEF62: add     rsp, 8
 * 00000001403FEF66: call    loc_1403FEF59
 * 00000001403FEF6B: add     rsp, 8
 * 00000001403FEF6F: call    loc_1403FEF62
 * 00000001403FEF74: add     rsp, 8
 * 00000001403FEF78: mov     eax, 0DADAh
 * 00000001403FEF7D: test    word ptr gs:860h, 80h
 * 00000001403FEF88: jz      short loc_1403FEF96
 * 00000001403FEF8A: xor     eax, eax
 * 00000001403FEF8C: xor     edx, edx
 * 00000001403FEF8E: mov     ecx, 1
 * 00000001403FEF93: div     rcx
 * 00000001403FEF96: mov     rdx, [rbp-40h]
 * 00000001403FEF9A: mov     rcx, [rbp-48h]
 * 00000001403FEF9E: mov     rax, [rbp-50h]
 * 00000001403FEFA2: mov     rsp, rbp
 * 00000001403FEFA5: mov     rbp, [rbp+0D8h]
 * 00000001403FEFAC: add     rsp, 0E8h
 * 00000001403FEFB3: test    cs:KiKvaShadow, 1
 * 00000001403FEFBA: jz      short loc_1403FEFC1
 * 00000001403FEFBC: jmp     KiKernelExit
 * 00000001403FEFC1: test    word ptr gs:860h, 100h
 * 00000001403FEFCC: jz      short loc_1403FEFD3
 * 00000001403FEFCE: verw    [rsp-1C8h+arg_1E0]
 * 00000001403FEFD3: swapgs
 * 00000001403FEFD6: iretq
 * 00000001403FEFD8: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FEFDC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FEFE0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FEFE4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FEFE8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FEFEC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FEFF0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FEFF4: mov     r11, [rbp-20h]
 * 00000001403FEFF8: mov     r10, [rbp-28h]
 * 00000001403FEFFC: mov     r9, [rbp-30h]
 * 00000001403FF000: mov     r8, [rbp-38h]
 * 00000001403FF004: mov     rdx, [rbp-40h]
 * 00000001403FF008: mov     rcx, [rbp-48h]
 * 00000001403FF00C: mov     rax, [rbp-50h]
 * 00000001403FF010: mov     rsp, rbp
 * 00000001403FF013: mov     rbp, [rbp+0D8h]
 * 00000001403FF01A: add     rsp, 0E8h
 * 00000001403FF021: iretq
 */
