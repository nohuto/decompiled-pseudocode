/*
 * XREFs of KiVmbusInterrupt1 @ 0x140403260
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140A150C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x140403260 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140403260
 * Reason: Hex-Rays returned no pseudocode for 0x140403260
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403260: push    2
 * 0000000140403262: push    rbp
 * 0000000140403263: push    rsi
 * 0000000140403264: sub     rsp, 150h
 * 000000014040326B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140403273: mov     byte ptr [rbp-55h], 0
 * 0000000140403277: mov     [rbp-50h], rax
 * 000000014040327B: mov     [rbp-48h], rcx
 * 000000014040327F: mov     [rbp-40h], rdx
 * 0000000140403283: mov     [rbp-38h], r8
 * 0000000140403287: mov     [rbp-30h], r9
 * 000000014040328B: mov     [rbp-28h], r10
 * 000000014040328F: mov     [rbp-20h], r11
 * 0000000140403293: test    byte ptr [rbp+0F0h], 1
 * 000000014040329A: jnz     short loc_1404032CB
 * 000000014040329C: lfence
 * 000000014040329F: test    word ptr gs:860h, 1
 * 00000001404032AA: jnz     short loc_1404032B4
 * 00000001404032AC: lfence
 * 00000001404032AF: jmp     loc_1404034D4
 * 00000001404032B4: movzx   eax, word ptr gs:864h
 * 00000001404032BD: mov     ecx, 48h ; 'H'
 * 00000001404032C2: xor     edx, edx
 * 00000001404032C4: wrmsr
 * 00000001404032C6: jmp     loc_1404034D4
 * 00000001404032CB: test    cs:KiKvaShadow, 1
 * 00000001404032D2: jnz     short loc_1404032D7
 * 00000001404032D4: swapgs
 * 00000001404032D7: lfence
 * 00000001404032DA: mov     r10, gs:188h
 * 00000001404032E3: mov     rcx, gs:188h
 * 00000001404032EC: mov     rcx, [rcx+220h]
 * 00000001404032F3: mov     rcx, [rcx+9E0h]
 * 00000001404032FA: mov     gs:858h, rcx
 * 0000000140403303: mov     cx, gs:850h
 * 000000014040330C: mov     gs:852h, cx
 * 0000000140403315: mov     cx, gs:860h
 * 000000014040331E: mov     gs:854h, cx
 * 0000000140403327: movzx   eax, word ptr gs:866h
 * 0000000140403330: cmp     gs:864h, ax
 * 0000000140403339: jz      short loc_14040334D
 * 000000014040333B: mov     gs:864h, ax
 * 0000000140403344: mov     ecx, 48h ; 'H'
 * 0000000140403349: xor     edx, edx
 * 000000014040334B: wrmsr
 * 000000014040334D: movzx   edx, word ptr gs:860h
 * 0000000140403356: test    edx, 8
 * 000000014040335C: jz      short loc_140403375
 * 000000014040335E: mov     eax, 1
 * 0000000140403363: xor     edx, edx
 * 0000000140403365: mov     ecx, 49h ; 'I'
 * 000000014040336A: wrmsr
 * 000000014040336C: movzx   edx, word ptr gs:860h
 * 0000000140403375: test    edx, 2
 * 000000014040337B: jz      loc_1404034A6
 * 0000000140403381: call    loc_140403494
 * 0000000140403386: add     rsp, 8
 * 000000014040338A: call    loc_14040349D
 * 000000014040338F: add     rsp, 8
 * 0000000140403393: call    loc_140403386
 * 0000000140403398: add     rsp, 8
 * 000000014040339C: call    loc_14040338F
 * 00000001404033A1: add     rsp, 8
 * 00000001404033A5: call    loc_140403398
 * 00000001404033AA: add     rsp, 8
 * 00000001404033AE: call    loc_1404033A1
 * 00000001404033B3: add     rsp, 8
 * 00000001404033B7: call    loc_1404033AA
 * 00000001404033BC: add     rsp, 8
 * 00000001404033C0: call    loc_1404033B3
 * 00000001404033C5: add     rsp, 8
 * 00000001404033C9: call    loc_1404033BC
 * 00000001404033CE: add     rsp, 8
 * 00000001404033D2: call    loc_1404033C5
 * 00000001404033D7: add     rsp, 8
 * 00000001404033DB: call    loc_1404033CE
 * 00000001404033E0: add     rsp, 8
 * 00000001404033E4: call    loc_1404033D7
 * 00000001404033E9: add     rsp, 8
 * 00000001404033ED: call    loc_1404033E0
 * 00000001404033F2: add     rsp, 8
 * 00000001404033F6: call    loc_1404033E9
 * 00000001404033FB: add     rsp, 8
 * 00000001404033FF: call    loc_1404033F2
 * 0000000140403404: add     rsp, 8
 * 0000000140403408: call    loc_1404033FB
 * 000000014040340D: add     rsp, 8
 * 0000000140403411: call    loc_140403404
 * 0000000140403416: add     rsp, 8
 * 000000014040341A: call    loc_14040340D
 * 000000014040341F: add     rsp, 8
 * 0000000140403423: call    loc_140403416
 * 0000000140403428: add     rsp, 8
 * 000000014040342C: call    loc_14040341F
 * 0000000140403431: add     rsp, 8
 * 0000000140403435: call    loc_140403428
 * 000000014040343A: add     rsp, 8
 * 000000014040343E: call    loc_140403431
 * 0000000140403443: add     rsp, 8
 * 0000000140403447: call    loc_14040343A
 * 000000014040344C: add     rsp, 8
 * 0000000140403450: call    loc_140403443
 * 0000000140403455: add     rsp, 8
 * 0000000140403459: call    loc_14040344C
 * 000000014040345E: add     rsp, 8
 * 0000000140403462: call    loc_140403455
 * 0000000140403467: add     rsp, 8
 * 000000014040346B: call    loc_14040345E
 * 0000000140403470: add     rsp, 8
 * 0000000140403474: call    loc_140403467
 * 0000000140403479: add     rsp, 8
 * 000000014040347D: call    loc_140403470
 * 0000000140403482: add     rsp, 8
 * 0000000140403486: call    loc_140403479
 * 000000014040348B: add     rsp, 8
 * 000000014040348F: call    loc_140403482
 * 0000000140403494: add     rsp, 8
 * 0000000140403498: call    loc_14040348B
 * 000000014040349D: add     rsp, 8
 * 00000001404034A1: mov     eax, 0DADAh
 * 00000001404034A6: test    edx, 200h
 * 00000001404034AC: jz      short loc_1404034B3
 * 00000001404034AE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404034B3: lfence
 * 00000001404034B6: mov     byte ptr gs:856h, 0
 * 00000001404034BF: test    byte ptr [r10+3], 3
 * 00000001404034C4: mov     word ptr [rbp+80h], 0
 * 00000001404034CD: jz      short loc_1404034D4
 * 00000001404034CF: call    KiSaveDebugRegisterState
 * 00000001404034D4: cld
 * 00000001404034D5: stmxcsr dword ptr [rbp-54h]
 * 00000001404034D9: ldmxcsr dword ptr gs:180h
 * 00000001404034E2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404034E6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404034EA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404034EE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404034F2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404034F6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404034FA: cmp     byte ptr gs:801Ah, 0
 * 0000000140403503: jz      short loc_14040350A
 * 0000000140403505: call    KeWakeProcessor
 * 000000014040350A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140403511: cmp     rax, [rbp+0E8h]
 * 0000000140403518: jnb     short loc_140403533
 * 000000014040351A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140403521: cmp     rax, [rbp+0E8h]
 * 0000000140403528: jb      short loc_140403533
 * 000000014040352A: lea     rcx, [rbp-80h]
 * 000000014040352E: call    KiCheckForSListAddress
 * 0000000140403533: xor     esi, esi
 * 0000000140403535: inc     dword ptr gs:8000h
 * 000000014040353D: jmp     KiVmbusInterruptDispatch
 */
