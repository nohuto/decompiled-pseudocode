/*
 * XREFs of KiDpcInterrupt @ 0x140404D10
 * Callers:
 *     KiDpcInterruptShadow @ 0x140A14F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140404D10 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140405BD0 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140404D10
 * Reason: Hex-Rays returned no pseudocode for 0x140404D10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140404D10: sub     rsp, 8
 * 0000000140404D14: push    rbp
 * 0000000140404D15: push    rsi
 * 0000000140404D16: sub     rsp, 150h
 * 0000000140404D1D: lea     rbp, [rsp+80h]
 * 0000000140404D25: mov     [rbp+0E8h+var_13D], 0
 * 0000000140404D29: mov     [rbp+0E8h+var_138], rax
 * 0000000140404D2D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140404D31: mov     [rbp+0E8h+var_128], rdx
 * 0000000140404D35: mov     [rbp+0E8h+var_120], r8
 * 0000000140404D39: mov     [rbp+0E8h+var_118], r9
 * 0000000140404D3D: mov     [rbp+0E8h+var_110], r10
 * 0000000140404D41: mov     [rbp+0E8h+var_108], r11
 * 0000000140404D45: test    [rbp+0E8h+arg_0], 1
 * 0000000140404D4C: jnz     short loc_140404D7D
 * 0000000140404D4E: lfence
 * 0000000140404D51: test    word ptr gs:860h, 1
 * 0000000140404D5C: jnz     short loc_140404D66
 * 0000000140404D5E: lfence
 * 0000000140404D61: jmp     loc_140404F86
 * 0000000140404D66: movzx   eax, word ptr gs:864h
 * 0000000140404D6F: mov     ecx, 48h ; 'H'
 * 0000000140404D74: xor     edx, edx
 * 0000000140404D76: wrmsr
 * 0000000140404D78: jmp     loc_140404F86
 * 0000000140404D7D: test    cs:KiKvaShadow, 1
 * 0000000140404D84: jnz     short loc_140404D89
 * 0000000140404D86: swapgs
 * 0000000140404D89: lfence
 * 0000000140404D8C: mov     r10, gs:188h
 * 0000000140404D95: mov     rcx, gs:188h
 * 0000000140404D9E: mov     rcx, [rcx+220h]
 * 0000000140404DA5: mov     rcx, [rcx+9E0h]
 * 0000000140404DAC: mov     gs:858h, rcx
 * 0000000140404DB5: mov     cx, gs:850h
 * 0000000140404DBE: mov     gs:852h, cx
 * 0000000140404DC7: mov     cx, gs:860h
 * 0000000140404DD0: mov     gs:854h, cx
 * 0000000140404DD9: movzx   eax, word ptr gs:866h
 * 0000000140404DE2: cmp     gs:864h, ax
 * 0000000140404DEB: jz      short loc_140404DFF
 * 0000000140404DED: mov     gs:864h, ax
 * 0000000140404DF6: mov     ecx, 48h ; 'H'
 * 0000000140404DFB: xor     edx, edx
 * 0000000140404DFD: wrmsr
 * 0000000140404DFF: movzx   edx, word ptr gs:860h
 * 0000000140404E08: test    edx, 8
 * 0000000140404E0E: jz      short loc_140404E27
 * 0000000140404E10: mov     eax, 1
 * 0000000140404E15: xor     edx, edx
 * 0000000140404E17: mov     ecx, 49h ; 'I'
 * 0000000140404E1C: wrmsr
 * 0000000140404E1E: movzx   edx, word ptr gs:860h
 * 0000000140404E27: test    edx, 2
 * 0000000140404E2D: jz      loc_140404F58
 * 0000000140404E33: call    loc_140404F46
 * 0000000140404E38: add     rsp, 8
 * 0000000140404E3C: call    loc_140404F4F
 * 0000000140404E41: add     rsp, 8
 * 0000000140404E45: call    loc_140404E38
 * 0000000140404E4A: add     rsp, 8
 * 0000000140404E4E: call    loc_140404E41
 * 0000000140404E53: add     rsp, 8
 * 0000000140404E57: call    loc_140404E4A
 * 0000000140404E5C: add     rsp, 8
 * 0000000140404E60: call    loc_140404E53
 * 0000000140404E65: add     rsp, 8
 * 0000000140404E69: call    loc_140404E5C
 * 0000000140404E6E: add     rsp, 8
 * 0000000140404E72: call    loc_140404E65
 * 0000000140404E77: add     rsp, 8
 * 0000000140404E7B: call    loc_140404E6E
 * 0000000140404E80: add     rsp, 8
 * 0000000140404E84: call    loc_140404E77
 * 0000000140404E89: add     rsp, 8
 * 0000000140404E8D: call    loc_140404E80
 * 0000000140404E92: add     rsp, 8
 * 0000000140404E96: call    loc_140404E89
 * 0000000140404E9B: add     rsp, 8
 * 0000000140404E9F: call    loc_140404E92
 * 0000000140404EA4: add     rsp, 8
 * 0000000140404EA8: call    loc_140404E9B
 * 0000000140404EAD: add     rsp, 8
 * 0000000140404EB1: call    loc_140404EA4
 * 0000000140404EB6: add     rsp, 8
 * 0000000140404EBA: call    loc_140404EAD
 * 0000000140404EBF: add     rsp, 8
 * 0000000140404EC3: call    loc_140404EB6
 * 0000000140404EC8: add     rsp, 8
 * 0000000140404ECC: call    loc_140404EBF
 * 0000000140404ED1: add     rsp, 8
 * 0000000140404ED5: call    loc_140404EC8
 * 0000000140404EDA: add     rsp, 8
 * 0000000140404EDE: call    loc_140404ED1
 * 0000000140404EE3: add     rsp, 8
 * 0000000140404EE7: call    loc_140404EDA
 * 0000000140404EEC: add     rsp, 8
 * 0000000140404EF0: call    loc_140404EE3
 * 0000000140404EF5: add     rsp, 8
 * 0000000140404EF9: call    loc_140404EEC
 * 0000000140404EFE: add     rsp, 8
 * 0000000140404F02: call    loc_140404EF5
 * 0000000140404F07: add     rsp, 8
 * 0000000140404F0B: call    loc_140404EFE
 * 0000000140404F10: add     rsp, 8
 * 0000000140404F14: call    loc_140404F07
 * 0000000140404F19: add     rsp, 8
 * 0000000140404F1D: call    loc_140404F10
 * 0000000140404F22: add     rsp, 8
 * 0000000140404F26: call    loc_140404F19
 * 0000000140404F2B: add     rsp, 8
 * 0000000140404F2F: call    loc_140404F22
 * 0000000140404F34: add     rsp, 8
 * 0000000140404F38: call    loc_140404F2B
 * 0000000140404F3D: add     rsp, 8
 * 0000000140404F41: call    loc_140404F34
 * 0000000140404F46: add     rsp, 8
 * 0000000140404F4A: call    loc_140404F3D
 * 0000000140404F4F: add     rsp, 8
 * 0000000140404F53: mov     eax, 0DADAh
 * 0000000140404F58: test    edx, 200h
 * 0000000140404F5E: jz      short loc_140404F65
 * 0000000140404F60: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140404F65: lfence
 * 0000000140404F68: mov     byte ptr gs:856h, 0
 * 0000000140404F71: test    byte ptr [r10+3], 3
 * 0000000140404F76: mov     [rbp+0E8h+var_68], 0
 * 0000000140404F7F: jz      short loc_140404F86
 * 0000000140404F81: call    KiSaveDebugRegisterState
 * 0000000140404F86: cld
 * 0000000140404F87: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140404F8B: ldmxcsr dword ptr gs:180h
 * 0000000140404F94: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140404F98: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140404F9C: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140404FA0: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140404FA4: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140404FA8: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140404FAC: xor     esi, esi
 * 0000000140404FAE: inc     dword ptr gs:8000h
 * 0000000140404FB6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140404FBD: jz      short loc_140404FC2
 * 0000000140404FBF: clac
 * 0000000140404FC2: mov     ecx, 2
 * 0000000140404FC7: cmp     cs:KiIrqlFlags, 0
 * 0000000140404FCE: jz      short loc_140404FD7
 * 0000000140404FD0: call    KzSetIrqlUnsafe
 * 0000000140404FD5: jmp     short loc_140404FDF
 * 0000000140404FD7: mov     rax, cr8
 * 0000000140404FDB: mov     cr8, rcx
 * 0000000140404FDF: mov     [rbp+0E8h+var_13F], al
 * 0000000140404FE2: mov     rcx, rsi
 * 0000000140404FE5: call    HalPerformEndOfInterrupt
 * 0000000140404FEA: sti
 * 0000000140404FEB: cmp     byte ptr gs:187h, 0
 * 0000000140404FF4: jnz     short loc_14040500D
 * 0000000140404FF6: mov     al, [rbp+0E8h+var_13F]
 * 0000000140404FF9: mov     rcx, gs:188h
 * 0000000140405002: mov     [rcx+186h], al
 * 0000000140405008: call    KiDispatchInterrupt
 * 000000014040500D: cli
 * 000000014040500E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140405012: cmp     cs:KiIrqlFlags, 0
 * 0000000140405019: jz      short loc_140405022
 * 000000014040501B: call    KzSetIrqlUnsafe
 * 0000000140405020: jmp     short loc_140405026
 * 0000000140405022: mov     cr8, rcx
 * 0000000140405026: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040502D: cli
 * 000000014040502E: test    [rbp+0E8h+arg_0], 1
 * 0000000140405035: jz      loc_1404052D7
 * 000000014040503B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405042: jz      short loc_140405047
 * 0000000140405044: stac
 * 0000000140405047: mov     rcx, gs:188h
 * 0000000140405050: test    byte ptr [rcx+0C2h], 3
 * 0000000140405057: jz      short loc_140405074
 * 0000000140405059: mov     ecx, 1
 * 000000014040505E: mov     cr8, rcx
 * 0000000140405062: sti
 * 0000000140405063: call    KiInitiateUserApc
 * 0000000140405068: cli
 * 0000000140405069: mov     ecx, 0
 * 000000014040506E: mov     cr8, rcx
 * 0000000140405072: jmp     short loc_140405047
 * 0000000140405074: test    byte ptr gs:86Ch, 2
 * 000000014040507D: jz      short loc_140405086
 * 000000014040507F: xor     ecx, ecx
 * 0000000140405081: call    KiUpdateStibpPairing
 * 0000000140405086: mov     rcx, gs:188h
 * 000000014040508F: test    dword ptr [rcx], 8000000h
 * 0000000140405095: jz      short loc_14040509C
 * 0000000140405097: call    KiRestoreSetContextState
 * 000000014040509C: mov     rcx, gs:188h
 * 00000001404050A5: test    dword ptr [rcx], 40010000h
 * 00000001404050AB: jz      short loc_1404050C1
 * 00000001404050AD: test    byte ptr [rcx+2], 1
 * 00000001404050B1: jz      short loc_1404050C1
 * 00000001404050B3: call    KiCopyCounters
 * 00000001404050B8: mov     rcx, gs:188h
 * 00000001404050C1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404050C5: cmp     [rbp+0E8h+var_68], 0
 * 00000001404050CD: jz      short loc_1404050D4
 * 00000001404050CF: call    KiRestoreDebugRegisterState
 * 00000001404050D4: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404050D8: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404050DC: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404050E0: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404050E4: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404050E8: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404050EC: mov     r11, [rbp+0E8h+var_108]
 * 00000001404050F0: mov     r10, [rbp+0E8h+var_110]
 * 00000001404050F4: mov     r9, [rbp+0E8h+var_118]
 * 00000001404050F8: mov     r8, [rbp+0E8h+var_120]
 * 00000001404050FC: mov     byte ptr gs:856h, 0
 * 0000000140405105: movzx   eax, word ptr gs:86Ah
 * 000000014040510E: cmp     gs:864h, ax
 * 0000000140405117: jz      short loc_14040512B
 * 0000000140405119: mov     gs:864h, ax
 * 0000000140405122: mov     ecx, 48h ; 'H'
 * 0000000140405127: xor     edx, edx
 * 0000000140405129: wrmsr
 * 000000014040512B: btr     word ptr gs:860h, 2
 * 0000000140405136: jnb     short loc_140405146
 * 0000000140405138: mov     eax, 1
 * 000000014040513D: xor     edx, edx
 * 000000014040513F: mov     ecx, 49h ; 'I'
 * 0000000140405144: wrmsr
 * 0000000140405146: btr     word ptr gs:860h, 5
 * 0000000140405151: jnb     loc_14040527C
 * 0000000140405157: call    loc_14040526A
 * 000000014040515C: add     rsp, 8
 * 0000000140405160: call    loc_140405273
 * 0000000140405165: add     rsp, 8
 * 0000000140405169: call    loc_14040515C
 * 000000014040516E: add     rsp, 8
 * 0000000140405172: call    loc_140405165
 * 0000000140405177: add     rsp, 8
 * 000000014040517B: call    loc_14040516E
 * 0000000140405180: add     rsp, 8
 * 0000000140405184: call    loc_140405177
 * 0000000140405189: add     rsp, 8
 * 000000014040518D: call    loc_140405180
 * 0000000140405192: add     rsp, 8
 * 0000000140405196: call    loc_140405189
 * 000000014040519B: add     rsp, 8
 * 000000014040519F: call    loc_140405192
 * 00000001404051A4: add     rsp, 8
 * 00000001404051A8: call    loc_14040519B
 * 00000001404051AD: add     rsp, 8
 * 00000001404051B1: call    loc_1404051A4
 * 00000001404051B6: add     rsp, 8
 * 00000001404051BA: call    loc_1404051AD
 * 00000001404051BF: add     rsp, 8
 * 00000001404051C3: call    loc_1404051B6
 * 00000001404051C8: add     rsp, 8
 * 00000001404051CC: call    loc_1404051BF
 * 00000001404051D1: add     rsp, 8
 * 00000001404051D5: call    loc_1404051C8
 * 00000001404051DA: add     rsp, 8
 * 00000001404051DE: call    loc_1404051D1
 * 00000001404051E3: add     rsp, 8
 * 00000001404051E7: call    loc_1404051DA
 * 00000001404051EC: add     rsp, 8
 * 00000001404051F0: call    loc_1404051E3
 * 00000001404051F5: add     rsp, 8
 * 00000001404051F9: call    loc_1404051EC
 * 00000001404051FE: add     rsp, 8
 * 0000000140405202: call    loc_1404051F5
 * 0000000140405207: add     rsp, 8
 * 000000014040520B: call    loc_1404051FE
 * 0000000140405210: add     rsp, 8
 * 0000000140405214: call    loc_140405207
 * 0000000140405219: add     rsp, 8
 * 000000014040521D: call    loc_140405210
 * 0000000140405222: add     rsp, 8
 * 0000000140405226: call    loc_140405219
 * 000000014040522B: add     rsp, 8
 * 000000014040522F: call    loc_140405222
 * 0000000140405234: add     rsp, 8
 * 0000000140405238: call    loc_14040522B
 * 000000014040523D: add     rsp, 8
 * 0000000140405241: call    loc_140405234
 * 0000000140405246: add     rsp, 8
 * 000000014040524A: call    loc_14040523D
 * 000000014040524F: add     rsp, 8
 * 0000000140405253: call    loc_140405246
 * 0000000140405258: add     rsp, 8
 * 000000014040525C: call    loc_14040524F
 * 0000000140405261: add     rsp, 8
 * 0000000140405265: call    loc_140405258
 * 000000014040526A: add     rsp, 8
 * 000000014040526E: call    loc_140405261
 * 0000000140405273: add     rsp, 8
 * 0000000140405277: mov     eax, 0DADAh
 * 000000014040527C: test    word ptr gs:860h, 80h
 * 0000000140405287: jz      short loc_140405295
 * 0000000140405289: xor     eax, eax
 * 000000014040528B: xor     edx, edx
 * 000000014040528D: mov     ecx, 1
 * 0000000140405292: div     rcx
 * 0000000140405295: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405299: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040529D: mov     rax, [rbp+0E8h+var_138]
 * 00000001404052A1: mov     rsp, rbp
 * 00000001404052A4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404052AB: add     rsp, 0E8h
 * 00000001404052B2: test    cs:KiKvaShadow, 1
 * 00000001404052B9: jz      short loc_1404052C0
 * 00000001404052BB: jmp     KiKernelExit
 * 00000001404052C0: test    word ptr gs:860h, 100h
 * 00000001404052CB: jz      short loc_1404052D2
 * 00000001404052CD: verw    [rsp+arg_18]
 * 00000001404052D2: swapgs
 * 00000001404052D5: iretq
 * 00000001404052D7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404052DB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404052DF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404052E3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404052E7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404052EB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404052EF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404052F3: mov     r11, [rbp+0E8h+var_108]
 * 00000001404052F7: mov     r10, [rbp+0E8h+var_110]
 * 00000001404052FB: mov     r9, [rbp+0E8h+var_118]
 * 00000001404052FF: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405303: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405307: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040530B: mov     rax, [rbp+0E8h+var_138]
 * 000000014040530F: mov     rsp, rbp
 * 0000000140405312: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405319: add     rsp, 0E8h
 * 0000000140405320: iretq
 */
