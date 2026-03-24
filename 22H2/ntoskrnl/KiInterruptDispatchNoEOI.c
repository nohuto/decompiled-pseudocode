/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140400190
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FF360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140400190 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140400190
 * Reason: Hex-Rays returned no pseudocode for 0x140400190
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140400190: mov     rdx, rsp
 * 0000000140400193: mov     rcx, gs:8758h
 * 000000014040019C: lea     rax, [rcx-6000h]
 * 00000001404001A3: cmp     rax, rsp
 * 00000001404001A6: ja      short loc_1404001AD
 * 00000001404001A8: cmp     rsp, rcx
 * 00000001404001AB: jb      short loc_1404001B9
 * 00000001404001AD: cmp     cs:KiBugCheckActive, 0
 * 00000001404001B4: jnz     short loc_1404001B9
 * 00000001404001B6: mov     rsp, rcx
 * 00000001404001B9: sub     rsp, 20h
 * 00000001404001BD: mov     [rsp+20h+var_10], rdx
 * 00000001404001C2: call    KiInterruptSubDispatchNoLock
 * 00000001404001C7: mov     rsp, [rsp+20h+var_10]
 * 00000001404001CC: mov     rcx, gs:20h
 * 00000001404001D5: cmp     byte ptr [rcx+20h], 1
 * 00000001404001D9: ja      short loc_140400255
 * 00000001404001DB: rdtsc
 * 00000001404001DD: shl     rdx, 20h
 * 00000001404001E1: or      rax, rdx
 * 00000001404001E4: sub     rax, [rcx+7EC0h]
 * 00000001404001EB: add     [rcx+7F38h], rax
 * 00000001404001F2: add     [rcx+7EC0h], rax
 * 00000001404001F9: mov     r8, rax
 * 00000001404001FC: mov     rax, [rcx+8]
 * 0000000140400200: test    byte ptr [rax+2], 72h
 * 0000000140400204: jz      short loc_140400219
 * 0000000140400206: xor     edx, edx
 * 0000000140400208: call    KiBeginThreadAccountingPeriod
 * 000000014040020D: mov     rcx, gs:20h
 * 0000000140400216: inc     byte ptr [rcx+20h]
 * 0000000140400219: mov     dl, [rcx+6]
 * 000000014040021C: and     byte ptr [rcx+6], 0
 * 0000000140400220: cmp     byte ptr [rcx+7], 0
 * 0000000140400224: jnz     short loc_140400255
 * 0000000140400226: test    dl, dl
 * 0000000140400228: jz      short loc_140400255
 * 000000014040022A: cmp     byte ptr [rbp-57h], 2
 * 000000014040022E: jnb     short loc_14040023B
 * 0000000140400230: and     byte ptr [rcx+20h], 0
 * 0000000140400234: call    KiDpcInterruptBypass
 * 0000000140400239: jmp     short loc_140400258
 * 000000014040023B: mov     ecx, 2
 * 0000000140400240: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140400247: nop     dword ptr [rax+rax+00h]
 * 000000014040024C: mov     rcx, gs:20h
 * 0000000140400255: dec     byte ptr [rcx+20h]
 * 0000000140400258: movzx   ecx, byte ptr [rbp-57h]
 * 000000014040025C: cmp     cs:KiIrqlFlags, 0
 * 0000000140400263: jz      short loc_14040026C
 * 0000000140400265: call    KzSetIrqlUnsafe
 * 000000014040026A: jmp     short loc_140400270
 * 000000014040026C: mov     cr8, rcx
 * 0000000140400270: mov     rsi, [rbp+0D0h]
 * 0000000140400277: test    byte ptr [rbp+0F0h], 1
 * 000000014040027E: jz      loc_140400520
 * 0000000140400284: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040028B: jz      short loc_140400290
 * 000000014040028D: stac
 * 0000000140400290: mov     rcx, gs:188h
 * 0000000140400299: test    byte ptr [rcx+0C2h], 3
 * 00000001404002A0: jz      short loc_1404002BD
 * 00000001404002A2: mov     ecx, 1
 * 00000001404002A7: mov     cr8, rcx
 * 00000001404002AB: sti
 * 00000001404002AC: call    KiInitiateUserApc
 * 00000001404002B1: cli
 * 00000001404002B2: mov     ecx, 0
 * 00000001404002B7: mov     cr8, rcx
 * 00000001404002BB: jmp     short loc_140400290
 * 00000001404002BD: test    byte ptr gs:86Ch, 2
 * 00000001404002C6: jz      short loc_1404002CF
 * 00000001404002C8: xor     ecx, ecx
 * 00000001404002CA: call    KiUpdateStibpPairing
 * 00000001404002CF: mov     rcx, gs:188h
 * 00000001404002D8: test    dword ptr [rcx], 8000000h
 * 00000001404002DE: jz      short loc_1404002E5
 * 00000001404002E0: call    KiRestoreSetContextState
 * 00000001404002E5: mov     rcx, gs:188h
 * 00000001404002EE: test    dword ptr [rcx], 40010000h
 * 00000001404002F4: jz      short loc_14040030A
 * 00000001404002F6: test    byte ptr [rcx+2], 1
 * 00000001404002FA: jz      short loc_14040030A
 * 00000001404002FC: call    KiCopyCounters
 * 0000000140400301: mov     rcx, gs:188h
 * 000000014040030A: ldmxcsr dword ptr [rbp-54h]
 * 000000014040030E: cmp     word ptr [rbp+80h], 0
 * 0000000140400316: jz      short loc_14040031D
 * 0000000140400318: call    KiRestoreDebugRegisterState
 * 000000014040031D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400321: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140400325: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400329: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014040032D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400331: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140400335: mov     r11, [rbp-20h]
 * 0000000140400339: mov     r10, [rbp-28h]
 * 000000014040033D: mov     r9, [rbp-30h]
 * 0000000140400341: mov     r8, [rbp-38h]
 * 0000000140400345: mov     byte ptr gs:856h, 0
 * 000000014040034E: movzx   eax, word ptr gs:86Ah
 * 0000000140400357: cmp     gs:864h, ax
 * 0000000140400360: jz      short loc_140400374
 * 0000000140400362: mov     gs:864h, ax
 * 000000014040036B: mov     ecx, 48h ; 'H'
 * 0000000140400370: xor     edx, edx
 * 0000000140400372: wrmsr
 * 0000000140400374: btr     word ptr gs:860h, 2
 * 000000014040037F: jnb     short loc_14040038F
 * 0000000140400381: mov     eax, 1
 * 0000000140400386: xor     edx, edx
 * 0000000140400388: mov     ecx, 49h ; 'I'
 * 000000014040038D: wrmsr
 * 000000014040038F: btr     word ptr gs:860h, 5
 * 000000014040039A: jnb     loc_1404004C5
 * 00000001404003A0: call    loc_1404004B3
 * 00000001404003A5: add     rsp, 8
 * 00000001404003A9: call    loc_1404004BC
 * 00000001404003AE: add     rsp, 8
 * 00000001404003B2: call    loc_1404003A5
 * 00000001404003B7: add     rsp, 8
 * 00000001404003BB: call    loc_1404003AE
 * 00000001404003C0: add     rsp, 8
 * 00000001404003C4: call    loc_1404003B7
 * 00000001404003C9: add     rsp, 8
 * 00000001404003CD: call    loc_1404003C0
 * 00000001404003D2: add     rsp, 8
 * 00000001404003D6: call    loc_1404003C9
 * 00000001404003DB: add     rsp, 8
 * 00000001404003DF: call    loc_1404003D2
 * 00000001404003E4: add     rsp, 8
 * 00000001404003E8: call    loc_1404003DB
 * 00000001404003ED: add     rsp, 8
 * 00000001404003F1: call    loc_1404003E4
 * 00000001404003F6: add     rsp, 8
 * 00000001404003FA: call    loc_1404003ED
 * 00000001404003FF: add     rsp, 8
 * 0000000140400403: call    loc_1404003F6
 * 0000000140400408: add     rsp, 8
 * 000000014040040C: call    loc_1404003FF
 * 0000000140400411: add     rsp, 8
 * 0000000140400415: call    loc_140400408
 * 000000014040041A: add     rsp, 8
 * 000000014040041E: call    loc_140400411
 * 0000000140400423: add     rsp, 8
 * 0000000140400427: call    loc_14040041A
 * 000000014040042C: add     rsp, 8
 * 0000000140400430: call    loc_140400423
 * 0000000140400435: add     rsp, 8
 * 0000000140400439: call    loc_14040042C
 * 000000014040043E: add     rsp, 8
 * 0000000140400442: call    loc_140400435
 * 0000000140400447: add     rsp, 8
 * 000000014040044B: call    loc_14040043E
 * 0000000140400450: add     rsp, 8
 * 0000000140400454: call    loc_140400447
 * 0000000140400459: add     rsp, 8
 * 000000014040045D: call    loc_140400450
 * 0000000140400462: add     rsp, 8
 * 0000000140400466: call    loc_140400459
 * 000000014040046B: add     rsp, 8
 * 000000014040046F: call    loc_140400462
 * 0000000140400474: add     rsp, 8
 * 0000000140400478: call    loc_14040046B
 * 000000014040047D: add     rsp, 8
 * 0000000140400481: call    loc_140400474
 * 0000000140400486: add     rsp, 8
 * 000000014040048A: call    loc_14040047D
 * 000000014040048F: add     rsp, 8
 * 0000000140400493: call    loc_140400486
 * 0000000140400498: add     rsp, 8
 * 000000014040049C: call    loc_14040048F
 * 00000001404004A1: add     rsp, 8
 * 00000001404004A5: call    loc_140400498
 * 00000001404004AA: add     rsp, 8
 * 00000001404004AE: call    loc_1404004A1
 * 00000001404004B3: add     rsp, 8
 * 00000001404004B7: call    loc_1404004AA
 * 00000001404004BC: add     rsp, 8
 * 00000001404004C0: mov     eax, 0DADAh
 * 00000001404004C5: test    word ptr gs:860h, 80h
 * 00000001404004D0: jz      short loc_1404004DE
 * 00000001404004D2: xor     eax, eax
 * 00000001404004D4: xor     edx, edx
 * 00000001404004D6: mov     ecx, 1
 * 00000001404004DB: div     rcx
 * 00000001404004DE: mov     rdx, [rbp-40h]
 * 00000001404004E2: mov     rcx, [rbp-48h]
 * 00000001404004E6: mov     rax, [rbp-50h]
 * 00000001404004EA: mov     rsp, rbp
 * 00000001404004ED: mov     rbp, [rbp+0D8h]
 * 00000001404004F4: add     rsp, 0E8h
 * 00000001404004FB: test    cs:KiKvaShadow, 1
 * 0000000140400502: jz      short loc_140400509
 * 0000000140400504: jmp     KiKernelExit
 * 0000000140400509: test    word ptr gs:860h, 100h
 * 0000000140400514: jz      short loc_14040051B
 * 0000000140400516: verw    [rsp-1C8h+arg_1E0]
 * 000000014040051B: swapgs
 * 000000014040051E: iretq
 * 0000000140400520: ldmxcsr dword ptr [rbp-54h]
 * 0000000140400524: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140400528: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014040052C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140400530: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140400534: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140400538: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014040053C: mov     r11, [rbp-20h]
 * 0000000140400540: mov     r10, [rbp-28h]
 * 0000000140400544: mov     r9, [rbp-30h]
 * 0000000140400548: mov     r8, [rbp-38h]
 * 000000014040054C: mov     rdx, [rbp-40h]
 * 0000000140400550: mov     rcx, [rbp-48h]
 * 0000000140400554: mov     rax, [rbp-50h]
 * 0000000140400558: mov     rsp, rbp
 * 000000014040055B: mov     rbp, [rbp+0D8h]
 * 0000000140400562: add     rsp, 0E8h
 * 0000000140400569: iretq
 */
