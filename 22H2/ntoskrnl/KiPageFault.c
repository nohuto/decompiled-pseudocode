/*
 * XREFs of KiPageFault @ 0x14040D300
 * Callers:
 *     KiPageFaultShadow @ 0x140A14840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x14024CF20 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14040D300 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140412B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x140511E20 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140581490 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14040D300
 * Reason: Hex-Rays returned no pseudocode for 0x14040D300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040D300: push    rbp
 * 000000014040D301: sub     rsp, 158h
 * 000000014040D308: lea     rbp, [rsp+80h]
 * 000000014040D310: mov     [rbp+0D8h+var_12D], 1
 * 000000014040D314: mov     [rbp+0D8h+var_128], rax
 * 000000014040D318: mov     [rbp+0D8h+var_120], rcx
 * 000000014040D31C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040D320: mov     [rbp+0D8h+var_110], r8
 * 000000014040D324: mov     [rbp+0D8h+var_108], r9
 * 000000014040D328: mov     [rbp+0D8h+var_100], r10
 * 000000014040D32C: mov     [rbp+0D8h+var_F8], r11
 * 000000014040D330: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040D337: jnz     short loc_14040D368
 * 000000014040D339: lfence
 * 000000014040D33C: test    word ptr gs:860h, 1
 * 000000014040D347: jnz     short loc_14040D351
 * 000000014040D349: lfence
 * 000000014040D34C: jmp     loc_14040D5CA
 * 000000014040D351: movzx   eax, word ptr gs:864h
 * 000000014040D35A: mov     ecx, 48h ; 'H'
 * 000000014040D35F: xor     edx, edx
 * 000000014040D361: wrmsr
 * 000000014040D363: jmp     loc_14040D5CA
 * 000000014040D368: test    cs:KiKvaShadow, 1
 * 000000014040D36F: jnz     short loc_14040D374
 * 000000014040D371: swapgs
 * 000000014040D374: lfence
 * 000000014040D377: mov     r10, gs:188h
 * 000000014040D380: mov     rcx, gs:188h
 * 000000014040D389: mov     rcx, [rcx+220h]
 * 000000014040D390: mov     rcx, [rcx+9E0h]
 * 000000014040D397: mov     gs:858h, rcx
 * 000000014040D3A0: mov     cx, gs:850h
 * 000000014040D3A9: mov     gs:852h, cx
 * 000000014040D3B2: mov     cx, gs:860h
 * 000000014040D3BB: mov     gs:854h, cx
 * 000000014040D3C4: movzx   eax, word ptr gs:866h
 * 000000014040D3CD: cmp     gs:864h, ax
 * 000000014040D3D6: jz      short loc_14040D3EA
 * 000000014040D3D8: mov     gs:864h, ax
 * 000000014040D3E1: mov     ecx, 48h ; 'H'
 * 000000014040D3E6: xor     edx, edx
 * 000000014040D3E8: wrmsr
 * 000000014040D3EA: movzx   edx, word ptr gs:860h
 * 000000014040D3F3: test    edx, 8
 * 000000014040D3F9: jz      short loc_14040D412
 * 000000014040D3FB: mov     eax, 1
 * 000000014040D400: xor     edx, edx
 * 000000014040D402: mov     ecx, 49h ; 'I'
 * 000000014040D407: wrmsr
 * 000000014040D409: movzx   edx, word ptr gs:860h
 * 000000014040D412: test    edx, 2
 * 000000014040D418: jz      loc_14040D543
 * 000000014040D41E: call    loc_14040D531
 * 000000014040D423: add     rsp, 8
 * 000000014040D427: call    loc_14040D53A
 * 000000014040D42C: add     rsp, 8
 * 000000014040D430: call    loc_14040D423
 * 000000014040D435: add     rsp, 8
 * 000000014040D439: call    loc_14040D42C
 * 000000014040D43E: add     rsp, 8
 * 000000014040D442: call    loc_14040D435
 * 000000014040D447: add     rsp, 8
 * 000000014040D44B: call    loc_14040D43E
 * 000000014040D450: add     rsp, 8
 * 000000014040D454: call    loc_14040D447
 * 000000014040D459: add     rsp, 8
 * 000000014040D45D: call    loc_14040D450
 * 000000014040D462: add     rsp, 8
 * 000000014040D466: call    loc_14040D459
 * 000000014040D46B: add     rsp, 8
 * 000000014040D46F: call    loc_14040D462
 * 000000014040D474: add     rsp, 8
 * 000000014040D478: call    loc_14040D46B
 * 000000014040D47D: add     rsp, 8
 * 000000014040D481: call    loc_14040D474
 * 000000014040D486: add     rsp, 8
 * 000000014040D48A: call    loc_14040D47D
 * 000000014040D48F: add     rsp, 8
 * 000000014040D493: call    loc_14040D486
 * 000000014040D498: add     rsp, 8
 * 000000014040D49C: call    loc_14040D48F
 * 000000014040D4A1: add     rsp, 8
 * 000000014040D4A5: call    loc_14040D498
 * 000000014040D4AA: add     rsp, 8
 * 000000014040D4AE: call    loc_14040D4A1
 * 000000014040D4B3: add     rsp, 8
 * 000000014040D4B7: call    loc_14040D4AA
 * 000000014040D4BC: add     rsp, 8
 * 000000014040D4C0: call    loc_14040D4B3
 * 000000014040D4C5: add     rsp, 8
 * 000000014040D4C9: call    loc_14040D4BC
 * 000000014040D4CE: add     rsp, 8
 * 000000014040D4D2: call    loc_14040D4C5
 * 000000014040D4D7: add     rsp, 8
 * 000000014040D4DB: call    loc_14040D4CE
 * 000000014040D4E0: add     rsp, 8
 * 000000014040D4E4: call    loc_14040D4D7
 * 000000014040D4E9: add     rsp, 8
 * 000000014040D4ED: call    loc_14040D4E0
 * 000000014040D4F2: add     rsp, 8
 * 000000014040D4F6: call    loc_14040D4E9
 * 000000014040D4FB: add     rsp, 8
 * 000000014040D4FF: call    loc_14040D4F2
 * 000000014040D504: add     rsp, 8
 * 000000014040D508: call    loc_14040D4FB
 * 000000014040D50D: add     rsp, 8
 * 000000014040D511: call    loc_14040D504
 * 000000014040D516: add     rsp, 8
 * 000000014040D51A: call    loc_14040D50D
 * 000000014040D51F: add     rsp, 8
 * 000000014040D523: call    loc_14040D516
 * 000000014040D528: add     rsp, 8
 * 000000014040D52C: call    loc_14040D51F
 * 000000014040D531: add     rsp, 8
 * 000000014040D535: call    loc_14040D528
 * 000000014040D53A: add     rsp, 8
 * 000000014040D53E: mov     eax, 0DADAh
 * 000000014040D543: test    edx, 200h
 * 000000014040D549: jz      short loc_14040D550
 * 000000014040D54B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040D550: lfence
 * 000000014040D553: mov     byte ptr gs:856h, 0
 * 000000014040D55C: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040D564: jnz     short loc_14040D5B5
 * 000000014040D566: mov     ecx, 0C0000102h
 * 000000014040D56B: rdmsr
 * 000000014040D56D: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014040D570: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014040D573: test    byte ptr [r10+3], 80h
 * 000000014040D578: jz      short loc_14040D5B5
 * 000000014040D57A: shl     rdx, 20h
 * 000000014040D57E: or      rax, rdx
 * 000000014040D581: cmp     rax, cs:MmUserProbeAddress
 * 000000014040D588: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040D590: cmp     [r10+0F0h], rax
 * 000000014040D597: jz      short loc_14040D5B5
 * 000000014040D599: mov     rdx, [r10+1F0h]
 * 000000014040D5A0: bts     dword ptr [r10+74h], 8
 * 000000014040D5A6: dec     word ptr [r10+1E6h]
 * 000000014040D5AE: mov     [rdx+80h], rax
 * 000000014040D5B5: test    byte ptr [r10+3], 3
 * 000000014040D5BA: mov     [rbp+0D8h+var_58], 0
 * 000000014040D5C3: jz      short loc_14040D5CA
 * 000000014040D5C5: call    KiSaveDebugRegisterState
 * 000000014040D5CA: cld
 * 000000014040D5CB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040D5CF: ldmxcsr dword ptr gs:180h
 * 000000014040D5D8: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040D5DC: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040D5E0: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040D5E4: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040D5E8: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040D5EC: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040D5F0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040D5F7: jz      short loc_14040D605
 * 000000014040D5F9: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040D600: jz      short loc_14040D605
 * 000000014040D602: stac
 * 000000014040D605: mov     eax, [rbp+0E0h]
 * 000000014040D60B: mov     rcx, cr2
 * 000000014040D60E: test    [rbp+0D8h+arg_10], 200h
 * 000000014040D618: jz      short loc_14040D61B
 * 000000014040D61A: sti
 * 000000014040D61B: mov     r9, gs:188h
 * 000000014040D624: bt      dword ptr [r9+74h], 8
 * 000000014040D62A: jnb     short loc_14040D63A
 * 000000014040D62C: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040D633: jz      short loc_14040D63A
 * 000000014040D635: call    KiUmsTrapEntry
 * 000000014040D63A: mov     [rbp+0D8h+var_88], rcx
 * 000000014040D63E: bt      [rbp+0D8h+arg_10], 9
 * 000000014040D646: jnb     loc_14040D778
 * 000000014040D64C: lea     r9, [rbp+0D8h+var_158]
 * 000000014040D650: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014040D657: and     r8b, 1
 * 000000014040D65B: mov     rdx, rcx; BugCheckParameter1
 * 000000014040D65E: mov     ecx, eax; BugCheckParameter2
 * 000000014040D660: shr     eax, 1
 * 000000014040D662: and     eax, 9
 * 000000014040D665: mov     [rbp+0D8h+var_12E], al
 * 000000014040D668: call    MmAccessFault
 * 000000014040D66D: test    eax, eax
 * 000000014040D66F: jl      short loc_14040D6A7
 * 000000014040D671: cmp     cs:PsWatchEnabled, 0
 * 000000014040D678: jz      short loc_14040D68C
 * 000000014040D67A: mov     r8, [rbp+0D8h+var_88]
 * 000000014040D67E: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014040D685: mov     ecx, eax
 * 000000014040D687: call    PsWatchWorkingSet
 * 000000014040D68C: cmp     cs:KdpOweBreakpoint, 0
 * 000000014040D693: jz      loc_14040D77E
 * 000000014040D699: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040D69D: call    KdSetOwedBreakpoints
 * 000000014040D6A2: jmp     loc_14040D77E
 * 000000014040D6A7: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040D6AE: jz      short loc_14040D702
 * 000000014040D6B0: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040D6B8: jnz     short loc_14040D6F8
 * 000000014040D6BA: mov     r9, gs:188h
 * 000000014040D6C3: test    byte ptr [r9+3], 4
 * 000000014040D6C8: jz      short loc_14040D6D3
 * 000000014040D6CA: mov     r8, [r9+5F0h]
 * 000000014040D6D1: jmp     short loc_14040D6DC
 * 000000014040D6D3: mov     r8, gs:30h
 * 000000014040D6DC: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014040D6E0: jz      short loc_14040D702
 * 000000014040D6E2: mov     ecx, 0C0000102h
 * 000000014040D6E7: mov     eax, r8d
 * 000000014040D6EA: shr     r8, 20h
 * 000000014040D6EE: mov     edx, r8d
 * 000000014040D6F1: wrmsr
 * 000000014040D6F3: jmp     loc_14040D77E
 * 000000014040D6F8: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040D6FC: shr     rcx, 20h
 * 000000014040D700: jnz     short loc_14040D77E
 * 000000014040D702: mov     ecx, eax
 * 000000014040D704: mov     edx, 2
 * 000000014040D709: cmp     ecx, 0D0000006h
 * 000000014040D70F: jz      short loc_14040D752
 * 000000014040D711: cmp     ecx, 0C0000005h
 * 000000014040D717: jz      short loc_14040D738
 * 000000014040D719: cmp     ecx, 80000001h
 * 000000014040D71F: jz      short loc_14040D73D
 * 000000014040D721: cmp     ecx, 0C00000FDh
 * 000000014040D727: jz      short loc_14040D73D
 * 000000014040D729: mov     ecx, 0C0000006h
 * 000000014040D72E: mov     edx, 3
 * 000000014040D733: mov     r11d, eax
 * 000000014040D736: jmp     short loc_14040D73D
 * 000000014040D738: mov     ecx, 10000004h
 * 000000014040D73D: mov     r10, [rbp+0D8h+var_88]
 * 000000014040D741: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040D746: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040D74D: call    KiExceptionDispatch
 * 000000014040D752: mov     rax, cr8
 * 000000014040D756: mov     r10, [rbp+0D8h+arg_0]
 * 000000014040D75D: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040D762: and     eax, 0FFh
 * 000000014040D767: mov     r8, rax
 * 000000014040D76A: mov     rdx, [rbp+0D8h+var_88]
 * 000000014040D76E: mov     ecx, 0Ah
 * 000000014040D773: call    KiBugCheckDispatch
 * 000000014040D778: xor     eax, eax
 * 000000014040D77A: mov     al, 0FFh
 * 000000014040D77C: jmp     short loc_14040D756
 * 000000014040D77E: mov     rax, cr8
 * 000000014040D782: or      eax, eax
 * 000000014040D784: mov     [rbp+0D8h+var_138], eax
 * 000000014040D787: jnz     short loc_14040D792
 * 000000014040D789: mov     ecx, 1
 * 000000014040D78E: mov     cr8, rcx
 * 000000014040D792: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040D796: call    KiCheckForSListAddress
 * 000000014040D79B: mov     ecx, [rbp+0D8h+var_138]
 * 000000014040D79E: or      ecx, ecx
 * 000000014040D7A0: jnz     short loc_14040D7A6
 * 000000014040D7A2: mov     cr8, rcx
 * 000000014040D7A6: cli
 * 000000014040D7A7: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040D7AE: jz      loc_14040DA61
 * 000000014040D7B4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040D7BB: jz      short loc_14040D7C0
 * 000000014040D7BD: stac
 * 000000014040D7C0: mov     rcx, gs:188h
 * 000000014040D7C9: test    byte ptr [rcx+0C2h], 3
 * 000000014040D7D0: jz      short loc_14040D7ED
 * 000000014040D7D2: mov     ecx, 1
 * 000000014040D7D7: mov     cr8, rcx
 * 000000014040D7DB: sti
 * 000000014040D7DC: call    KiInitiateUserApc
 * 000000014040D7E1: cli
 * 000000014040D7E2: mov     ecx, 0
 * 000000014040D7E7: mov     cr8, rcx
 * 000000014040D7EB: jmp     short loc_14040D7C0
 * 000000014040D7ED: test    byte ptr gs:86Ch, 2
 * 000000014040D7F6: jz      short loc_14040D7FF
 * 000000014040D7F8: xor     ecx, ecx
 * 000000014040D7FA: call    KiUpdateStibpPairing
 * 000000014040D7FF: mov     rcx, gs:188h
 * 000000014040D808: test    dword ptr [rcx], 8000000h
 * 000000014040D80E: jz      short loc_14040D815
 * 000000014040D810: call    KiRestoreSetContextState
 * 000000014040D815: mov     rcx, gs:188h
 * 000000014040D81E: test    dword ptr [rcx], 40010000h
 * 000000014040D824: jz      short loc_14040D84B
 * 000000014040D826: test    byte ptr [rcx+2], 1
 * 000000014040D82A: jz      short loc_14040D83A
 * 000000014040D82C: call    KiCopyCounters
 * 000000014040D831: mov     rcx, gs:188h
 * 000000014040D83A: test    byte ptr [rcx+3], 40h
 * 000000014040D83E: jz      short loc_14040D84B
 * 000000014040D840: lea     rsp, [rbp-80h]
 * 000000014040D844: mov     cl, 1
 * 000000014040D846: call    KiUmsExit
 * 000000014040D84B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040D84F: cmp     [rbp+0D8h+var_58], 0
 * 000000014040D857: jz      short loc_14040D85E
 * 000000014040D859: call    KiRestoreDebugRegisterState
 * 000000014040D85E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040D862: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040D866: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040D86A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040D86E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040D872: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040D876: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040D87A: mov     r10, [rbp+0D8h+var_100]
 * 000000014040D87E: mov     r9, [rbp+0D8h+var_108]
 * 000000014040D882: mov     r8, [rbp+0D8h+var_110]
 * 000000014040D886: mov     byte ptr gs:856h, 0
 * 000000014040D88F: movzx   eax, word ptr gs:86Ah
 * 000000014040D898: cmp     gs:864h, ax
 * 000000014040D8A1: jz      short loc_14040D8B5
 * 000000014040D8A3: mov     gs:864h, ax
 * 000000014040D8AC: mov     ecx, 48h ; 'H'
 * 000000014040D8B1: xor     edx, edx
 * 000000014040D8B3: wrmsr
 * 000000014040D8B5: btr     word ptr gs:860h, 2
 * 000000014040D8C0: jnb     short loc_14040D8D0
 * 000000014040D8C2: mov     eax, 1
 * 000000014040D8C7: xor     edx, edx
 * 000000014040D8C9: mov     ecx, 49h ; 'I'
 * 000000014040D8CE: wrmsr
 * 000000014040D8D0: btr     word ptr gs:860h, 5
 * 000000014040D8DB: jnb     loc_14040DA06
 * 000000014040D8E1: call    loc_14040D9F4
 * 000000014040D8E6: add     rsp, 8
 * 000000014040D8EA: call    loc_14040D9FD
 * 000000014040D8EF: add     rsp, 8
 * 000000014040D8F3: call    loc_14040D8E6
 * 000000014040D8F8: add     rsp, 8
 * 000000014040D8FC: call    loc_14040D8EF
 * 000000014040D901: add     rsp, 8
 * 000000014040D905: call    loc_14040D8F8
 * 000000014040D90A: add     rsp, 8
 * 000000014040D90E: call    loc_14040D901
 * 000000014040D913: add     rsp, 8
 * 000000014040D917: call    loc_14040D90A
 * 000000014040D91C: add     rsp, 8
 * 000000014040D920: call    loc_14040D913
 * 000000014040D925: add     rsp, 8
 * 000000014040D929: call    loc_14040D91C
 * 000000014040D92E: add     rsp, 8
 * 000000014040D932: call    loc_14040D925
 * 000000014040D937: add     rsp, 8
 * 000000014040D93B: call    loc_14040D92E
 * 000000014040D940: add     rsp, 8
 * 000000014040D944: call    loc_14040D937
 * 000000014040D949: add     rsp, 8
 * 000000014040D94D: call    loc_14040D940
 * 000000014040D952: add     rsp, 8
 * 000000014040D956: call    loc_14040D949
 * 000000014040D95B: add     rsp, 8
 * 000000014040D95F: call    loc_14040D952
 * 000000014040D964: add     rsp, 8
 * 000000014040D968: call    loc_14040D95B
 * 000000014040D96D: add     rsp, 8
 * 000000014040D971: call    loc_14040D964
 * 000000014040D976: add     rsp, 8
 * 000000014040D97A: call    loc_14040D96D
 * 000000014040D97F: add     rsp, 8
 * 000000014040D983: call    loc_14040D976
 * 000000014040D988: add     rsp, 8
 * 000000014040D98C: call    loc_14040D97F
 * 000000014040D991: add     rsp, 8
 * 000000014040D995: call    loc_14040D988
 * 000000014040D99A: add     rsp, 8
 * 000000014040D99E: call    loc_14040D991
 * 000000014040D9A3: add     rsp, 8
 * 000000014040D9A7: call    loc_14040D99A
 * 000000014040D9AC: add     rsp, 8
 * 000000014040D9B0: call    loc_14040D9A3
 * 000000014040D9B5: add     rsp, 8
 * 000000014040D9B9: call    loc_14040D9AC
 * 000000014040D9BE: add     rsp, 8
 * 000000014040D9C2: call    loc_14040D9B5
 * 000000014040D9C7: add     rsp, 8
 * 000000014040D9CB: call    loc_14040D9BE
 * 000000014040D9D0: add     rsp, 8
 * 000000014040D9D4: call    loc_14040D9C7
 * 000000014040D9D9: add     rsp, 8
 * 000000014040D9DD: call    loc_14040D9D0
 * 000000014040D9E2: add     rsp, 8
 * 000000014040D9E6: call    loc_14040D9D9
 * 000000014040D9EB: add     rsp, 8
 * 000000014040D9EF: call    loc_14040D9E2
 * 000000014040D9F4: add     rsp, 8
 * 000000014040D9F8: call    loc_14040D9EB
 * 000000014040D9FD: add     rsp, 8
 * 000000014040DA01: mov     eax, 0DADAh
 * 000000014040DA06: test    word ptr gs:860h, 80h
 * 000000014040DA11: jz      short loc_14040DA1F
 * 000000014040DA13: xor     eax, eax
 * 000000014040DA15: xor     edx, edx
 * 000000014040DA17: mov     ecx, 1
 * 000000014040DA1C: div     rcx
 * 000000014040DA1F: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040DA23: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040DA27: mov     rax, [rbp+0D8h+var_128]
 * 000000014040DA2B: mov     rsp, rbp
 * 000000014040DA2E: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040DA35: add     rsp, 0E8h
 * 000000014040DA3C: test    cs:KiKvaShadow, 1
 * 000000014040DA43: jz      short loc_14040DA4A
 * 000000014040DA45: jmp     KiKernelExit
 * 000000014040DA4A: test    word ptr gs:860h, 100h
 * 000000014040DA55: jz      short loc_14040DA5C
 * 000000014040DA57: verw    [rsp-10h+arg_20]
 * 000000014040DA5C: swapgs
 * 000000014040DA5F: iretq
 * 000000014040DA61: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040DA65: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040DA69: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040DA6D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040DA71: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040DA75: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040DA79: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040DA7D: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040DA81: mov     r10, [rbp+0D8h+var_100]
 * 000000014040DA85: mov     r9, [rbp+0D8h+var_108]
 * 000000014040DA89: mov     r8, [rbp+0D8h+var_110]
 * 000000014040DA8D: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040DA91: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040DA95: mov     rax, [rbp+0D8h+var_128]
 * 000000014040DA99: mov     rsp, rbp
 * 000000014040DA9C: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040DAA3: add     rsp, 0E8h
 * 000000014040DAAA: iretq
 */
