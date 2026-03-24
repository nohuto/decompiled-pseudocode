/*
 * XREFs of KiDivideErrorFault @ 0x140409C00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140A14100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140409C00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140409C00
 * Reason: Hex-Rays returned no pseudocode for 0x140409C00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140409C00: sub     rsp, 8
 * 0000000140409C04: push    rbp
 * 0000000140409C05: sub     rsp, 158h
 * 0000000140409C0C: lea     rbp, [rsp+80h]
 * 0000000140409C14: mov     [rbp+0E8h+var_13D], 1
 * 0000000140409C18: mov     [rbp+0E8h+var_138], rax
 * 0000000140409C1C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140409C20: mov     [rbp+0E8h+var_128], rdx
 * 0000000140409C24: mov     [rbp+0E8h+var_120], r8
 * 0000000140409C28: mov     [rbp+0E8h+var_118], r9
 * 0000000140409C2C: mov     [rbp+0E8h+var_110], r10
 * 0000000140409C30: mov     [rbp+0E8h+var_108], r11
 * 0000000140409C34: test    [rbp+0E8h+arg_0], 1
 * 0000000140409C3B: jnz     short loc_140409C6C
 * 0000000140409C3D: lfence
 * 0000000140409C40: test    word ptr gs:860h, 1
 * 0000000140409C4B: jnz     short loc_140409C55
 * 0000000140409C4D: lfence
 * 0000000140409C50: jmp     loc_140409EBE
 * 0000000140409C55: movzx   eax, word ptr gs:864h
 * 0000000140409C5E: mov     ecx, 48h ; 'H'
 * 0000000140409C63: xor     edx, edx
 * 0000000140409C65: wrmsr
 * 0000000140409C67: jmp     loc_140409EBE
 * 0000000140409C6C: test    cs:KiKvaShadow, 1
 * 0000000140409C73: jnz     short loc_140409C78
 * 0000000140409C75: swapgs
 * 0000000140409C78: lfence
 * 0000000140409C7B: mov     r10, gs:188h
 * 0000000140409C84: mov     rcx, gs:188h
 * 0000000140409C8D: mov     rcx, [rcx+220h]
 * 0000000140409C94: mov     rcx, [rcx+9E0h]
 * 0000000140409C9B: mov     gs:858h, rcx
 * 0000000140409CA4: mov     cx, gs:850h
 * 0000000140409CAD: mov     gs:852h, cx
 * 0000000140409CB6: mov     cx, gs:860h
 * 0000000140409CBF: mov     gs:854h, cx
 * 0000000140409CC8: movzx   eax, word ptr gs:866h
 * 0000000140409CD1: cmp     gs:864h, ax
 * 0000000140409CDA: jz      short loc_140409CEE
 * 0000000140409CDC: mov     gs:864h, ax
 * 0000000140409CE5: mov     ecx, 48h ; 'H'
 * 0000000140409CEA: xor     edx, edx
 * 0000000140409CEC: wrmsr
 * 0000000140409CEE: movzx   edx, word ptr gs:860h
 * 0000000140409CF7: test    edx, 8
 * 0000000140409CFD: jz      short loc_140409D16
 * 0000000140409CFF: mov     eax, 1
 * 0000000140409D04: xor     edx, edx
 * 0000000140409D06: mov     ecx, 49h ; 'I'
 * 0000000140409D0B: wrmsr
 * 0000000140409D0D: movzx   edx, word ptr gs:860h
 * 0000000140409D16: test    edx, 2
 * 0000000140409D1C: jz      loc_140409E47
 * 0000000140409D22: call    loc_140409E35
 * 0000000140409D27: add     rsp, 8
 * 0000000140409D2B: call    loc_140409E3E
 * 0000000140409D30: add     rsp, 8
 * 0000000140409D34: call    loc_140409D27
 * 0000000140409D39: add     rsp, 8
 * 0000000140409D3D: call    loc_140409D30
 * 0000000140409D42: add     rsp, 8
 * 0000000140409D46: call    loc_140409D39
 * 0000000140409D4B: add     rsp, 8
 * 0000000140409D4F: call    loc_140409D42
 * 0000000140409D54: add     rsp, 8
 * 0000000140409D58: call    loc_140409D4B
 * 0000000140409D5D: add     rsp, 8
 * 0000000140409D61: call    loc_140409D54
 * 0000000140409D66: add     rsp, 8
 * 0000000140409D6A: call    loc_140409D5D
 * 0000000140409D6F: add     rsp, 8
 * 0000000140409D73: call    loc_140409D66
 * 0000000140409D78: add     rsp, 8
 * 0000000140409D7C: call    loc_140409D6F
 * 0000000140409D81: add     rsp, 8
 * 0000000140409D85: call    loc_140409D78
 * 0000000140409D8A: add     rsp, 8
 * 0000000140409D8E: call    loc_140409D81
 * 0000000140409D93: add     rsp, 8
 * 0000000140409D97: call    loc_140409D8A
 * 0000000140409D9C: add     rsp, 8
 * 0000000140409DA0: call    loc_140409D93
 * 0000000140409DA5: add     rsp, 8
 * 0000000140409DA9: call    loc_140409D9C
 * 0000000140409DAE: add     rsp, 8
 * 0000000140409DB2: call    loc_140409DA5
 * 0000000140409DB7: add     rsp, 8
 * 0000000140409DBB: call    loc_140409DAE
 * 0000000140409DC0: add     rsp, 8
 * 0000000140409DC4: call    loc_140409DB7
 * 0000000140409DC9: add     rsp, 8
 * 0000000140409DCD: call    loc_140409DC0
 * 0000000140409DD2: add     rsp, 8
 * 0000000140409DD6: call    loc_140409DC9
 * 0000000140409DDB: add     rsp, 8
 * 0000000140409DDF: call    loc_140409DD2
 * 0000000140409DE4: add     rsp, 8
 * 0000000140409DE8: call    loc_140409DDB
 * 0000000140409DED: add     rsp, 8
 * 0000000140409DF1: call    loc_140409DE4
 * 0000000140409DF6: add     rsp, 8
 * 0000000140409DFA: call    loc_140409DED
 * 0000000140409DFF: add     rsp, 8
 * 0000000140409E03: call    loc_140409DF6
 * 0000000140409E08: add     rsp, 8
 * 0000000140409E0C: call    loc_140409DFF
 * 0000000140409E11: add     rsp, 8
 * 0000000140409E15: call    loc_140409E08
 * 0000000140409E1A: add     rsp, 8
 * 0000000140409E1E: call    loc_140409E11
 * 0000000140409E23: add     rsp, 8
 * 0000000140409E27: call    loc_140409E1A
 * 0000000140409E2C: add     rsp, 8
 * 0000000140409E30: call    loc_140409E23
 * 0000000140409E35: add     rsp, 8
 * 0000000140409E39: call    loc_140409E2C
 * 0000000140409E3E: add     rsp, 8
 * 0000000140409E42: mov     eax, 0DADAh
 * 0000000140409E47: test    edx, 200h
 * 0000000140409E4D: jz      short loc_140409E54
 * 0000000140409E4F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140409E54: lfence
 * 0000000140409E57: mov     byte ptr gs:856h, 0
 * 0000000140409E60: test    byte ptr [r10+3], 80h
 * 0000000140409E65: jz      short loc_140409EA9
 * 0000000140409E67: mov     ecx, 0C0000102h
 * 0000000140409E6C: rdmsr
 * 0000000140409E6E: shl     rdx, 20h
 * 0000000140409E72: or      rax, rdx
 * 0000000140409E75: cmp     rax, cs:MmUserProbeAddress
 * 0000000140409E7C: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140409E84: cmp     [r10+0F0h], rax
 * 0000000140409E8B: jz      short loc_140409EA9
 * 0000000140409E8D: mov     rdx, [r10+1F0h]
 * 0000000140409E94: bts     dword ptr [r10+74h], 8
 * 0000000140409E9A: dec     word ptr [r10+1E6h]
 * 0000000140409EA2: mov     [rdx+80h], rax
 * 0000000140409EA9: test    byte ptr [r10+3], 3
 * 0000000140409EAE: mov     [rbp+0E8h+var_68], 0
 * 0000000140409EB7: jz      short loc_140409EBE
 * 0000000140409EB9: call    KiSaveDebugRegisterState
 * 0000000140409EBE: cld
 * 0000000140409EBF: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140409EC3: ldmxcsr dword ptr gs:180h
 * 0000000140409ECC: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140409ED0: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140409ED4: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140409ED8: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140409EDC: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140409EE0: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140409EE4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140409EEB: jz      short loc_140409EF9
 * 0000000140409EED: test    [rbp+0E8h+arg_0], 1
 * 0000000140409EF4: jz      short loc_140409EF9
 * 0000000140409EF6: stac
 * 0000000140409EF9: test    [rbp+0E8h+arg_8], 200h
 * 0000000140409F03: jz      short loc_140409F06
 * 0000000140409F05: sti
 * 0000000140409F06: mov     ecx, 10000003h
 * 0000000140409F0B: xor     edx, edx
 * 0000000140409F0D: mov     r8, [rbp+0E8h]
 * 0000000140409F14: call    KiExceptionDispatch
 * 0000000140409F19: nop
 * 0000000140409F1A: retn
 */
