/*
 * XREFs of KiVmbusInterruptDispatch @ 0x140403F30
 * Callers:
 *     KiVmbusInterrupt0 @ 0x140402F70 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403260 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403550 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140403840 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x140403F30 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404480 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140405330 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x140512B80 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x140403F30
 * Reason: Hex-Rays returned no pseudocode for 0x140403F30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140403F30: mov     rdx, rsp
 * 0000000140403F33: mov     rcx, gs:8758h
 * 0000000140403F3C: lea     rax, [rcx-6000h]
 * 0000000140403F43: cmp     rax, rsp
 * 0000000140403F46: ja      short loc_140403F4D
 * 0000000140403F48: cmp     rsp, rcx
 * 0000000140403F4B: jb      short loc_140403F59
 * 0000000140403F4D: cmp     cs:KiBugCheckActive, 0
 * 0000000140403F54: jnz     short loc_140403F59
 * 0000000140403F56: mov     rsp, rcx
 * 0000000140403F59: sub     rsp, 20h
 * 0000000140403F5D: mov     [rsp+20h+var_10], rdx
 * 0000000140403F62: call    KiVmbusInterruptSubDispatch
 * 0000000140403F67: mov     rsp, [rsp+20h+var_10]
 * 0000000140403F6C: cli
 * 0000000140403F6D: mov     rcx, gs:20h
 * 0000000140403F76: cmp     byte ptr [rcx+20h], 1
 * 0000000140403F7A: ja      short loc_140403FF6
 * 0000000140403F7C: rdtsc
 * 0000000140403F7E: shl     rdx, 20h
 * 0000000140403F82: or      rax, rdx
 * 0000000140403F85: sub     rax, [rcx+7EC0h]
 * 0000000140403F8C: add     [rcx+7F38h], rax
 * 0000000140403F93: add     [rcx+7EC0h], rax
 * 0000000140403F9A: mov     r8, rax
 * 0000000140403F9D: mov     rax, [rcx+8]
 * 0000000140403FA1: test    byte ptr [rax+2], 72h
 * 0000000140403FA5: jz      short loc_140403FBA
 * 0000000140403FA7: xor     edx, edx
 * 0000000140403FA9: call    KiBeginThreadAccountingPeriod
 * 0000000140403FAE: mov     rcx, gs:20h
 * 0000000140403FB7: inc     byte ptr [rcx+20h]
 * 0000000140403FBA: mov     dl, [rcx+6]
 * 0000000140403FBD: and     byte ptr [rcx+6], 0
 * 0000000140403FC1: cmp     byte ptr [rcx+7], 0
 * 0000000140403FC5: jnz     short loc_140403FF6
 * 0000000140403FC7: test    dl, dl
 * 0000000140403FC9: jz      short loc_140403FF6
 * 0000000140403FCB: cmp     byte ptr [rbp-57h], 2
 * 0000000140403FCF: jnb     short loc_140403FDC
 * 0000000140403FD1: and     byte ptr [rcx+20h], 0
 * 0000000140403FD5: call    KiDpcInterruptBypass
 * 0000000140403FDA: jmp     short loc_140403FF9
 * 0000000140403FDC: mov     ecx, 2
 * 0000000140403FE1: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140403FE8: nop     dword ptr [rax+rax+00h]
 * 0000000140403FED: mov     rcx, gs:20h
 * 0000000140403FF6: dec     byte ptr [rcx+20h]
 * 0000000140403FF9: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140403FFD: cmp     cs:KiIrqlFlags, 0
 * 0000000140404004: jz      short loc_14040400D
 * 0000000140404006: call    KzSetIrqlUnsafe
 * 000000014040400B: jmp     short loc_140404011
 * 000000014040400D: mov     cr8, rcx
 * 0000000140404011: mov     rsi, [rbp+0D0h]
 * 0000000140404018: cli
 * 0000000140404019: test    byte ptr [rbp+0F0h], 1
 * 0000000140404020: jz      loc_1404042C2
 * 0000000140404026: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040402D: jz      short loc_140404032
 * 000000014040402F: stac
 * 0000000140404032: mov     rcx, gs:188h
 * 000000014040403B: test    byte ptr [rcx+0C2h], 3
 * 0000000140404042: jz      short loc_14040405F
 * 0000000140404044: mov     ecx, 1
 * 0000000140404049: mov     cr8, rcx
 * 000000014040404D: sti
 * 000000014040404E: call    KiInitiateUserApc
 * 0000000140404053: cli
 * 0000000140404054: mov     ecx, 0
 * 0000000140404059: mov     cr8, rcx
 * 000000014040405D: jmp     short loc_140404032
 * 000000014040405F: test    byte ptr gs:86Ch, 2
 * 0000000140404068: jz      short loc_140404071
 * 000000014040406A: xor     ecx, ecx
 * 000000014040406C: call    KiUpdateStibpPairing
 * 0000000140404071: mov     rcx, gs:188h
 * 000000014040407A: test    dword ptr [rcx], 8000000h
 * 0000000140404080: jz      short loc_140404087
 * 0000000140404082: call    KiRestoreSetContextState
 * 0000000140404087: mov     rcx, gs:188h
 * 0000000140404090: test    dword ptr [rcx], 40010000h
 * 0000000140404096: jz      short loc_1404040AC
 * 0000000140404098: test    byte ptr [rcx+2], 1
 * 000000014040409C: jz      short loc_1404040AC
 * 000000014040409E: call    KiCopyCounters
 * 00000001404040A3: mov     rcx, gs:188h
 * 00000001404040AC: ldmxcsr dword ptr [rbp-54h]
 * 00000001404040B0: cmp     word ptr [rbp+80h], 0
 * 00000001404040B8: jz      short loc_1404040BF
 * 00000001404040BA: call    KiRestoreDebugRegisterState
 * 00000001404040BF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404040C3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404040C7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404040CB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404040CF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404040D3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404040D7: mov     r11, [rbp-20h]
 * 00000001404040DB: mov     r10, [rbp-28h]
 * 00000001404040DF: mov     r9, [rbp-30h]
 * 00000001404040E3: mov     r8, [rbp-38h]
 * 00000001404040E7: mov     byte ptr gs:856h, 0
 * 00000001404040F0: movzx   eax, word ptr gs:86Ah
 * 00000001404040F9: cmp     gs:864h, ax
 * 0000000140404102: jz      short loc_140404116
 * 0000000140404104: mov     gs:864h, ax
 * 000000014040410D: mov     ecx, 48h ; 'H'
 * 0000000140404112: xor     edx, edx
 * 0000000140404114: wrmsr
 * 0000000140404116: btr     word ptr gs:860h, 2
 * 0000000140404121: jnb     short loc_140404131
 * 0000000140404123: mov     eax, 1
 * 0000000140404128: xor     edx, edx
 * 000000014040412A: mov     ecx, 49h ; 'I'
 * 000000014040412F: wrmsr
 * 0000000140404131: btr     word ptr gs:860h, 5
 * 000000014040413C: jnb     loc_140404267
 * 0000000140404142: call    loc_140404255
 * 0000000140404147: add     rsp, 8
 * 000000014040414B: call    loc_14040425E
 * 0000000140404150: add     rsp, 8
 * 0000000140404154: call    loc_140404147
 * 0000000140404159: add     rsp, 8
 * 000000014040415D: call    loc_140404150
 * 0000000140404162: add     rsp, 8
 * 0000000140404166: call    loc_140404159
 * 000000014040416B: add     rsp, 8
 * 000000014040416F: call    loc_140404162
 * 0000000140404174: add     rsp, 8
 * 0000000140404178: call    loc_14040416B
 * 000000014040417D: add     rsp, 8
 * 0000000140404181: call    loc_140404174
 * 0000000140404186: add     rsp, 8
 * 000000014040418A: call    loc_14040417D
 * 000000014040418F: add     rsp, 8
 * 0000000140404193: call    loc_140404186
 * 0000000140404198: add     rsp, 8
 * 000000014040419C: call    loc_14040418F
 * 00000001404041A1: add     rsp, 8
 * 00000001404041A5: call    loc_140404198
 * 00000001404041AA: add     rsp, 8
 * 00000001404041AE: call    loc_1404041A1
 * 00000001404041B3: add     rsp, 8
 * 00000001404041B7: call    loc_1404041AA
 * 00000001404041BC: add     rsp, 8
 * 00000001404041C0: call    loc_1404041B3
 * 00000001404041C5: add     rsp, 8
 * 00000001404041C9: call    loc_1404041BC
 * 00000001404041CE: add     rsp, 8
 * 00000001404041D2: call    loc_1404041C5
 * 00000001404041D7: add     rsp, 8
 * 00000001404041DB: call    loc_1404041CE
 * 00000001404041E0: add     rsp, 8
 * 00000001404041E4: call    loc_1404041D7
 * 00000001404041E9: add     rsp, 8
 * 00000001404041ED: call    loc_1404041E0
 * 00000001404041F2: add     rsp, 8
 * 00000001404041F6: call    loc_1404041E9
 * 00000001404041FB: add     rsp, 8
 * 00000001404041FF: call    loc_1404041F2
 * 0000000140404204: add     rsp, 8
 * 0000000140404208: call    loc_1404041FB
 * 000000014040420D: add     rsp, 8
 * 0000000140404211: call    loc_140404204
 * 0000000140404216: add     rsp, 8
 * 000000014040421A: call    loc_14040420D
 * 000000014040421F: add     rsp, 8
 * 0000000140404223: call    loc_140404216
 * 0000000140404228: add     rsp, 8
 * 000000014040422C: call    loc_14040421F
 * 0000000140404231: add     rsp, 8
 * 0000000140404235: call    loc_140404228
 * 000000014040423A: add     rsp, 8
 * 000000014040423E: call    loc_140404231
 * 0000000140404243: add     rsp, 8
 * 0000000140404247: call    loc_14040423A
 * 000000014040424C: add     rsp, 8
 * 0000000140404250: call    loc_140404243
 * 0000000140404255: add     rsp, 8
 * 0000000140404259: call    loc_14040424C
 * 000000014040425E: add     rsp, 8
 * 0000000140404262: mov     eax, 0DADAh
 * 0000000140404267: test    word ptr gs:860h, 80h
 * 0000000140404272: jz      short loc_140404280
 * 0000000140404274: xor     eax, eax
 * 0000000140404276: xor     edx, edx
 * 0000000140404278: mov     ecx, 1
 * 000000014040427D: div     rcx
 * 0000000140404280: mov     rdx, [rbp-40h]
 * 0000000140404284: mov     rcx, [rbp-48h]
 * 0000000140404288: mov     rax, [rbp-50h]
 * 000000014040428C: mov     rsp, rbp
 * 000000014040428F: mov     rbp, [rbp+0D8h]
 * 0000000140404296: add     rsp, 0E8h
 * 000000014040429D: test    cs:KiKvaShadow, 1
 * 00000001404042A4: jz      short loc_1404042AB
 * 00000001404042A6: jmp     KiKernelExit
 * 00000001404042AB: test    word ptr gs:860h, 100h
 * 00000001404042B6: jz      short loc_1404042BD
 * 00000001404042B8: verw    [rsp-1C8h+arg_1E0]
 * 00000001404042BD: swapgs
 * 00000001404042C0: iretq
 * 00000001404042C2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404042C6: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404042CA: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404042CE: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404042D2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404042D6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404042DA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404042DE: mov     r11, [rbp-20h]
 * 00000001404042E2: mov     r10, [rbp-28h]
 * 00000001404042E6: mov     r9, [rbp-30h]
 * 00000001404042EA: mov     r8, [rbp-38h]
 * 00000001404042EE: mov     rdx, [rbp-40h]
 * 00000001404042F2: mov     rcx, [rbp-48h]
 * 00000001404042F6: mov     rax, [rbp-50h]
 * 00000001404042FA: mov     rsp, rbp
 * 00000001404042FD: mov     rbp, [rbp+0D8h]
 * 0000000140404304: add     rsp, 0E8h
 * 000000014040430B: iretq
 */
