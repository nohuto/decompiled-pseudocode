/*
 * XREFs of KiIpiInterrupt @ 0x140405370
 * Callers:
 *     KiIpiInterruptShadow @ 0x140A15240 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140405A40 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140405370
 * Reason: Hex-Rays returned no pseudocode for 0x140405370
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405370: sub     rsp, 8
 * 0000000140405374: push    rbp
 * 0000000140405375: push    rsi
 * 0000000140405376: sub     rsp, 150h
 * 000000014040537D: lea     rbp, [rsp+80h]
 * 0000000140405385: mov     [rbp+0E8h+var_13D], 0
 * 0000000140405389: mov     [rbp+0E8h+var_138], rax
 * 000000014040538D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140405391: mov     [rbp+0E8h+var_128], rdx
 * 0000000140405395: mov     [rbp+0E8h+var_120], r8
 * 0000000140405399: mov     [rbp+0E8h+var_118], r9
 * 000000014040539D: mov     [rbp+0E8h+var_110], r10
 * 00000001404053A1: mov     [rbp+0E8h+var_108], r11
 * 00000001404053A5: test    [rbp+0E8h+arg_0], 1
 * 00000001404053AC: jnz     short loc_1404053DD
 * 00000001404053AE: lfence
 * 00000001404053B1: test    word ptr gs:860h, 1
 * 00000001404053BC: jnz     short loc_1404053C6
 * 00000001404053BE: lfence
 * 00000001404053C1: jmp     loc_1404055E6
 * 00000001404053C6: movzx   eax, word ptr gs:864h
 * 00000001404053CF: mov     ecx, 48h ; 'H'
 * 00000001404053D4: xor     edx, edx
 * 00000001404053D6: wrmsr
 * 00000001404053D8: jmp     loc_1404055E6
 * 00000001404053DD: test    cs:KiKvaShadow, 1
 * 00000001404053E4: jnz     short loc_1404053E9
 * 00000001404053E6: swapgs
 * 00000001404053E9: lfence
 * 00000001404053EC: mov     r10, gs:188h
 * 00000001404053F5: mov     rcx, gs:188h
 * 00000001404053FE: mov     rcx, [rcx+220h]
 * 0000000140405405: mov     rcx, [rcx+9E0h]
 * 000000014040540C: mov     gs:858h, rcx
 * 0000000140405415: mov     cx, gs:850h
 * 000000014040541E: mov     gs:852h, cx
 * 0000000140405427: mov     cx, gs:860h
 * 0000000140405430: mov     gs:854h, cx
 * 0000000140405439: movzx   eax, word ptr gs:866h
 * 0000000140405442: cmp     gs:864h, ax
 * 000000014040544B: jz      short loc_14040545F
 * 000000014040544D: mov     gs:864h, ax
 * 0000000140405456: mov     ecx, 48h ; 'H'
 * 000000014040545B: xor     edx, edx
 * 000000014040545D: wrmsr
 * 000000014040545F: movzx   edx, word ptr gs:860h
 * 0000000140405468: test    edx, 8
 * 000000014040546E: jz      short loc_140405487
 * 0000000140405470: mov     eax, 1
 * 0000000140405475: xor     edx, edx
 * 0000000140405477: mov     ecx, 49h ; 'I'
 * 000000014040547C: wrmsr
 * 000000014040547E: movzx   edx, word ptr gs:860h
 * 0000000140405487: test    edx, 2
 * 000000014040548D: jz      loc_1404055B8
 * 0000000140405493: call    loc_1404055A6
 * 0000000140405498: add     rsp, 8
 * 000000014040549C: call    loc_1404055AF
 * 00000001404054A1: add     rsp, 8
 * 00000001404054A5: call    loc_140405498
 * 00000001404054AA: add     rsp, 8
 * 00000001404054AE: call    loc_1404054A1
 * 00000001404054B3: add     rsp, 8
 * 00000001404054B7: call    loc_1404054AA
 * 00000001404054BC: add     rsp, 8
 * 00000001404054C0: call    loc_1404054B3
 * 00000001404054C5: add     rsp, 8
 * 00000001404054C9: call    loc_1404054BC
 * 00000001404054CE: add     rsp, 8
 * 00000001404054D2: call    loc_1404054C5
 * 00000001404054D7: add     rsp, 8
 * 00000001404054DB: call    loc_1404054CE
 * 00000001404054E0: add     rsp, 8
 * 00000001404054E4: call    loc_1404054D7
 * 00000001404054E9: add     rsp, 8
 * 00000001404054ED: call    loc_1404054E0
 * 00000001404054F2: add     rsp, 8
 * 00000001404054F6: call    loc_1404054E9
 * 00000001404054FB: add     rsp, 8
 * 00000001404054FF: call    loc_1404054F2
 * 0000000140405504: add     rsp, 8
 * 0000000140405508: call    loc_1404054FB
 * 000000014040550D: add     rsp, 8
 * 0000000140405511: call    loc_140405504
 * 0000000140405516: add     rsp, 8
 * 000000014040551A: call    loc_14040550D
 * 000000014040551F: add     rsp, 8
 * 0000000140405523: call    loc_140405516
 * 0000000140405528: add     rsp, 8
 * 000000014040552C: call    loc_14040551F
 * 0000000140405531: add     rsp, 8
 * 0000000140405535: call    loc_140405528
 * 000000014040553A: add     rsp, 8
 * 000000014040553E: call    loc_140405531
 * 0000000140405543: add     rsp, 8
 * 0000000140405547: call    loc_14040553A
 * 000000014040554C: add     rsp, 8
 * 0000000140405550: call    loc_140405543
 * 0000000140405555: add     rsp, 8
 * 0000000140405559: call    loc_14040554C
 * 000000014040555E: add     rsp, 8
 * 0000000140405562: call    loc_140405555
 * 0000000140405567: add     rsp, 8
 * 000000014040556B: call    loc_14040555E
 * 0000000140405570: add     rsp, 8
 * 0000000140405574: call    loc_140405567
 * 0000000140405579: add     rsp, 8
 * 000000014040557D: call    loc_140405570
 * 0000000140405582: add     rsp, 8
 * 0000000140405586: call    loc_140405579
 * 000000014040558B: add     rsp, 8
 * 000000014040558F: call    loc_140405582
 * 0000000140405594: add     rsp, 8
 * 0000000140405598: call    loc_14040558B
 * 000000014040559D: add     rsp, 8
 * 00000001404055A1: call    loc_140405594
 * 00000001404055A6: add     rsp, 8
 * 00000001404055AA: call    loc_14040559D
 * 00000001404055AF: add     rsp, 8
 * 00000001404055B3: mov     eax, 0DADAh
 * 00000001404055B8: test    edx, 200h
 * 00000001404055BE: jz      short loc_1404055C5
 * 00000001404055C0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404055C5: lfence
 * 00000001404055C8: mov     byte ptr gs:856h, 0
 * 00000001404055D1: test    byte ptr [r10+3], 3
 * 00000001404055D6: mov     [rbp+0E8h+var_68], 0
 * 00000001404055DF: jz      short loc_1404055E6
 * 00000001404055E1: call    KiSaveDebugRegisterState
 * 00000001404055E6: cld
 * 00000001404055E7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404055EB: ldmxcsr dword ptr gs:180h
 * 00000001404055F4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404055F8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404055FC: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140405600: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140405604: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140405608: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040560C: cmp     byte ptr gs:801Ah, 0
 * 0000000140405615: jz      short loc_14040561C
 * 0000000140405617: call    KeWakeProcessor
 * 000000014040561C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140405623: cmp     rax, [rbp+0E8h]
 * 000000014040562A: jnb     short loc_140405645
 * 000000014040562C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140405633: cmp     rax, [rbp+0E8h]
 * 000000014040563A: jb      short loc_140405645
 * 000000014040563C: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140405640: call    KiCheckForSListAddress
 * 0000000140405645: xor     esi, esi
 * 0000000140405647: inc     dword ptr gs:8000h
 * 000000014040564F: mov     rdx, rsp
 * 0000000140405652: mov     rcx, gs:8758h
 * 000000014040565B: lea     rax, [rcx-6000h]
 * 0000000140405662: cmp     rax, rsp
 * 0000000140405665: ja      short loc_14040566C
 * 0000000140405667: cmp     rsp, rcx
 * 000000014040566A: jb      short loc_140405678
 * 000000014040566C: cmp     cs:KiBugCheckActive, 0
 * 0000000140405673: jnz     short loc_140405678
 * 0000000140405675: mov     rsp, rcx
 * 0000000140405678: sub     rsp, 20h
 * 000000014040567C: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140405681: call    KiIpiInterruptSubDispatch
 * 0000000140405686: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 000000014040568B: mov     rcx, rsi
 * 000000014040568E: call    HalPerformEndOfInterrupt
 * 0000000140405693: mov     rcx, gs:20h
 * 000000014040569C: cmp     byte ptr [rcx+20h], 1
 * 00000001404056A0: ja      short loc_14040571C
 * 00000001404056A2: rdtsc
 * 00000001404056A4: shl     rdx, 20h
 * 00000001404056A8: or      rax, rdx
 * 00000001404056AB: sub     rax, [rcx+7EC0h]
 * 00000001404056B2: add     [rcx+7F38h], rax
 * 00000001404056B9: add     [rcx+7EC0h], rax
 * 00000001404056C0: mov     r8, rax
 * 00000001404056C3: mov     rax, [rcx+8]
 * 00000001404056C7: test    byte ptr [rax+2], 72h
 * 00000001404056CB: jz      short loc_1404056E0
 * 00000001404056CD: xor     edx, edx
 * 00000001404056CF: call    KiBeginThreadAccountingPeriod
 * 00000001404056D4: mov     rcx, gs:20h
 * 00000001404056DD: inc     byte ptr [rcx+20h]
 * 00000001404056E0: mov     dl, [rcx+6]
 * 00000001404056E3: and     byte ptr [rcx+6], 0
 * 00000001404056E7: cmp     byte ptr [rcx+7], 0
 * 00000001404056EB: jnz     short loc_14040571C
 * 00000001404056ED: test    dl, dl
 * 00000001404056EF: jz      short loc_14040571C
 * 00000001404056F1: cmp     [rbp+0E8h+var_13F], 2
 * 00000001404056F5: jnb     short loc_140405702
 * 00000001404056F7: and     byte ptr [rcx+20h], 0
 * 00000001404056FB: call    KiDpcInterruptBypass
 * 0000000140405700: jmp     short loc_14040571F
 * 0000000140405702: mov     ecx, 2
 * 0000000140405707: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040570E: nop     dword ptr [rax+rax+00h]
 * 0000000140405713: mov     rcx, gs:20h
 * 000000014040571C: dec     byte ptr [rcx+20h]
 * 000000014040571F: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140405723: cmp     cs:KiIrqlFlags, 0
 * 000000014040572A: jz      short loc_140405733
 * 000000014040572C: call    KzSetIrqlUnsafe
 * 0000000140405731: jmp     short loc_140405737
 * 0000000140405733: mov     cr8, rcx
 * 0000000140405737: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040573E: test    [rbp+0E8h+arg_0], 1
 * 0000000140405745: jz      loc_1404059E7
 * 000000014040574B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140405752: jz      short loc_140405757
 * 0000000140405754: stac
 * 0000000140405757: mov     rcx, gs:188h
 * 0000000140405760: test    byte ptr [rcx+0C2h], 3
 * 0000000140405767: jz      short loc_140405784
 * 0000000140405769: mov     ecx, 1
 * 000000014040576E: mov     cr8, rcx
 * 0000000140405772: sti
 * 0000000140405773: call    KiInitiateUserApc
 * 0000000140405778: cli
 * 0000000140405779: mov     ecx, 0
 * 000000014040577E: mov     cr8, rcx
 * 0000000140405782: jmp     short loc_140405757
 * 0000000140405784: test    byte ptr gs:86Ch, 2
 * 000000014040578D: jz      short loc_140405796
 * 000000014040578F: xor     ecx, ecx
 * 0000000140405791: call    KiUpdateStibpPairing
 * 0000000140405796: mov     rcx, gs:188h
 * 000000014040579F: test    dword ptr [rcx], 8000000h
 * 00000001404057A5: jz      short loc_1404057AC
 * 00000001404057A7: call    KiRestoreSetContextState
 * 00000001404057AC: mov     rcx, gs:188h
 * 00000001404057B5: test    dword ptr [rcx], 40010000h
 * 00000001404057BB: jz      short loc_1404057D1
 * 00000001404057BD: test    byte ptr [rcx+2], 1
 * 00000001404057C1: jz      short loc_1404057D1
 * 00000001404057C3: call    KiCopyCounters
 * 00000001404057C8: mov     rcx, gs:188h
 * 00000001404057D1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404057D5: cmp     [rbp+0E8h+var_68], 0
 * 00000001404057DD: jz      short loc_1404057E4
 * 00000001404057DF: call    KiRestoreDebugRegisterState
 * 00000001404057E4: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404057E8: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404057EC: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404057F0: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404057F4: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404057F8: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404057FC: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405800: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405804: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405808: mov     r8, [rbp+0E8h+var_120]
 * 000000014040580C: mov     byte ptr gs:856h, 0
 * 0000000140405815: movzx   eax, word ptr gs:86Ah
 * 000000014040581E: cmp     gs:864h, ax
 * 0000000140405827: jz      short loc_14040583B
 * 0000000140405829: mov     gs:864h, ax
 * 0000000140405832: mov     ecx, 48h ; 'H'
 * 0000000140405837: xor     edx, edx
 * 0000000140405839: wrmsr
 * 000000014040583B: btr     word ptr gs:860h, 2
 * 0000000140405846: jnb     short loc_140405856
 * 0000000140405848: mov     eax, 1
 * 000000014040584D: xor     edx, edx
 * 000000014040584F: mov     ecx, 49h ; 'I'
 * 0000000140405854: wrmsr
 * 0000000140405856: btr     word ptr gs:860h, 5
 * 0000000140405861: jnb     loc_14040598C
 * 0000000140405867: call    loc_14040597A
 * 000000014040586C: add     rsp, 8
 * 0000000140405870: call    loc_140405983
 * 0000000140405875: add     rsp, 8
 * 0000000140405879: call    loc_14040586C
 * 000000014040587E: add     rsp, 8
 * 0000000140405882: call    loc_140405875
 * 0000000140405887: add     rsp, 8
 * 000000014040588B: call    loc_14040587E
 * 0000000140405890: add     rsp, 8
 * 0000000140405894: call    loc_140405887
 * 0000000140405899: add     rsp, 8
 * 000000014040589D: call    loc_140405890
 * 00000001404058A2: add     rsp, 8
 * 00000001404058A6: call    loc_140405899
 * 00000001404058AB: add     rsp, 8
 * 00000001404058AF: call    loc_1404058A2
 * 00000001404058B4: add     rsp, 8
 * 00000001404058B8: call    loc_1404058AB
 * 00000001404058BD: add     rsp, 8
 * 00000001404058C1: call    loc_1404058B4
 * 00000001404058C6: add     rsp, 8
 * 00000001404058CA: call    loc_1404058BD
 * 00000001404058CF: add     rsp, 8
 * 00000001404058D3: call    loc_1404058C6
 * 00000001404058D8: add     rsp, 8
 * 00000001404058DC: call    loc_1404058CF
 * 00000001404058E1: add     rsp, 8
 * 00000001404058E5: call    loc_1404058D8
 * 00000001404058EA: add     rsp, 8
 * 00000001404058EE: call    loc_1404058E1
 * 00000001404058F3: add     rsp, 8
 * 00000001404058F7: call    loc_1404058EA
 * 00000001404058FC: add     rsp, 8
 * 0000000140405900: call    loc_1404058F3
 * 0000000140405905: add     rsp, 8
 * 0000000140405909: call    loc_1404058FC
 * 000000014040590E: add     rsp, 8
 * 0000000140405912: call    loc_140405905
 * 0000000140405917: add     rsp, 8
 * 000000014040591B: call    loc_14040590E
 * 0000000140405920: add     rsp, 8
 * 0000000140405924: call    loc_140405917
 * 0000000140405929: add     rsp, 8
 * 000000014040592D: call    loc_140405920
 * 0000000140405932: add     rsp, 8
 * 0000000140405936: call    loc_140405929
 * 000000014040593B: add     rsp, 8
 * 000000014040593F: call    loc_140405932
 * 0000000140405944: add     rsp, 8
 * 0000000140405948: call    loc_14040593B
 * 000000014040594D: add     rsp, 8
 * 0000000140405951: call    loc_140405944
 * 0000000140405956: add     rsp, 8
 * 000000014040595A: call    loc_14040594D
 * 000000014040595F: add     rsp, 8
 * 0000000140405963: call    loc_140405956
 * 0000000140405968: add     rsp, 8
 * 000000014040596C: call    loc_14040595F
 * 0000000140405971: add     rsp, 8
 * 0000000140405975: call    loc_140405968
 * 000000014040597A: add     rsp, 8
 * 000000014040597E: call    loc_140405971
 * 0000000140405983: add     rsp, 8
 * 0000000140405987: mov     eax, 0DADAh
 * 000000014040598C: test    word ptr gs:860h, 80h
 * 0000000140405997: jz      short loc_1404059A5
 * 0000000140405999: xor     eax, eax
 * 000000014040599B: xor     edx, edx
 * 000000014040599D: mov     ecx, 1
 * 00000001404059A2: div     rcx
 * 00000001404059A5: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404059A9: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404059AD: mov     rax, [rbp+0E8h+var_138]
 * 00000001404059B1: mov     rsp, rbp
 * 00000001404059B4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404059BB: add     rsp, 0E8h
 * 00000001404059C2: test    cs:KiKvaShadow, 1
 * 00000001404059C9: jz      short loc_1404059D0
 * 00000001404059CB: jmp     KiKernelExit
 * 00000001404059D0: test    word ptr gs:860h, 100h
 * 00000001404059DB: jz      short loc_1404059E2
 * 00000001404059DD: verw    [rsp+arg_18]
 * 00000001404059E2: swapgs
 * 00000001404059E5: iretq
 * 00000001404059E7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404059EB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404059EF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404059F3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404059F7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404059FB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404059FF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140405A03: mov     r11, [rbp+0E8h+var_108]
 * 0000000140405A07: mov     r10, [rbp+0E8h+var_110]
 * 0000000140405A0B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140405A0F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140405A13: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140405A17: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140405A1B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140405A1F: mov     rsp, rbp
 * 0000000140405A22: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140405A29: add     rsp, 0E8h
 * 0000000140405A30: iretq
 */
