/*
 * XREFs of KiUmsFastReturnToUser @ 0x140412700
 * Callers:
 *     KiUmsTrapEntry @ 0x140412B80 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140412D80 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140412F40 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140412700 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x140412700
 * Reason: Hex-Rays returned no pseudocode for 0x140412700
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140412700: sub     rsp, 28h
 * 0000000140412704: mov     rbx, gs:188h
 * 000000014041270D: mov     rcx, [rbx+90h]
 * 0000000140412714: lea     rbp, [rcx+80h]
 * 000000014041271B: mov     rax, cr8
 * 000000014041271F: or      al, [rbx+24Ah]
 * 0000000140412725: or      eax, [rbx+1E4h]
 * 000000014041272B: jz      short loc_140412761
 * 000000014041272D: mov     ecx, 4Ah ; 'J'
 * 0000000140412732: xor     r9d, r9d
 * 0000000140412735: mov     r8, cr8
 * 0000000140412739: or      r8d, r8d
 * 000000014041273C: jnz     short loc_140412752
 * 000000014041273E: mov     ecx, 1
 * 0000000140412743: movzx   r8d, byte ptr [rbx+24Ah]
 * 000000014041274B: mov     r9d, [rbx+1E4h]
 * 0000000140412752: mov     rdx, [rbp+0E8h]
 * 0000000140412759: mov     r10, rbp
 * 000000014041275C: call    KiBugCheckDispatch
 * 0000000140412761: cli
 * 0000000140412762: mov     rcx, gs:188h
 * 000000014041276B: test    byte ptr [rcx+0C2h], 3
 * 0000000140412772: jz      short loc_1404127CD
 * 0000000140412774: mov     [rbp-50h], rax
 * 0000000140412778: xor     eax, eax
 * 000000014041277A: mov     [rbp-48h], rax
 * 000000014041277E: mov     [rbp-40h], rax
 * 0000000140412782: mov     [rbp-38h], rax
 * 0000000140412786: mov     [rbp-30h], rax
 * 000000014041278A: mov     [rbp-28h], rax
 * 000000014041278E: mov     [rbp-20h], rax
 * 0000000140412792: pxor    xmm0, xmm0
 * 0000000140412796: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041279A: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014041279E: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001404127A2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001404127A6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001404127AA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404127AE: mov     ecx, 1
 * 00000001404127B3: mov     cr8, rcx
 * 00000001404127B7: sti
 * 00000001404127B8: call    KiInitiateUserApc
 * 00000001404127BD: cli
 * 00000001404127BE: mov     ecx, 0
 * 00000001404127C3: mov     cr8, rcx
 * 00000001404127C7: mov     rax, [rbp-50h]
 * 00000001404127CB: jmp     short loc_140412762
 * 00000001404127CD: test    byte ptr gs:86Ch, 2
 * 00000001404127D6: jz      short loc_1404127E7
 * 00000001404127D8: mov     [rbp-50h], rax
 * 00000001404127DC: xor     ecx, ecx
 * 00000001404127DE: call    KiUpdateStibpPairing
 * 00000001404127E3: mov     rax, [rbp-50h]
 * 00000001404127E7: mov     rcx, gs:188h
 * 00000001404127F0: test    dword ptr [rcx], 8000000h
 * 00000001404127F6: jz      short loc_140412837
 * 00000001404127F8: mov     [rbp-50h], rax
 * 00000001404127FC: xor     eax, eax
 * 00000001404127FE: mov     [rbp-48h], rax
 * 0000000140412802: mov     [rbp-40h], rax
 * 0000000140412806: mov     [rbp-38h], rax
 * 000000014041280A: mov     [rbp-30h], rax
 * 000000014041280E: mov     [rbp-28h], rax
 * 0000000140412812: mov     [rbp-20h], rax
 * 0000000140412816: pxor    xmm0, xmm0
 * 000000014041281A: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041281E: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140412822: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140412826: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041282A: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014041282E: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140412832: call    KiRestoreSetContextState
 * 0000000140412837: mov     rcx, gs:188h
 * 0000000140412840: test    dword ptr [rcx], 40010000h
 * 0000000140412846: jz      short loc_140412875
 * 0000000140412848: mov     [rbp-50h], rax
 * 000000014041284C: test    byte ptr [rcx+2], 1
 * 0000000140412850: jz      short loc_140412860
 * 0000000140412852: call    KiCopyCounters
 * 0000000140412857: mov     rcx, gs:188h
 * 0000000140412860: test    byte ptr [rcx+3], 40h
 * 0000000140412864: jz      short loc_140412871
 * 0000000140412866: lea     rsp, [rbp-80h]
 * 000000014041286A: xor     ecx, ecx
 * 000000014041286C: call    KiUmsExit
 * 0000000140412871: mov     rax, [rbp-50h]
 * 0000000140412875: ldmxcsr dword ptr [rbp-54h]
 * 0000000140412879: xor     r10, r10
 * 000000014041287C: cmp     word ptr [rbp+80h], 0
 * 0000000140412884: jz      short loc_1404128C7
 * 0000000140412886: mov     [rbp-50h], rax
 * 000000014041288A: call    KiRestoreDebugRegisterState
 * 000000014041288F: mov     rax, gs:188h
 * 0000000140412898: mov     rax, [rax+0B8h]
 * 000000014041289F: mov     rax, [rax+3D8h]
 * 00000001404128A6: or      rax, rax
 * 00000001404128A9: jz      short loc_1404128C3
 * 00000001404128AB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404128B3: jnz     short loc_1404128C3
 * 00000001404128B5: mov     r10, [rbp+0E8h]
 * 00000001404128BC: mov     [rbp+0E8h], rax
 * 00000001404128C3: mov     rax, [rbp-50h]
 * 00000001404128C7: mov     [rbp-50h], rax
 * 00000001404128CB: mov     byte ptr gs:856h, 0
 * 00000001404128D4: movzx   eax, word ptr gs:86Ah
 * 00000001404128DD: cmp     gs:864h, ax
 * 00000001404128E6: jz      short loc_1404128FA
 * 00000001404128E8: mov     gs:864h, ax
 * 00000001404128F1: mov     ecx, 48h ; 'H'
 * 00000001404128F6: xor     edx, edx
 * 00000001404128F8: wrmsr
 * 00000001404128FA: btr     word ptr gs:860h, 2
 * 0000000140412905: jnb     short loc_140412915
 * 0000000140412907: mov     eax, 1
 * 000000014041290C: xor     edx, edx
 * 000000014041290E: mov     ecx, 49h ; 'I'
 * 0000000140412913: wrmsr
 * 0000000140412915: btr     word ptr gs:860h, 5
 * 0000000140412920: jnb     loc_140412A4B
 * 0000000140412926: call    loc_140412A39
 * 000000014041292B: add     rsp, 8
 * 000000014041292F: call    loc_140412A42
 * 0000000140412934: add     rsp, 8
 * 0000000140412938: call    loc_14041292B
 * 000000014041293D: add     rsp, 8
 * 0000000140412941: call    loc_140412934
 * 0000000140412946: add     rsp, 8
 * 000000014041294A: call    loc_14041293D
 * 000000014041294F: add     rsp, 8
 * 0000000140412953: call    loc_140412946
 * 0000000140412958: add     rsp, 8
 * 000000014041295C: call    loc_14041294F
 * 0000000140412961: add     rsp, 8
 * 0000000140412965: call    loc_140412958
 * 000000014041296A: add     rsp, 8
 * 000000014041296E: call    loc_140412961
 * 0000000140412973: add     rsp, 8
 * 0000000140412977: call    loc_14041296A
 * 000000014041297C: add     rsp, 8
 * 0000000140412980: call    loc_140412973
 * 0000000140412985: add     rsp, 8
 * 0000000140412989: call    loc_14041297C
 * 000000014041298E: add     rsp, 8
 * 0000000140412992: call    loc_140412985
 * 0000000140412997: add     rsp, 8
 * 000000014041299B: call    loc_14041298E
 * 00000001404129A0: add     rsp, 8
 * 00000001404129A4: call    loc_140412997
 * 00000001404129A9: add     rsp, 8
 * 00000001404129AD: call    loc_1404129A0
 * 00000001404129B2: add     rsp, 8
 * 00000001404129B6: call    loc_1404129A9
 * 00000001404129BB: add     rsp, 8
 * 00000001404129BF: call    loc_1404129B2
 * 00000001404129C4: add     rsp, 8
 * 00000001404129C8: call    loc_1404129BB
 * 00000001404129CD: add     rsp, 8
 * 00000001404129D1: call    loc_1404129C4
 * 00000001404129D6: add     rsp, 8
 * 00000001404129DA: call    loc_1404129CD
 * 00000001404129DF: add     rsp, 8
 * 00000001404129E3: call    loc_1404129D6
 * 00000001404129E8: add     rsp, 8
 * 00000001404129EC: call    loc_1404129DF
 * 00000001404129F1: add     rsp, 8
 * 00000001404129F5: call    loc_1404129E8
 * 00000001404129FA: add     rsp, 8
 * 00000001404129FE: call    loc_1404129F1
 * 0000000140412A03: add     rsp, 8
 * 0000000140412A07: call    loc_1404129FA
 * 0000000140412A0C: add     rsp, 8
 * 0000000140412A10: call    loc_140412A03
 * 0000000140412A15: add     rsp, 8
 * 0000000140412A19: call    loc_140412A0C
 * 0000000140412A1E: add     rsp, 8
 * 0000000140412A22: call    loc_140412A15
 * 0000000140412A27: add     rsp, 8
 * 0000000140412A2B: call    loc_140412A1E
 * 0000000140412A30: add     rsp, 8
 * 0000000140412A34: call    loc_140412A27
 * 0000000140412A39: add     rsp, 8
 * 0000000140412A3D: call    loc_140412A30
 * 0000000140412A42: add     rsp, 8
 * 0000000140412A46: mov     eax, 0DADAh
 * 0000000140412A4B: test    word ptr gs:860h, 80h
 * 0000000140412A56: jz      short loc_140412A64
 * 0000000140412A58: xor     eax, eax
 * 0000000140412A5A: xor     edx, edx
 * 0000000140412A5C: mov     ecx, 1
 * 0000000140412A61: div     rcx
 * 0000000140412A64: mov     rax, [rbp-50h]
 * 0000000140412A68: mov     r8, [rbp+100h]
 * 0000000140412A6F: mov     r9, [rbp+0D8h]
 * 0000000140412A76: xor     edx, edx
 * 0000000140412A78: pxor    xmm0, xmm0
 * 0000000140412A7C: pxor    xmm1, xmm1
 * 0000000140412A80: pxor    xmm2, xmm2
 * 0000000140412A84: pxor    xmm3, xmm3
 * 0000000140412A88: pxor    xmm4, xmm4
 * 0000000140412A8C: pxor    xmm5, xmm5
 * 0000000140412A90: mov     rcx, [rbp+0E8h]
 * 0000000140412A97: mov     r11, [rbp+0F8h]
 * 0000000140412A9E: test    cs:KiKvaShadow, 1
 * 0000000140412AA5: jnz     KiKernelSysretExit
 * 0000000140412AAB: mov     rbp, r9
 * 0000000140412AAE: mov     rsp, r8
 * 0000000140412AB1: test    word ptr gs:860h, 100h
 * 0000000140412ABC: jz      short loc_140412AC7
 * 0000000140412ABE: verw    word ptr gs:902Ah
 * 0000000140412AC7: swapgs
 * 0000000140412ACA: sysret
 * 0000000140412ACD: retn
 */
