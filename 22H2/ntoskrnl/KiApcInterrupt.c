/*
 * XREFs of KiApcInterrupt @ 0x140402570
 * Callers:
 *     KiApcInterruptShadow @ 0x140A14C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140402570 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140402570
 * Reason: Hex-Rays returned no pseudocode for 0x140402570
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140402570: sub     rsp, 8
 * 0000000140402574: push    rbp
 * 0000000140402575: push    rsi
 * 0000000140402576: sub     rsp, 150h
 * 000000014040257D: lea     rbp, [rsp+80h]
 * 0000000140402585: mov     [rbp+0E8h+var_13D], 0
 * 0000000140402589: mov     [rbp+0E8h+var_138], rax
 * 000000014040258D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140402591: mov     [rbp+0E8h+var_128], rdx
 * 0000000140402595: mov     [rbp+0E8h+var_120], r8
 * 0000000140402599: mov     [rbp+0E8h+var_118], r9
 * 000000014040259D: mov     [rbp+0E8h+var_110], r10
 * 00000001404025A1: mov     [rbp+0E8h+var_108], r11
 * 00000001404025A5: test    [rbp+0E8h+arg_0], 1
 * 00000001404025AC: jnz     short loc_1404025DD
 * 00000001404025AE: lfence
 * 00000001404025B1: test    word ptr gs:860h, 1
 * 00000001404025BC: jnz     short loc_1404025C6
 * 00000001404025BE: lfence
 * 00000001404025C1: jmp     loc_1404027E6
 * 00000001404025C6: movzx   eax, word ptr gs:864h
 * 00000001404025CF: mov     ecx, 48h ; 'H'
 * 00000001404025D4: xor     edx, edx
 * 00000001404025D6: wrmsr
 * 00000001404025D8: jmp     loc_1404027E6
 * 00000001404025DD: test    cs:KiKvaShadow, 1
 * 00000001404025E4: jnz     short loc_1404025E9
 * 00000001404025E6: swapgs
 * 00000001404025E9: lfence
 * 00000001404025EC: mov     r10, gs:188h
 * 00000001404025F5: mov     rcx, gs:188h
 * 00000001404025FE: mov     rcx, [rcx+220h]
 * 0000000140402605: mov     rcx, [rcx+9E0h]
 * 000000014040260C: mov     gs:858h, rcx
 * 0000000140402615: mov     cx, gs:850h
 * 000000014040261E: mov     gs:852h, cx
 * 0000000140402627: mov     cx, gs:860h
 * 0000000140402630: mov     gs:854h, cx
 * 0000000140402639: movzx   eax, word ptr gs:866h
 * 0000000140402642: cmp     gs:864h, ax
 * 000000014040264B: jz      short loc_14040265F
 * 000000014040264D: mov     gs:864h, ax
 * 0000000140402656: mov     ecx, 48h ; 'H'
 * 000000014040265B: xor     edx, edx
 * 000000014040265D: wrmsr
 * 000000014040265F: movzx   edx, word ptr gs:860h
 * 0000000140402668: test    edx, 8
 * 000000014040266E: jz      short loc_140402687
 * 0000000140402670: mov     eax, 1
 * 0000000140402675: xor     edx, edx
 * 0000000140402677: mov     ecx, 49h ; 'I'
 * 000000014040267C: wrmsr
 * 000000014040267E: movzx   edx, word ptr gs:860h
 * 0000000140402687: test    edx, 2
 * 000000014040268D: jz      loc_1404027B8
 * 0000000140402693: call    loc_1404027A6
 * 0000000140402698: add     rsp, 8
 * 000000014040269C: call    loc_1404027AF
 * 00000001404026A1: add     rsp, 8
 * 00000001404026A5: call    loc_140402698
 * 00000001404026AA: add     rsp, 8
 * 00000001404026AE: call    loc_1404026A1
 * 00000001404026B3: add     rsp, 8
 * 00000001404026B7: call    loc_1404026AA
 * 00000001404026BC: add     rsp, 8
 * 00000001404026C0: call    loc_1404026B3
 * 00000001404026C5: add     rsp, 8
 * 00000001404026C9: call    loc_1404026BC
 * 00000001404026CE: add     rsp, 8
 * 00000001404026D2: call    loc_1404026C5
 * 00000001404026D7: add     rsp, 8
 * 00000001404026DB: call    loc_1404026CE
 * 00000001404026E0: add     rsp, 8
 * 00000001404026E4: call    loc_1404026D7
 * 00000001404026E9: add     rsp, 8
 * 00000001404026ED: call    loc_1404026E0
 * 00000001404026F2: add     rsp, 8
 * 00000001404026F6: call    loc_1404026E9
 * 00000001404026FB: add     rsp, 8
 * 00000001404026FF: call    loc_1404026F2
 * 0000000140402704: add     rsp, 8
 * 0000000140402708: call    loc_1404026FB
 * 000000014040270D: add     rsp, 8
 * 0000000140402711: call    loc_140402704
 * 0000000140402716: add     rsp, 8
 * 000000014040271A: call    loc_14040270D
 * 000000014040271F: add     rsp, 8
 * 0000000140402723: call    loc_140402716
 * 0000000140402728: add     rsp, 8
 * 000000014040272C: call    loc_14040271F
 * 0000000140402731: add     rsp, 8
 * 0000000140402735: call    loc_140402728
 * 000000014040273A: add     rsp, 8
 * 000000014040273E: call    loc_140402731
 * 0000000140402743: add     rsp, 8
 * 0000000140402747: call    loc_14040273A
 * 000000014040274C: add     rsp, 8
 * 0000000140402750: call    loc_140402743
 * 0000000140402755: add     rsp, 8
 * 0000000140402759: call    loc_14040274C
 * 000000014040275E: add     rsp, 8
 * 0000000140402762: call    loc_140402755
 * 0000000140402767: add     rsp, 8
 * 000000014040276B: call    loc_14040275E
 * 0000000140402770: add     rsp, 8
 * 0000000140402774: call    loc_140402767
 * 0000000140402779: add     rsp, 8
 * 000000014040277D: call    loc_140402770
 * 0000000140402782: add     rsp, 8
 * 0000000140402786: call    loc_140402779
 * 000000014040278B: add     rsp, 8
 * 000000014040278F: call    loc_140402782
 * 0000000140402794: add     rsp, 8
 * 0000000140402798: call    loc_14040278B
 * 000000014040279D: add     rsp, 8
 * 00000001404027A1: call    loc_140402794
 * 00000001404027A6: add     rsp, 8
 * 00000001404027AA: call    loc_14040279D
 * 00000001404027AF: add     rsp, 8
 * 00000001404027B3: mov     eax, 0DADAh
 * 00000001404027B8: test    edx, 200h
 * 00000001404027BE: jz      short loc_1404027C5
 * 00000001404027C0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404027C5: lfence
 * 00000001404027C8: mov     byte ptr gs:856h, 0
 * 00000001404027D1: test    byte ptr [r10+3], 3
 * 00000001404027D6: mov     [rbp+0E8h+var_68], 0
 * 00000001404027DF: jz      short loc_1404027E6
 * 00000001404027E1: call    KiSaveDebugRegisterState
 * 00000001404027E6: cld
 * 00000001404027E7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404027EB: ldmxcsr dword ptr gs:180h
 * 00000001404027F4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404027F8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404027FC: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140402800: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140402804: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140402808: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040280C: xor     esi, esi
 * 000000014040280E: inc     dword ptr gs:8000h
 * 0000000140402816: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040281D: jz      short loc_14040282B
 * 000000014040281F: test    [rbp+0E8h+arg_0], 1
 * 0000000140402826: jz      short loc_14040282B
 * 0000000140402828: stac
 * 000000014040282B: mov     ecx, 1
 * 0000000140402830: cmp     cs:KiIrqlFlags, 0
 * 0000000140402837: jz      short loc_140402840
 * 0000000140402839: call    KzSetIrqlUnsafe
 * 000000014040283E: jmp     short loc_140402848
 * 0000000140402840: mov     rax, cr8
 * 0000000140402844: mov     cr8, rcx
 * 0000000140402848: mov     [rbp+0E8h+var_13F], al
 * 000000014040284B: mov     rcx, rsi
 * 000000014040284E: call    HalPerformEndOfInterrupt
 * 0000000140402853: sti
 * 0000000140402854: cmp     byte ptr gs:187h, 0
 * 000000014040285D: jnz     short loc_14040286F
 * 000000014040285F: mov     ecx, 0
 * 0000000140402864: xor     edx, edx
 * 0000000140402866: lea     r8, [rbp+0E8h+var_168]
 * 000000014040286A: call    KiDeliverApc
 * 000000014040286F: cli
 * 0000000140402870: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140402874: cmp     cs:KiIrqlFlags, 0
 * 000000014040287B: jz      short loc_140402884
 * 000000014040287D: call    KzSetIrqlUnsafe
 * 0000000140402882: jmp     short loc_140402888
 * 0000000140402884: mov     cr8, rcx
 * 0000000140402888: mov     rsi, [rbp+0E8h+var_18]
 * 000000014040288F: cli
 * 0000000140402890: test    [rbp+0E8h+arg_0], 1
 * 0000000140402897: jz      loc_140402B4A
 * 000000014040289D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404028A4: jz      short loc_1404028A9
 * 00000001404028A6: stac
 * 00000001404028A9: mov     rcx, gs:188h
 * 00000001404028B2: test    byte ptr [rcx+0C2h], 3
 * 00000001404028B9: jz      short loc_1404028D6
 * 00000001404028BB: mov     ecx, 1
 * 00000001404028C0: mov     cr8, rcx
 * 00000001404028C4: sti
 * 00000001404028C5: call    KiInitiateUserApc
 * 00000001404028CA: cli
 * 00000001404028CB: mov     ecx, 0
 * 00000001404028D0: mov     cr8, rcx
 * 00000001404028D4: jmp     short loc_1404028A9
 * 00000001404028D6: test    byte ptr gs:86Ch, 2
 * 00000001404028DF: jz      short loc_1404028E8
 * 00000001404028E1: xor     ecx, ecx
 * 00000001404028E3: call    KiUpdateStibpPairing
 * 00000001404028E8: mov     rcx, gs:188h
 * 00000001404028F1: test    dword ptr [rcx], 8000000h
 * 00000001404028F7: jz      short loc_1404028FE
 * 00000001404028F9: call    KiRestoreSetContextState
 * 00000001404028FE: mov     rcx, gs:188h
 * 0000000140402907: test    dword ptr [rcx], 40010000h
 * 000000014040290D: jz      short loc_140402934
 * 000000014040290F: test    byte ptr [rcx+2], 1
 * 0000000140402913: jz      short loc_140402923
 * 0000000140402915: call    KiCopyCounters
 * 000000014040291A: mov     rcx, gs:188h
 * 0000000140402923: test    byte ptr [rcx+3], 40h
 * 0000000140402927: jz      short loc_140402934
 * 0000000140402929: lea     rsp, [rbp-80h]
 * 000000014040292D: mov     cl, 1
 * 000000014040292F: call    KiUmsExit
 * 0000000140402934: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140402938: cmp     [rbp+0E8h+var_68], 0
 * 0000000140402940: jz      short loc_140402947
 * 0000000140402942: call    KiRestoreDebugRegisterState
 * 0000000140402947: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040294B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040294F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140402953: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140402957: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040295B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040295F: mov     r11, [rbp+0E8h+var_108]
 * 0000000140402963: mov     r10, [rbp+0E8h+var_110]
 * 0000000140402967: mov     r9, [rbp+0E8h+var_118]
 * 000000014040296B: mov     r8, [rbp+0E8h+var_120]
 * 000000014040296F: mov     byte ptr gs:856h, 0
 * 0000000140402978: movzx   eax, word ptr gs:86Ah
 * 0000000140402981: cmp     gs:864h, ax
 * 000000014040298A: jz      short loc_14040299E
 * 000000014040298C: mov     gs:864h, ax
 * 0000000140402995: mov     ecx, 48h ; 'H'
 * 000000014040299A: xor     edx, edx
 * 000000014040299C: wrmsr
 * 000000014040299E: btr     word ptr gs:860h, 2
 * 00000001404029A9: jnb     short loc_1404029B9
 * 00000001404029AB: mov     eax, 1
 * 00000001404029B0: xor     edx, edx
 * 00000001404029B2: mov     ecx, 49h ; 'I'
 * 00000001404029B7: wrmsr
 * 00000001404029B9: btr     word ptr gs:860h, 5
 * 00000001404029C4: jnb     loc_140402AEF
 * 00000001404029CA: call    loc_140402ADD
 * 00000001404029CF: add     rsp, 8
 * 00000001404029D3: call    loc_140402AE6
 * 00000001404029D8: add     rsp, 8
 * 00000001404029DC: call    loc_1404029CF
 * 00000001404029E1: add     rsp, 8
 * 00000001404029E5: call    loc_1404029D8
 * 00000001404029EA: add     rsp, 8
 * 00000001404029EE: call    loc_1404029E1
 * 00000001404029F3: add     rsp, 8
 * 00000001404029F7: call    loc_1404029EA
 * 00000001404029FC: add     rsp, 8
 * 0000000140402A00: call    loc_1404029F3
 * 0000000140402A05: add     rsp, 8
 * 0000000140402A09: call    loc_1404029FC
 * 0000000140402A0E: add     rsp, 8
 * 0000000140402A12: call    loc_140402A05
 * 0000000140402A17: add     rsp, 8
 * 0000000140402A1B: call    loc_140402A0E
 * 0000000140402A20: add     rsp, 8
 * 0000000140402A24: call    loc_140402A17
 * 0000000140402A29: add     rsp, 8
 * 0000000140402A2D: call    loc_140402A20
 * 0000000140402A32: add     rsp, 8
 * 0000000140402A36: call    loc_140402A29
 * 0000000140402A3B: add     rsp, 8
 * 0000000140402A3F: call    loc_140402A32
 * 0000000140402A44: add     rsp, 8
 * 0000000140402A48: call    loc_140402A3B
 * 0000000140402A4D: add     rsp, 8
 * 0000000140402A51: call    loc_140402A44
 * 0000000140402A56: add     rsp, 8
 * 0000000140402A5A: call    loc_140402A4D
 * 0000000140402A5F: add     rsp, 8
 * 0000000140402A63: call    loc_140402A56
 * 0000000140402A68: add     rsp, 8
 * 0000000140402A6C: call    loc_140402A5F
 * 0000000140402A71: add     rsp, 8
 * 0000000140402A75: call    loc_140402A68
 * 0000000140402A7A: add     rsp, 8
 * 0000000140402A7E: call    loc_140402A71
 * 0000000140402A83: add     rsp, 8
 * 0000000140402A87: call    loc_140402A7A
 * 0000000140402A8C: add     rsp, 8
 * 0000000140402A90: call    loc_140402A83
 * 0000000140402A95: add     rsp, 8
 * 0000000140402A99: call    loc_140402A8C
 * 0000000140402A9E: add     rsp, 8
 * 0000000140402AA2: call    loc_140402A95
 * 0000000140402AA7: add     rsp, 8
 * 0000000140402AAB: call    loc_140402A9E
 * 0000000140402AB0: add     rsp, 8
 * 0000000140402AB4: call    loc_140402AA7
 * 0000000140402AB9: add     rsp, 8
 * 0000000140402ABD: call    loc_140402AB0
 * 0000000140402AC2: add     rsp, 8
 * 0000000140402AC6: call    loc_140402AB9
 * 0000000140402ACB: add     rsp, 8
 * 0000000140402ACF: call    loc_140402AC2
 * 0000000140402AD4: add     rsp, 8
 * 0000000140402AD8: call    loc_140402ACB
 * 0000000140402ADD: add     rsp, 8
 * 0000000140402AE1: call    loc_140402AD4
 * 0000000140402AE6: add     rsp, 8
 * 0000000140402AEA: mov     eax, 0DADAh
 * 0000000140402AEF: test    word ptr gs:860h, 80h
 * 0000000140402AFA: jz      short loc_140402B08
 * 0000000140402AFC: xor     eax, eax
 * 0000000140402AFE: xor     edx, edx
 * 0000000140402B00: mov     ecx, 1
 * 0000000140402B05: div     rcx
 * 0000000140402B08: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140402B0C: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140402B10: mov     rax, [rbp+0E8h+var_138]
 * 0000000140402B14: mov     rsp, rbp
 * 0000000140402B17: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140402B1E: add     rsp, 0E8h
 * 0000000140402B25: test    cs:KiKvaShadow, 1
 * 0000000140402B2C: jz      short loc_140402B33
 * 0000000140402B2E: jmp     KiKernelExit
 * 0000000140402B33: test    word ptr gs:860h, 100h
 * 0000000140402B3E: jz      short loc_140402B45
 * 0000000140402B40: verw    [rsp+arg_18]
 * 0000000140402B45: swapgs
 * 0000000140402B48: iretq
 * 0000000140402B4A: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140402B4E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140402B52: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140402B56: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140402B5A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140402B5E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140402B62: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140402B66: mov     r11, [rbp+0E8h+var_108]
 * 0000000140402B6A: mov     r10, [rbp+0E8h+var_110]
 * 0000000140402B6E: mov     r9, [rbp+0E8h+var_118]
 * 0000000140402B72: mov     r8, [rbp+0E8h+var_120]
 * 0000000140402B76: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140402B7A: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140402B7E: mov     rax, [rbp+0E8h+var_138]
 * 0000000140402B82: mov     rsp, rbp
 * 0000000140402B85: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140402B8C: add     rsp, 0E8h
 * 0000000140402B93: iretq
 */
