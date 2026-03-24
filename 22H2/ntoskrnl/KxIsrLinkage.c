/*
 * XREFs of KxIsrLinkage @ 0x1404011C0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140A15B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519960 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405AA380 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1404011C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404011C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404011C0: push    rbp
 * 00000001404011C1: push    rsi
 * 00000001404011C2: sub     rsp, 150h
 * 00000001404011C9: lea     rbp, [rsp+80h]
 * 00000001404011D1: mov     [rbp+0D8h+var_12D], 0
 * 00000001404011D5: mov     [rbp+0D8h+var_128], rax
 * 00000001404011D9: mov     [rbp+0D8h+var_120], rcx
 * 00000001404011DD: mov     [rbp+0D8h+var_118], rdx
 * 00000001404011E1: mov     [rbp+0D8h+var_110], r8
 * 00000001404011E5: mov     [rbp+0D8h+var_108], r9
 * 00000001404011E9: mov     [rbp+0D8h+var_100], r10
 * 00000001404011ED: mov     [rbp+0D8h+var_F8], r11
 * 00000001404011F1: test    [rbp+0D8h+arg_8], 1
 * 00000001404011F8: jnz     short loc_140401229
 * 00000001404011FA: lfence
 * 00000001404011FD: test    word ptr gs:860h, 1
 * 0000000140401208: jnz     short loc_140401212
 * 000000014040120A: lfence
 * 000000014040120D: jmp     loc_140401432
 * 0000000140401212: movzx   eax, word ptr gs:864h
 * 000000014040121B: mov     ecx, 48h ; 'H'
 * 0000000140401220: xor     edx, edx
 * 0000000140401222: wrmsr
 * 0000000140401224: jmp     loc_140401432
 * 0000000140401229: test    cs:KiKvaShadow, 1
 * 0000000140401230: jnz     short loc_140401235
 * 0000000140401232: swapgs
 * 0000000140401235: lfence
 * 0000000140401238: mov     r10, gs:188h
 * 0000000140401241: mov     rcx, gs:188h
 * 000000014040124A: mov     rcx, [rcx+220h]
 * 0000000140401251: mov     rcx, [rcx+9E0h]
 * 0000000140401258: mov     gs:858h, rcx
 * 0000000140401261: mov     cx, gs:850h
 * 000000014040126A: mov     gs:852h, cx
 * 0000000140401273: mov     cx, gs:860h
 * 000000014040127C: mov     gs:854h, cx
 * 0000000140401285: movzx   eax, word ptr gs:866h
 * 000000014040128E: cmp     gs:864h, ax
 * 0000000140401297: jz      short loc_1404012AB
 * 0000000140401299: mov     gs:864h, ax
 * 00000001404012A2: mov     ecx, 48h ; 'H'
 * 00000001404012A7: xor     edx, edx
 * 00000001404012A9: wrmsr
 * 00000001404012AB: movzx   edx, word ptr gs:860h
 * 00000001404012B4: test    edx, 8
 * 00000001404012BA: jz      short loc_1404012D3
 * 00000001404012BC: mov     eax, 1
 * 00000001404012C1: xor     edx, edx
 * 00000001404012C3: mov     ecx, 49h ; 'I'
 * 00000001404012C8: wrmsr
 * 00000001404012CA: movzx   edx, word ptr gs:860h
 * 00000001404012D3: test    edx, 2
 * 00000001404012D9: jz      loc_140401404
 * 00000001404012DF: call    loc_1404013F2
 * 00000001404012E4: add     rsp, 8
 * 00000001404012E8: call    loc_1404013FB
 * 00000001404012ED: add     rsp, 8
 * 00000001404012F1: call    loc_1404012E4
 * 00000001404012F6: add     rsp, 8
 * 00000001404012FA: call    loc_1404012ED
 * 00000001404012FF: add     rsp, 8
 * 0000000140401303: call    loc_1404012F6
 * 0000000140401308: add     rsp, 8
 * 000000014040130C: call    loc_1404012FF
 * 0000000140401311: add     rsp, 8
 * 0000000140401315: call    loc_140401308
 * 000000014040131A: add     rsp, 8
 * 000000014040131E: call    loc_140401311
 * 0000000140401323: add     rsp, 8
 * 0000000140401327: call    loc_14040131A
 * 000000014040132C: add     rsp, 8
 * 0000000140401330: call    loc_140401323
 * 0000000140401335: add     rsp, 8
 * 0000000140401339: call    loc_14040132C
 * 000000014040133E: add     rsp, 8
 * 0000000140401342: call    loc_140401335
 * 0000000140401347: add     rsp, 8
 * 000000014040134B: call    loc_14040133E
 * 0000000140401350: add     rsp, 8
 * 0000000140401354: call    loc_140401347
 * 0000000140401359: add     rsp, 8
 * 000000014040135D: call    loc_140401350
 * 0000000140401362: add     rsp, 8
 * 0000000140401366: call    loc_140401359
 * 000000014040136B: add     rsp, 8
 * 000000014040136F: call    loc_140401362
 * 0000000140401374: add     rsp, 8
 * 0000000140401378: call    loc_14040136B
 * 000000014040137D: add     rsp, 8
 * 0000000140401381: call    loc_140401374
 * 0000000140401386: add     rsp, 8
 * 000000014040138A: call    loc_14040137D
 * 000000014040138F: add     rsp, 8
 * 0000000140401393: call    loc_140401386
 * 0000000140401398: add     rsp, 8
 * 000000014040139C: call    loc_14040138F
 * 00000001404013A1: add     rsp, 8
 * 00000001404013A5: call    loc_140401398
 * 00000001404013AA: add     rsp, 8
 * 00000001404013AE: call    loc_1404013A1
 * 00000001404013B3: add     rsp, 8
 * 00000001404013B7: call    loc_1404013AA
 * 00000001404013BC: add     rsp, 8
 * 00000001404013C0: call    loc_1404013B3
 * 00000001404013C5: add     rsp, 8
 * 00000001404013C9: call    loc_1404013BC
 * 00000001404013CE: add     rsp, 8
 * 00000001404013D2: call    loc_1404013C5
 * 00000001404013D7: add     rsp, 8
 * 00000001404013DB: call    loc_1404013CE
 * 00000001404013E0: add     rsp, 8
 * 00000001404013E4: call    loc_1404013D7
 * 00000001404013E9: add     rsp, 8
 * 00000001404013ED: call    loc_1404013E0
 * 00000001404013F2: add     rsp, 8
 * 00000001404013F6: call    loc_1404013E9
 * 00000001404013FB: add     rsp, 8
 * 00000001404013FF: mov     eax, 0DADAh
 * 0000000140401404: test    edx, 200h
 * 000000014040140A: jz      short loc_140401411
 * 000000014040140C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140401411: lfence
 * 0000000140401414: mov     byte ptr gs:856h, 0
 * 000000014040141D: test    byte ptr [r10+3], 3
 * 0000000140401422: mov     [rbp+0D8h+var_58], 0
 * 000000014040142B: jz      short loc_140401432
 * 000000014040142D: call    KiSaveDebugRegisterState
 * 0000000140401432: cld
 * 0000000140401433: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140401437: ldmxcsr dword ptr gs:180h
 * 0000000140401440: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140401444: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140401448: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040144C: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140401450: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140401454: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140401458: cmp     byte ptr gs:801Ah, 0
 * 0000000140401461: jz      short loc_140401468
 * 0000000140401463: call    KeWakeProcessor
 * 0000000140401468: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014040146F: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140401476: jnb     short loc_140401491
 * 0000000140401478: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014040147F: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140401486: jb      short loc_140401491
 * 0000000140401488: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040148C: call    KiCheckForSListAddress
 * 0000000140401491: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140401498: mov     rsi, gs:20h
 * 00000001404014A1: mov     rsi, [rsi+rax*8+3140h]
 * 00000001404014A9: inc     dword ptr gs:8000h
 * 00000001404014B1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404014B8: jz      short loc_1404014BD
 * 00000001404014BA: clac
 * 00000001404014BD: test    rsi, rsi
 * 00000001404014C0: jz      short loc_1404014CB
 * 00000001404014C2: mov     rax, [rsi+50h]
 * 00000001404014C6: jmp     _guard_dispatch_icall
 * 00000001404014CB: mov     ecx, eax
 * 00000001404014CD: shr     ecx, 4
 * 00000001404014D0: cmp     cs:KiIrqlFlags, 0
 * 00000001404014D7: jz      short loc_1404014E0
 * 00000001404014D9: call    KzSetIrqlUnsafe
 * 00000001404014DE: jmp     short loc_1404014E8
 * 00000001404014E0: mov     rax, cr8
 * 00000001404014E4: mov     cr8, rcx
 * 00000001404014E8: mov     [rbp+0D8h+var_12F], al
 * 00000001404014EB: mov     rcx, gs:20h
 * 00000001404014F4: inc     byte ptr [rcx+20h]
 * 00000001404014F7: cmp     byte ptr [rcx+20h], 1
 * 00000001404014FB: jnz     short loc_14040154D
 * 00000001404014FD: rdtsc
 * 00000001404014FF: shl     rdx, 20h
 * 0000000140401503: or      rax, rdx
 * 0000000140401506: mov     r8, [rcx+8]
 * 000000014040150A: sub     rax, [rcx+7EC0h]
 * 0000000140401511: add     [r8+48h], rax
 * 0000000140401515: mov     edx, [r8+50h]
 * 0000000140401519: add     [rcx+7EC0h], rax
 * 0000000140401520: add     rdx, rax
 * 0000000140401523: mov     ecx, edx
 * 0000000140401525: shr     rdx, 20h
 * 0000000140401529: jz      short loc_14040152E
 * 000000014040152B: or      ecx, 0FFFFFFFFh
 * 000000014040152E: mov     [r8+50h], ecx
 * 0000000140401532: test    byte ptr [r8+2], 3Eh
 * 0000000140401537: jz      short loc_14040154D
 * 0000000140401539: mov     rdx, r8
 * 000000014040153C: mov     r8, rax
 * 000000014040153F: mov     rcx, gs:20h
 * 0000000140401548: call    KiEndThreadAccountingPeriod
 * 000000014040154D: sti
 * 000000014040154E: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140401558: jz      short loc_140401566
 * 000000014040155A: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140401561: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140401566: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 000000014040156D: jz      short loc_14040158E
 * 000000014040156F: and     [rbp+0D8h+var_138], 0
 * 0000000140401574: xor     r9, r9
 * 0000000140401577: movzx   r8d, byte ptr [rbp+0E0h]
 * 000000014040157F: mov     edx, 1
 * 0000000140401584: mov     ecx, 12h
 * 0000000140401589: call    KiBugCheckDispatch
 * 000000014040158E: cli
 * 000000014040158F: mov     rcx, rsi
 * 0000000140401592: call    HalPerformEndOfInterrupt
 * 0000000140401597: mov     rcx, gs:20h
 * 00000001404015A0: cmp     byte ptr [rcx+20h], 1
 * 00000001404015A4: ja      short loc_140401620
 * 00000001404015A6: rdtsc
 * 00000001404015A8: shl     rdx, 20h
 * 00000001404015AC: or      rax, rdx
 * 00000001404015AF: sub     rax, [rcx+7EC0h]
 * 00000001404015B6: add     [rcx+7F38h], rax
 * 00000001404015BD: add     [rcx+7EC0h], rax
 * 00000001404015C4: mov     r8, rax
 * 00000001404015C7: mov     rax, [rcx+8]
 * 00000001404015CB: test    byte ptr [rax+2], 72h
 * 00000001404015CF: jz      short loc_1404015E4
 * 00000001404015D1: xor     edx, edx
 * 00000001404015D3: call    KiBeginThreadAccountingPeriod
 * 00000001404015D8: mov     rcx, gs:20h
 * 00000001404015E1: inc     byte ptr [rcx+20h]
 * 00000001404015E4: mov     dl, [rcx+6]
 * 00000001404015E7: and     byte ptr [rcx+6], 0
 * 00000001404015EB: cmp     byte ptr [rcx+7], 0
 * 00000001404015EF: jnz     short loc_140401620
 * 00000001404015F1: test    dl, dl
 * 00000001404015F3: jz      short loc_140401620
 * 00000001404015F5: cmp     [rbp+0D8h+var_12F], 2
 * 00000001404015F9: jnb     short loc_140401606
 * 00000001404015FB: and     byte ptr [rcx+20h], 0
 * 00000001404015FF: call    KiDpcInterruptBypass
 * 0000000140401604: jmp     short loc_140401623
 * 0000000140401606: mov     ecx, 2
 * 000000014040160B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140401612: nop     dword ptr [rax+rax+00h]
 * 0000000140401617: mov     rcx, gs:20h
 * 0000000140401620: dec     byte ptr [rcx+20h]
 * 0000000140401623: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140401627: cmp     cs:KiIrqlFlags, 0
 * 000000014040162E: jz      short loc_140401637
 * 0000000140401630: call    KzSetIrqlUnsafe
 * 0000000140401635: jmp     short loc_14040163B
 * 0000000140401637: mov     cr8, rcx
 * 000000014040163B: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140401642: cli
 * 0000000140401643: test    [rbp+0D8h+arg_8], 1
 * 000000014040164A: jz      loc_1404018EC
 * 0000000140401650: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140401657: jz      short loc_14040165C
 * 0000000140401659: stac
 * 000000014040165C: mov     rcx, gs:188h
 * 0000000140401665: test    byte ptr [rcx+0C2h], 3
 * 000000014040166C: jz      short loc_140401689
 * 000000014040166E: mov     ecx, 1
 * 0000000140401673: mov     cr8, rcx
 * 0000000140401677: sti
 * 0000000140401678: call    KiInitiateUserApc
 * 000000014040167D: cli
 * 000000014040167E: mov     ecx, 0
 * 0000000140401683: mov     cr8, rcx
 * 0000000140401687: jmp     short loc_14040165C
 * 0000000140401689: test    byte ptr gs:86Ch, 2
 * 0000000140401692: jz      short loc_14040169B
 * 0000000140401694: xor     ecx, ecx
 * 0000000140401696: call    KiUpdateStibpPairing
 * 000000014040169B: mov     rcx, gs:188h
 * 00000001404016A4: test    dword ptr [rcx], 8000000h
 * 00000001404016AA: jz      short loc_1404016B1
 * 00000001404016AC: call    KiRestoreSetContextState
 * 00000001404016B1: mov     rcx, gs:188h
 * 00000001404016BA: test    dword ptr [rcx], 40010000h
 * 00000001404016C0: jz      short loc_1404016D6
 * 00000001404016C2: test    byte ptr [rcx+2], 1
 * 00000001404016C6: jz      short loc_1404016D6
 * 00000001404016C8: call    KiCopyCounters
 * 00000001404016CD: mov     rcx, gs:188h
 * 00000001404016D6: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404016DA: cmp     [rbp+0D8h+var_58], 0
 * 00000001404016E2: jz      short loc_1404016E9
 * 00000001404016E4: call    KiRestoreDebugRegisterState
 * 00000001404016E9: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404016ED: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404016F1: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404016F5: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404016F9: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404016FD: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140401701: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140401705: mov     r10, [rbp+0D8h+var_100]
 * 0000000140401709: mov     r9, [rbp+0D8h+var_108]
 * 000000014040170D: mov     r8, [rbp+0D8h+var_110]
 * 0000000140401711: mov     byte ptr gs:856h, 0
 * 000000014040171A: movzx   eax, word ptr gs:86Ah
 * 0000000140401723: cmp     gs:864h, ax
 * 000000014040172C: jz      short loc_140401740
 * 000000014040172E: mov     gs:864h, ax
 * 0000000140401737: mov     ecx, 48h ; 'H'
 * 000000014040173C: xor     edx, edx
 * 000000014040173E: wrmsr
 * 0000000140401740: btr     word ptr gs:860h, 2
 * 000000014040174B: jnb     short loc_14040175B
 * 000000014040174D: mov     eax, 1
 * 0000000140401752: xor     edx, edx
 * 0000000140401754: mov     ecx, 49h ; 'I'
 * 0000000140401759: wrmsr
 * 000000014040175B: btr     word ptr gs:860h, 5
 * 0000000140401766: jnb     loc_140401891
 * 000000014040176C: call    loc_14040187F
 * 0000000140401771: add     rsp, 8
 * 0000000140401775: call    loc_140401888
 * 000000014040177A: add     rsp, 8
 * 000000014040177E: call    loc_140401771
 * 0000000140401783: add     rsp, 8
 * 0000000140401787: call    loc_14040177A
 * 000000014040178C: add     rsp, 8
 * 0000000140401790: call    loc_140401783
 * 0000000140401795: add     rsp, 8
 * 0000000140401799: call    loc_14040178C
 * 000000014040179E: add     rsp, 8
 * 00000001404017A2: call    loc_140401795
 * 00000001404017A7: add     rsp, 8
 * 00000001404017AB: call    loc_14040179E
 * 00000001404017B0: add     rsp, 8
 * 00000001404017B4: call    loc_1404017A7
 * 00000001404017B9: add     rsp, 8
 * 00000001404017BD: call    loc_1404017B0
 * 00000001404017C2: add     rsp, 8
 * 00000001404017C6: call    loc_1404017B9
 * 00000001404017CB: add     rsp, 8
 * 00000001404017CF: call    loc_1404017C2
 * 00000001404017D4: add     rsp, 8
 * 00000001404017D8: call    loc_1404017CB
 * 00000001404017DD: add     rsp, 8
 * 00000001404017E1: call    loc_1404017D4
 * 00000001404017E6: add     rsp, 8
 * 00000001404017EA: call    loc_1404017DD
 * 00000001404017EF: add     rsp, 8
 * 00000001404017F3: call    loc_1404017E6
 * 00000001404017F8: add     rsp, 8
 * 00000001404017FC: call    loc_1404017EF
 * 0000000140401801: add     rsp, 8
 * 0000000140401805: call    loc_1404017F8
 * 000000014040180A: add     rsp, 8
 * 000000014040180E: call    loc_140401801
 * 0000000140401813: add     rsp, 8
 * 0000000140401817: call    loc_14040180A
 * 000000014040181C: add     rsp, 8
 * 0000000140401820: call    loc_140401813
 * 0000000140401825: add     rsp, 8
 * 0000000140401829: call    loc_14040181C
 * 000000014040182E: add     rsp, 8
 * 0000000140401832: call    loc_140401825
 * 0000000140401837: add     rsp, 8
 * 000000014040183B: call    loc_14040182E
 * 0000000140401840: add     rsp, 8
 * 0000000140401844: call    loc_140401837
 * 0000000140401849: add     rsp, 8
 * 000000014040184D: call    loc_140401840
 * 0000000140401852: add     rsp, 8
 * 0000000140401856: call    loc_140401849
 * 000000014040185B: add     rsp, 8
 * 000000014040185F: call    loc_140401852
 * 0000000140401864: add     rsp, 8
 * 0000000140401868: call    loc_14040185B
 * 000000014040186D: add     rsp, 8
 * 0000000140401871: call    loc_140401864
 * 0000000140401876: add     rsp, 8
 * 000000014040187A: call    loc_14040186D
 * 000000014040187F: add     rsp, 8
 * 0000000140401883: call    loc_140401876
 * 0000000140401888: add     rsp, 8
 * 000000014040188C: mov     eax, 0DADAh
 * 0000000140401891: test    word ptr gs:860h, 80h
 * 000000014040189C: jz      short loc_1404018AA
 * 000000014040189E: xor     eax, eax
 * 00000001404018A0: xor     edx, edx
 * 00000001404018A2: mov     ecx, 1
 * 00000001404018A7: div     rcx
 * 00000001404018AA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404018AE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404018B2: mov     rax, [rbp+0D8h+var_128]
 * 00000001404018B6: mov     rsp, rbp
 * 00000001404018B9: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404018C0: add     rsp, 0E8h
 * 00000001404018C7: test    cs:KiKvaShadow, 1
 * 00000001404018CE: jz      short loc_1404018D5
 * 00000001404018D0: jmp     KiKernelExit
 * 00000001404018D5: test    word ptr gs:860h, 100h
 * 00000001404018E0: jz      short loc_1404018E7
 * 00000001404018E2: verw    [rsp-10h+arg_20]
 * 00000001404018E7: swapgs
 * 00000001404018EA: iretq
 * 00000001404018EC: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404018F0: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404018F4: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404018F8: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404018FC: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140401900: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140401904: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140401908: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040190C: mov     r10, [rbp+0D8h+var_100]
 * 0000000140401910: mov     r9, [rbp+0D8h+var_108]
 * 0000000140401914: mov     r8, [rbp+0D8h+var_110]
 * 0000000140401918: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040191C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140401920: mov     rax, [rbp+0D8h+var_128]
 * 0000000140401924: mov     rsp, rbp
 * 0000000140401927: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040192E: add     rsp, 0E8h
 * 0000000140401935: iretq
 */
