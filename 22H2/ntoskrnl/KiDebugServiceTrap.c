/*
 * XREFs of KiDebugServiceTrap @ 0x140410540
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140A14E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140410540 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140410540
 * Reason: Hex-Rays returned no pseudocode for 0x140410540
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410540: inc     qword ptr [rsp+0]
 * 0000000140410544: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014041054A: jnz     short loc_140410551
 * 000000014041054C: and     dword ptr [rsp+4], 0
 * 0000000140410551: sub     rsp, 8
 * 0000000140410555: push    rbp
 * 0000000140410556: sub     rsp, 158h
 * 000000014041055D: lea     rbp, [rsp+168h+var_E8]
 * 0000000140410565: mov     byte ptr [rbp-55h], 1
 * 0000000140410569: mov     [rbp-50h], rax
 * 000000014041056D: mov     [rbp-48h], rcx
 * 0000000140410571: mov     [rbp-40h], rdx
 * 0000000140410575: mov     [rbp-38h], r8
 * 0000000140410579: mov     [rbp-30h], r9
 * 000000014041057D: mov     [rbp-28h], r10
 * 0000000140410581: mov     [rbp-20h], r11
 * 0000000140410585: test    byte ptr [rbp+0F0h], 1
 * 000000014041058C: jnz     short loc_1404105BD
 * 000000014041058E: lfence
 * 0000000140410591: test    word ptr gs:860h, 1
 * 000000014041059C: jnz     short loc_1404105A6
 * 000000014041059E: lfence
 * 00000001404105A1: jmp     loc_14041080F
 * 00000001404105A6: movzx   eax, word ptr gs:864h
 * 00000001404105AF: mov     ecx, 48h ; 'H'
 * 00000001404105B4: xor     edx, edx
 * 00000001404105B6: wrmsr
 * 00000001404105B8: jmp     loc_14041080F
 * 00000001404105BD: test    cs:KiKvaShadow, 1
 * 00000001404105C4: jnz     short loc_1404105C9
 * 00000001404105C6: swapgs
 * 00000001404105C9: lfence
 * 00000001404105CC: mov     r10, gs:188h
 * 00000001404105D5: mov     rcx, gs:188h
 * 00000001404105DE: mov     rcx, [rcx+220h]
 * 00000001404105E5: mov     rcx, [rcx+9E0h]
 * 00000001404105EC: mov     gs:858h, rcx
 * 00000001404105F5: mov     cx, gs:850h
 * 00000001404105FE: mov     gs:852h, cx
 * 0000000140410607: mov     cx, gs:860h
 * 0000000140410610: mov     gs:854h, cx
 * 0000000140410619: movzx   eax, word ptr gs:866h
 * 0000000140410622: cmp     gs:864h, ax
 * 000000014041062B: jz      short loc_14041063F
 * 000000014041062D: mov     gs:864h, ax
 * 0000000140410636: mov     ecx, 48h ; 'H'
 * 000000014041063B: xor     edx, edx
 * 000000014041063D: wrmsr
 * 000000014041063F: movzx   edx, word ptr gs:860h
 * 0000000140410648: test    edx, 8
 * 000000014041064E: jz      short loc_140410667
 * 0000000140410650: mov     eax, 1
 * 0000000140410655: xor     edx, edx
 * 0000000140410657: mov     ecx, 49h ; 'I'
 * 000000014041065C: wrmsr
 * 000000014041065E: movzx   edx, word ptr gs:860h
 * 0000000140410667: test    edx, 2
 * 000000014041066D: jz      loc_140410798
 * 0000000140410673: call    loc_140410786
 * 0000000140410678: add     rsp, 8
 * 000000014041067C: call    loc_14041078F
 * 0000000140410681: add     rsp, 8
 * 0000000140410685: call    loc_140410678
 * 000000014041068A: add     rsp, 8
 * 000000014041068E: call    loc_140410681
 * 0000000140410693: add     rsp, 8
 * 0000000140410697: call    loc_14041068A
 * 000000014041069C: add     rsp, 8
 * 00000001404106A0: call    loc_140410693
 * 00000001404106A5: add     rsp, 8
 * 00000001404106A9: call    loc_14041069C
 * 00000001404106AE: add     rsp, 8
 * 00000001404106B2: call    loc_1404106A5
 * 00000001404106B7: add     rsp, 8
 * 00000001404106BB: call    loc_1404106AE
 * 00000001404106C0: add     rsp, 8
 * 00000001404106C4: call    loc_1404106B7
 * 00000001404106C9: add     rsp, 8
 * 00000001404106CD: call    loc_1404106C0
 * 00000001404106D2: add     rsp, 8
 * 00000001404106D6: call    loc_1404106C9
 * 00000001404106DB: add     rsp, 8
 * 00000001404106DF: call    loc_1404106D2
 * 00000001404106E4: add     rsp, 8
 * 00000001404106E8: call    loc_1404106DB
 * 00000001404106ED: add     rsp, 8
 * 00000001404106F1: call    loc_1404106E4
 * 00000001404106F6: add     rsp, 8
 * 00000001404106FA: call    loc_1404106ED
 * 00000001404106FF: add     rsp, 8
 * 0000000140410703: call    loc_1404106F6
 * 0000000140410708: add     rsp, 8
 * 000000014041070C: call    loc_1404106FF
 * 0000000140410711: add     rsp, 8
 * 0000000140410715: call    loc_140410708
 * 000000014041071A: add     rsp, 8
 * 000000014041071E: call    loc_140410711
 * 0000000140410723: add     rsp, 8
 * 0000000140410727: call    loc_14041071A
 * 000000014041072C: add     rsp, 8
 * 0000000140410730: call    loc_140410723
 * 0000000140410735: add     rsp, 8
 * 0000000140410739: call    loc_14041072C
 * 000000014041073E: add     rsp, 8
 * 0000000140410742: call    loc_140410735
 * 0000000140410747: add     rsp, 8
 * 000000014041074B: call    loc_14041073E
 * 0000000140410750: add     rsp, 8
 * 0000000140410754: call    loc_140410747
 * 0000000140410759: add     rsp, 8
 * 000000014041075D: call    loc_140410750
 * 0000000140410762: add     rsp, 8
 * 0000000140410766: call    loc_140410759
 * 000000014041076B: add     rsp, 8
 * 000000014041076F: call    loc_140410762
 * 0000000140410774: add     rsp, 8
 * 0000000140410778: call    loc_14041076B
 * 000000014041077D: add     rsp, 8
 * 0000000140410781: call    loc_140410774
 * 0000000140410786: add     rsp, 8
 * 000000014041078A: call    loc_14041077D
 * 000000014041078F: add     rsp, 8
 * 0000000140410793: mov     eax, 0DADAh
 * 0000000140410798: test    edx, 200h
 * 000000014041079E: jz      short loc_1404107A5
 * 00000001404107A0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404107A5: lfence
 * 00000001404107A8: mov     byte ptr gs:856h, 0
 * 00000001404107B1: test    byte ptr [r10+3], 80h
 * 00000001404107B6: jz      short loc_1404107FA
 * 00000001404107B8: mov     ecx, 0C0000102h
 * 00000001404107BD: rdmsr
 * 00000001404107BF: shl     rdx, 20h
 * 00000001404107C3: or      rax, rdx
 * 00000001404107C6: cmp     rax, cs:MmUserProbeAddress
 * 00000001404107CD: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404107D5: cmp     [r10+0F0h], rax
 * 00000001404107DC: jz      short loc_1404107FA
 * 00000001404107DE: mov     rdx, [r10+1F0h]
 * 00000001404107E5: bts     dword ptr [r10+74h], 8
 * 00000001404107EB: dec     word ptr [r10+1E6h]
 * 00000001404107F3: mov     [rdx+80h], rax
 * 00000001404107FA: test    byte ptr [r10+3], 3
 * 00000001404107FF: mov     word ptr [rbp+80h], 0
 * 0000000140410808: jz      short loc_14041080F
 * 000000014041080A: call    KiSaveDebugRegisterState
 * 000000014041080F: cld
 * 0000000140410810: stmxcsr dword ptr [rbp-54h]
 * 0000000140410814: ldmxcsr dword ptr gs:180h
 * 000000014041081D: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140410821: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140410825: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140410829: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014041082D: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140410831: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140410835: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014041083C: jz      short loc_14041084A
 * 000000014041083E: test    byte ptr [rbp+0F0h], 1
 * 0000000140410845: jz      short loc_14041084A
 * 0000000140410847: stac
 * 000000014041084A: test    dword ptr [rbp+0F8h], 200h
 * 0000000140410854: jz      short loc_140410857
 * 0000000140410856: sti
 * 0000000140410857: mov     ecx, 80000003h
 * 000000014041085C: mov     edx, 1
 * 0000000140410861: mov     r9, [rbp-50h]
 * 0000000140410865: mov     r8, [rbp+0E8h]
 * 000000014041086C: call    KiExceptionDispatch
 * 0000000140410871: nop
 * 0000000140410872: retn
 */
