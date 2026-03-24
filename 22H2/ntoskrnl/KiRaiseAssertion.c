/*
 * XREFs of KiRaiseAssertion @ 0x140410200
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140A14DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140410200 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140410200
 * Reason: Hex-Rays returned no pseudocode for 0x140410200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410200: sub     qword ptr [rsp+0], 2
 * 0000000140410205: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014041020B: jnz     short loc_140410212
 * 000000014041020D: and     dword ptr [rsp+4], 0
 * 0000000140410212: sub     rsp, 8
 * 0000000140410216: push    rbp
 * 0000000140410217: sub     rsp, 158h
 * 000000014041021E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140410226: mov     byte ptr [rbp-55h], 1
 * 000000014041022A: mov     [rbp-50h], rax
 * 000000014041022E: mov     [rbp-48h], rcx
 * 0000000140410232: mov     [rbp-40h], rdx
 * 0000000140410236: mov     [rbp-38h], r8
 * 000000014041023A: mov     [rbp-30h], r9
 * 000000014041023E: mov     [rbp-28h], r10
 * 0000000140410242: mov     [rbp-20h], r11
 * 0000000140410246: test    byte ptr [rbp+0F0h], 1
 * 000000014041024D: jnz     short loc_14041027E
 * 000000014041024F: lfence
 * 0000000140410252: test    word ptr gs:860h, 1
 * 000000014041025D: jnz     short loc_140410267
 * 000000014041025F: lfence
 * 0000000140410262: jmp     loc_1404104D0
 * 0000000140410267: movzx   eax, word ptr gs:864h
 * 0000000140410270: mov     ecx, 48h ; 'H'
 * 0000000140410275: xor     edx, edx
 * 0000000140410277: wrmsr
 * 0000000140410279: jmp     loc_1404104D0
 * 000000014041027E: test    cs:KiKvaShadow, 1
 * 0000000140410285: jnz     short loc_14041028A
 * 0000000140410287: swapgs
 * 000000014041028A: lfence
 * 000000014041028D: mov     r10, gs:188h
 * 0000000140410296: mov     rcx, gs:188h
 * 000000014041029F: mov     rcx, [rcx+220h]
 * 00000001404102A6: mov     rcx, [rcx+9E0h]
 * 00000001404102AD: mov     gs:858h, rcx
 * 00000001404102B6: mov     cx, gs:850h
 * 00000001404102BF: mov     gs:852h, cx
 * 00000001404102C8: mov     cx, gs:860h
 * 00000001404102D1: mov     gs:854h, cx
 * 00000001404102DA: movzx   eax, word ptr gs:866h
 * 00000001404102E3: cmp     gs:864h, ax
 * 00000001404102EC: jz      short loc_140410300
 * 00000001404102EE: mov     gs:864h, ax
 * 00000001404102F7: mov     ecx, 48h ; 'H'
 * 00000001404102FC: xor     edx, edx
 * 00000001404102FE: wrmsr
 * 0000000140410300: movzx   edx, word ptr gs:860h
 * 0000000140410309: test    edx, 8
 * 000000014041030F: jz      short loc_140410328
 * 0000000140410311: mov     eax, 1
 * 0000000140410316: xor     edx, edx
 * 0000000140410318: mov     ecx, 49h ; 'I'
 * 000000014041031D: wrmsr
 * 000000014041031F: movzx   edx, word ptr gs:860h
 * 0000000140410328: test    edx, 2
 * 000000014041032E: jz      loc_140410459
 * 0000000140410334: call    loc_140410447
 * 0000000140410339: add     rsp, 8
 * 000000014041033D: call    loc_140410450
 * 0000000140410342: add     rsp, 8
 * 0000000140410346: call    loc_140410339
 * 000000014041034B: add     rsp, 8
 * 000000014041034F: call    loc_140410342
 * 0000000140410354: add     rsp, 8
 * 0000000140410358: call    loc_14041034B
 * 000000014041035D: add     rsp, 8
 * 0000000140410361: call    loc_140410354
 * 0000000140410366: add     rsp, 8
 * 000000014041036A: call    loc_14041035D
 * 000000014041036F: add     rsp, 8
 * 0000000140410373: call    loc_140410366
 * 0000000140410378: add     rsp, 8
 * 000000014041037C: call    loc_14041036F
 * 0000000140410381: add     rsp, 8
 * 0000000140410385: call    loc_140410378
 * 000000014041038A: add     rsp, 8
 * 000000014041038E: call    loc_140410381
 * 0000000140410393: add     rsp, 8
 * 0000000140410397: call    loc_14041038A
 * 000000014041039C: add     rsp, 8
 * 00000001404103A0: call    loc_140410393
 * 00000001404103A5: add     rsp, 8
 * 00000001404103A9: call    loc_14041039C
 * 00000001404103AE: add     rsp, 8
 * 00000001404103B2: call    loc_1404103A5
 * 00000001404103B7: add     rsp, 8
 * 00000001404103BB: call    loc_1404103AE
 * 00000001404103C0: add     rsp, 8
 * 00000001404103C4: call    loc_1404103B7
 * 00000001404103C9: add     rsp, 8
 * 00000001404103CD: call    loc_1404103C0
 * 00000001404103D2: add     rsp, 8
 * 00000001404103D6: call    loc_1404103C9
 * 00000001404103DB: add     rsp, 8
 * 00000001404103DF: call    loc_1404103D2
 * 00000001404103E4: add     rsp, 8
 * 00000001404103E8: call    loc_1404103DB
 * 00000001404103ED: add     rsp, 8
 * 00000001404103F1: call    loc_1404103E4
 * 00000001404103F6: add     rsp, 8
 * 00000001404103FA: call    loc_1404103ED
 * 00000001404103FF: add     rsp, 8
 * 0000000140410403: call    loc_1404103F6
 * 0000000140410408: add     rsp, 8
 * 000000014041040C: call    loc_1404103FF
 * 0000000140410411: add     rsp, 8
 * 0000000140410415: call    loc_140410408
 * 000000014041041A: add     rsp, 8
 * 000000014041041E: call    loc_140410411
 * 0000000140410423: add     rsp, 8
 * 0000000140410427: call    loc_14041041A
 * 000000014041042C: add     rsp, 8
 * 0000000140410430: call    loc_140410423
 * 0000000140410435: add     rsp, 8
 * 0000000140410439: call    loc_14041042C
 * 000000014041043E: add     rsp, 8
 * 0000000140410442: call    loc_140410435
 * 0000000140410447: add     rsp, 8
 * 000000014041044B: call    loc_14041043E
 * 0000000140410450: add     rsp, 8
 * 0000000140410454: mov     eax, 0DADAh
 * 0000000140410459: test    edx, 200h
 * 000000014041045F: jz      short loc_140410466
 * 0000000140410461: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410466: lfence
 * 0000000140410469: mov     byte ptr gs:856h, 0
 * 0000000140410472: test    byte ptr [r10+3], 80h
 * 0000000140410477: jz      short loc_1404104BB
 * 0000000140410479: mov     ecx, 0C0000102h
 * 000000014041047E: rdmsr
 * 0000000140410480: shl     rdx, 20h
 * 0000000140410484: or      rax, rdx
 * 0000000140410487: cmp     rax, cs:MmUserProbeAddress
 * 000000014041048E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410496: cmp     [r10+0F0h], rax
 * 000000014041049D: jz      short loc_1404104BB
 * 000000014041049F: mov     rdx, [r10+1F0h]
 * 00000001404104A6: bts     dword ptr [r10+74h], 8
 * 00000001404104AC: dec     word ptr [r10+1E6h]
 * 00000001404104B4: mov     [rdx+80h], rax
 * 00000001404104BB: test    byte ptr [r10+3], 3
 * 00000001404104C0: mov     word ptr [rbp+80h], 0
 * 00000001404104C9: jz      short loc_1404104D0
 * 00000001404104CB: call    KiSaveDebugRegisterState
 * 00000001404104D0: cld
 * 00000001404104D1: stmxcsr dword ptr [rbp-54h]
 * 00000001404104D5: ldmxcsr dword ptr gs:180h
 * 00000001404104DE: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404104E2: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404104E6: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404104EA: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404104EE: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404104F2: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404104F6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404104FD: jz      short loc_14041050B
 * 00000001404104FF: test    byte ptr [rbp+0F0h], 1
 * 0000000140410506: jz      short loc_14041050B
 * 0000000140410508: stac
 * 000000014041050B: test    dword ptr [rbp+0F8h], 200h
 * 0000000140410515: jz      short loc_140410518
 * 0000000140410517: sti
 * 0000000140410518: mov     ecx, 0C0000420h
 * 000000014041051D: xor     edx, edx
 * 000000014041051F: mov     r8, [rbp+0E8h]
 * 0000000140410526: call    KiExceptionDispatch
 * 000000014041052B: nop
 * 000000014041052C: retn
 */
