/*
 * XREFs of KiVmbusInterrupt2 @ 0x140403550
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140A15140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x140403550 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140403550
 * Reason: Hex-Rays returned no pseudocode for 0x140403550
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403550: push    3
 * 0000000140403552: push    rbp
 * 0000000140403553: push    rsi
 * 0000000140403554: sub     rsp, 150h
 * 000000014040355B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403563: mov     byte ptr [rbp-55h], 0
 * 0000000140403567: mov     [rbp-50h], rax
 * 000000014040356B: mov     [rbp-48h], rcx
 * 000000014040356F: mov     [rbp-40h], rdx
 * 0000000140403573: mov     [rbp-38h], r8
 * 0000000140403577: mov     [rbp-30h], r9
 * 000000014040357B: mov     [rbp-28h], r10
 * 000000014040357F: mov     [rbp-20h], r11
 * 0000000140403583: test    byte ptr [rbp+0F0h], 1
 * 000000014040358A: jnz     short loc_1404035BB
 * 000000014040358C: lfence
 * 000000014040358F: test    word ptr gs:860h, 1
 * 000000014040359A: jnz     short loc_1404035A4
 * 000000014040359C: lfence
 * 000000014040359F: jmp     loc_1404037C4
 * 00000001404035A4: movzx   eax, word ptr gs:864h
 * 00000001404035AD: mov     ecx, 48h ; 'H'
 * 00000001404035B2: xor     edx, edx
 * 00000001404035B4: wrmsr
 * 00000001404035B6: jmp     loc_1404037C4
 * 00000001404035BB: test    cs:KiKvaShadow, 1
 * 00000001404035C2: jnz     short loc_1404035C7
 * 00000001404035C4: swapgs
 * 00000001404035C7: lfence
 * 00000001404035CA: mov     r10, gs:188h
 * 00000001404035D3: mov     rcx, gs:188h
 * 00000001404035DC: mov     rcx, [rcx+220h]
 * 00000001404035E3: mov     rcx, [rcx+9E0h]
 * 00000001404035EA: mov     gs:858h, rcx
 * 00000001404035F3: mov     cx, gs:850h
 * 00000001404035FC: mov     gs:852h, cx
 * 0000000140403605: mov     cx, gs:860h
 * 000000014040360E: mov     gs:854h, cx
 * 0000000140403617: movzx   eax, word ptr gs:866h
 * 0000000140403620: cmp     gs:864h, ax
 * 0000000140403629: jz      short loc_14040363D
 * 000000014040362B: mov     gs:864h, ax
 * 0000000140403634: mov     ecx, 48h ; 'H'
 * 0000000140403639: xor     edx, edx
 * 000000014040363B: wrmsr
 * 000000014040363D: movzx   edx, word ptr gs:860h
 * 0000000140403646: test    edx, 8
 * 000000014040364C: jz      short loc_140403665
 * 000000014040364E: mov     eax, 1
 * 0000000140403653: xor     edx, edx
 * 0000000140403655: mov     ecx, 49h ; 'I'
 * 000000014040365A: wrmsr
 * 000000014040365C: movzx   edx, word ptr gs:860h
 * 0000000140403665: test    edx, 2
 * 000000014040366B: jz      loc_140403796
 * 0000000140403671: call    loc_140403784
 * 0000000140403676: add     rsp, 8
 * 000000014040367A: call    loc_14040378D
 * 000000014040367F: add     rsp, 8
 * 0000000140403683: call    loc_140403676
 * 0000000140403688: add     rsp, 8
 * 000000014040368C: call    loc_14040367F
 * 0000000140403691: add     rsp, 8
 * 0000000140403695: call    loc_140403688
 * 000000014040369A: add     rsp, 8
 * 000000014040369E: call    loc_140403691
 * 00000001404036A3: add     rsp, 8
 * 00000001404036A7: call    loc_14040369A
 * 00000001404036AC: add     rsp, 8
 * 00000001404036B0: call    loc_1404036A3
 * 00000001404036B5: add     rsp, 8
 * 00000001404036B9: call    loc_1404036AC
 * 00000001404036BE: add     rsp, 8
 * 00000001404036C2: call    loc_1404036B5
 * 00000001404036C7: add     rsp, 8
 * 00000001404036CB: call    loc_1404036BE
 * 00000001404036D0: add     rsp, 8
 * 00000001404036D4: call    loc_1404036C7
 * 00000001404036D9: add     rsp, 8
 * 00000001404036DD: call    loc_1404036D0
 * 00000001404036E2: add     rsp, 8
 * 00000001404036E6: call    loc_1404036D9
 * 00000001404036EB: add     rsp, 8
 * 00000001404036EF: call    loc_1404036E2
 * 00000001404036F4: add     rsp, 8
 * 00000001404036F8: call    loc_1404036EB
 * 00000001404036FD: add     rsp, 8
 * 0000000140403701: call    loc_1404036F4
 * 0000000140403706: add     rsp, 8
 * 000000014040370A: call    loc_1404036FD
 * 000000014040370F: add     rsp, 8
 * 0000000140403713: call    loc_140403706
 * 0000000140403718: add     rsp, 8
 * 000000014040371C: call    loc_14040370F
 * 0000000140403721: add     rsp, 8
 * 0000000140403725: call    loc_140403718
 * 000000014040372A: add     rsp, 8
 * 000000014040372E: call    loc_140403721
 * 0000000140403733: add     rsp, 8
 * 0000000140403737: call    loc_14040372A
 * 000000014040373C: add     rsp, 8
 * 0000000140403740: call    loc_140403733
 * 0000000140403745: add     rsp, 8
 * 0000000140403749: call    loc_14040373C
 * 000000014040374E: add     rsp, 8
 * 0000000140403752: call    loc_140403745
 * 0000000140403757: add     rsp, 8
 * 000000014040375B: call    loc_14040374E
 * 0000000140403760: add     rsp, 8
 * 0000000140403764: call    loc_140403757
 * 0000000140403769: add     rsp, 8
 * 000000014040376D: call    loc_140403760
 * 0000000140403772: add     rsp, 8
 * 0000000140403776: call    loc_140403769
 * 000000014040377B: add     rsp, 8
 * 000000014040377F: call    loc_140403772
 * 0000000140403784: add     rsp, 8
 * 0000000140403788: call    loc_14040377B
 * 000000014040378D: add     rsp, 8
 * 0000000140403791: mov     eax, 0DADAh
 * 0000000140403796: test    edx, 200h
 * 000000014040379C: jz      short loc_1404037A3
 * 000000014040379E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404037A3: lfence
 * 00000001404037A6: mov     byte ptr gs:856h, 0
 * 00000001404037AF: test    byte ptr [r10+3], 3
 * 00000001404037B4: mov     word ptr [rbp+80h], 0
 * 00000001404037BD: jz      short loc_1404037C4
 * 00000001404037BF: call    KiSaveDebugRegisterState
 * 00000001404037C4: cld
 * 00000001404037C5: stmxcsr dword ptr [rbp-54h]
 * 00000001404037C9: ldmxcsr dword ptr gs:180h
 * 00000001404037D2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404037D6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404037DA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404037DE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404037E2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404037E6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404037EA: cmp     byte ptr gs:801Ah, 0
 * 00000001404037F3: jz      short loc_1404037FA
 * 00000001404037F5: call    KeWakeProcessor
 * 00000001404037FA: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403801: cmp     rax, [rbp+0E8h]
 * 0000000140403808: jnb     short loc_140403823
 * 000000014040380A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403811: cmp     rax, [rbp+0E8h]
 * 0000000140403818: jb      short loc_140403823
 * 000000014040381A: lea     rcx, [rbp-80h]
 * 000000014040381E: call    KiCheckForSListAddress
 * 0000000140403823: xor     esi, esi
 * 0000000140403825: inc     dword ptr gs:8000h
 * 000000014040382D: jmp     KiVmbusInterruptDispatch
 */
