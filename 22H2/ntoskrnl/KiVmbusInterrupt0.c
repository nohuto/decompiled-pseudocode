/*
 * XREFs of KiVmbusInterrupt0 @ 0x140402F70
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140A15040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x140402F70 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140402F70
 * Reason: Hex-Rays returned no pseudocode for 0x140402F70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402F70: push    1
 * 0000000140402F72: push    rbp
 * 0000000140402F73: push    rsi
 * 0000000140402F74: sub     rsp, 150h
 * 0000000140402F7B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140402F83: mov     byte ptr [rbp-55h], 0
 * 0000000140402F87: mov     [rbp-50h], rax
 * 0000000140402F8B: mov     [rbp-48h], rcx
 * 0000000140402F8F: mov     [rbp-40h], rdx
 * 0000000140402F93: mov     [rbp-38h], r8
 * 0000000140402F97: mov     [rbp-30h], r9
 * 0000000140402F9B: mov     [rbp-28h], r10
 * 0000000140402F9F: mov     [rbp-20h], r11
 * 0000000140402FA3: test    byte ptr [rbp+0F0h], 1
 * 0000000140402FAA: jnz     short loc_140402FDB
 * 0000000140402FAC: lfence
 * 0000000140402FAF: test    word ptr gs:860h, 1
 * 0000000140402FBA: jnz     short loc_140402FC4
 * 0000000140402FBC: lfence
 * 0000000140402FBF: jmp     loc_1404031E4
 * 0000000140402FC4: movzx   eax, word ptr gs:864h
 * 0000000140402FCD: mov     ecx, 48h ; 'H'
 * 0000000140402FD2: xor     edx, edx
 * 0000000140402FD4: wrmsr
 * 0000000140402FD6: jmp     loc_1404031E4
 * 0000000140402FDB: test    cs:KiKvaShadow, 1
 * 0000000140402FE2: jnz     short loc_140402FE7
 * 0000000140402FE4: swapgs
 * 0000000140402FE7: lfence
 * 0000000140402FEA: mov     r10, gs:188h
 * 0000000140402FF3: mov     rcx, gs:188h
 * 0000000140402FFC: mov     rcx, [rcx+220h]
 * 0000000140403003: mov     rcx, [rcx+9E0h]
 * 000000014040300A: mov     gs:858h, rcx
 * 0000000140403013: mov     cx, gs:850h
 * 000000014040301C: mov     gs:852h, cx
 * 0000000140403025: mov     cx, gs:860h
 * 000000014040302E: mov     gs:854h, cx
 * 0000000140403037: movzx   eax, word ptr gs:866h
 * 0000000140403040: cmp     gs:864h, ax
 * 0000000140403049: jz      short loc_14040305D
 * 000000014040304B: mov     gs:864h, ax
 * 0000000140403054: mov     ecx, 48h ; 'H'
 * 0000000140403059: xor     edx, edx
 * 000000014040305B: wrmsr
 * 000000014040305D: movzx   edx, word ptr gs:860h
 * 0000000140403066: test    edx, 8
 * 000000014040306C: jz      short loc_140403085
 * 000000014040306E: mov     eax, 1
 * 0000000140403073: xor     edx, edx
 * 0000000140403075: mov     ecx, 49h ; 'I'
 * 000000014040307A: wrmsr
 * 000000014040307C: movzx   edx, word ptr gs:860h
 * 0000000140403085: test    edx, 2
 * 000000014040308B: jz      loc_1404031B6
 * 0000000140403091: call    loc_1404031A4
 * 0000000140403096: add     rsp, 8
 * 000000014040309A: call    loc_1404031AD
 * 000000014040309F: add     rsp, 8
 * 00000001404030A3: call    loc_140403096
 * 00000001404030A8: add     rsp, 8
 * 00000001404030AC: call    loc_14040309F
 * 00000001404030B1: add     rsp, 8
 * 00000001404030B5: call    loc_1404030A8
 * 00000001404030BA: add     rsp, 8
 * 00000001404030BE: call    loc_1404030B1
 * 00000001404030C3: add     rsp, 8
 * 00000001404030C7: call    loc_1404030BA
 * 00000001404030CC: add     rsp, 8
 * 00000001404030D0: call    loc_1404030C3
 * 00000001404030D5: add     rsp, 8
 * 00000001404030D9: call    loc_1404030CC
 * 00000001404030DE: add     rsp, 8
 * 00000001404030E2: call    loc_1404030D5
 * 00000001404030E7: add     rsp, 8
 * 00000001404030EB: call    loc_1404030DE
 * 00000001404030F0: add     rsp, 8
 * 00000001404030F4: call    loc_1404030E7
 * 00000001404030F9: add     rsp, 8
 * 00000001404030FD: call    loc_1404030F0
 * 0000000140403102: add     rsp, 8
 * 0000000140403106: call    loc_1404030F9
 * 000000014040310B: add     rsp, 8
 * 000000014040310F: call    loc_140403102
 * 0000000140403114: add     rsp, 8
 * 0000000140403118: call    loc_14040310B
 * 000000014040311D: add     rsp, 8
 * 0000000140403121: call    loc_140403114
 * 0000000140403126: add     rsp, 8
 * 000000014040312A: call    loc_14040311D
 * 000000014040312F: add     rsp, 8
 * 0000000140403133: call    loc_140403126
 * 0000000140403138: add     rsp, 8
 * 000000014040313C: call    loc_14040312F
 * 0000000140403141: add     rsp, 8
 * 0000000140403145: call    loc_140403138
 * 000000014040314A: add     rsp, 8
 * 000000014040314E: call    loc_140403141
 * 0000000140403153: add     rsp, 8
 * 0000000140403157: call    loc_14040314A
 * 000000014040315C: add     rsp, 8
 * 0000000140403160: call    loc_140403153
 * 0000000140403165: add     rsp, 8
 * 0000000140403169: call    loc_14040315C
 * 000000014040316E: add     rsp, 8
 * 0000000140403172: call    loc_140403165
 * 0000000140403177: add     rsp, 8
 * 000000014040317B: call    loc_14040316E
 * 0000000140403180: add     rsp, 8
 * 0000000140403184: call    loc_140403177
 * 0000000140403189: add     rsp, 8
 * 000000014040318D: call    loc_140403180
 * 0000000140403192: add     rsp, 8
 * 0000000140403196: call    loc_140403189
 * 000000014040319B: add     rsp, 8
 * 000000014040319F: call    loc_140403192
 * 00000001404031A4: add     rsp, 8
 * 00000001404031A8: call    loc_14040319B
 * 00000001404031AD: add     rsp, 8
 * 00000001404031B1: mov     eax, 0DADAh
 * 00000001404031B6: test    edx, 200h
 * 00000001404031BC: jz      short loc_1404031C3
 * 00000001404031BE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404031C3: lfence
 * 00000001404031C6: mov     byte ptr gs:856h, 0
 * 00000001404031CF: test    byte ptr [r10+3], 3
 * 00000001404031D4: mov     word ptr [rbp+80h], 0
 * 00000001404031DD: jz      short loc_1404031E4
 * 00000001404031DF: call    KiSaveDebugRegisterState
 * 00000001404031E4: cld
 * 00000001404031E5: stmxcsr dword ptr [rbp-54h]
 * 00000001404031E9: ldmxcsr dword ptr gs:180h
 * 00000001404031F2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404031F6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404031FA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404031FE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140403202: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140403206: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040320A: cmp     byte ptr gs:801Ah, 0
 * 0000000140403213: jz      short loc_14040321A
 * 0000000140403215: call    KeWakeProcessor
 * 000000014040321A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403221: cmp     rax, [rbp+0E8h]
 * 0000000140403228: jnb     short loc_140403243
 * 000000014040322A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403231: cmp     rax, [rbp+0E8h]
 * 0000000140403238: jb      short loc_140403243
 * 000000014040323A: lea     rcx, [rbp-80h]
 * 000000014040323E: call    KiCheckForSListAddress
 * 0000000140403243: xor     esi, esi
 * 0000000140403245: inc     dword ptr gs:8000h
 * 000000014040324D: jmp     KiVmbusInterruptDispatch
 */
