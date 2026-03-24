/*
 * XREFs of KiSystemCall32 @ 0x140410B00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140410B00 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140410B00
 * Reason: Hex-Rays returned no pseudocode for 0x140410B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410B00: swapgs
 * 0000000140410B03: mov     gs:10h, rsp
 * 0000000140410B0C: mov     rsp, gs:1A8h
 * 0000000140410B15: push    2Bh ; '+'
 * 0000000140410B17: push    qword ptr gs:10h
 * 0000000140410B1F: push    r11
 * 0000000140410B21: push    23h ; '#'
 * 0000000140410B23: push    rcx
 * 0000000140410B24: swapgs
 * 0000000140410B27: lfence
 * 0000000140410B2A: sub     rsp, 8
 * 0000000140410B2E: push    rbp
 * 0000000140410B2F: sub     rsp, 158h
 * 0000000140410B36: lea     rbp, [rsp+190h+var_110]
 * 0000000140410B3E: mov     byte ptr [rbp-55h], 1
 * 0000000140410B42: mov     [rbp-50h], rax
 * 0000000140410B46: mov     [rbp-48h], rcx
 * 0000000140410B4A: mov     [rbp-40h], rdx
 * 0000000140410B4E: mov     [rbp-38h], r8
 * 0000000140410B52: mov     [rbp-30h], r9
 * 0000000140410B56: mov     [rbp-28h], r10
 * 0000000140410B5A: mov     [rbp-20h], r11
 * 0000000140410B5E: test    byte ptr [rbp+0F0h], 1
 * 0000000140410B65: jnz     short loc_140410B96
 * 0000000140410B67: lfence
 * 0000000140410B6A: test    word ptr gs:860h, 1
 * 0000000140410B75: jnz     short loc_140410B7F
 * 0000000140410B77: lfence
 * 0000000140410B7A: jmp     loc_140410DE8
 * 0000000140410B7F: movzx   eax, word ptr gs:864h
 * 0000000140410B88: mov     ecx, 48h ; 'H'
 * 0000000140410B8D: xor     edx, edx
 * 0000000140410B8F: wrmsr
 * 0000000140410B91: jmp     loc_140410DE8
 * 0000000140410B96: test    cs:KiKvaShadow, 1
 * 0000000140410B9D: jnz     short loc_140410BA2
 * 0000000140410B9F: swapgs
 * 0000000140410BA2: lfence
 * 0000000140410BA5: mov     r10, gs:188h
 * 0000000140410BAE: mov     rcx, gs:188h
 * 0000000140410BB7: mov     rcx, [rcx+220h]
 * 0000000140410BBE: mov     rcx, [rcx+9E0h]
 * 0000000140410BC5: mov     gs:858h, rcx
 * 0000000140410BCE: mov     cx, gs:850h
 * 0000000140410BD7: mov     gs:852h, cx
 * 0000000140410BE0: mov     cx, gs:860h
 * 0000000140410BE9: mov     gs:854h, cx
 * 0000000140410BF2: movzx   eax, word ptr gs:866h
 * 0000000140410BFB: cmp     gs:864h, ax
 * 0000000140410C04: jz      short loc_140410C18
 * 0000000140410C06: mov     gs:864h, ax
 * 0000000140410C0F: mov     ecx, 48h ; 'H'
 * 0000000140410C14: xor     edx, edx
 * 0000000140410C16: wrmsr
 * 0000000140410C18: movzx   edx, word ptr gs:860h
 * 0000000140410C21: test    edx, 8
 * 0000000140410C27: jz      short loc_140410C40
 * 0000000140410C29: mov     eax, 1
 * 0000000140410C2E: xor     edx, edx
 * 0000000140410C30: mov     ecx, 49h ; 'I'
 * 0000000140410C35: wrmsr
 * 0000000140410C37: movzx   edx, word ptr gs:860h
 * 0000000140410C40: test    edx, 2
 * 0000000140410C46: jz      loc_140410D71
 * 0000000140410C4C: call    loc_140410D5F
 * 0000000140410C51: add     rsp, 8
 * 0000000140410C55: call    loc_140410D68
 * 0000000140410C5A: add     rsp, 8
 * 0000000140410C5E: call    loc_140410C51
 * 0000000140410C63: add     rsp, 8
 * 0000000140410C67: call    loc_140410C5A
 * 0000000140410C6C: add     rsp, 8
 * 0000000140410C70: call    loc_140410C63
 * 0000000140410C75: add     rsp, 8
 * 0000000140410C79: call    loc_140410C6C
 * 0000000140410C7E: add     rsp, 8
 * 0000000140410C82: call    loc_140410C75
 * 0000000140410C87: add     rsp, 8
 * 0000000140410C8B: call    loc_140410C7E
 * 0000000140410C90: add     rsp, 8
 * 0000000140410C94: call    loc_140410C87
 * 0000000140410C99: add     rsp, 8
 * 0000000140410C9D: call    loc_140410C90
 * 0000000140410CA2: add     rsp, 8
 * 0000000140410CA6: call    loc_140410C99
 * 0000000140410CAB: add     rsp, 8
 * 0000000140410CAF: call    loc_140410CA2
 * 0000000140410CB4: add     rsp, 8
 * 0000000140410CB8: call    loc_140410CAB
 * 0000000140410CBD: add     rsp, 8
 * 0000000140410CC1: call    loc_140410CB4
 * 0000000140410CC6: add     rsp, 8
 * 0000000140410CCA: call    loc_140410CBD
 * 0000000140410CCF: add     rsp, 8
 * 0000000140410CD3: call    loc_140410CC6
 * 0000000140410CD8: add     rsp, 8
 * 0000000140410CDC: call    loc_140410CCF
 * 0000000140410CE1: add     rsp, 8
 * 0000000140410CE5: call    loc_140410CD8
 * 0000000140410CEA: add     rsp, 8
 * 0000000140410CEE: call    loc_140410CE1
 * 0000000140410CF3: add     rsp, 8
 * 0000000140410CF7: call    loc_140410CEA
 * 0000000140410CFC: add     rsp, 8
 * 0000000140410D00: call    loc_140410CF3
 * 0000000140410D05: add     rsp, 8
 * 0000000140410D09: call    loc_140410CFC
 * 0000000140410D0E: add     rsp, 8
 * 0000000140410D12: call    loc_140410D05
 * 0000000140410D17: add     rsp, 8
 * 0000000140410D1B: call    loc_140410D0E
 * 0000000140410D20: add     rsp, 8
 * 0000000140410D24: call    loc_140410D17
 * 0000000140410D29: add     rsp, 8
 * 0000000140410D2D: call    loc_140410D20
 * 0000000140410D32: add     rsp, 8
 * 0000000140410D36: call    loc_140410D29
 * 0000000140410D3B: add     rsp, 8
 * 0000000140410D3F: call    loc_140410D32
 * 0000000140410D44: add     rsp, 8
 * 0000000140410D48: call    loc_140410D3B
 * 0000000140410D4D: add     rsp, 8
 * 0000000140410D51: call    loc_140410D44
 * 0000000140410D56: add     rsp, 8
 * 0000000140410D5A: call    loc_140410D4D
 * 0000000140410D5F: add     rsp, 8
 * 0000000140410D63: call    loc_140410D56
 * 0000000140410D68: add     rsp, 8
 * 0000000140410D6C: mov     eax, 0DADAh
 * 0000000140410D71: test    edx, 200h
 * 0000000140410D77: jz      short loc_140410D7E
 * 0000000140410D79: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410D7E: lfence
 * 0000000140410D81: mov     byte ptr gs:856h, 0
 * 0000000140410D8A: test    byte ptr [r10+3], 80h
 * 0000000140410D8F: jz      short loc_140410DD3
 * 0000000140410D91: mov     ecx, 0C0000102h
 * 0000000140410D96: rdmsr
 * 0000000140410D98: shl     rdx, 20h
 * 0000000140410D9C: or      rax, rdx
 * 0000000140410D9F: cmp     rax, cs:MmUserProbeAddress
 * 0000000140410DA6: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410DAE: cmp     [r10+0F0h], rax
 * 0000000140410DB5: jz      short loc_140410DD3
 * 0000000140410DB7: mov     rdx, [r10+1F0h]
 * 0000000140410DBE: bts     dword ptr [r10+74h], 8
 * 0000000140410DC4: dec     word ptr [r10+1E6h]
 * 0000000140410DCC: mov     [rdx+80h], rax
 * 0000000140410DD3: test    byte ptr [r10+3], 3
 * 0000000140410DD8: mov     word ptr [rbp+80h], 0
 * 0000000140410DE1: jz      short loc_140410DE8
 * 0000000140410DE3: call    KiSaveDebugRegisterState
 * 0000000140410DE8: cld
 * 0000000140410DE9: stmxcsr dword ptr [rbp-54h]
 * 0000000140410DED: ldmxcsr dword ptr gs:180h
 * 0000000140410DF6: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140410DFA: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140410DFE: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140410E02: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140410E06: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140410E0A: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140410E0E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140410E15: jz      short loc_140410E23
 * 0000000140410E17: test    byte ptr [rbp+0F0h], 1
 * 0000000140410E1E: jz      short loc_140410E23
 * 0000000140410E20: stac
 * 0000000140410E23: sub     qword ptr [rbp+0E8h], 2
 * 0000000140410E2B: and     dword ptr [rbp+0ECh], 0
 * 0000000140410E32: sti
 * 0000000140410E33: mov     ecx, 0C000001Dh
 * 0000000140410E38: xor     edx, edx
 * 0000000140410E3A: mov     r8, [rbp+0E8h]
 * 0000000140410E41: call    KiExceptionDispatch
 * 0000000140410E46: nop
 * 0000000140410E47: retn
 */
