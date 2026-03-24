/*
 * XREFs of KiControlProtectionFault @ 0x14040F880
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140A14BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x14040F880 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiProcessControlProtection @ 0x1405126A0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x14040F880
 * Reason: Hex-Rays returned no pseudocode for 0x14040F880
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040F880: push    rbp
 * 000000014040F881: sub     rsp, 158h
 * 000000014040F888: lea     rbp, [rsp+80h]
 * 000000014040F890: mov     [rbp+0D8h+var_12D], 1
 * 000000014040F894: mov     [rbp+0D8h+var_128], rax
 * 000000014040F898: mov     [rbp+0D8h+var_120], rcx
 * 000000014040F89C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040F8A0: mov     [rbp+0D8h+var_110], r8
 * 000000014040F8A4: mov     [rbp+0D8h+var_108], r9
 * 000000014040F8A8: mov     [rbp+0D8h+var_100], r10
 * 000000014040F8AC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040F8B0: test    [rbp+0D8h+arg_8], 1
 * 000000014040F8B7: jnz     short loc_14040F8E8
 * 000000014040F8B9: lfence
 * 000000014040F8BC: test    word ptr gs:860h, 1
 * 000000014040F8C7: jnz     short loc_14040F8D1
 * 000000014040F8C9: lfence
 * 000000014040F8CC: jmp     loc_14040FAF1
 * 000000014040F8D1: movzx   eax, word ptr gs:864h
 * 000000014040F8DA: mov     ecx, 48h ; 'H'
 * 000000014040F8DF: xor     edx, edx
 * 000000014040F8E1: wrmsr
 * 000000014040F8E3: jmp     loc_14040FAF1
 * 000000014040F8E8: test    cs:KiKvaShadow, 1
 * 000000014040F8EF: jnz     short loc_14040F8F4
 * 000000014040F8F1: swapgs
 * 000000014040F8F4: lfence
 * 000000014040F8F7: mov     r10, gs:188h
 * 000000014040F900: mov     rcx, gs:188h
 * 000000014040F909: mov     rcx, [rcx+220h]
 * 000000014040F910: mov     rcx, [rcx+9E0h]
 * 000000014040F917: mov     gs:858h, rcx
 * 000000014040F920: mov     cx, gs:850h
 * 000000014040F929: mov     gs:852h, cx
 * 000000014040F932: mov     cx, gs:860h
 * 000000014040F93B: mov     gs:854h, cx
 * 000000014040F944: movzx   eax, word ptr gs:866h
 * 000000014040F94D: cmp     gs:864h, ax
 * 000000014040F956: jz      short loc_14040F96A
 * 000000014040F958: mov     gs:864h, ax
 * 000000014040F961: mov     ecx, 48h ; 'H'
 * 000000014040F966: xor     edx, edx
 * 000000014040F968: wrmsr
 * 000000014040F96A: movzx   edx, word ptr gs:860h
 * 000000014040F973: test    edx, 8
 * 000000014040F979: jz      short loc_14040F992
 * 000000014040F97B: mov     eax, 1
 * 000000014040F980: xor     edx, edx
 * 000000014040F982: mov     ecx, 49h ; 'I'
 * 000000014040F987: wrmsr
 * 000000014040F989: movzx   edx, word ptr gs:860h
 * 000000014040F992: test    edx, 2
 * 000000014040F998: jz      loc_14040FAC3
 * 000000014040F99E: call    loc_14040FAB1
 * 000000014040F9A3: add     rsp, 8
 * 000000014040F9A7: call    loc_14040FABA
 * 000000014040F9AC: add     rsp, 8
 * 000000014040F9B0: call    loc_14040F9A3
 * 000000014040F9B5: add     rsp, 8
 * 000000014040F9B9: call    loc_14040F9AC
 * 000000014040F9BE: add     rsp, 8
 * 000000014040F9C2: call    loc_14040F9B5
 * 000000014040F9C7: add     rsp, 8
 * 000000014040F9CB: call    loc_14040F9BE
 * 000000014040F9D0: add     rsp, 8
 * 000000014040F9D4: call    loc_14040F9C7
 * 000000014040F9D9: add     rsp, 8
 * 000000014040F9DD: call    loc_14040F9D0
 * 000000014040F9E2: add     rsp, 8
 * 000000014040F9E6: call    loc_14040F9D9
 * 000000014040F9EB: add     rsp, 8
 * 000000014040F9EF: call    loc_14040F9E2
 * 000000014040F9F4: add     rsp, 8
 * 000000014040F9F8: call    loc_14040F9EB
 * 000000014040F9FD: add     rsp, 8
 * 000000014040FA01: call    loc_14040F9F4
 * 000000014040FA06: add     rsp, 8
 * 000000014040FA0A: call    loc_14040F9FD
 * 000000014040FA0F: add     rsp, 8
 * 000000014040FA13: call    loc_14040FA06
 * 000000014040FA18: add     rsp, 8
 * 000000014040FA1C: call    loc_14040FA0F
 * 000000014040FA21: add     rsp, 8
 * 000000014040FA25: call    loc_14040FA18
 * 000000014040FA2A: add     rsp, 8
 * 000000014040FA2E: call    loc_14040FA21
 * 000000014040FA33: add     rsp, 8
 * 000000014040FA37: call    loc_14040FA2A
 * 000000014040FA3C: add     rsp, 8
 * 000000014040FA40: call    loc_14040FA33
 * 000000014040FA45: add     rsp, 8
 * 000000014040FA49: call    loc_14040FA3C
 * 000000014040FA4E: add     rsp, 8
 * 000000014040FA52: call    loc_14040FA45
 * 000000014040FA57: add     rsp, 8
 * 000000014040FA5B: call    loc_14040FA4E
 * 000000014040FA60: add     rsp, 8
 * 000000014040FA64: call    loc_14040FA57
 * 000000014040FA69: add     rsp, 8
 * 000000014040FA6D: call    loc_14040FA60
 * 000000014040FA72: add     rsp, 8
 * 000000014040FA76: call    loc_14040FA69
 * 000000014040FA7B: add     rsp, 8
 * 000000014040FA7F: call    loc_14040FA72
 * 000000014040FA84: add     rsp, 8
 * 000000014040FA88: call    loc_14040FA7B
 * 000000014040FA8D: add     rsp, 8
 * 000000014040FA91: call    loc_14040FA84
 * 000000014040FA96: add     rsp, 8
 * 000000014040FA9A: call    loc_14040FA8D
 * 000000014040FA9F: add     rsp, 8
 * 000000014040FAA3: call    loc_14040FA96
 * 000000014040FAA8: add     rsp, 8
 * 000000014040FAAC: call    loc_14040FA9F
 * 000000014040FAB1: add     rsp, 8
 * 000000014040FAB5: call    loc_14040FAA8
 * 000000014040FABA: add     rsp, 8
 * 000000014040FABE: mov     eax, 0DADAh
 * 000000014040FAC3: test    edx, 200h
 * 000000014040FAC9: jz      short loc_14040FAD0
 * 000000014040FACB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040FAD0: lfence
 * 000000014040FAD3: mov     byte ptr gs:856h, 0
 * 000000014040FADC: test    byte ptr [r10+3], 3
 * 000000014040FAE1: mov     [rbp+0D8h+var_58], 0
 * 000000014040FAEA: jz      short loc_14040FAF1
 * 000000014040FAEC: call    KiSaveDebugRegisterState
 * 000000014040FAF1: cld
 * 000000014040FAF2: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040FAF6: ldmxcsr dword ptr gs:180h
 * 000000014040FAFF: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040FB03: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040FB07: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040FB0B: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040FB0F: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040FB13: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040FB17: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040FB1E: jz      short loc_14040FB2C
 * 000000014040FB20: test    [rbp+0D8h+arg_8], 1
 * 000000014040FB27: jz      short loc_14040FB2C
 * 000000014040FB29: stac
 * 000000014040FB2C: mov     eax, [rbp+0E0h]
 * 000000014040FB32: test    [rbp+0D8h+arg_10], 200h
 * 000000014040FB3C: jz      short loc_14040FB3F
 * 000000014040FB3E: sti
 * 000000014040FB3F: test    byte ptr gs:8725h, 40h
 * 000000014040FB48: jz      short loc_14040FB92
 * 000000014040FB4A: mov     r9, gs:188h
 * 000000014040FB53: test    byte ptr [r9+3], 80h
 * 000000014040FB58: jnz     short loc_14040FB74
 * 000000014040FB5A: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040FB5E: call    KiProcessControlProtection
 * 000000014040FB63: cmp     eax, 1
 * 000000014040FB66: jz      short loc_14040FBB5
 * 000000014040FB68: cmp     eax, 2
 * 000000014040FB6B: jz      short loc_14040FB74
 * 000000014040FB6D: cmp     eax, 3
 * 000000014040FB70: jz      short loc_14040FBA1
 * 000000014040FB72: jmp     short loc_14040FB92
 * 000000014040FB74: mov     r9, 39h ; '9'
 * 000000014040FB7B: mov     ecx, 0C0000409h
 * 000000014040FB80: mov     edx, 1
 * 000000014040FB85: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040FB8C: call    KiFastFailDispatch
 * 000000014040FB91: nop
 * 000000014040FB92: mov     edx, 15h
 * 000000014040FB97: mov     ecx, 7Fh
 * 000000014040FB9C: call    KiBugCheckDispatch
 * 000000014040FBA1: mov     ecx, 80000033h
 * 000000014040FBA6: xor     edx, edx
 * 000000014040FBA8: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040FBAF: call    KiExceptionDispatch
 * 000000014040FBB4: nop
 * 000000014040FBB5: cli
 * 000000014040FBB6: test    [rbp+0D8h+arg_8], 1
 * 000000014040FBBD: jz      loc_14040FE70
 * 000000014040FBC3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040FBCA: jz      short loc_14040FBCF
 * 000000014040FBCC: stac
 * 000000014040FBCF: mov     rcx, gs:188h
 * 000000014040FBD8: test    byte ptr [rcx+0C2h], 3
 * 000000014040FBDF: jz      short loc_14040FBFC
 * 000000014040FBE1: mov     ecx, 1
 * 000000014040FBE6: mov     cr8, rcx
 * 000000014040FBEA: sti
 * 000000014040FBEB: call    KiInitiateUserApc
 * 000000014040FBF0: cli
 * 000000014040FBF1: mov     ecx, 0
 * 000000014040FBF6: mov     cr8, rcx
 * 000000014040FBFA: jmp     short loc_14040FBCF
 * 000000014040FBFC: test    byte ptr gs:86Ch, 2
 * 000000014040FC05: jz      short loc_14040FC0E
 * 000000014040FC07: xor     ecx, ecx
 * 000000014040FC09: call    KiUpdateStibpPairing
 * 000000014040FC0E: mov     rcx, gs:188h
 * 000000014040FC17: test    dword ptr [rcx], 8000000h
 * 000000014040FC1D: jz      short loc_14040FC24
 * 000000014040FC1F: call    KiRestoreSetContextState
 * 000000014040FC24: mov     rcx, gs:188h
 * 000000014040FC2D: test    dword ptr [rcx], 40010000h
 * 000000014040FC33: jz      short loc_14040FC5A
 * 000000014040FC35: test    byte ptr [rcx+2], 1
 * 000000014040FC39: jz      short loc_14040FC49
 * 000000014040FC3B: call    KiCopyCounters
 * 000000014040FC40: mov     rcx, gs:188h
 * 000000014040FC49: test    byte ptr [rcx+3], 40h
 * 000000014040FC4D: jz      short loc_14040FC5A
 * 000000014040FC4F: lea     rsp, [rbp-80h]
 * 000000014040FC53: mov     cl, 1
 * 000000014040FC55: call    KiUmsExit
 * 000000014040FC5A: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040FC5E: cmp     [rbp+0D8h+var_58], 0
 * 000000014040FC66: jz      short loc_14040FC6D
 * 000000014040FC68: call    KiRestoreDebugRegisterState
 * 000000014040FC6D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040FC71: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040FC75: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040FC79: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040FC7D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040FC81: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040FC85: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040FC89: mov     r10, [rbp+0D8h+var_100]
 * 000000014040FC8D: mov     r9, [rbp+0D8h+var_108]
 * 000000014040FC91: mov     r8, [rbp+0D8h+var_110]
 * 000000014040FC95: mov     byte ptr gs:856h, 0
 * 000000014040FC9E: movzx   eax, word ptr gs:86Ah
 * 000000014040FCA7: cmp     gs:864h, ax
 * 000000014040FCB0: jz      short loc_14040FCC4
 * 000000014040FCB2: mov     gs:864h, ax
 * 000000014040FCBB: mov     ecx, 48h ; 'H'
 * 000000014040FCC0: xor     edx, edx
 * 000000014040FCC2: wrmsr
 * 000000014040FCC4: btr     word ptr gs:860h, 2
 * 000000014040FCCF: jnb     short loc_14040FCDF
 * 000000014040FCD1: mov     eax, 1
 * 000000014040FCD6: xor     edx, edx
 * 000000014040FCD8: mov     ecx, 49h ; 'I'
 * 000000014040FCDD: wrmsr
 * 000000014040FCDF: btr     word ptr gs:860h, 5
 * 000000014040FCEA: jnb     loc_14040FE15
 * 000000014040FCF0: call    loc_14040FE03
 * 000000014040FCF5: add     rsp, 8
 * 000000014040FCF9: call    loc_14040FE0C
 * 000000014040FCFE: add     rsp, 8
 * 000000014040FD02: call    loc_14040FCF5
 * 000000014040FD07: add     rsp, 8
 * 000000014040FD0B: call    loc_14040FCFE
 * 000000014040FD10: add     rsp, 8
 * 000000014040FD14: call    loc_14040FD07
 * 000000014040FD19: add     rsp, 8
 * 000000014040FD1D: call    loc_14040FD10
 * 000000014040FD22: add     rsp, 8
 * 000000014040FD26: call    loc_14040FD19
 * 000000014040FD2B: add     rsp, 8
 * 000000014040FD2F: call    loc_14040FD22
 * 000000014040FD34: add     rsp, 8
 * 000000014040FD38: call    loc_14040FD2B
 * 000000014040FD3D: add     rsp, 8
 * 000000014040FD41: call    loc_14040FD34
 * 000000014040FD46: add     rsp, 8
 * 000000014040FD4A: call    loc_14040FD3D
 * 000000014040FD4F: add     rsp, 8
 * 000000014040FD53: call    loc_14040FD46
 * 000000014040FD58: add     rsp, 8
 * 000000014040FD5C: call    loc_14040FD4F
 * 000000014040FD61: add     rsp, 8
 * 000000014040FD65: call    loc_14040FD58
 * 000000014040FD6A: add     rsp, 8
 * 000000014040FD6E: call    loc_14040FD61
 * 000000014040FD73: add     rsp, 8
 * 000000014040FD77: call    loc_14040FD6A
 * 000000014040FD7C: add     rsp, 8
 * 000000014040FD80: call    loc_14040FD73
 * 000000014040FD85: add     rsp, 8
 * 000000014040FD89: call    loc_14040FD7C
 * 000000014040FD8E: add     rsp, 8
 * 000000014040FD92: call    loc_14040FD85
 * 000000014040FD97: add     rsp, 8
 * 000000014040FD9B: call    loc_14040FD8E
 * 000000014040FDA0: add     rsp, 8
 * 000000014040FDA4: call    loc_14040FD97
 * 000000014040FDA9: add     rsp, 8
 * 000000014040FDAD: call    loc_14040FDA0
 * 000000014040FDB2: add     rsp, 8
 * 000000014040FDB6: call    loc_14040FDA9
 * 000000014040FDBB: add     rsp, 8
 * 000000014040FDBF: call    loc_14040FDB2
 * 000000014040FDC4: add     rsp, 8
 * 000000014040FDC8: call    loc_14040FDBB
 * 000000014040FDCD: add     rsp, 8
 * 000000014040FDD1: call    loc_14040FDC4
 * 000000014040FDD6: add     rsp, 8
 * 000000014040FDDA: call    loc_14040FDCD
 * 000000014040FDDF: add     rsp, 8
 * 000000014040FDE3: call    loc_14040FDD6
 * 000000014040FDE8: add     rsp, 8
 * 000000014040FDEC: call    loc_14040FDDF
 * 000000014040FDF1: add     rsp, 8
 * 000000014040FDF5: call    loc_14040FDE8
 * 000000014040FDFA: add     rsp, 8
 * 000000014040FDFE: call    loc_14040FDF1
 * 000000014040FE03: add     rsp, 8
 * 000000014040FE07: call    loc_14040FDFA
 * 000000014040FE0C: add     rsp, 8
 * 000000014040FE10: mov     eax, 0DADAh
 * 000000014040FE15: test    word ptr gs:860h, 80h
 * 000000014040FE20: jz      short loc_14040FE2E
 * 000000014040FE22: xor     eax, eax
 * 000000014040FE24: xor     edx, edx
 * 000000014040FE26: mov     ecx, 1
 * 000000014040FE2B: div     rcx
 * 000000014040FE2E: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040FE32: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040FE36: mov     rax, [rbp+0D8h+var_128]
 * 000000014040FE3A: mov     rsp, rbp
 * 000000014040FE3D: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040FE44: add     rsp, 0E8h
 * 000000014040FE4B: test    cs:KiKvaShadow, 1
 * 000000014040FE52: jz      short loc_14040FE59
 * 000000014040FE54: jmp     KiKernelExit
 * 000000014040FE59: test    word ptr gs:860h, 100h
 * 000000014040FE64: jz      short loc_14040FE6B
 * 000000014040FE66: verw    [rsp-10h+arg_20]
 * 000000014040FE6B: swapgs
 * 000000014040FE6E: iretq
 * 000000014040FE70: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040FE74: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040FE78: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040FE7C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040FE80: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040FE84: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040FE88: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040FE8C: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040FE90: mov     r10, [rbp+0D8h+var_100]
 * 000000014040FE94: mov     r9, [rbp+0D8h+var_108]
 * 000000014040FE98: mov     r8, [rbp+0D8h+var_110]
 * 000000014040FE9C: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040FEA0: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040FEA4: mov     rax, [rbp+0D8h+var_128]
 * 000000014040FEA8: mov     rsp, rbp
 * 000000014040FEAB: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040FEB2: add     rsp, 0E8h
 * 000000014040FEB9: iretq
 * 000000014040FEBB: retn
 */
