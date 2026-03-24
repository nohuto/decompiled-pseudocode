/*
 * XREFs of KiHvInterruptDispatch @ 0x140403B30
 * Callers:
 *     KiHvInterrupt @ 0x140402C80 (KiHvInterrupt.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x140403B30 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x140404320 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x140403B30
 * Reason: Hex-Rays returned no pseudocode for 0x140403B30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403B30: mov     rdx, rsp
 * 0000000140403B33: mov     rcx, gs:8758h
 * 0000000140403B3C: lea     rax, [rcx-6000h]
 * 0000000140403B43: cmp     rax, rsp
 * 0000000140403B46: ja      short loc_140403B4D
 * 0000000140403B48: cmp     rsp, rcx
 * 0000000140403B4B: jb      short loc_140403B59
 * 0000000140403B4D: cmp     cs:KiBugCheckActive, 0
 * 0000000140403B54: jnz     short loc_140403B59
 * 0000000140403B56: mov     rsp, rcx
 * 0000000140403B59: sub     rsp, 20h
 * 0000000140403B5D: mov     [rsp+20h+var_10], rdx
 * 0000000140403B62: call    KiHvInterruptSubDispatch
 * 0000000140403B67: mov     rsp, [rsp+20h+var_10]
 * 0000000140403B6C: test    cs:HvlEnlightenments, 1000h
 * 0000000140403B76: jz      short loc_140403B80
 * 0000000140403B78: mov     rcx, rsi
 * 0000000140403B7B: call    HalPerformEndOfInterrupt
 * 0000000140403B80: cli
 * 0000000140403B81: mov     rcx, gs:20h
 * 0000000140403B8A: cmp     byte ptr [rcx+20h], 1
 * 0000000140403B8E: ja      short loc_140403C0A
 * 0000000140403B90: rdtsc
 * 0000000140403B92: shl     rdx, 20h
 * 0000000140403B96: or      rax, rdx
 * 0000000140403B99: sub     rax, [rcx+7EC0h]
 * 0000000140403BA0: add     [rcx+7F38h], rax
 * 0000000140403BA7: add     [rcx+7EC0h], rax
 * 0000000140403BAE: mov     r8, rax
 * 0000000140403BB1: mov     rax, [rcx+8]
 * 0000000140403BB5: test    byte ptr [rax+2], 72h
 * 0000000140403BB9: jz      short loc_140403BCE
 * 0000000140403BBB: xor     edx, edx
 * 0000000140403BBD: call    KiBeginThreadAccountingPeriod
 * 0000000140403BC2: mov     rcx, gs:20h
 * 0000000140403BCB: inc     byte ptr [rcx+20h]
 * 0000000140403BCE: mov     dl, [rcx+6]
 * 0000000140403BD1: and     byte ptr [rcx+6], 0
 * 0000000140403BD5: cmp     byte ptr [rcx+7], 0
 * 0000000140403BD9: jnz     short loc_140403C0A
 * 0000000140403BDB: test    dl, dl
 * 0000000140403BDD: jz      short loc_140403C0A
 * 0000000140403BDF: cmp     byte ptr [rbp-57h], 2
 * 0000000140403BE3: jnb     short loc_140403BF0
 * 0000000140403BE5: and     byte ptr [rcx+20h], 0
 * 0000000140403BE9: call    KiDpcInterruptBypass
 * 0000000140403BEE: jmp     short loc_140403C0D
 * 0000000140403BF0: mov     ecx, 2
 * 0000000140403BF5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140403BFC: nop     dword ptr [rax+rax+00h]
 * 0000000140403C01: mov     rcx, gs:20h
 * 0000000140403C0A: dec     byte ptr [rcx+20h]
 * 0000000140403C0D: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140403C11: cmp     cs:KiIrqlFlags, 0
 * 0000000140403C18: jz      short loc_140403C21
 * 0000000140403C1A: call    KzSetIrqlUnsafe
 * 0000000140403C1F: jmp     short loc_140403C25
 * 0000000140403C21: mov     cr8, rcx
 * 0000000140403C25: mov     rsi, [rbp+0D0h]
 * 0000000140403C2C: cli
 * 0000000140403C2D: test    byte ptr [rbp+0F0h], 1
 * 0000000140403C34: jz      loc_140403ED6
 * 0000000140403C3A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140403C41: jz      short loc_140403C46
 * 0000000140403C43: stac
 * 0000000140403C46: mov     rcx, gs:188h
 * 0000000140403C4F: test    byte ptr [rcx+0C2h], 3
 * 0000000140403C56: jz      short loc_140403C73
 * 0000000140403C58: mov     ecx, 1
 * 0000000140403C5D: mov     cr8, rcx
 * 0000000140403C61: sti
 * 0000000140403C62: call    KiInitiateUserApc
 * 0000000140403C67: cli
 * 0000000140403C68: mov     ecx, 0
 * 0000000140403C6D: mov     cr8, rcx
 * 0000000140403C71: jmp     short loc_140403C46
 * 0000000140403C73: test    byte ptr gs:86Ch, 2
 * 0000000140403C7C: jz      short loc_140403C85
 * 0000000140403C7E: xor     ecx, ecx
 * 0000000140403C80: call    KiUpdateStibpPairing
 * 0000000140403C85: mov     rcx, gs:188h
 * 0000000140403C8E: test    dword ptr [rcx], 8000000h
 * 0000000140403C94: jz      short loc_140403C9B
 * 0000000140403C96: call    KiRestoreSetContextState
 * 0000000140403C9B: mov     rcx, gs:188h
 * 0000000140403CA4: test    dword ptr [rcx], 40010000h
 * 0000000140403CAA: jz      short loc_140403CC0
 * 0000000140403CAC: test    byte ptr [rcx+2], 1
 * 0000000140403CB0: jz      short loc_140403CC0
 * 0000000140403CB2: call    KiCopyCounters
 * 0000000140403CB7: mov     rcx, gs:188h
 * 0000000140403CC0: ldmxcsr dword ptr [rbp-54h]
 * 0000000140403CC4: cmp     word ptr [rbp+80h], 0
 * 0000000140403CCC: jz      short loc_140403CD3
 * 0000000140403CCE: call    KiRestoreDebugRegisterState
 * 0000000140403CD3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140403CD7: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140403CDB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140403CDF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140403CE3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140403CE7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140403CEB: mov     r11, [rbp-20h]
 * 0000000140403CEF: mov     r10, [rbp-28h]
 * 0000000140403CF3: mov     r9, [rbp-30h]
 * 0000000140403CF7: mov     r8, [rbp-38h]
 * 0000000140403CFB: mov     byte ptr gs:856h, 0
 * 0000000140403D04: movzx   eax, word ptr gs:86Ah
 * 0000000140403D0D: cmp     gs:864h, ax
 * 0000000140403D16: jz      short loc_140403D2A
 * 0000000140403D18: mov     gs:864h, ax
 * 0000000140403D21: mov     ecx, 48h ; 'H'
 * 0000000140403D26: xor     edx, edx
 * 0000000140403D28: wrmsr
 * 0000000140403D2A: btr     word ptr gs:860h, 2
 * 0000000140403D35: jnb     short loc_140403D45
 * 0000000140403D37: mov     eax, 1
 * 0000000140403D3C: xor     edx, edx
 * 0000000140403D3E: mov     ecx, 49h ; 'I'
 * 0000000140403D43: wrmsr
 * 0000000140403D45: btr     word ptr gs:860h, 5
 * 0000000140403D50: jnb     loc_140403E7B
 * 0000000140403D56: call    loc_140403E69
 * 0000000140403D5B: add     rsp, 8
 * 0000000140403D5F: call    loc_140403E72
 * 0000000140403D64: add     rsp, 8
 * 0000000140403D68: call    loc_140403D5B
 * 0000000140403D6D: add     rsp, 8
 * 0000000140403D71: call    loc_140403D64
 * 0000000140403D76: add     rsp, 8
 * 0000000140403D7A: call    loc_140403D6D
 * 0000000140403D7F: add     rsp, 8
 * 0000000140403D83: call    loc_140403D76
 * 0000000140403D88: add     rsp, 8
 * 0000000140403D8C: call    loc_140403D7F
 * 0000000140403D91: add     rsp, 8
 * 0000000140403D95: call    loc_140403D88
 * 0000000140403D9A: add     rsp, 8
 * 0000000140403D9E: call    loc_140403D91
 * 0000000140403DA3: add     rsp, 8
 * 0000000140403DA7: call    loc_140403D9A
 * 0000000140403DAC: add     rsp, 8
 * 0000000140403DB0: call    loc_140403DA3
 * 0000000140403DB5: add     rsp, 8
 * 0000000140403DB9: call    loc_140403DAC
 * 0000000140403DBE: add     rsp, 8
 * 0000000140403DC2: call    loc_140403DB5
 * 0000000140403DC7: add     rsp, 8
 * 0000000140403DCB: call    loc_140403DBE
 * 0000000140403DD0: add     rsp, 8
 * 0000000140403DD4: call    loc_140403DC7
 * 0000000140403DD9: add     rsp, 8
 * 0000000140403DDD: call    loc_140403DD0
 * 0000000140403DE2: add     rsp, 8
 * 0000000140403DE6: call    loc_140403DD9
 * 0000000140403DEB: add     rsp, 8
 * 0000000140403DEF: call    loc_140403DE2
 * 0000000140403DF4: add     rsp, 8
 * 0000000140403DF8: call    loc_140403DEB
 * 0000000140403DFD: add     rsp, 8
 * 0000000140403E01: call    loc_140403DF4
 * 0000000140403E06: add     rsp, 8
 * 0000000140403E0A: call    loc_140403DFD
 * 0000000140403E0F: add     rsp, 8
 * 0000000140403E13: call    loc_140403E06
 * 0000000140403E18: add     rsp, 8
 * 0000000140403E1C: call    loc_140403E0F
 * 0000000140403E21: add     rsp, 8
 * 0000000140403E25: call    loc_140403E18
 * 0000000140403E2A: add     rsp, 8
 * 0000000140403E2E: call    loc_140403E21
 * 0000000140403E33: add     rsp, 8
 * 0000000140403E37: call    loc_140403E2A
 * 0000000140403E3C: add     rsp, 8
 * 0000000140403E40: call    loc_140403E33
 * 0000000140403E45: add     rsp, 8
 * 0000000140403E49: call    loc_140403E3C
 * 0000000140403E4E: add     rsp, 8
 * 0000000140403E52: call    loc_140403E45
 * 0000000140403E57: add     rsp, 8
 * 0000000140403E5B: call    loc_140403E4E
 * 0000000140403E60: add     rsp, 8
 * 0000000140403E64: call    loc_140403E57
 * 0000000140403E69: add     rsp, 8
 * 0000000140403E6D: call    loc_140403E60
 * 0000000140403E72: add     rsp, 8
 * 0000000140403E76: mov     eax, 0DADAh
 * 0000000140403E7B: test    word ptr gs:860h, 80h
 * 0000000140403E86: jz      short loc_140403E94
 * 0000000140403E88: xor     eax, eax
 * 0000000140403E8A: xor     edx, edx
 * 0000000140403E8C: mov     ecx, 1
 * 0000000140403E91: div     rcx
 * 0000000140403E94: mov     rdx, [rbp-40h]
 * 0000000140403E98: mov     rcx, [rbp-48h]
 * 0000000140403E9C: mov     rax, [rbp-50h]
 * 0000000140403EA0: mov     rsp, rbp
 * 0000000140403EA3: mov     rbp, [rbp+0D8h]
 * 0000000140403EAA: add     rsp, 0E8h
 * 0000000140403EB1: test    cs:KiKvaShadow, 1
 * 0000000140403EB8: jz      short loc_140403EBF
 * 0000000140403EBA: jmp     KiKernelExit
 * 0000000140403EBF: test    word ptr gs:860h, 100h
 * 0000000140403ECA: jz      short loc_140403ED1
 * 0000000140403ECC: verw    [rsp-1C8h+arg_1E0]
 * 0000000140403ED1: swapgs
 * 0000000140403ED4: iretq
 * 0000000140403ED6: ldmxcsr dword ptr [rbp-54h]
 * 0000000140403EDA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140403EDE: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140403EE2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140403EE6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140403EEA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140403EEE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140403EF2: mov     r11, [rbp-20h]
 * 0000000140403EF6: mov     r10, [rbp-28h]
 * 0000000140403EFA: mov     r9, [rbp-30h]
 * 0000000140403EFE: mov     r8, [rbp-38h]
 * 0000000140403F02: mov     rdx, [rbp-40h]
 * 0000000140403F06: mov     rcx, [rbp-48h]
 * 0000000140403F0A: mov     rax, [rbp-50h]
 * 0000000140403F0E: mov     rsp, rbp
 * 0000000140403F11: mov     rbp, [rbp+0D8h]
 * 0000000140403F18: add     rsp, 0E8h
 * 0000000140403F1F: iretq
 */
