/*
 * XREFs of KiInvalidOpcodeFault @ 0x14040B640
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140A14440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14040B640 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140412B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14040B640
 * Reason: Hex-Rays returned no pseudocode for 0x14040B640
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B640: sub     rsp, 8
 * 000000014040B644: push    rbp
 * 000000014040B645: sub     rsp, 158h
 * 000000014040B64C: lea     rbp, [rsp+80h]
 * 000000014040B654: mov     [rbp+0E8h+var_13D], 1
 * 000000014040B658: mov     [rbp+0E8h+var_138], rax
 * 000000014040B65C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040B660: mov     [rbp+0E8h+var_128], rdx
 * 000000014040B664: mov     [rbp+0E8h+var_120], r8
 * 000000014040B668: mov     [rbp+0E8h+var_118], r9
 * 000000014040B66C: mov     [rbp+0E8h+var_110], r10
 * 000000014040B670: mov     [rbp+0E8h+var_108], r11
 * 000000014040B674: test    [rbp+0E8h+arg_0], 1
 * 000000014040B67B: jnz     short loc_14040B6AC
 * 000000014040B67D: lfence
 * 000000014040B680: test    word ptr gs:860h, 1
 * 000000014040B68B: jnz     short loc_14040B695
 * 000000014040B68D: lfence
 * 000000014040B690: jmp     loc_14040B8FE
 * 000000014040B695: movzx   eax, word ptr gs:864h
 * 000000014040B69E: mov     ecx, 48h ; 'H'
 * 000000014040B6A3: xor     edx, edx
 * 000000014040B6A5: wrmsr
 * 000000014040B6A7: jmp     loc_14040B8FE
 * 000000014040B6AC: test    cs:KiKvaShadow, 1
 * 000000014040B6B3: jnz     short loc_14040B6B8
 * 000000014040B6B5: swapgs
 * 000000014040B6B8: lfence
 * 000000014040B6BB: mov     r10, gs:188h
 * 000000014040B6C4: mov     rcx, gs:188h
 * 000000014040B6CD: mov     rcx, [rcx+220h]
 * 000000014040B6D4: mov     rcx, [rcx+9E0h]
 * 000000014040B6DB: mov     gs:858h, rcx
 * 000000014040B6E4: mov     cx, gs:850h
 * 000000014040B6ED: mov     gs:852h, cx
 * 000000014040B6F6: mov     cx, gs:860h
 * 000000014040B6FF: mov     gs:854h, cx
 * 000000014040B708: movzx   eax, word ptr gs:866h
 * 000000014040B711: cmp     gs:864h, ax
 * 000000014040B71A: jz      short loc_14040B72E
 * 000000014040B71C: mov     gs:864h, ax
 * 000000014040B725: mov     ecx, 48h ; 'H'
 * 000000014040B72A: xor     edx, edx
 * 000000014040B72C: wrmsr
 * 000000014040B72E: movzx   edx, word ptr gs:860h
 * 000000014040B737: test    edx, 8
 * 000000014040B73D: jz      short loc_14040B756
 * 000000014040B73F: mov     eax, 1
 * 000000014040B744: xor     edx, edx
 * 000000014040B746: mov     ecx, 49h ; 'I'
 * 000000014040B74B: wrmsr
 * 000000014040B74D: movzx   edx, word ptr gs:860h
 * 000000014040B756: test    edx, 2
 * 000000014040B75C: jz      loc_14040B887
 * 000000014040B762: call    loc_14040B875
 * 000000014040B767: add     rsp, 8
 * 000000014040B76B: call    loc_14040B87E
 * 000000014040B770: add     rsp, 8
 * 000000014040B774: call    loc_14040B767
 * 000000014040B779: add     rsp, 8
 * 000000014040B77D: call    loc_14040B770
 * 000000014040B782: add     rsp, 8
 * 000000014040B786: call    loc_14040B779
 * 000000014040B78B: add     rsp, 8
 * 000000014040B78F: call    loc_14040B782
 * 000000014040B794: add     rsp, 8
 * 000000014040B798: call    loc_14040B78B
 * 000000014040B79D: add     rsp, 8
 * 000000014040B7A1: call    loc_14040B794
 * 000000014040B7A6: add     rsp, 8
 * 000000014040B7AA: call    loc_14040B79D
 * 000000014040B7AF: add     rsp, 8
 * 000000014040B7B3: call    loc_14040B7A6
 * 000000014040B7B8: add     rsp, 8
 * 000000014040B7BC: call    loc_14040B7AF
 * 000000014040B7C1: add     rsp, 8
 * 000000014040B7C5: call    loc_14040B7B8
 * 000000014040B7CA: add     rsp, 8
 * 000000014040B7CE: call    loc_14040B7C1
 * 000000014040B7D3: add     rsp, 8
 * 000000014040B7D7: call    loc_14040B7CA
 * 000000014040B7DC: add     rsp, 8
 * 000000014040B7E0: call    loc_14040B7D3
 * 000000014040B7E5: add     rsp, 8
 * 000000014040B7E9: call    loc_14040B7DC
 * 000000014040B7EE: add     rsp, 8
 * 000000014040B7F2: call    loc_14040B7E5
 * 000000014040B7F7: add     rsp, 8
 * 000000014040B7FB: call    loc_14040B7EE
 * 000000014040B800: add     rsp, 8
 * 000000014040B804: call    loc_14040B7F7
 * 000000014040B809: add     rsp, 8
 * 000000014040B80D: call    loc_14040B800
 * 000000014040B812: add     rsp, 8
 * 000000014040B816: call    loc_14040B809
 * 000000014040B81B: add     rsp, 8
 * 000000014040B81F: call    loc_14040B812
 * 000000014040B824: add     rsp, 8
 * 000000014040B828: call    loc_14040B81B
 * 000000014040B82D: add     rsp, 8
 * 000000014040B831: call    loc_14040B824
 * 000000014040B836: add     rsp, 8
 * 000000014040B83A: call    loc_14040B82D
 * 000000014040B83F: add     rsp, 8
 * 000000014040B843: call    loc_14040B836
 * 000000014040B848: add     rsp, 8
 * 000000014040B84C: call    loc_14040B83F
 * 000000014040B851: add     rsp, 8
 * 000000014040B855: call    loc_14040B848
 * 000000014040B85A: add     rsp, 8
 * 000000014040B85E: call    loc_14040B851
 * 000000014040B863: add     rsp, 8
 * 000000014040B867: call    loc_14040B85A
 * 000000014040B86C: add     rsp, 8
 * 000000014040B870: call    loc_14040B863
 * 000000014040B875: add     rsp, 8
 * 000000014040B879: call    loc_14040B86C
 * 000000014040B87E: add     rsp, 8
 * 000000014040B882: mov     eax, 0DADAh
 * 000000014040B887: test    edx, 200h
 * 000000014040B88D: jz      short loc_14040B894
 * 000000014040B88F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040B894: lfence
 * 000000014040B897: mov     byte ptr gs:856h, 0
 * 000000014040B8A0: test    byte ptr [r10+3], 80h
 * 000000014040B8A5: jz      short loc_14040B8E9
 * 000000014040B8A7: mov     ecx, 0C0000102h
 * 000000014040B8AC: rdmsr
 * 000000014040B8AE: shl     rdx, 20h
 * 000000014040B8B2: or      rax, rdx
 * 000000014040B8B5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B8BC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B8C4: cmp     [r10+0F0h], rax
 * 000000014040B8CB: jz      short loc_14040B8E9
 * 000000014040B8CD: mov     rdx, [r10+1F0h]
 * 000000014040B8D4: bts     dword ptr [r10+74h], 8
 * 000000014040B8DA: dec     word ptr [r10+1E6h]
 * 000000014040B8E2: mov     [rdx+80h], rax
 * 000000014040B8E9: test    byte ptr [r10+3], 3
 * 000000014040B8EE: mov     [rbp+0E8h+var_68], 0
 * 000000014040B8F7: jz      short loc_14040B8FE
 * 000000014040B8F9: call    KiSaveDebugRegisterState
 * 000000014040B8FE: cld
 * 000000014040B8FF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040B903: ldmxcsr dword ptr gs:180h
 * 000000014040B90C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040B910: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040B914: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040B918: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040B91C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040B920: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040B924: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B92B: jz      short loc_14040B939
 * 000000014040B92D: test    [rbp+0E8h+arg_0], 1
 * 000000014040B934: jz      short loc_14040B939
 * 000000014040B936: stac
 * 000000014040B939: test    [rbp+0E8h+arg_8], 200h
 * 000000014040B943: jz      short loc_14040B946
 * 000000014040B945: sti
 * 000000014040B946: mov     r9, gs:188h
 * 000000014040B94F: bt      dword ptr [r9+74h], 8
 * 000000014040B955: jnb     short loc_14040B965
 * 000000014040B957: test    [rbp+0E8h+arg_0], 1
 * 000000014040B95E: jz      short loc_14040B965
 * 000000014040B960: call    KiUmsTrapEntry
 * 000000014040B965: mov     ecx, 10000002h
 * 000000014040B96A: xor     edx, edx
 * 000000014040B96C: mov     r8, [rbp+0E8h]
 * 000000014040B973: call    KiExceptionDispatch
 * 000000014040B978: nop
 * 000000014040B979: cli
 * 000000014040B97A: test    [rbp+0E8h+arg_0], 1
 * 000000014040B981: jz      loc_14040BC34
 * 000000014040B987: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B98E: jz      short loc_14040B993
 * 000000014040B990: stac
 * 000000014040B993: mov     rcx, gs:188h
 * 000000014040B99C: test    byte ptr [rcx+0C2h], 3
 * 000000014040B9A3: jz      short loc_14040B9C0
 * 000000014040B9A5: mov     ecx, 1
 * 000000014040B9AA: mov     cr8, rcx
 * 000000014040B9AE: sti
 * 000000014040B9AF: call    KiInitiateUserApc
 * 000000014040B9B4: cli
 * 000000014040B9B5: mov     ecx, 0
 * 000000014040B9BA: mov     cr8, rcx
 * 000000014040B9BE: jmp     short loc_14040B993
 * 000000014040B9C0: test    byte ptr gs:86Ch, 2
 * 000000014040B9C9: jz      short loc_14040B9D2
 * 000000014040B9CB: xor     ecx, ecx
 * 000000014040B9CD: call    KiUpdateStibpPairing
 * 000000014040B9D2: mov     rcx, gs:188h
 * 000000014040B9DB: test    dword ptr [rcx], 8000000h
 * 000000014040B9E1: jz      short loc_14040B9E8
 * 000000014040B9E3: call    KiRestoreSetContextState
 * 000000014040B9E8: mov     rcx, gs:188h
 * 000000014040B9F1: test    dword ptr [rcx], 40010000h
 * 000000014040B9F7: jz      short loc_14040BA1E
 * 000000014040B9F9: test    byte ptr [rcx+2], 1
 * 000000014040B9FD: jz      short loc_14040BA0D
 * 000000014040B9FF: call    KiCopyCounters
 * 000000014040BA04: mov     rcx, gs:188h
 * 000000014040BA0D: test    byte ptr [rcx+3], 40h
 * 000000014040BA11: jz      short loc_14040BA1E
 * 000000014040BA13: lea     rsp, [rbp-80h]
 * 000000014040BA17: mov     cl, 1
 * 000000014040BA19: call    KiUmsExit
 * 000000014040BA1E: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040BA22: cmp     [rbp+0E8h+var_68], 0
 * 000000014040BA2A: jz      short loc_14040BA31
 * 000000014040BA2C: call    KiRestoreDebugRegisterState
 * 000000014040BA31: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040BA35: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040BA39: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040BA3D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040BA41: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040BA45: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040BA49: mov     r11, [rbp+0E8h+var_108]
 * 000000014040BA4D: mov     r10, [rbp+0E8h+var_110]
 * 000000014040BA51: mov     r9, [rbp+0E8h+var_118]
 * 000000014040BA55: mov     r8, [rbp+0E8h+var_120]
 * 000000014040BA59: mov     byte ptr gs:856h, 0
 * 000000014040BA62: movzx   eax, word ptr gs:86Ah
 * 000000014040BA6B: cmp     gs:864h, ax
 * 000000014040BA74: jz      short loc_14040BA88
 * 000000014040BA76: mov     gs:864h, ax
 * 000000014040BA7F: mov     ecx, 48h ; 'H'
 * 000000014040BA84: xor     edx, edx
 * 000000014040BA86: wrmsr
 * 000000014040BA88: btr     word ptr gs:860h, 2
 * 000000014040BA93: jnb     short loc_14040BAA3
 * 000000014040BA95: mov     eax, 1
 * 000000014040BA9A: xor     edx, edx
 * 000000014040BA9C: mov     ecx, 49h ; 'I'
 * 000000014040BAA1: wrmsr
 * 000000014040BAA3: btr     word ptr gs:860h, 5
 * 000000014040BAAE: jnb     loc_14040BBD9
 * 000000014040BAB4: call    loc_14040BBC7
 * 000000014040BAB9: add     rsp, 8
 * 000000014040BABD: call    loc_14040BBD0
 * 000000014040BAC2: add     rsp, 8
 * 000000014040BAC6: call    loc_14040BAB9
 * 000000014040BACB: add     rsp, 8
 * 000000014040BACF: call    loc_14040BAC2
 * 000000014040BAD4: add     rsp, 8
 * 000000014040BAD8: call    loc_14040BACB
 * 000000014040BADD: add     rsp, 8
 * 000000014040BAE1: call    loc_14040BAD4
 * 000000014040BAE6: add     rsp, 8
 * 000000014040BAEA: call    loc_14040BADD
 * 000000014040BAEF: add     rsp, 8
 * 000000014040BAF3: call    loc_14040BAE6
 * 000000014040BAF8: add     rsp, 8
 * 000000014040BAFC: call    loc_14040BAEF
 * 000000014040BB01: add     rsp, 8
 * 000000014040BB05: call    loc_14040BAF8
 * 000000014040BB0A: add     rsp, 8
 * 000000014040BB0E: call    loc_14040BB01
 * 000000014040BB13: add     rsp, 8
 * 000000014040BB17: call    loc_14040BB0A
 * 000000014040BB1C: add     rsp, 8
 * 000000014040BB20: call    loc_14040BB13
 * 000000014040BB25: add     rsp, 8
 * 000000014040BB29: call    loc_14040BB1C
 * 000000014040BB2E: add     rsp, 8
 * 000000014040BB32: call    loc_14040BB25
 * 000000014040BB37: add     rsp, 8
 * 000000014040BB3B: call    loc_14040BB2E
 * 000000014040BB40: add     rsp, 8
 * 000000014040BB44: call    loc_14040BB37
 * 000000014040BB49: add     rsp, 8
 * 000000014040BB4D: call    loc_14040BB40
 * 000000014040BB52: add     rsp, 8
 * 000000014040BB56: call    loc_14040BB49
 * 000000014040BB5B: add     rsp, 8
 * 000000014040BB5F: call    loc_14040BB52
 * 000000014040BB64: add     rsp, 8
 * 000000014040BB68: call    loc_14040BB5B
 * 000000014040BB6D: add     rsp, 8
 * 000000014040BB71: call    loc_14040BB64
 * 000000014040BB76: add     rsp, 8
 * 000000014040BB7A: call    loc_14040BB6D
 * 000000014040BB7F: add     rsp, 8
 * 000000014040BB83: call    loc_14040BB76
 * 000000014040BB88: add     rsp, 8
 * 000000014040BB8C: call    loc_14040BB7F
 * 000000014040BB91: add     rsp, 8
 * 000000014040BB95: call    loc_14040BB88
 * 000000014040BB9A: add     rsp, 8
 * 000000014040BB9E: call    loc_14040BB91
 * 000000014040BBA3: add     rsp, 8
 * 000000014040BBA7: call    loc_14040BB9A
 * 000000014040BBAC: add     rsp, 8
 * 000000014040BBB0: call    loc_14040BBA3
 * 000000014040BBB5: add     rsp, 8
 * 000000014040BBB9: call    loc_14040BBAC
 * 000000014040BBBE: add     rsp, 8
 * 000000014040BBC2: call    loc_14040BBB5
 * 000000014040BBC7: add     rsp, 8
 * 000000014040BBCB: call    loc_14040BBBE
 * 000000014040BBD0: add     rsp, 8
 * 000000014040BBD4: mov     eax, 0DADAh
 * 000000014040BBD9: test    word ptr gs:860h, 80h
 * 000000014040BBE4: jz      short loc_14040BBF2
 * 000000014040BBE6: xor     eax, eax
 * 000000014040BBE8: xor     edx, edx
 * 000000014040BBEA: mov     ecx, 1
 * 000000014040BBEF: div     rcx
 * 000000014040BBF2: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040BBF6: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040BBFA: mov     rax, [rbp+0E8h+var_138]
 * 000000014040BBFE: mov     rsp, rbp
 * 000000014040BC01: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040BC08: add     rsp, 0E8h
 * 000000014040BC0F: test    cs:KiKvaShadow, 1
 * 000000014040BC16: jz      short loc_14040BC1D
 * 000000014040BC18: jmp     KiKernelExit
 * 000000014040BC1D: test    word ptr gs:860h, 100h
 * 000000014040BC28: jz      short loc_14040BC2F
 * 000000014040BC2A: verw    [rsp+arg_18]
 * 000000014040BC2F: swapgs
 * 000000014040BC32: iretq
 * 000000014040BC34: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040BC38: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040BC3C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040BC40: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040BC44: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040BC48: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040BC4C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040BC50: mov     r11, [rbp+0E8h+var_108]
 * 000000014040BC54: mov     r10, [rbp+0E8h+var_110]
 * 000000014040BC58: mov     r9, [rbp+0E8h+var_118]
 * 000000014040BC5C: mov     r8, [rbp+0E8h+var_120]
 * 000000014040BC60: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040BC64: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040BC68: mov     rax, [rbp+0E8h+var_138]
 * 000000014040BC6C: mov     rsp, rbp
 * 000000014040BC6F: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040BC76: add     rsp, 0E8h
 * 000000014040BC7D: iretq
 */
