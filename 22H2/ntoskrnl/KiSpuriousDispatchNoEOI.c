/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x140400580
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiEndThreadAccountingPeriod @ 0x140230CF0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400580 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x140400580
 * Reason: Hex-Rays returned no pseudocode for 0x140400580
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400580: mov     ecx, 0Fh
 * 0000000140400585: cmp     cs:KiIrqlFlags, 0
 * 000000014040058C: jz      short loc_140400595
 * 000000014040058E: call    KzSetIrqlUnsafe
 * 0000000140400593: jmp     short loc_14040059D
 * 0000000140400595: mov     rax, cr8
 * 0000000140400599: mov     cr8, rcx
 * 000000014040059D: mov     [rbp-57h], al
 * 00000001404005A0: mov     rcx, gs:20h
 * 00000001404005A9: inc     byte ptr [rcx+20h]
 * 00000001404005AC: cmp     byte ptr [rcx+20h], 1
 * 00000001404005B0: jnz     short loc_140400602
 * 00000001404005B2: rdtsc
 * 00000001404005B4: shl     rdx, 20h
 * 00000001404005B8: or      rax, rdx
 * 00000001404005BB: mov     r8, [rcx+8]
 * 00000001404005BF: sub     rax, [rcx+7EC0h]
 * 00000001404005C6: add     [r8+48h], rax
 * 00000001404005CA: mov     edx, [r8+50h]
 * 00000001404005CE: add     [rcx+7EC0h], rax
 * 00000001404005D5: add     rdx, rax
 * 00000001404005D8: mov     ecx, edx
 * 00000001404005DA: shr     rdx, 20h
 * 00000001404005DE: jz      short loc_1404005E3
 * 00000001404005E0: or      ecx, 0FFFFFFFFh
 * 00000001404005E3: mov     [r8+50h], ecx
 * 00000001404005E7: test    byte ptr [r8+2], 3Eh
 * 00000001404005EC: jz      short loc_140400602
 * 00000001404005EE: mov     rdx, r8
 * 00000001404005F1: mov     r8, rax
 * 00000001404005F4: mov     rcx, gs:20h
 * 00000001404005FD: call    KiEndThreadAccountingPeriod
 * 0000000140400602: sti
 * 0000000140400603: inc     dword ptr [rsi+74h]
 * 0000000140400606: cli
 * 0000000140400607: mov     rcx, gs:20h
 * 0000000140400610: cmp     byte ptr [rcx+20h], 1
 * 0000000140400614: ja      short loc_140400690
 * 0000000140400616: rdtsc
 * 0000000140400618: shl     rdx, 20h
 * 000000014040061C: or      rax, rdx
 * 000000014040061F: sub     rax, [rcx+7EC0h]
 * 0000000140400626: add     [rcx+7F38h], rax
 * 000000014040062D: add     [rcx+7EC0h], rax
 * 0000000140400634: mov     r8, rax
 * 0000000140400637: mov     rax, [rcx+8]
 * 000000014040063B: test    byte ptr [rax+2], 72h
 * 000000014040063F: jz      short loc_140400654
 * 0000000140400641: xor     edx, edx
 * 0000000140400643: call    KiBeginThreadAccountingPeriod
 * 0000000140400648: mov     rcx, gs:20h
 * 0000000140400651: inc     byte ptr [rcx+20h]
 * 0000000140400654: mov     dl, [rcx+6]
 * 0000000140400657: and     byte ptr [rcx+6], 0
 * 000000014040065B: cmp     byte ptr [rcx+7], 0
 * 000000014040065F: jnz     short loc_140400690
 * 0000000140400661: test    dl, dl
 * 0000000140400663: jz      short loc_140400690
 * 0000000140400665: cmp     byte ptr [rbp-57h], 2
 * 0000000140400669: jnb     short loc_140400676
 * 000000014040066B: and     byte ptr [rcx+20h], 0
 * 000000014040066F: call    KiDpcInterruptBypass
 * 0000000140400674: jmp     short loc_140400693
 * 0000000140400676: mov     ecx, 2
 * 000000014040067B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140400682: nop     dword ptr [rax+rax+00h]
 * 0000000140400687: mov     rcx, gs:20h
 * 0000000140400690: dec     byte ptr [rcx+20h]
 * 0000000140400693: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140400697: cmp     cs:KiIrqlFlags, 0
 * 000000014040069E: jz      short loc_1404006A7
 * 00000001404006A0: call    KzSetIrqlUnsafe
 * 00000001404006A5: jmp     short loc_1404006AB
 * 00000001404006A7: mov     cr8, rcx
 * 00000001404006AB: mov     rsi, [rbp+0D0h]
 * 00000001404006B2: cli
 * 00000001404006B3: test    byte ptr [rbp+0F0h], 1
 * 00000001404006BA: jz      loc_14040095C
 * 00000001404006C0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404006C7: jz      short loc_1404006CC
 * 00000001404006C9: stac
 * 00000001404006CC: mov     rcx, gs:188h
 * 00000001404006D5: test    byte ptr [rcx+0C2h], 3
 * 00000001404006DC: jz      short loc_1404006F9
 * 00000001404006DE: mov     ecx, 1
 * 00000001404006E3: mov     cr8, rcx
 * 00000001404006E7: sti
 * 00000001404006E8: call    KiInitiateUserApc
 * 00000001404006ED: cli
 * 00000001404006EE: mov     ecx, 0
 * 00000001404006F3: mov     cr8, rcx
 * 00000001404006F7: jmp     short loc_1404006CC
 * 00000001404006F9: test    byte ptr gs:86Ch, 2
 * 0000000140400702: jz      short loc_14040070B
 * 0000000140400704: xor     ecx, ecx
 * 0000000140400706: call    KiUpdateStibpPairing
 * 000000014040070B: mov     rcx, gs:188h
 * 0000000140400714: test    dword ptr [rcx], 8000000h
 * 000000014040071A: jz      short loc_140400721
 * 000000014040071C: call    KiRestoreSetContextState
 * 0000000140400721: mov     rcx, gs:188h
 * 000000014040072A: test    dword ptr [rcx], 40010000h
 * 0000000140400730: jz      short loc_140400746
 * 0000000140400732: test    byte ptr [rcx+2], 1
 * 0000000140400736: jz      short loc_140400746
 * 0000000140400738: call    KiCopyCounters
 * 000000014040073D: mov     rcx, gs:188h
 * 0000000140400746: ldmxcsr dword ptr [rbp-54h]
 * 000000014040074A: cmp     word ptr [rbp+80h], 0
 * 0000000140400752: jz      short loc_140400759
 * 0000000140400754: call    KiRestoreDebugRegisterState
 * 0000000140400759: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014040075D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400761: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400765: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400769: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014040076D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400771: mov     r11, [rbp-20h]
 * 0000000140400775: mov     r10, [rbp-28h]
 * 0000000140400779: mov     r9, [rbp-30h]
 * 000000014040077D: mov     r8, [rbp-38h]
 * 0000000140400781: mov     byte ptr gs:856h, 0
 * 000000014040078A: movzx   eax, word ptr gs:86Ah
 * 0000000140400793: cmp     gs:864h, ax
 * 000000014040079C: jz      short loc_1404007B0
 * 000000014040079E: mov     gs:864h, ax
 * 00000001404007A7: mov     ecx, 48h ; 'H'
 * 00000001404007AC: xor     edx, edx
 * 00000001404007AE: wrmsr
 * 00000001404007B0: btr     word ptr gs:860h, 2
 * 00000001404007BB: jnb     short loc_1404007CB
 * 00000001404007BD: mov     eax, 1
 * 00000001404007C2: xor     edx, edx
 * 00000001404007C4: mov     ecx, 49h ; 'I'
 * 00000001404007C9: wrmsr
 * 00000001404007CB: btr     word ptr gs:860h, 5
 * 00000001404007D6: jnb     loc_140400901
 * 00000001404007DC: call    loc_1404008EF
 * 00000001404007E1: add     rsp, 8
 * 00000001404007E5: call    loc_1404008F8
 * 00000001404007EA: add     rsp, 8
 * 00000001404007EE: call    loc_1404007E1
 * 00000001404007F3: add     rsp, 8
 * 00000001404007F7: call    loc_1404007EA
 * 00000001404007FC: add     rsp, 8
 * 0000000140400800: call    loc_1404007F3
 * 0000000140400805: add     rsp, 8
 * 0000000140400809: call    loc_1404007FC
 * 000000014040080E: add     rsp, 8
 * 0000000140400812: call    loc_140400805
 * 0000000140400817: add     rsp, 8
 * 000000014040081B: call    loc_14040080E
 * 0000000140400820: add     rsp, 8
 * 0000000140400824: call    loc_140400817
 * 0000000140400829: add     rsp, 8
 * 000000014040082D: call    loc_140400820
 * 0000000140400832: add     rsp, 8
 * 0000000140400836: call    loc_140400829
 * 000000014040083B: add     rsp, 8
 * 000000014040083F: call    loc_140400832
 * 0000000140400844: add     rsp, 8
 * 0000000140400848: call    loc_14040083B
 * 000000014040084D: add     rsp, 8
 * 0000000140400851: call    loc_140400844
 * 0000000140400856: add     rsp, 8
 * 000000014040085A: call    loc_14040084D
 * 000000014040085F: add     rsp, 8
 * 0000000140400863: call    loc_140400856
 * 0000000140400868: add     rsp, 8
 * 000000014040086C: call    loc_14040085F
 * 0000000140400871: add     rsp, 8
 * 0000000140400875: call    loc_140400868
 * 000000014040087A: add     rsp, 8
 * 000000014040087E: call    loc_140400871
 * 0000000140400883: add     rsp, 8
 * 0000000140400887: call    loc_14040087A
 * 000000014040088C: add     rsp, 8
 * 0000000140400890: call    loc_140400883
 * 0000000140400895: add     rsp, 8
 * 0000000140400899: call    loc_14040088C
 * 000000014040089E: add     rsp, 8
 * 00000001404008A2: call    loc_140400895
 * 00000001404008A7: add     rsp, 8
 * 00000001404008AB: call    loc_14040089E
 * 00000001404008B0: add     rsp, 8
 * 00000001404008B4: call    loc_1404008A7
 * 00000001404008B9: add     rsp, 8
 * 00000001404008BD: call    loc_1404008B0
 * 00000001404008C2: add     rsp, 8
 * 00000001404008C6: call    loc_1404008B9
 * 00000001404008CB: add     rsp, 8
 * 00000001404008CF: call    loc_1404008C2
 * 00000001404008D4: add     rsp, 8
 * 00000001404008D8: call    loc_1404008CB
 * 00000001404008DD: add     rsp, 8
 * 00000001404008E1: call    loc_1404008D4
 * 00000001404008E6: add     rsp, 8
 * 00000001404008EA: call    loc_1404008DD
 * 00000001404008EF: add     rsp, 8
 * 00000001404008F3: call    loc_1404008E6
 * 00000001404008F8: add     rsp, 8
 * 00000001404008FC: mov     eax, 0DADAh
 * 0000000140400901: test    word ptr gs:860h, 80h
 * 000000014040090C: jz      short loc_14040091A
 * 000000014040090E: xor     eax, eax
 * 0000000140400910: xor     edx, edx
 * 0000000140400912: mov     ecx, 1
 * 0000000140400917: div     rcx
 * 000000014040091A: mov     rdx, [rbp-40h]
 * 000000014040091E: mov     rcx, [rbp-48h]
 * 0000000140400922: mov     rax, [rbp-50h]
 * 0000000140400926: mov     rsp, rbp
 * 0000000140400929: mov     rbp, [rbp+0D8h]
 * 0000000140400930: add     rsp, 0E8h
 * 0000000140400937: test    cs:KiKvaShadow, 1
 * 000000014040093E: jz      short loc_140400945
 * 0000000140400940: jmp     KiKernelExit
 * 0000000140400945: test    word ptr gs:860h, 100h
 * 0000000140400950: jz      short loc_140400957
 * 0000000140400952: verw    [rsp-1E8h+arg_200]
 * 0000000140400957: swapgs
 * 000000014040095A: iretq
 * 000000014040095C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400960: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400964: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400968: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040096C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400970: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400974: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400978: mov     r11, [rbp-20h]
 * 000000014040097C: mov     r10, [rbp-28h]
 * 0000000140400980: mov     r9, [rbp-30h]
 * 0000000140400984: mov     r8, [rbp-38h]
 * 0000000140400988: mov     rdx, [rbp-40h]
 * 000000014040098C: mov     rcx, [rbp-48h]
 * 0000000140400990: mov     rax, [rbp-50h]
 * 0000000140400994: mov     rsp, rbp
 * 0000000140400997: mov     rbp, [rbp+0D8h]
 * 000000014040099E: add     rsp, 0E8h
 * 00000001404009A5: iretq
 */
