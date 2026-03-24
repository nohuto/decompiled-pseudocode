/*
 * XREFs of KiHvInterrupt @ 0x140402C80
 * Callers:
 *     KiHvInterruptShadow @ 0x140A14FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x140402C80 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140402C80
 * Reason: Hex-Rays returned no pseudocode for 0x140402C80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402C80: push    0
 * 0000000140402C82: push    rbp
 * 0000000140402C83: push    rsi
 * 0000000140402C84: sub     rsp, 150h
 * 0000000140402C8B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140402C93: mov     byte ptr [rbp-55h], 0
 * 0000000140402C97: mov     [rbp-50h], rax
 * 0000000140402C9B: mov     [rbp-48h], rcx
 * 0000000140402C9F: mov     [rbp-40h], rdx
 * 0000000140402CA3: mov     [rbp-38h], r8
 * 0000000140402CA7: mov     [rbp-30h], r9
 * 0000000140402CAB: mov     [rbp-28h], r10
 * 0000000140402CAF: mov     [rbp-20h], r11
 * 0000000140402CB3: test    byte ptr [rbp+0F0h], 1
 * 0000000140402CBA: jnz     short loc_140402CEB
 * 0000000140402CBC: lfence
 * 0000000140402CBF: test    word ptr gs:860h, 1
 * 0000000140402CCA: jnz     short loc_140402CD4
 * 0000000140402CCC: lfence
 * 0000000140402CCF: jmp     loc_140402EF4
 * 0000000140402CD4: movzx   eax, word ptr gs:864h
 * 0000000140402CDD: mov     ecx, 48h ; 'H'
 * 0000000140402CE2: xor     edx, edx
 * 0000000140402CE4: wrmsr
 * 0000000140402CE6: jmp     loc_140402EF4
 * 0000000140402CEB: test    cs:KiKvaShadow, 1
 * 0000000140402CF2: jnz     short loc_140402CF7
 * 0000000140402CF4: swapgs
 * 0000000140402CF7: lfence
 * 0000000140402CFA: mov     r10, gs:188h
 * 0000000140402D03: mov     rcx, gs:188h
 * 0000000140402D0C: mov     rcx, [rcx+220h]
 * 0000000140402D13: mov     rcx, [rcx+9E0h]
 * 0000000140402D1A: mov     gs:858h, rcx
 * 0000000140402D23: mov     cx, gs:850h
 * 0000000140402D2C: mov     gs:852h, cx
 * 0000000140402D35: mov     cx, gs:860h
 * 0000000140402D3E: mov     gs:854h, cx
 * 0000000140402D47: movzx   eax, word ptr gs:866h
 * 0000000140402D50: cmp     gs:864h, ax
 * 0000000140402D59: jz      short loc_140402D6D
 * 0000000140402D5B: mov     gs:864h, ax
 * 0000000140402D64: mov     ecx, 48h ; 'H'
 * 0000000140402D69: xor     edx, edx
 * 0000000140402D6B: wrmsr
 * 0000000140402D6D: movzx   edx, word ptr gs:860h
 * 0000000140402D76: test    edx, 8
 * 0000000140402D7C: jz      short loc_140402D95
 * 0000000140402D7E: mov     eax, 1
 * 0000000140402D83: xor     edx, edx
 * 0000000140402D85: mov     ecx, 49h ; 'I'
 * 0000000140402D8A: wrmsr
 * 0000000140402D8C: movzx   edx, word ptr gs:860h
 * 0000000140402D95: test    edx, 2
 * 0000000140402D9B: jz      loc_140402EC6
 * 0000000140402DA1: call    loc_140402EB4
 * 0000000140402DA6: add     rsp, 8
 * 0000000140402DAA: call    loc_140402EBD
 * 0000000140402DAF: add     rsp, 8
 * 0000000140402DB3: call    loc_140402DA6
 * 0000000140402DB8: add     rsp, 8
 * 0000000140402DBC: call    loc_140402DAF
 * 0000000140402DC1: add     rsp, 8
 * 0000000140402DC5: call    loc_140402DB8
 * 0000000140402DCA: add     rsp, 8
 * 0000000140402DCE: call    loc_140402DC1
 * 0000000140402DD3: add     rsp, 8
 * 0000000140402DD7: call    loc_140402DCA
 * 0000000140402DDC: add     rsp, 8
 * 0000000140402DE0: call    loc_140402DD3
 * 0000000140402DE5: add     rsp, 8
 * 0000000140402DE9: call    loc_140402DDC
 * 0000000140402DEE: add     rsp, 8
 * 0000000140402DF2: call    loc_140402DE5
 * 0000000140402DF7: add     rsp, 8
 * 0000000140402DFB: call    loc_140402DEE
 * 0000000140402E00: add     rsp, 8
 * 0000000140402E04: call    loc_140402DF7
 * 0000000140402E09: add     rsp, 8
 * 0000000140402E0D: call    loc_140402E00
 * 0000000140402E12: add     rsp, 8
 * 0000000140402E16: call    loc_140402E09
 * 0000000140402E1B: add     rsp, 8
 * 0000000140402E1F: call    loc_140402E12
 * 0000000140402E24: add     rsp, 8
 * 0000000140402E28: call    loc_140402E1B
 * 0000000140402E2D: add     rsp, 8
 * 0000000140402E31: call    loc_140402E24
 * 0000000140402E36: add     rsp, 8
 * 0000000140402E3A: call    loc_140402E2D
 * 0000000140402E3F: add     rsp, 8
 * 0000000140402E43: call    loc_140402E36
 * 0000000140402E48: add     rsp, 8
 * 0000000140402E4C: call    loc_140402E3F
 * 0000000140402E51: add     rsp, 8
 * 0000000140402E55: call    loc_140402E48
 * 0000000140402E5A: add     rsp, 8
 * 0000000140402E5E: call    loc_140402E51
 * 0000000140402E63: add     rsp, 8
 * 0000000140402E67: call    loc_140402E5A
 * 0000000140402E6C: add     rsp, 8
 * 0000000140402E70: call    loc_140402E63
 * 0000000140402E75: add     rsp, 8
 * 0000000140402E79: call    loc_140402E6C
 * 0000000140402E7E: add     rsp, 8
 * 0000000140402E82: call    loc_140402E75
 * 0000000140402E87: add     rsp, 8
 * 0000000140402E8B: call    loc_140402E7E
 * 0000000140402E90: add     rsp, 8
 * 0000000140402E94: call    loc_140402E87
 * 0000000140402E99: add     rsp, 8
 * 0000000140402E9D: call    loc_140402E90
 * 0000000140402EA2: add     rsp, 8
 * 0000000140402EA6: call    loc_140402E99
 * 0000000140402EAB: add     rsp, 8
 * 0000000140402EAF: call    loc_140402EA2
 * 0000000140402EB4: add     rsp, 8
 * 0000000140402EB8: call    loc_140402EAB
 * 0000000140402EBD: add     rsp, 8
 * 0000000140402EC1: mov     eax, 0DADAh
 * 0000000140402EC6: test    edx, 200h
 * 0000000140402ECC: jz      short loc_140402ED3
 * 0000000140402ECE: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140402ED3: lfence
 * 0000000140402ED6: mov     byte ptr gs:856h, 0
 * 0000000140402EDF: test    byte ptr [r10+3], 3
 * 0000000140402EE4: mov     word ptr [rbp+80h], 0
 * 0000000140402EED: jz      short loc_140402EF4
 * 0000000140402EEF: call    KiSaveDebugRegisterState
 * 0000000140402EF4: cld
 * 0000000140402EF5: stmxcsr dword ptr [rbp-54h]
 * 0000000140402EF9: ldmxcsr dword ptr gs:180h
 * 0000000140402F02: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140402F06: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140402F0A: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140402F0E: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140402F12: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140402F16: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140402F1A: cmp     byte ptr gs:801Ah, 0
 * 0000000140402F23: jz      short loc_140402F2A
 * 0000000140402F25: call    KeWakeProcessor
 * 0000000140402F2A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140402F31: cmp     rax, [rbp+0E8h]
 * 0000000140402F38: jnb     short loc_140402F53
 * 0000000140402F3A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140402F41: cmp     rax, [rbp+0E8h]
 * 0000000140402F48: jb      short loc_140402F53
 * 0000000140402F4A: lea     rcx, [rbp-80h]
 * 0000000140402F4E: call    KiCheckForSListAddress
 * 0000000140402F53: xor     esi, esi
 * 0000000140402F55: inc     dword ptr gs:8000h
 * 0000000140402F5D: jmp     KiHvInterruptDispatch
 */
