/*
 * XREFs of KiVirtualizationException @ 0x14040F200
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140A14B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KzRaiseIrql @ 0x14021FA60 (KzRaiseIrql.c)
 *     KzLowerIrql @ 0x1402BC3E0 (KzLowerIrql.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x14040F200 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x140524170 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x14040F200
 * Reason: Hex-Rays returned no pseudocode for 0x14040F200
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040F200: sub     rsp, 8
 * 000000014040F204: push    rbp
 * 000000014040F205: sub     rsp, 158h
 * 000000014040F20C: lea     rbp, [rsp+80h]
 * 000000014040F214: mov     [rbp+0E8h+var_13D], 1
 * 000000014040F218: mov     [rbp+0E8h+var_138], rax
 * 000000014040F21C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040F220: mov     [rbp+0E8h+var_128], rdx
 * 000000014040F224: mov     [rbp+0E8h+var_120], r8
 * 000000014040F228: mov     [rbp+0E8h+var_118], r9
 * 000000014040F22C: mov     [rbp+0E8h+var_110], r10
 * 000000014040F230: mov     [rbp+0E8h+var_108], r11
 * 000000014040F234: test    [rbp+0E8h+arg_0], 1
 * 000000014040F23B: jnz     short loc_14040F26C
 * 000000014040F23D: lfence
 * 000000014040F240: test    word ptr gs:860h, 1
 * 000000014040F24B: jnz     short loc_14040F255
 * 000000014040F24D: lfence
 * 000000014040F250: jmp     loc_14040F475
 * 000000014040F255: movzx   eax, word ptr gs:864h
 * 000000014040F25E: mov     ecx, 48h ; 'H'
 * 000000014040F263: xor     edx, edx
 * 000000014040F265: wrmsr
 * 000000014040F267: jmp     loc_14040F475
 * 000000014040F26C: test    cs:KiKvaShadow, 1
 * 000000014040F273: jnz     short loc_14040F278
 * 000000014040F275: swapgs
 * 000000014040F278: lfence
 * 000000014040F27B: mov     r10, gs:188h
 * 000000014040F284: mov     rcx, gs:188h
 * 000000014040F28D: mov     rcx, [rcx+220h]
 * 000000014040F294: mov     rcx, [rcx+9E0h]
 * 000000014040F29B: mov     gs:858h, rcx
 * 000000014040F2A4: mov     cx, gs:850h
 * 000000014040F2AD: mov     gs:852h, cx
 * 000000014040F2B6: mov     cx, gs:860h
 * 000000014040F2BF: mov     gs:854h, cx
 * 000000014040F2C8: movzx   eax, word ptr gs:866h
 * 000000014040F2D1: cmp     gs:864h, ax
 * 000000014040F2DA: jz      short loc_14040F2EE
 * 000000014040F2DC: mov     gs:864h, ax
 * 000000014040F2E5: mov     ecx, 48h ; 'H'
 * 000000014040F2EA: xor     edx, edx
 * 000000014040F2EC: wrmsr
 * 000000014040F2EE: movzx   edx, word ptr gs:860h
 * 000000014040F2F7: test    edx, 8
 * 000000014040F2FD: jz      short loc_14040F316
 * 000000014040F2FF: mov     eax, 1
 * 000000014040F304: xor     edx, edx
 * 000000014040F306: mov     ecx, 49h ; 'I'
 * 000000014040F30B: wrmsr
 * 000000014040F30D: movzx   edx, word ptr gs:860h
 * 000000014040F316: test    edx, 2
 * 000000014040F31C: jz      loc_14040F447
 * 000000014040F322: call    loc_14040F435
 * 000000014040F327: add     rsp, 8
 * 000000014040F32B: call    loc_14040F43E
 * 000000014040F330: add     rsp, 8
 * 000000014040F334: call    loc_14040F327
 * 000000014040F339: add     rsp, 8
 * 000000014040F33D: call    loc_14040F330
 * 000000014040F342: add     rsp, 8
 * 000000014040F346: call    loc_14040F339
 * 000000014040F34B: add     rsp, 8
 * 000000014040F34F: call    loc_14040F342
 * 000000014040F354: add     rsp, 8
 * 000000014040F358: call    loc_14040F34B
 * 000000014040F35D: add     rsp, 8
 * 000000014040F361: call    loc_14040F354
 * 000000014040F366: add     rsp, 8
 * 000000014040F36A: call    loc_14040F35D
 * 000000014040F36F: add     rsp, 8
 * 000000014040F373: call    loc_14040F366
 * 000000014040F378: add     rsp, 8
 * 000000014040F37C: call    loc_14040F36F
 * 000000014040F381: add     rsp, 8
 * 000000014040F385: call    loc_14040F378
 * 000000014040F38A: add     rsp, 8
 * 000000014040F38E: call    loc_14040F381
 * 000000014040F393: add     rsp, 8
 * 000000014040F397: call    loc_14040F38A
 * 000000014040F39C: add     rsp, 8
 * 000000014040F3A0: call    loc_14040F393
 * 000000014040F3A5: add     rsp, 8
 * 000000014040F3A9: call    loc_14040F39C
 * 000000014040F3AE: add     rsp, 8
 * 000000014040F3B2: call    loc_14040F3A5
 * 000000014040F3B7: add     rsp, 8
 * 000000014040F3BB: call    loc_14040F3AE
 * 000000014040F3C0: add     rsp, 8
 * 000000014040F3C4: call    loc_14040F3B7
 * 000000014040F3C9: add     rsp, 8
 * 000000014040F3CD: call    loc_14040F3C0
 * 000000014040F3D2: add     rsp, 8
 * 000000014040F3D6: call    loc_14040F3C9
 * 000000014040F3DB: add     rsp, 8
 * 000000014040F3DF: call    loc_14040F3D2
 * 000000014040F3E4: add     rsp, 8
 * 000000014040F3E8: call    loc_14040F3DB
 * 000000014040F3ED: add     rsp, 8
 * 000000014040F3F1: call    loc_14040F3E4
 * 000000014040F3F6: add     rsp, 8
 * 000000014040F3FA: call    loc_14040F3ED
 * 000000014040F3FF: add     rsp, 8
 * 000000014040F403: call    loc_14040F3F6
 * 000000014040F408: add     rsp, 8
 * 000000014040F40C: call    loc_14040F3FF
 * 000000014040F411: add     rsp, 8
 * 000000014040F415: call    loc_14040F408
 * 000000014040F41A: add     rsp, 8
 * 000000014040F41E: call    loc_14040F411
 * 000000014040F423: add     rsp, 8
 * 000000014040F427: call    loc_14040F41A
 * 000000014040F42C: add     rsp, 8
 * 000000014040F430: call    loc_14040F423
 * 000000014040F435: add     rsp, 8
 * 000000014040F439: call    loc_14040F42C
 * 000000014040F43E: add     rsp, 8
 * 000000014040F442: mov     eax, 0DADAh
 * 000000014040F447: test    edx, 200h
 * 000000014040F44D: jz      short loc_14040F454
 * 000000014040F44F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040F454: lfence
 * 000000014040F457: mov     byte ptr gs:856h, 0
 * 000000014040F460: test    byte ptr [r10+3], 3
 * 000000014040F465: mov     [rbp+0E8h+var_68], 0
 * 000000014040F46E: jz      short loc_14040F475
 * 000000014040F470: call    KiSaveDebugRegisterState
 * 000000014040F475: cld
 * 000000014040F476: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040F47A: ldmxcsr dword ptr gs:180h
 * 000000014040F483: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040F487: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040F48B: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040F48F: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040F493: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040F497: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040F49B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040F4A2: jz      short loc_14040F4B0
 * 000000014040F4A4: test    [rbp+0E8h+arg_0], 1
 * 000000014040F4AB: jz      short loc_14040F4B0
 * 000000014040F4AD: stac
 * 000000014040F4B0: mov     r9, gs:8508h
 * 000000014040F4B9: test    r9, r9
 * 000000014040F4BC: jz      loc_14040F81F
 * 000000014040F4C2: cmp     dword ptr [r9+44h], 1
 * 000000014040F4C7: jnz     loc_14040F81F
 * 000000014040F4CD: test    [rbp+0E8h+arg_8], 200h
 * 000000014040F4D7: jz      loc_14040F81F
 * 000000014040F4DD: mov     rax, cr8
 * 000000014040F4E1: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 000000014040F4E4: cmp     al, 2
 * 000000014040F4E6: jge     loc_14040F81F
 * 000000014040F4EC: mov     ecx, 2; NewIrql
 * 000000014040F4F1: call    KzRaiseIrql
 * 000000014040F4F6: sti
 * 000000014040F4F7: mov     r9, gs:8508h
 * 000000014040F500: mov     rcx, [r9+48h]
 * 000000014040F504: mov     dword ptr [r9+44h], 0
 * 000000014040F50C: call    KiEpfHandleNotification
 * 000000014040F511: cli
 * 000000014040F512: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 000000014040F515: call    KzLowerIrql
 * 000000014040F51A: test    [rbp+0E8h+arg_0], 1
 * 000000014040F521: jz      loc_14040F7D4
 * 000000014040F527: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040F52E: jz      short loc_14040F533
 * 000000014040F530: stac
 * 000000014040F533: mov     rcx, gs:188h
 * 000000014040F53C: test    byte ptr [rcx+0C2h], 3
 * 000000014040F543: jz      short loc_14040F560
 * 000000014040F545: mov     ecx, 1
 * 000000014040F54A: mov     cr8, rcx
 * 000000014040F54E: sti
 * 000000014040F54F: call    KiInitiateUserApc
 * 000000014040F554: cli
 * 000000014040F555: mov     ecx, 0
 * 000000014040F55A: mov     cr8, rcx
 * 000000014040F55E: jmp     short loc_14040F533
 * 000000014040F560: test    byte ptr gs:86Ch, 2
 * 000000014040F569: jz      short loc_14040F572
 * 000000014040F56B: xor     ecx, ecx
 * 000000014040F56D: call    KiUpdateStibpPairing
 * 000000014040F572: mov     rcx, gs:188h
 * 000000014040F57B: test    dword ptr [rcx], 8000000h
 * 000000014040F581: jz      short loc_14040F588
 * 000000014040F583: call    KiRestoreSetContextState
 * 000000014040F588: mov     rcx, gs:188h
 * 000000014040F591: test    dword ptr [rcx], 40010000h
 * 000000014040F597: jz      short loc_14040F5BE
 * 000000014040F599: test    byte ptr [rcx+2], 1
 * 000000014040F59D: jz      short loc_14040F5AD
 * 000000014040F59F: call    KiCopyCounters
 * 000000014040F5A4: mov     rcx, gs:188h
 * 000000014040F5AD: test    byte ptr [rcx+3], 40h
 * 000000014040F5B1: jz      short loc_14040F5BE
 * 000000014040F5B3: lea     rsp, [rbp-80h]
 * 000000014040F5B7: mov     cl, 1
 * 000000014040F5B9: call    KiUmsExit
 * 000000014040F5BE: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040F5C2: cmp     [rbp+0E8h+var_68], 0
 * 000000014040F5CA: jz      short loc_14040F5D1
 * 000000014040F5CC: call    KiRestoreDebugRegisterState
 * 000000014040F5D1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040F5D5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040F5D9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040F5DD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040F5E1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040F5E5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040F5E9: mov     r11, [rbp+0E8h+var_108]
 * 000000014040F5ED: mov     r10, [rbp+0E8h+var_110]
 * 000000014040F5F1: mov     r9, [rbp+0E8h+var_118]
 * 000000014040F5F5: mov     r8, [rbp+0E8h+var_120]
 * 000000014040F5F9: mov     byte ptr gs:856h, 0
 * 000000014040F602: movzx   eax, word ptr gs:86Ah
 * 000000014040F60B: cmp     gs:864h, ax
 * 000000014040F614: jz      short loc_14040F628
 * 000000014040F616: mov     gs:864h, ax
 * 000000014040F61F: mov     ecx, 48h ; 'H'
 * 000000014040F624: xor     edx, edx
 * 000000014040F626: wrmsr
 * 000000014040F628: btr     word ptr gs:860h, 2
 * 000000014040F633: jnb     short loc_14040F643
 * 000000014040F635: mov     eax, 1
 * 000000014040F63A: xor     edx, edx
 * 000000014040F63C: mov     ecx, 49h ; 'I'
 * 000000014040F641: wrmsr
 * 000000014040F643: btr     word ptr gs:860h, 5
 * 000000014040F64E: jnb     loc_14040F779
 * 000000014040F654: call    loc_14040F767
 * 000000014040F659: add     rsp, 8
 * 000000014040F65D: call    loc_14040F770
 * 000000014040F662: add     rsp, 8
 * 000000014040F666: call    loc_14040F659
 * 000000014040F66B: add     rsp, 8
 * 000000014040F66F: call    loc_14040F662
 * 000000014040F674: add     rsp, 8
 * 000000014040F678: call    loc_14040F66B
 * 000000014040F67D: add     rsp, 8
 * 000000014040F681: call    loc_14040F674
 * 000000014040F686: add     rsp, 8
 * 000000014040F68A: call    loc_14040F67D
 * 000000014040F68F: add     rsp, 8
 * 000000014040F693: call    loc_14040F686
 * 000000014040F698: add     rsp, 8
 * 000000014040F69C: call    loc_14040F68F
 * 000000014040F6A1: add     rsp, 8
 * 000000014040F6A5: call    loc_14040F698
 * 000000014040F6AA: add     rsp, 8
 * 000000014040F6AE: call    loc_14040F6A1
 * 000000014040F6B3: add     rsp, 8
 * 000000014040F6B7: call    loc_14040F6AA
 * 000000014040F6BC: add     rsp, 8
 * 000000014040F6C0: call    loc_14040F6B3
 * 000000014040F6C5: add     rsp, 8
 * 000000014040F6C9: call    loc_14040F6BC
 * 000000014040F6CE: add     rsp, 8
 * 000000014040F6D2: call    loc_14040F6C5
 * 000000014040F6D7: add     rsp, 8
 * 000000014040F6DB: call    loc_14040F6CE
 * 000000014040F6E0: add     rsp, 8
 * 000000014040F6E4: call    loc_14040F6D7
 * 000000014040F6E9: add     rsp, 8
 * 000000014040F6ED: call    loc_14040F6E0
 * 000000014040F6F2: add     rsp, 8
 * 000000014040F6F6: call    loc_14040F6E9
 * 000000014040F6FB: add     rsp, 8
 * 000000014040F6FF: call    loc_14040F6F2
 * 000000014040F704: add     rsp, 8
 * 000000014040F708: call    loc_14040F6FB
 * 000000014040F70D: add     rsp, 8
 * 000000014040F711: call    loc_14040F704
 * 000000014040F716: add     rsp, 8
 * 000000014040F71A: call    loc_14040F70D
 * 000000014040F71F: add     rsp, 8
 * 000000014040F723: call    loc_14040F716
 * 000000014040F728: add     rsp, 8
 * 000000014040F72C: call    loc_14040F71F
 * 000000014040F731: add     rsp, 8
 * 000000014040F735: call    loc_14040F728
 * 000000014040F73A: add     rsp, 8
 * 000000014040F73E: call    loc_14040F731
 * 000000014040F743: add     rsp, 8
 * 000000014040F747: call    loc_14040F73A
 * 000000014040F74C: add     rsp, 8
 * 000000014040F750: call    loc_14040F743
 * 000000014040F755: add     rsp, 8
 * 000000014040F759: call    loc_14040F74C
 * 000000014040F75E: add     rsp, 8
 * 000000014040F762: call    loc_14040F755
 * 000000014040F767: add     rsp, 8
 * 000000014040F76B: call    loc_14040F75E
 * 000000014040F770: add     rsp, 8
 * 000000014040F774: mov     eax, 0DADAh
 * 000000014040F779: test    word ptr gs:860h, 80h
 * 000000014040F784: jz      short loc_14040F792
 * 000000014040F786: xor     eax, eax
 * 000000014040F788: xor     edx, edx
 * 000000014040F78A: mov     ecx, 1
 * 000000014040F78F: div     rcx
 * 000000014040F792: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040F796: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040F79A: mov     rax, [rbp+0E8h+var_138]
 * 000000014040F79E: mov     rsp, rbp
 * 000000014040F7A1: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040F7A8: add     rsp, 0E8h
 * 000000014040F7AF: test    cs:KiKvaShadow, 1
 * 000000014040F7B6: jz      short loc_14040F7BD
 * 000000014040F7B8: jmp     KiKernelExit
 * 000000014040F7BD: test    word ptr gs:860h, 100h
 * 000000014040F7C8: jz      short loc_14040F7CF
 * 000000014040F7CA: verw    [rsp+arg_18]
 * 000000014040F7CF: swapgs
 * 000000014040F7D2: iretq
 * 000000014040F7D4: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040F7D8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040F7DC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040F7E0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040F7E4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040F7E8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040F7EC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040F7F0: mov     r11, [rbp+0E8h+var_108]
 * 000000014040F7F4: mov     r10, [rbp+0E8h+var_110]
 * 000000014040F7F8: mov     r9, [rbp+0E8h+var_118]
 * 000000014040F7FC: mov     r8, [rbp+0E8h+var_120]
 * 000000014040F800: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040F804: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040F808: mov     rax, [rbp+0E8h+var_138]
 * 000000014040F80C: mov     rsp, rbp
 * 000000014040F80F: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040F816: add     rsp, 0E8h
 * 000000014040F81D: iretq
 * 000000014040F81F: mov     r10, [rbp+0E8h]
 * 000000014040F826: mov     r9, gs:8508h
 * 000000014040F82F: movzx   r8, [rbp+0E8h+NewIrql]
 * 000000014040F834: mov     ecx, 7Fh
 * 000000014040F839: mov     edx, 20h ; ' '
 * 000000014040F83E: call    KiBugCheckDispatch
 */
