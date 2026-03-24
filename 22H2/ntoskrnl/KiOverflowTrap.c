/*
 * XREFs of KiOverflowTrap @ 0x14040AC80
 * Callers:
 *     KiOverflowTrapShadow @ 0x140A14340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14040AC80 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14040AC80
 * Reason: Hex-Rays returned no pseudocode for 0x14040AC80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040AC80: sub     rsp, 8
 * 000000014040AC84: push    rbp
 * 000000014040AC85: sub     rsp, 158h
 * 000000014040AC8C: lea     rbp, [rsp+80h]
 * 000000014040AC94: mov     [rbp+0E8h+var_13D], 1
 * 000000014040AC98: mov     [rbp+0E8h+var_138], rax
 * 000000014040AC9C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040ACA0: mov     [rbp+0E8h+var_128], rdx
 * 000000014040ACA4: mov     [rbp+0E8h+var_120], r8
 * 000000014040ACA8: mov     [rbp+0E8h+var_118], r9
 * 000000014040ACAC: mov     [rbp+0E8h+var_110], r10
 * 000000014040ACB0: mov     [rbp+0E8h+var_108], r11
 * 000000014040ACB4: test    [rbp+0E8h+arg_0], 1
 * 000000014040ACBB: jnz     short loc_14040ACEC
 * 000000014040ACBD: lfence
 * 000000014040ACC0: test    word ptr gs:860h, 1
 * 000000014040ACCB: jnz     short loc_14040ACD5
 * 000000014040ACCD: lfence
 * 000000014040ACD0: jmp     loc_14040AF3E
 * 000000014040ACD5: movzx   eax, word ptr gs:864h
 * 000000014040ACDE: mov     ecx, 48h ; 'H'
 * 000000014040ACE3: xor     edx, edx
 * 000000014040ACE5: wrmsr
 * 000000014040ACE7: jmp     loc_14040AF3E
 * 000000014040ACEC: test    cs:KiKvaShadow, 1
 * 000000014040ACF3: jnz     short loc_14040ACF8
 * 000000014040ACF5: swapgs
 * 000000014040ACF8: lfence
 * 000000014040ACFB: mov     r10, gs:188h
 * 000000014040AD04: mov     rcx, gs:188h
 * 000000014040AD0D: mov     rcx, [rcx+220h]
 * 000000014040AD14: mov     rcx, [rcx+9E0h]
 * 000000014040AD1B: mov     gs:858h, rcx
 * 000000014040AD24: mov     cx, gs:850h
 * 000000014040AD2D: mov     gs:852h, cx
 * 000000014040AD36: mov     cx, gs:860h
 * 000000014040AD3F: mov     gs:854h, cx
 * 000000014040AD48: movzx   eax, word ptr gs:866h
 * 000000014040AD51: cmp     gs:864h, ax
 * 000000014040AD5A: jz      short loc_14040AD6E
 * 000000014040AD5C: mov     gs:864h, ax
 * 000000014040AD65: mov     ecx, 48h ; 'H'
 * 000000014040AD6A: xor     edx, edx
 * 000000014040AD6C: wrmsr
 * 000000014040AD6E: movzx   edx, word ptr gs:860h
 * 000000014040AD77: test    edx, 8
 * 000000014040AD7D: jz      short loc_14040AD96
 * 000000014040AD7F: mov     eax, 1
 * 000000014040AD84: xor     edx, edx
 * 000000014040AD86: mov     ecx, 49h ; 'I'
 * 000000014040AD8B: wrmsr
 * 000000014040AD8D: movzx   edx, word ptr gs:860h
 * 000000014040AD96: test    edx, 2
 * 000000014040AD9C: jz      loc_14040AEC7
 * 000000014040ADA2: call    loc_14040AEB5
 * 000000014040ADA7: add     rsp, 8
 * 000000014040ADAB: call    loc_14040AEBE
 * 000000014040ADB0: add     rsp, 8
 * 000000014040ADB4: call    loc_14040ADA7
 * 000000014040ADB9: add     rsp, 8
 * 000000014040ADBD: call    loc_14040ADB0
 * 000000014040ADC2: add     rsp, 8
 * 000000014040ADC6: call    loc_14040ADB9
 * 000000014040ADCB: add     rsp, 8
 * 000000014040ADCF: call    loc_14040ADC2
 * 000000014040ADD4: add     rsp, 8
 * 000000014040ADD8: call    loc_14040ADCB
 * 000000014040ADDD: add     rsp, 8
 * 000000014040ADE1: call    loc_14040ADD4
 * 000000014040ADE6: add     rsp, 8
 * 000000014040ADEA: call    loc_14040ADDD
 * 000000014040ADEF: add     rsp, 8
 * 000000014040ADF3: call    loc_14040ADE6
 * 000000014040ADF8: add     rsp, 8
 * 000000014040ADFC: call    loc_14040ADEF
 * 000000014040AE01: add     rsp, 8
 * 000000014040AE05: call    loc_14040ADF8
 * 000000014040AE0A: add     rsp, 8
 * 000000014040AE0E: call    loc_14040AE01
 * 000000014040AE13: add     rsp, 8
 * 000000014040AE17: call    loc_14040AE0A
 * 000000014040AE1C: add     rsp, 8
 * 000000014040AE20: call    loc_14040AE13
 * 000000014040AE25: add     rsp, 8
 * 000000014040AE29: call    loc_14040AE1C
 * 000000014040AE2E: add     rsp, 8
 * 000000014040AE32: call    loc_14040AE25
 * 000000014040AE37: add     rsp, 8
 * 000000014040AE3B: call    loc_14040AE2E
 * 000000014040AE40: add     rsp, 8
 * 000000014040AE44: call    loc_14040AE37
 * 000000014040AE49: add     rsp, 8
 * 000000014040AE4D: call    loc_14040AE40
 * 000000014040AE52: add     rsp, 8
 * 000000014040AE56: call    loc_14040AE49
 * 000000014040AE5B: add     rsp, 8
 * 000000014040AE5F: call    loc_14040AE52
 * 000000014040AE64: add     rsp, 8
 * 000000014040AE68: call    loc_14040AE5B
 * 000000014040AE6D: add     rsp, 8
 * 000000014040AE71: call    loc_14040AE64
 * 000000014040AE76: add     rsp, 8
 * 000000014040AE7A: call    loc_14040AE6D
 * 000000014040AE7F: add     rsp, 8
 * 000000014040AE83: call    loc_14040AE76
 * 000000014040AE88: add     rsp, 8
 * 000000014040AE8C: call    loc_14040AE7F
 * 000000014040AE91: add     rsp, 8
 * 000000014040AE95: call    loc_14040AE88
 * 000000014040AE9A: add     rsp, 8
 * 000000014040AE9E: call    loc_14040AE91
 * 000000014040AEA3: add     rsp, 8
 * 000000014040AEA7: call    loc_14040AE9A
 * 000000014040AEAC: add     rsp, 8
 * 000000014040AEB0: call    loc_14040AEA3
 * 000000014040AEB5: add     rsp, 8
 * 000000014040AEB9: call    loc_14040AEAC
 * 000000014040AEBE: add     rsp, 8
 * 000000014040AEC2: mov     eax, 0DADAh
 * 000000014040AEC7: test    edx, 200h
 * 000000014040AECD: jz      short loc_14040AED4
 * 000000014040AECF: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040AED4: lfence
 * 000000014040AED7: mov     byte ptr gs:856h, 0
 * 000000014040AEE0: test    byte ptr [r10+3], 80h
 * 000000014040AEE5: jz      short loc_14040AF29
 * 000000014040AEE7: mov     ecx, 0C0000102h
 * 000000014040AEEC: rdmsr
 * 000000014040AEEE: shl     rdx, 20h
 * 000000014040AEF2: or      rax, rdx
 * 000000014040AEF5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040AEFC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040AF04: cmp     [r10+0F0h], rax
 * 000000014040AF0B: jz      short loc_14040AF29
 * 000000014040AF0D: mov     rdx, [r10+1F0h]
 * 000000014040AF14: bts     dword ptr [r10+74h], 8
 * 000000014040AF1A: dec     word ptr [r10+1E6h]
 * 000000014040AF22: mov     [rdx+80h], rax
 * 000000014040AF29: test    byte ptr [r10+3], 3
 * 000000014040AF2E: mov     [rbp+0E8h+var_68], 0
 * 000000014040AF37: jz      short loc_14040AF3E
 * 000000014040AF39: call    KiSaveDebugRegisterState
 * 000000014040AF3E: cld
 * 000000014040AF3F: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040AF43: ldmxcsr dword ptr gs:180h
 * 000000014040AF4C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040AF50: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040AF54: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040AF58: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040AF5C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040AF60: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040AF64: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040AF6B: jz      short loc_14040AF79
 * 000000014040AF6D: test    [rbp+0E8h+arg_0], 1
 * 000000014040AF74: jz      short loc_14040AF79
 * 000000014040AF76: stac
 * 000000014040AF79: test    [rbp+0E8h+arg_8], 200h
 * 000000014040AF83: jz      short loc_14040AF86
 * 000000014040AF85: sti
 * 000000014040AF86: mov     ecx, 0C0000095h
 * 000000014040AF8B: xor     edx, edx
 * 000000014040AF8D: mov     r8, [rbp+0E8h]
 * 000000014040AF94: dec     r8
 * 000000014040AF97: call    KiExceptionDispatch
 * 000000014040AF9C: nop
 * 000000014040AF9D: retn
 */
