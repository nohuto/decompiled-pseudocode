/*
 * XREFs of KiInterruptDispatch @ 0x1403FF5C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1403FF210 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1403FF5C0 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1403FF5C0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FF5C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FF5C0: mov     rdx, rsp
 * 00000001403FF5C3: mov     rcx, gs:8758h
 * 00000001403FF5CC: lea     rax, [rcx-6000h]
 * 00000001403FF5D3: cmp     rax, rsp
 * 00000001403FF5D6: ja      short loc_1403FF5DD
 * 00000001403FF5D8: cmp     rsp, rcx
 * 00000001403FF5DB: jb      short loc_1403FF5E9
 * 00000001403FF5DD: cmp     cs:KiBugCheckActive, 0
 * 00000001403FF5E4: jnz     short loc_1403FF5E9
 * 00000001403FF5E6: mov     rsp, rcx
 * 00000001403FF5E9: sub     rsp, 20h
 * 00000001403FF5ED: mov     [rsp+20h+var_10], rdx
 * 00000001403FF5F2: call    KiInterruptSubDispatch
 * 00000001403FF5F7: mov     rsp, [rsp+20h+var_10]
 * 00000001403FF5FC: mov     rcx, rsi
 * 00000001403FF5FF: call    HalPerformEndOfInterrupt
 * 00000001403FF604: mov     rcx, gs:20h
 * 00000001403FF60D: cmp     byte ptr [rcx+20h], 1
 * 00000001403FF611: ja      short loc_1403FF68D
 * 00000001403FF613: rdtsc
 * 00000001403FF615: shl     rdx, 20h
 * 00000001403FF619: or      rax, rdx
 * 00000001403FF61C: sub     rax, [rcx+7EC0h]
 * 00000001403FF623: add     [rcx+7F38h], rax
 * 00000001403FF62A: add     [rcx+7EC0h], rax
 * 00000001403FF631: mov     r8, rax
 * 00000001403FF634: mov     rax, [rcx+8]
 * 00000001403FF638: test    byte ptr [rax+2], 72h
 * 00000001403FF63C: jz      short loc_1403FF651
 * 00000001403FF63E: xor     edx, edx
 * 00000001403FF640: call    KiBeginThreadAccountingPeriod
 * 00000001403FF645: mov     rcx, gs:20h
 * 00000001403FF64E: inc     byte ptr [rcx+20h]
 * 00000001403FF651: mov     dl, [rcx+6]
 * 00000001403FF654: and     byte ptr [rcx+6], 0
 * 00000001403FF658: cmp     byte ptr [rcx+7], 0
 * 00000001403FF65C: jnz     short loc_1403FF68D
 * 00000001403FF65E: test    dl, dl
 * 00000001403FF660: jz      short loc_1403FF68D
 * 00000001403FF662: cmp     byte ptr [rbp-57h], 2
 * 00000001403FF666: jnb     short loc_1403FF673
 * 00000001403FF668: and     byte ptr [rcx+20h], 0
 * 00000001403FF66C: call    KiDpcInterruptBypass
 * 00000001403FF671: jmp     short loc_1403FF690
 * 00000001403FF673: mov     ecx, 2
 * 00000001403FF678: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001403FF67F: nop     dword ptr [rax+rax+00h]
 * 00000001403FF684: mov     rcx, gs:20h
 * 00000001403FF68D: dec     byte ptr [rcx+20h]
 * 00000001403FF690: movzx   ecx, byte ptr [rbp-57h]
 * 00000001403FF694: cmp     cs:KiIrqlFlags, 0
 * 00000001403FF69B: jz      short loc_1403FF6A4
 * 00000001403FF69D: call    KzSetIrqlUnsafe
 * 00000001403FF6A2: jmp     short loc_1403FF6A8
 * 00000001403FF6A4: mov     cr8, rcx
 * 00000001403FF6A8: mov     rsi, [rbp+0D0h]
 * 00000001403FF6AF: test    byte ptr [rbp+0F0h], 1
 * 00000001403FF6B6: jz      loc_1403FF958
 * 00000001403FF6BC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403FF6C3: jz      short loc_1403FF6C8
 * 00000001403FF6C5: stac
 * 00000001403FF6C8: mov     rcx, gs:188h
 * 00000001403FF6D1: test    byte ptr [rcx+0C2h], 3
 * 00000001403FF6D8: jz      short loc_1403FF6F5
 * 00000001403FF6DA: mov     ecx, 1
 * 00000001403FF6DF: mov     cr8, rcx
 * 00000001403FF6E3: sti
 * 00000001403FF6E4: call    KiInitiateUserApc
 * 00000001403FF6E9: cli
 * 00000001403FF6EA: mov     ecx, 0
 * 00000001403FF6EF: mov     cr8, rcx
 * 00000001403FF6F3: jmp     short loc_1403FF6C8
 * 00000001403FF6F5: test    byte ptr gs:86Ch, 2
 * 00000001403FF6FE: jz      short loc_1403FF707
 * 00000001403FF700: xor     ecx, ecx
 * 00000001403FF702: call    KiUpdateStibpPairing
 * 00000001403FF707: mov     rcx, gs:188h
 * 00000001403FF710: test    dword ptr [rcx], 8000000h
 * 00000001403FF716: jz      short loc_1403FF71D
 * 00000001403FF718: call    KiRestoreSetContextState
 * 00000001403FF71D: mov     rcx, gs:188h
 * 00000001403FF726: test    dword ptr [rcx], 40010000h
 * 00000001403FF72C: jz      short loc_1403FF742
 * 00000001403FF72E: test    byte ptr [rcx+2], 1
 * 00000001403FF732: jz      short loc_1403FF742
 * 00000001403FF734: call    KiCopyCounters
 * 00000001403FF739: mov     rcx, gs:188h
 * 00000001403FF742: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FF746: cmp     word ptr [rbp+80h], 0
 * 00000001403FF74E: jz      short loc_1403FF755
 * 00000001403FF750: call    KiRestoreDebugRegisterState
 * 00000001403FF755: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FF759: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FF75D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FF761: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FF765: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FF769: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FF76D: mov     r11, [rbp-20h]
 * 00000001403FF771: mov     r10, [rbp-28h]
 * 00000001403FF775: mov     r9, [rbp-30h]
 * 00000001403FF779: mov     r8, [rbp-38h]
 * 00000001403FF77D: mov     byte ptr gs:856h, 0
 * 00000001403FF786: movzx   eax, word ptr gs:86Ah
 * 00000001403FF78F: cmp     gs:864h, ax
 * 00000001403FF798: jz      short loc_1403FF7AC
 * 00000001403FF79A: mov     gs:864h, ax
 * 00000001403FF7A3: mov     ecx, 48h ; 'H'
 * 00000001403FF7A8: xor     edx, edx
 * 00000001403FF7AA: wrmsr
 * 00000001403FF7AC: btr     word ptr gs:860h, 2
 * 00000001403FF7B7: jnb     short loc_1403FF7C7
 * 00000001403FF7B9: mov     eax, 1
 * 00000001403FF7BE: xor     edx, edx
 * 00000001403FF7C0: mov     ecx, 49h ; 'I'
 * 00000001403FF7C5: wrmsr
 * 00000001403FF7C7: btr     word ptr gs:860h, 5
 * 00000001403FF7D2: jnb     loc_1403FF8FD
 * 00000001403FF7D8: call    loc_1403FF8EB
 * 00000001403FF7DD: add     rsp, 8
 * 00000001403FF7E1: call    loc_1403FF8F4
 * 00000001403FF7E6: add     rsp, 8
 * 00000001403FF7EA: call    loc_1403FF7DD
 * 00000001403FF7EF: add     rsp, 8
 * 00000001403FF7F3: call    loc_1403FF7E6
 * 00000001403FF7F8: add     rsp, 8
 * 00000001403FF7FC: call    loc_1403FF7EF
 * 00000001403FF801: add     rsp, 8
 * 00000001403FF805: call    loc_1403FF7F8
 * 00000001403FF80A: add     rsp, 8
 * 00000001403FF80E: call    loc_1403FF801
 * 00000001403FF813: add     rsp, 8
 * 00000001403FF817: call    loc_1403FF80A
 * 00000001403FF81C: add     rsp, 8
 * 00000001403FF820: call    loc_1403FF813
 * 00000001403FF825: add     rsp, 8
 * 00000001403FF829: call    loc_1403FF81C
 * 00000001403FF82E: add     rsp, 8
 * 00000001403FF832: call    loc_1403FF825
 * 00000001403FF837: add     rsp, 8
 * 00000001403FF83B: call    loc_1403FF82E
 * 00000001403FF840: add     rsp, 8
 * 00000001403FF844: call    loc_1403FF837
 * 00000001403FF849: add     rsp, 8
 * 00000001403FF84D: call    loc_1403FF840
 * 00000001403FF852: add     rsp, 8
 * 00000001403FF856: call    loc_1403FF849
 * 00000001403FF85B: add     rsp, 8
 * 00000001403FF85F: call    loc_1403FF852
 * 00000001403FF864: add     rsp, 8
 * 00000001403FF868: call    loc_1403FF85B
 * 00000001403FF86D: add     rsp, 8
 * 00000001403FF871: call    loc_1403FF864
 * 00000001403FF876: add     rsp, 8
 * 00000001403FF87A: call    loc_1403FF86D
 * 00000001403FF87F: add     rsp, 8
 * 00000001403FF883: call    loc_1403FF876
 * 00000001403FF888: add     rsp, 8
 * 00000001403FF88C: call    loc_1403FF87F
 * 00000001403FF891: add     rsp, 8
 * 00000001403FF895: call    loc_1403FF888
 * 00000001403FF89A: add     rsp, 8
 * 00000001403FF89E: call    loc_1403FF891
 * 00000001403FF8A3: add     rsp, 8
 * 00000001403FF8A7: call    loc_1403FF89A
 * 00000001403FF8AC: add     rsp, 8
 * 00000001403FF8B0: call    loc_1403FF8A3
 * 00000001403FF8B5: add     rsp, 8
 * 00000001403FF8B9: call    loc_1403FF8AC
 * 00000001403FF8BE: add     rsp, 8
 * 00000001403FF8C2: call    loc_1403FF8B5
 * 00000001403FF8C7: add     rsp, 8
 * 00000001403FF8CB: call    loc_1403FF8BE
 * 00000001403FF8D0: add     rsp, 8
 * 00000001403FF8D4: call    loc_1403FF8C7
 * 00000001403FF8D9: add     rsp, 8
 * 00000001403FF8DD: call    loc_1403FF8D0
 * 00000001403FF8E2: add     rsp, 8
 * 00000001403FF8E6: call    loc_1403FF8D9
 * 00000001403FF8EB: add     rsp, 8
 * 00000001403FF8EF: call    loc_1403FF8E2
 * 00000001403FF8F4: add     rsp, 8
 * 00000001403FF8F8: mov     eax, 0DADAh
 * 00000001403FF8FD: test    word ptr gs:860h, 80h
 * 00000001403FF908: jz      short loc_1403FF916
 * 00000001403FF90A: xor     eax, eax
 * 00000001403FF90C: xor     edx, edx
 * 00000001403FF90E: mov     ecx, 1
 * 00000001403FF913: div     rcx
 * 00000001403FF916: mov     rdx, [rbp-40h]
 * 00000001403FF91A: mov     rcx, [rbp-48h]
 * 00000001403FF91E: mov     rax, [rbp-50h]
 * 00000001403FF922: mov     rsp, rbp
 * 00000001403FF925: mov     rbp, [rbp+0D8h]
 * 00000001403FF92C: add     rsp, 0E8h
 * 00000001403FF933: test    cs:KiKvaShadow, 1
 * 00000001403FF93A: jz      short loc_1403FF941
 * 00000001403FF93C: jmp     KiKernelExit
 * 00000001403FF941: test    word ptr gs:860h, 100h
 * 00000001403FF94C: jz      short loc_1403FF953
 * 00000001403FF94E: verw    [rsp-1C8h+arg_1E0]
 * 00000001403FF953: swapgs
 * 00000001403FF956: iretq
 * 00000001403FF958: ldmxcsr dword ptr [rbp-54h]
 * 00000001403FF95C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001403FF960: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001403FF964: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001403FF968: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001403FF96C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001403FF970: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001403FF974: mov     r11, [rbp-20h]
 * 00000001403FF978: mov     r10, [rbp-28h]
 * 00000001403FF97C: mov     r9, [rbp-30h]
 * 00000001403FF980: mov     r8, [rbp-38h]
 * 00000001403FF984: mov     rdx, [rbp-40h]
 * 00000001403FF988: mov     rcx, [rbp-48h]
 * 00000001403FF98C: mov     rax, [rbp-50h]
 * 00000001403FF990: mov     rsp, rbp
 * 00000001403FF993: mov     rbp, [rbp+0D8h]
 * 00000001403FF99A: add     rsp, 0E8h
 * 00000001403FF9A1: iretq
 */
