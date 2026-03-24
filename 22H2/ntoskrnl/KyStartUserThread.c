/*
 * XREFs of KyStartUserThread @ 0x140406590
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140406590 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140406870 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140406590
 * Reason: Hex-Rays returned no pseudocode for 0x140406590
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140406590: sub     rsp, 8
 * 0000000140406594: push    rbp
 * 0000000140406595: sub     rsp, 158h
 * 000000014040659C: lea     rbp, [rsp+80h]
 * 00000001404065A4: mov     [rbp+0E8h+var_13D], 1
 * 00000001404065A8: mov     [rbp+0E8h+var_138], rax
 * 00000001404065AC: mov     [rbp+0E8h+var_130], rcx
 * 00000001404065B0: mov     [rbp+0E8h+var_128], rdx
 * 00000001404065B4: mov     [rbp+0E8h+var_120], r8
 * 00000001404065B8: mov     [rbp+0E8h+var_118], r9
 * 00000001404065BC: mov     [rbp+0E8h+var_110], r10
 * 00000001404065C0: mov     [rbp+0E8h+var_108], r11
 * 00000001404065C4: test    [rbp+0E8h+arg_0], 1
 * 00000001404065CB: jnz     short loc_1404065FC
 * 00000001404065CD: lfence
 * 00000001404065D0: test    word ptr gs:860h, 1
 * 00000001404065DB: jnz     short loc_1404065E5
 * 00000001404065DD: lfence
 * 00000001404065E0: jmp     loc_140406805
 * 00000001404065E5: movzx   eax, word ptr gs:864h
 * 00000001404065EE: mov     ecx, 48h ; 'H'
 * 00000001404065F3: xor     edx, edx
 * 00000001404065F5: wrmsr
 * 00000001404065F7: jmp     loc_140406805
 * 00000001404065FC: test    cs:KiKvaShadow, 1
 * 0000000140406603: jnz     short loc_140406608
 * 0000000140406605: swapgs
 * 0000000140406608: lfence
 * 000000014040660B: mov     r10, gs:188h
 * 0000000140406614: mov     rcx, gs:188h
 * 000000014040661D: mov     rcx, [rcx+220h]
 * 0000000140406624: mov     rcx, [rcx+9E0h]
 * 000000014040662B: mov     gs:858h, rcx
 * 0000000140406634: mov     cx, gs:850h
 * 000000014040663D: mov     gs:852h, cx
 * 0000000140406646: mov     cx, gs:860h
 * 000000014040664F: mov     gs:854h, cx
 * 0000000140406658: movzx   eax, word ptr gs:866h
 * 0000000140406661: cmp     gs:864h, ax
 * 000000014040666A: jz      short loc_14040667E
 * 000000014040666C: mov     gs:864h, ax
 * 0000000140406675: mov     ecx, 48h ; 'H'
 * 000000014040667A: xor     edx, edx
 * 000000014040667C: wrmsr
 * 000000014040667E: movzx   edx, word ptr gs:860h
 * 0000000140406687: test    edx, 8
 * 000000014040668D: jz      short loc_1404066A6
 * 000000014040668F: mov     eax, 1
 * 0000000140406694: xor     edx, edx
 * 0000000140406696: mov     ecx, 49h ; 'I'
 * 000000014040669B: wrmsr
 * 000000014040669D: movzx   edx, word ptr gs:860h
 * 00000001404066A6: test    edx, 2
 * 00000001404066AC: jz      loc_1404067D7
 * 00000001404066B2: call    loc_1404067C5
 * 00000001404066B7: add     rsp, 8
 * 00000001404066BB: call    loc_1404067CE
 * 00000001404066C0: add     rsp, 8
 * 00000001404066C4: call    loc_1404066B7
 * 00000001404066C9: add     rsp, 8
 * 00000001404066CD: call    loc_1404066C0
 * 00000001404066D2: add     rsp, 8
 * 00000001404066D6: call    loc_1404066C9
 * 00000001404066DB: add     rsp, 8
 * 00000001404066DF: call    loc_1404066D2
 * 00000001404066E4: add     rsp, 8
 * 00000001404066E8: call    loc_1404066DB
 * 00000001404066ED: add     rsp, 8
 * 00000001404066F1: call    loc_1404066E4
 * 00000001404066F6: add     rsp, 8
 * 00000001404066FA: call    loc_1404066ED
 * 00000001404066FF: add     rsp, 8
 * 0000000140406703: call    loc_1404066F6
 * 0000000140406708: add     rsp, 8
 * 000000014040670C: call    loc_1404066FF
 * 0000000140406711: add     rsp, 8
 * 0000000140406715: call    loc_140406708
 * 000000014040671A: add     rsp, 8
 * 000000014040671E: call    loc_140406711
 * 0000000140406723: add     rsp, 8
 * 0000000140406727: call    loc_14040671A
 * 000000014040672C: add     rsp, 8
 * 0000000140406730: call    loc_140406723
 * 0000000140406735: add     rsp, 8
 * 0000000140406739: call    loc_14040672C
 * 000000014040673E: add     rsp, 8
 * 0000000140406742: call    loc_140406735
 * 0000000140406747: add     rsp, 8
 * 000000014040674B: call    loc_14040673E
 * 0000000140406750: add     rsp, 8
 * 0000000140406754: call    loc_140406747
 * 0000000140406759: add     rsp, 8
 * 000000014040675D: call    loc_140406750
 * 0000000140406762: add     rsp, 8
 * 0000000140406766: call    loc_140406759
 * 000000014040676B: add     rsp, 8
 * 000000014040676F: call    loc_140406762
 * 0000000140406774: add     rsp, 8
 * 0000000140406778: call    loc_14040676B
 * 000000014040677D: add     rsp, 8
 * 0000000140406781: call    loc_140406774
 * 0000000140406786: add     rsp, 8
 * 000000014040678A: call    loc_14040677D
 * 000000014040678F: add     rsp, 8
 * 0000000140406793: call    loc_140406786
 * 0000000140406798: add     rsp, 8
 * 000000014040679C: call    loc_14040678F
 * 00000001404067A1: add     rsp, 8
 * 00000001404067A5: call    loc_140406798
 * 00000001404067AA: add     rsp, 8
 * 00000001404067AE: call    loc_1404067A1
 * 00000001404067B3: add     rsp, 8
 * 00000001404067B7: call    loc_1404067AA
 * 00000001404067BC: add     rsp, 8
 * 00000001404067C0: call    loc_1404067B3
 * 00000001404067C5: add     rsp, 8
 * 00000001404067C9: call    loc_1404067BC
 * 00000001404067CE: add     rsp, 8
 * 00000001404067D2: mov     eax, 0DADAh
 * 00000001404067D7: test    edx, 200h
 * 00000001404067DD: jz      short loc_1404067E4
 * 00000001404067DF: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404067E4: lfence
 * 00000001404067E7: mov     byte ptr gs:856h, 0
 * 00000001404067F0: test    byte ptr [r10+3], 3
 * 00000001404067F5: mov     [rbp+0E8h+var_68], 0
 * 00000001404067FE: jz      short loc_140406805
 * 0000000140406800: call    KiSaveDebugRegisterState
 * 0000000140406805: cld
 * 0000000140406806: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040680A: ldmxcsr dword ptr gs:180h
 * 0000000140406813: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140406817: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040681B: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040681F: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140406823: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140406827: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040682B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140406832: jz      short loc_140406840
 * 0000000140406834: test    [rbp+0E8h+arg_0], 1
 * 000000014040683B: jz      short loc_140406840
 * 000000014040683D: stac
 * 0000000140406840: test    [rbp+0E8h+arg_8], 200h
 * 000000014040684A: jz      short loc_14040684D
 * 000000014040684C: sti
 * 000000014040684D: call    KxStartUserThread
 * 0000000140406852: nop     word ptr [rax+rax+00000000h]
 * 0000000140406860: nop
 * 0000000140406861: retn
 */
