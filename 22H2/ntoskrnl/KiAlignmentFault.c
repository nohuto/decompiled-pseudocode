/*
 * XREFs of KiAlignmentFault @ 0x14040DE80
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140A14940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14040DE80 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14040DE80
 * Reason: Hex-Rays returned no pseudocode for 0x14040DE80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040DE80: push    rbp
 * 000000014040DE81: sub     rsp, 158h
 * 000000014040DE88: lea     rbp, [rsp+80h]
 * 000000014040DE90: mov     [rbp+0D8h+var_12D], 1
 * 000000014040DE94: mov     [rbp+0D8h+var_128], rax
 * 000000014040DE98: mov     [rbp+0D8h+var_120], rcx
 * 000000014040DE9C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040DEA0: mov     [rbp+0D8h+var_110], r8
 * 000000014040DEA4: mov     [rbp+0D8h+var_108], r9
 * 000000014040DEA8: mov     [rbp+0D8h+var_100], r10
 * 000000014040DEAC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040DEB0: test    [rbp+0D8h+arg_8], 1
 * 000000014040DEB7: jnz     short loc_14040DEE8
 * 000000014040DEB9: lfence
 * 000000014040DEBC: test    word ptr gs:860h, 1
 * 000000014040DEC7: jnz     short loc_14040DED1
 * 000000014040DEC9: lfence
 * 000000014040DECC: jmp     loc_14040E13A
 * 000000014040DED1: movzx   eax, word ptr gs:864h
 * 000000014040DEDA: mov     ecx, 48h ; 'H'
 * 000000014040DEDF: xor     edx, edx
 * 000000014040DEE1: wrmsr
 * 000000014040DEE3: jmp     loc_14040E13A
 * 000000014040DEE8: test    cs:KiKvaShadow, 1
 * 000000014040DEEF: jnz     short loc_14040DEF4
 * 000000014040DEF1: swapgs
 * 000000014040DEF4: lfence
 * 000000014040DEF7: mov     r10, gs:188h
 * 000000014040DF00: mov     rcx, gs:188h
 * 000000014040DF09: mov     rcx, [rcx+220h]
 * 000000014040DF10: mov     rcx, [rcx+9E0h]
 * 000000014040DF17: mov     gs:858h, rcx
 * 000000014040DF20: mov     cx, gs:850h
 * 000000014040DF29: mov     gs:852h, cx
 * 000000014040DF32: mov     cx, gs:860h
 * 000000014040DF3B: mov     gs:854h, cx
 * 000000014040DF44: movzx   eax, word ptr gs:866h
 * 000000014040DF4D: cmp     gs:864h, ax
 * 000000014040DF56: jz      short loc_14040DF6A
 * 000000014040DF58: mov     gs:864h, ax
 * 000000014040DF61: mov     ecx, 48h ; 'H'
 * 000000014040DF66: xor     edx, edx
 * 000000014040DF68: wrmsr
 * 000000014040DF6A: movzx   edx, word ptr gs:860h
 * 000000014040DF73: test    edx, 8
 * 000000014040DF79: jz      short loc_14040DF92
 * 000000014040DF7B: mov     eax, 1
 * 000000014040DF80: xor     edx, edx
 * 000000014040DF82: mov     ecx, 49h ; 'I'
 * 000000014040DF87: wrmsr
 * 000000014040DF89: movzx   edx, word ptr gs:860h
 * 000000014040DF92: test    edx, 2
 * 000000014040DF98: jz      loc_14040E0C3
 * 000000014040DF9E: call    loc_14040E0B1
 * 000000014040DFA3: add     rsp, 8
 * 000000014040DFA7: call    loc_14040E0BA
 * 000000014040DFAC: add     rsp, 8
 * 000000014040DFB0: call    loc_14040DFA3
 * 000000014040DFB5: add     rsp, 8
 * 000000014040DFB9: call    loc_14040DFAC
 * 000000014040DFBE: add     rsp, 8
 * 000000014040DFC2: call    loc_14040DFB5
 * 000000014040DFC7: add     rsp, 8
 * 000000014040DFCB: call    loc_14040DFBE
 * 000000014040DFD0: add     rsp, 8
 * 000000014040DFD4: call    loc_14040DFC7
 * 000000014040DFD9: add     rsp, 8
 * 000000014040DFDD: call    loc_14040DFD0
 * 000000014040DFE2: add     rsp, 8
 * 000000014040DFE6: call    loc_14040DFD9
 * 000000014040DFEB: add     rsp, 8
 * 000000014040DFEF: call    loc_14040DFE2
 * 000000014040DFF4: add     rsp, 8
 * 000000014040DFF8: call    loc_14040DFEB
 * 000000014040DFFD: add     rsp, 8
 * 000000014040E001: call    loc_14040DFF4
 * 000000014040E006: add     rsp, 8
 * 000000014040E00A: call    loc_14040DFFD
 * 000000014040E00F: add     rsp, 8
 * 000000014040E013: call    loc_14040E006
 * 000000014040E018: add     rsp, 8
 * 000000014040E01C: call    loc_14040E00F
 * 000000014040E021: add     rsp, 8
 * 000000014040E025: call    loc_14040E018
 * 000000014040E02A: add     rsp, 8
 * 000000014040E02E: call    loc_14040E021
 * 000000014040E033: add     rsp, 8
 * 000000014040E037: call    loc_14040E02A
 * 000000014040E03C: add     rsp, 8
 * 000000014040E040: call    loc_14040E033
 * 000000014040E045: add     rsp, 8
 * 000000014040E049: call    loc_14040E03C
 * 000000014040E04E: add     rsp, 8
 * 000000014040E052: call    loc_14040E045
 * 000000014040E057: add     rsp, 8
 * 000000014040E05B: call    loc_14040E04E
 * 000000014040E060: add     rsp, 8
 * 000000014040E064: call    loc_14040E057
 * 000000014040E069: add     rsp, 8
 * 000000014040E06D: call    loc_14040E060
 * 000000014040E072: add     rsp, 8
 * 000000014040E076: call    loc_14040E069
 * 000000014040E07B: add     rsp, 8
 * 000000014040E07F: call    loc_14040E072
 * 000000014040E084: add     rsp, 8
 * 000000014040E088: call    loc_14040E07B
 * 000000014040E08D: add     rsp, 8
 * 000000014040E091: call    loc_14040E084
 * 000000014040E096: add     rsp, 8
 * 000000014040E09A: call    loc_14040E08D
 * 000000014040E09F: add     rsp, 8
 * 000000014040E0A3: call    loc_14040E096
 * 000000014040E0A8: add     rsp, 8
 * 000000014040E0AC: call    loc_14040E09F
 * 000000014040E0B1: add     rsp, 8
 * 000000014040E0B5: call    loc_14040E0A8
 * 000000014040E0BA: add     rsp, 8
 * 000000014040E0BE: mov     eax, 0DADAh
 * 000000014040E0C3: test    edx, 200h
 * 000000014040E0C9: jz      short loc_14040E0D0
 * 000000014040E0CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040E0D0: lfence
 * 000000014040E0D3: mov     byte ptr gs:856h, 0
 * 000000014040E0DC: test    byte ptr [r10+3], 80h
 * 000000014040E0E1: jz      short loc_14040E125
 * 000000014040E0E3: mov     ecx, 0C0000102h
 * 000000014040E0E8: rdmsr
 * 000000014040E0EA: shl     rdx, 20h
 * 000000014040E0EE: or      rax, rdx
 * 000000014040E0F1: cmp     rax, cs:MmUserProbeAddress
 * 000000014040E0F8: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040E100: cmp     [r10+0F0h], rax
 * 000000014040E107: jz      short loc_14040E125
 * 000000014040E109: mov     rdx, [r10+1F0h]
 * 000000014040E110: bts     dword ptr [r10+74h], 8
 * 000000014040E116: dec     word ptr [r10+1E6h]
 * 000000014040E11E: mov     [rdx+80h], rax
 * 000000014040E125: test    byte ptr [r10+3], 3
 * 000000014040E12A: mov     [rbp+0D8h+var_58], 0
 * 000000014040E133: jz      short loc_14040E13A
 * 000000014040E135: call    KiSaveDebugRegisterState
 * 000000014040E13A: cld
 * 000000014040E13B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040E13F: ldmxcsr dword ptr gs:180h
 * 000000014040E148: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040E14C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040E150: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040E154: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040E158: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040E15C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040E160: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E167: jz      short loc_14040E175
 * 000000014040E169: test    [rbp+0D8h+arg_8], 1
 * 000000014040E170: jz      short loc_14040E175
 * 000000014040E172: stac
 * 000000014040E175: mov     eax, [rbp+0E0h]
 * 000000014040E17B: test    [rbp+0D8h+arg_10], 200h
 * 000000014040E185: jz      short loc_14040E188
 * 000000014040E187: sti
 * 000000014040E188: mov     ecx, 80000002h
 * 000000014040E18D: xor     edx, edx
 * 000000014040E18F: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040E196: call    KiExceptionDispatch
 * 000000014040E19B: nop
 * 000000014040E19C: retn
 */
