/*
 * XREFs of KiSystemCall64 @ 0x140411000
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1404021A0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiUmsCallEntry @ 0x140412D80 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     PsAltSystemCallDispatch @ 0x140582A70 (PsAltSystemCallDispatch.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA240 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA2E0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x1408BD140 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1408BD260 (KiTrackSystemCallExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140411000
 * Reason: Hex-Rays returned no pseudocode for 0x140411000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140411000: swapgs
 * 0000000140411003: mov     gs:10h, rsp
 * 000000014041100C: mov     rsp, gs:1A8h
 * 0000000140411015: push    2Bh ; '+'
 * 0000000140411017: push    qword ptr gs:10h
 * 000000014041101F: push    r11
 * 0000000140411021: push    33h ; '3'
 * 0000000140411023: push    rcx
 * 0000000140411024: mov     rcx, r10
 * 0000000140411027: sub     rsp, 8
 * 000000014041102B: push    rbp
 * 000000014041102C: sub     rsp, 158h
 * 0000000140411033: lea     rbp, [rsp+190h+var_110]
 * 000000014041103B: mov     [rbp+0C0h], rbx
 * 0000000140411042: mov     [rbp+0C8h], rdi
 * 0000000140411049: mov     [rbp+0D0h], rsi
 * 0000000140411050: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140411057: jz      short loc_140411065
 * 0000000140411059: test    byte ptr [rbp+0F0h], 1
 * 0000000140411060: jz      short loc_140411065
 * 0000000140411062: stac
 * 0000000140411065: mov     [rbp-50h], rax
 * 0000000140411069: mov     [rbp-48h], rcx
 * 000000014041106D: mov     [rbp-40h], rdx
 * 0000000140411071: mov     rcx, gs:188h
 * 000000014041107A: mov     rcx, [rcx+220h]
 * 0000000140411081: mov     rcx, [rcx+9E0h]
 * 0000000140411088: mov     gs:858h, rcx
 * 0000000140411091: mov     cx, gs:850h
 * 000000014041109A: mov     gs:852h, cx
 * 00000001404110A3: mov     cx, gs:860h
 * 00000001404110AC: mov     gs:854h, cx
 * 00000001404110B5: movzx   eax, word ptr gs:866h
 * 00000001404110BE: cmp     gs:864h, ax
 * 00000001404110C7: jz      short loc_1404110DB
 * 00000001404110C9: mov     gs:864h, ax
 * 00000001404110D2: mov     ecx, 48h ; 'H'
 * 00000001404110D7: xor     edx, edx
 * 00000001404110D9: wrmsr
 * 00000001404110DB: movzx   edx, word ptr gs:860h
 * 00000001404110E4: test    edx, 8
 * 00000001404110EA: jz      short loc_140411103
 * 00000001404110EC: mov     eax, 1
 * 00000001404110F1: xor     edx, edx
 * 00000001404110F3: mov     ecx, 49h ; 'I'
 * 00000001404110F8: wrmsr
 * 00000001404110FA: movzx   edx, word ptr gs:860h
 * 0000000140411103: test    edx, 2
 * 0000000140411109: jz      loc_140411234
 * 000000014041110F: call    loc_140411222
 * 0000000140411114: add     rsp, 8
 * 0000000140411118: call    loc_14041122B
 * 000000014041111D: add     rsp, 8
 * 0000000140411121: call    loc_140411114
 * 0000000140411126: add     rsp, 8
 * 000000014041112A: call    loc_14041111D
 * 000000014041112F: add     rsp, 8
 * 0000000140411133: call    loc_140411126
 * 0000000140411138: add     rsp, 8
 * 000000014041113C: call    loc_14041112F
 * 0000000140411141: add     rsp, 8
 * 0000000140411145: call    loc_140411138
 * 000000014041114A: add     rsp, 8
 * 000000014041114E: call    loc_140411141
 * 0000000140411153: add     rsp, 8
 * 0000000140411157: call    loc_14041114A
 * 000000014041115C: add     rsp, 8
 * 0000000140411160: call    loc_140411153
 * 0000000140411165: add     rsp, 8
 * 0000000140411169: call    loc_14041115C
 * 000000014041116E: add     rsp, 8
 * 0000000140411172: call    loc_140411165
 * 0000000140411177: add     rsp, 8
 * 000000014041117B: call    loc_14041116E
 * 0000000140411180: add     rsp, 8
 * 0000000140411184: call    loc_140411177
 * 0000000140411189: add     rsp, 8
 * 000000014041118D: call    loc_140411180
 * 0000000140411192: add     rsp, 8
 * 0000000140411196: call    loc_140411189
 * 000000014041119B: add     rsp, 8
 * 000000014041119F: call    loc_140411192
 * 00000001404111A4: add     rsp, 8
 * 00000001404111A8: call    loc_14041119B
 * 00000001404111AD: add     rsp, 8
 * 00000001404111B1: call    loc_1404111A4
 * 00000001404111B6: add     rsp, 8
 * 00000001404111BA: call    loc_1404111AD
 * 00000001404111BF: add     rsp, 8
 * 00000001404111C3: call    loc_1404111B6
 * 00000001404111C8: add     rsp, 8
 * 00000001404111CC: call    loc_1404111BF
 * 00000001404111D1: add     rsp, 8
 * 00000001404111D5: call    loc_1404111C8
 * 00000001404111DA: add     rsp, 8
 * 00000001404111DE: call    loc_1404111D1
 * 00000001404111E3: add     rsp, 8
 * 00000001404111E7: call    loc_1404111DA
 * 00000001404111EC: add     rsp, 8
 * 00000001404111F0: call    loc_1404111E3
 * 00000001404111F5: add     rsp, 8
 * 00000001404111F9: call    loc_1404111EC
 * 00000001404111FE: add     rsp, 8
 * 0000000140411202: call    loc_1404111F5
 * 0000000140411207: add     rsp, 8
 * 000000014041120B: call    loc_1404111FE
 * 0000000140411210: add     rsp, 8
 * 0000000140411214: call    loc_140411207
 * 0000000140411219: add     rsp, 8
 * 000000014041121D: call    loc_140411210
 * 0000000140411222: add     rsp, 8
 * 0000000140411226: call    loc_140411219
 * 000000014041122B: add     rsp, 8
 * 000000014041122F: mov     eax, 0DADAh
 * 0000000140411234: test    edx, 200h
 * 000000014041123A: jz      short loc_140411241
 * 000000014041123C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140411241: lfence
 * 0000000140411244: mov     byte ptr gs:856h, 0
 * 000000014041124D: mov     byte ptr [rbp-55h], 2
 * 0000000140411251: mov     rbx, gs:188h
 * 000000014041125A: prefetchw byte ptr [rbx+90h]
 * 0000000140411261: stmxcsr dword ptr [rbp-54h]
 * 0000000140411265: ldmxcsr dword ptr gs:180h
 * 000000014041126E: cmp     byte ptr [rbx+3], 0
 * 0000000140411272: mov     word ptr [rbp+80h], 0
 * 000000014041127B: jz      loc_140411351
 * 0000000140411281: test    byte ptr [rbx+3], 3
 * 0000000140411285: mov     [rbp-38h], r8
 * 0000000140411289: mov     [rbp-30h], r9
 * 000000014041128D: jz      short loc_140411294
 * 000000014041128F: call    KiSaveDebugRegisterState
 * 0000000140411294: test    byte ptr [rbx+3], 24h
 * 0000000140411298: jz      short loc_1404112F0
 * 000000014041129A: mov     [rbp-20h], r10
 * 000000014041129E: mov     [rbp-28h], r10
 * 00000001404112A2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404112A6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404112AA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404112AE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404112B2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404112B6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404112BA: sti
 * 00000001404112BB: mov     rcx, rsp
 * 00000001404112BE: call    PsAltSystemCallDispatch
 * 00000001404112C3: cmp     al, 1
 * 00000001404112C5: jz      short loc_1404112F0
 * 00000001404112C7: mov     rax, [rbp-50h]
 * 00000001404112CB: jl      short loc_1404112E1
 * 00000001404112CD: mov     ecx, 0C000001Ch
 * 00000001404112D2: xor     edx, edx
 * 00000001404112D4: mov     r8, [rbp+0E8h]
 * 00000001404112DB: call    KiExceptionDispatch
 * 00000001404112E0: int     3; Trap to Debugger
 * 00000001404112E1: test    byte ptr [rbx+3], 4
 * 00000001404112E5: jz      KiSystemServiceExit
 * 00000001404112EB: jmp     KiSystemServiceExitPico
 * 00000001404112F0: test    byte ptr [rbx+3], 80h
 * 00000001404112F4: jz      short loc_14041133E
 * 00000001404112F6: mov     ecx, 0C0000102h
 * 00000001404112FB: rdmsr
 * 00000001404112FD: shl     rdx, 20h
 * 0000000140411301: or      rax, rdx
 * 0000000140411304: cmp     rax, cs:MmUserProbeAddress
 * 000000014041130B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140411313: cmp     [rbx+0F0h], rax
 * 000000014041131A: jz      short loc_14041133E
 * 000000014041131C: mov     rdx, [rbx+1F0h]
 * 0000000140411323: bts     dword ptr [rbx+74h], 8
 * 0000000140411328: dec     word ptr [rbx+1E6h]
 * 000000014041132F: mov     [rdx+80h], rax
 * 0000000140411336: sti
 * 0000000140411337: call    KiUmsCallEntry
 * 000000014041133C: jmp     short loc_140411349
 * 000000014041133E: test    byte ptr [rbx+3], 40h
 * 0000000140411342: jz      short loc_140411349
 * 0000000140411344: bts     dword ptr [rbx+74h], 10h
 * 0000000140411349: mov     r8, [rbp-38h]
 * 000000014041134D: mov     r9, [rbp-30h]
 * 0000000140411351: mov     rax, [rbp-50h]
 * 0000000140411355: mov     rcx, [rbp-48h]
 * 0000000140411359: mov     rdx, [rbp-40h]
 * 000000014041135D: sti
 * 000000014041135E: mov     [rbx+88h], rcx
 * 0000000140411365: mov     [rbx+80h], eax
 * 000000014041136B: nop     dword ptr [rax+rax+00h]
 * 0000000140411370: mov     [rbx+90h], rsp
 * 0000000140411377: mov     edi, eax
 * 0000000140411379: shr     edi, 7
 * 000000014041137C: and     edi, 20h
 * 000000014041137F: and     eax, 0FFFh
 * 0000000140411384: lea     r10, KeServiceDescriptorTable
 * 000000014041138B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140411392: test    dword ptr [rbx+78h], 80h
 * 0000000140411399: jz      short loc_1404113AE
 * 000000014041139B: test    dword ptr [rbx+78h], 200000h
 * 00000001404113A2: jz      short loc_1404113AB
 * 00000001404113A4: lea     r11, KeServiceDescriptorTableFilter
 * 00000001404113AB: mov     r10, r11
 * 00000001404113AE: cmp     eax, [r10+rdi+10h]
 * 00000001404113B3: jnb     loc_140411BAF
 * 00000001404113B9: mov     r10, [r10+rdi]
 * 00000001404113BD: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001404113C1: mov     rax, r11
 * 00000001404113C4: sar     r11, 4
 * 00000001404113C8: add     r10, r11
 * 00000001404113CB: cmp     edi, 20h ; ' '
 * 00000001404113CE: jnz     short loc_140411420
 * 00000001404113D0: mov     r11, [rbx+0F0h]
 * 00000001404113D7: cmp     dword ptr [r11+1740h], 0
 * 00000001404113DF: jz      short loc_140411420
 * 00000001404113E1: mov     [rbp-50h], rax
 * 00000001404113E5: mov     [rbp-48h], rcx
 * 00000001404113E9: mov     [rbp-40h], rdx
 * 00000001404113ED: mov     rbx, r8
 * 00000001404113F0: mov     rdi, r9
 * 00000001404113F3: mov     rsi, r10
 * 00000001404113F6: mov     ecx, 7
 * 00000001404113FB: xor     edx, edx
 * 00000001404113FD: xor     r8, r8
 * 0000000140411400: xor     r9, r9
 * 0000000140411403: call    PsInvokeWin32Callout
 * 0000000140411408: mov     rax, [rbp-50h]
 * 000000014041140C: mov     rcx, [rbp-48h]
 * 0000000140411410: mov     rdx, [rbp-40h]
 * 0000000140411414: mov     r8, rbx
 * 0000000140411417: mov     r9, rdi
 * 000000014041141A: mov     r10, rsi
 * 000000014041141D: nop     dword ptr [rax]
 * 0000000140411420: and     eax, 0Fh
 * 0000000140411423: jz      KiSystemServiceCopyEnd
 * 0000000140411429: shl     eax, 3
 * 000000014041142C: lea     rsp, [rsp-70h]
 * 0000000140411431: lea     rdi, [rsp+100h+var_E8]
 * 0000000140411436: mov     rsi, [rbp+100h]
 * 000000014041143D: lea     rsi, [rsi+20h]
 * 0000000140411441: test    byte ptr [rbp+0F0h], 1
 * 0000000140411448: jz      short loc_140411460
 * 000000014041144A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140411451: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140411459: nop     dword ptr [rax+00000000h]
 * 0000000140411460: lea     r11, KiSystemServiceCopyEnd
 * 0000000140411467: sub     r11, rax
 * 000000014041146A: jmp     r11
 * 0000000140411470: mov     rax, [rsi+70h]
 * 0000000140411474: mov     [rdi+70h], rax
 * 0000000140411478: mov     rax, [rsi+68h]
 * 000000014041147C: mov     [rdi+68h], rax
 * 0000000140411480: mov     rax, [rsi+60h]
 * 0000000140411484: mov     [rdi+60h], rax
 * 0000000140411488: mov     rax, [rsi+58h]
 * 000000014041148C: mov     [rdi+58h], rax
 * 0000000140411490: mov     rax, [rsi+50h]
 * 0000000140411494: mov     [rdi+50h], rax
 * 0000000140411498: mov     rax, [rsi+48h]
 * 000000014041149C: mov     [rdi+48h], rax
 * 00000001404114A0: mov     rax, [rsi+40h]
 * 00000001404114A4: mov     [rdi+40h], rax
 * 00000001404114A8: mov     rax, [rsi+38h]
 * 00000001404114AC: mov     [rdi+38h], rax
 * 00000001404114B0: mov     rax, [rsi+30h]
 * 00000001404114B4: mov     [rdi+30h], rax
 * 00000001404114B8: mov     rax, [rsi+28h]
 * 00000001404114BC: mov     [rdi+28h], rax
 * 00000001404114C0: mov     rax, [rsi+20h]
 * 00000001404114C4: mov     [rdi+20h], rax
 * 00000001404114C8: mov     rax, [rsi+18h]
 * 00000001404114CC: mov     [rdi+18h], rax
 * 00000001404114D0: mov     rax, [rsi+10h]
 * 00000001404114D4: mov     [rdi+10h], rax
 * 00000001404114D8: mov     rax, [rsi+8]
 * 00000001404114DC: mov     [rdi+8], rax
 * 00000001404114E0: test    cs:KiDynamicTraceMask, 1
 * 00000001404114EA: jnz     loc_140411C4D
 * 00000001404114F0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001404114FA: jnz     loc_140411CC1
 * 0000000140411500: mov     rax, r10
 * 0000000140411503: call    rax
 * 0000000140411505: nop     dword ptr [rax]
 * 0000000140411508: inc     dword ptr gs:2EB8h
 * 0000000140411510: mov     rbx, [rbp+0C0h]
 * 0000000140411517: mov     rdi, [rbp+0C8h]
 * 000000014041151E: mov     rsi, [rbp+0D0h]
 * 0000000140411525: mov     r11, gs:188h
 * 000000014041152E: test    byte ptr [rbp+0F0h], 1
 * 0000000140411535: jz      loc_1404118BF
 * 000000014041153B: mov     rcx, cr8
 * 000000014041153F: or      cl, [r11+24Ah]
 * 0000000140411546: or      ecx, [r11+1E4h]
 * 000000014041154D: jnz     loc_140411C19
 * 0000000140411553: cli
 * 0000000140411554: mov     rcx, gs:188h
 * 000000014041155D: test    byte ptr [rcx+0C2h], 3
 * 0000000140411564: jz      short loc_1404115BF
 * 0000000140411566: mov     [rbp-50h], rax
 * 000000014041156A: xor     eax, eax
 * 000000014041156C: mov     [rbp-48h], rax
 * 0000000140411570: mov     [rbp-40h], rax
 * 0000000140411574: mov     [rbp-38h], rax
 * 0000000140411578: mov     [rbp-30h], rax
 * 000000014041157C: mov     [rbp-28h], rax
 * 0000000140411580: mov     [rbp-20h], rax
 * 0000000140411584: pxor    xmm0, xmm0
 * 0000000140411588: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014041158C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140411590: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140411594: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140411598: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014041159C: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404115A0: mov     ecx, 1
 * 00000001404115A5: mov     cr8, rcx
 * 00000001404115A9: sti
 * 00000001404115AA: call    KiInitiateUserApc
 * 00000001404115AF: cli
 * 00000001404115B0: mov     ecx, 0
 * 00000001404115B5: mov     cr8, rcx
 * 00000001404115B9: mov     rax, [rbp-50h]
 * 00000001404115BD: jmp     short loc_140411554
 * 00000001404115BF: test    byte ptr gs:86Ch, 2
 * 00000001404115C8: jz      short loc_1404115D9
 * 00000001404115CA: mov     [rbp-50h], rax
 * 00000001404115CE: xor     ecx, ecx
 * 00000001404115D0: call    KiUpdateStibpPairing
 * 00000001404115D5: mov     rax, [rbp-50h]
 * 00000001404115D9: mov     rcx, gs:188h
 * 00000001404115E2: test    dword ptr [rcx], 8000000h
 * 00000001404115E8: jz      short loc_140411629
 * 00000001404115EA: mov     [rbp-50h], rax
 * 00000001404115EE: xor     eax, eax
 * 00000001404115F0: mov     [rbp-48h], rax
 * 00000001404115F4: mov     [rbp-40h], rax
 * 00000001404115F8: mov     [rbp-38h], rax
 * 00000001404115FC: mov     [rbp-30h], rax
 * 0000000140411600: mov     [rbp-28h], rax
 * 0000000140411604: mov     [rbp-20h], rax
 * 0000000140411608: pxor    xmm0, xmm0
 * 000000014041160C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140411610: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140411614: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140411618: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014041161C: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140411620: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140411624: call    KiRestoreSetContextState
 * 0000000140411629: mov     rcx, gs:188h
 * 0000000140411632: test    dword ptr [rcx], 40010000h
 * 0000000140411638: jz      short loc_140411667
 * 000000014041163A: mov     [rbp-50h], rax
 * 000000014041163E: test    byte ptr [rcx+2], 1
 * 0000000140411642: jz      short loc_140411652
 * 0000000140411644: call    KiCopyCounters
 * 0000000140411649: mov     rcx, gs:188h
 * 0000000140411652: test    byte ptr [rcx+3], 40h
 * 0000000140411656: jz      short loc_140411663
 * 0000000140411658: lea     rsp, [rbp-80h]
 * 000000014041165C: xor     ecx, ecx
 * 000000014041165E: call    KiUmsExit
 * 0000000140411663: mov     rax, [rbp-50h]
 * 0000000140411667: ldmxcsr dword ptr [rbp-54h]
 * 000000014041166B: xor     r10, r10
 * 000000014041166E: cmp     word ptr [rbp+80h], 0
 * 0000000140411676: jz      short loc_1404116B9
 * 0000000140411678: mov     [rbp-50h], rax
 * 000000014041167C: call    KiRestoreDebugRegisterState
 * 0000000140411681: mov     rax, gs:188h
 * 000000014041168A: mov     rax, [rax+0B8h]
 * 0000000140411691: mov     rax, [rax+3D8h]
 * 0000000140411698: or      rax, rax
 * 000000014041169B: jz      short loc_1404116B5
 * 000000014041169D: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001404116A5: jnz     short loc_1404116B5
 * 00000001404116A7: mov     r10, [rbp+0E8h]
 * 00000001404116AE: mov     [rbp+0E8h], rax
 * 00000001404116B5: mov     rax, [rbp-50h]
 * 00000001404116B9: mov     [rbp-50h], rax
 * 00000001404116BD: mov     byte ptr gs:856h, 0
 * 00000001404116C6: movzx   eax, word ptr gs:86Ah
 * 00000001404116CF: cmp     gs:864h, ax
 * 00000001404116D8: jz      short loc_1404116EC
 * 00000001404116DA: mov     gs:864h, ax
 * 00000001404116E3: mov     ecx, 48h ; 'H'
 * 00000001404116E8: xor     edx, edx
 * 00000001404116EA: wrmsr
 * 00000001404116EC: btr     word ptr gs:860h, 2
 * 00000001404116F7: jnb     short loc_140411707
 * 00000001404116F9: mov     eax, 1
 * 00000001404116FE: xor     edx, edx
 * 0000000140411700: mov     ecx, 49h ; 'I'
 * 0000000140411705: wrmsr
 * 0000000140411707: btr     word ptr gs:860h, 5
 * 0000000140411712: jnb     loc_14041183D
 * 0000000140411718: call    loc_14041182B
 * 000000014041171D: add     rsp, 8
 * 0000000140411721: call    loc_140411834
 * 0000000140411726: add     rsp, 8
 * 000000014041172A: call    loc_14041171D
 * 000000014041172F: add     rsp, 8
 * 0000000140411733: call    loc_140411726
 * 0000000140411738: add     rsp, 8
 * 000000014041173C: call    loc_14041172F
 * 0000000140411741: add     rsp, 8
 * 0000000140411745: call    loc_140411738
 * 000000014041174A: add     rsp, 8
 * 000000014041174E: call    loc_140411741
 * 0000000140411753: add     rsp, 8
 * 0000000140411757: call    loc_14041174A
 * 000000014041175C: add     rsp, 8
 * 0000000140411760: call    loc_140411753
 * 0000000140411765: add     rsp, 8
 * 0000000140411769: call    loc_14041175C
 * 000000014041176E: add     rsp, 8
 * 0000000140411772: call    loc_140411765
 * 0000000140411777: add     rsp, 8
 * 000000014041177B: call    loc_14041176E
 * 0000000140411780: add     rsp, 8
 * 0000000140411784: call    loc_140411777
 * 0000000140411789: add     rsp, 8
 * 000000014041178D: call    loc_140411780
 * 0000000140411792: add     rsp, 8
 * 0000000140411796: call    loc_140411789
 * 000000014041179B: add     rsp, 8
 * 000000014041179F: call    loc_140411792
 * 00000001404117A4: add     rsp, 8
 * 00000001404117A8: call    loc_14041179B
 * 00000001404117AD: add     rsp, 8
 * 00000001404117B1: call    loc_1404117A4
 * 00000001404117B6: add     rsp, 8
 * 00000001404117BA: call    loc_1404117AD
 * 00000001404117BF: add     rsp, 8
 * 00000001404117C3: call    loc_1404117B6
 * 00000001404117C8: add     rsp, 8
 * 00000001404117CC: call    loc_1404117BF
 * 00000001404117D1: add     rsp, 8
 * 00000001404117D5: call    loc_1404117C8
 * 00000001404117DA: add     rsp, 8
 * 00000001404117DE: call    loc_1404117D1
 * 00000001404117E3: add     rsp, 8
 * 00000001404117E7: call    loc_1404117DA
 * 00000001404117EC: add     rsp, 8
 * 00000001404117F0: call    loc_1404117E3
 * 00000001404117F5: add     rsp, 8
 * 00000001404117F9: call    loc_1404117EC
 * 00000001404117FE: add     rsp, 8
 * 0000000140411802: call    loc_1404117F5
 * 0000000140411807: add     rsp, 8
 * 000000014041180B: call    loc_1404117FE
 * 0000000140411810: add     rsp, 8
 * 0000000140411814: call    loc_140411807
 * 0000000140411819: add     rsp, 8
 * 000000014041181D: call    loc_140411810
 * 0000000140411822: add     rsp, 8
 * 0000000140411826: call    loc_140411819
 * 000000014041182B: add     rsp, 8
 * 000000014041182F: call    loc_140411822
 * 0000000140411834: add     rsp, 8
 * 0000000140411838: mov     eax, 0DADAh
 * 000000014041183D: test    word ptr gs:860h, 80h
 * 0000000140411848: jz      short loc_140411856
 * 000000014041184A: xor     eax, eax
 * 000000014041184C: xor     edx, edx
 * 000000014041184E: mov     ecx, 1
 * 0000000140411853: div     rcx
 * 0000000140411856: mov     rax, [rbp-50h]
 * 000000014041185A: mov     r8, [rbp+100h]
 * 0000000140411861: mov     r9, [rbp+0D8h]
 * 0000000140411868: xor     edx, edx
 * 000000014041186A: pxor    xmm0, xmm0
 * 000000014041186E: pxor    xmm1, xmm1
 * 0000000140411872: pxor    xmm2, xmm2
 * 0000000140411876: pxor    xmm3, xmm3
 * 000000014041187A: pxor    xmm4, xmm4
 * 000000014041187E: pxor    xmm5, xmm5
 * 0000000140411882: mov     rcx, [rbp+0E8h]
 * 0000000140411889: mov     r11, [rbp+0F8h]
 * 0000000140411890: test    cs:KiKvaShadow, 1
 * 0000000140411897: jnz     KiKernelSysretExit
 * 000000014041189D: mov     rbp, r9
 * 00000001404118A0: mov     rsp, r8
 * 00000001404118A3: test    word ptr gs:860h, 100h
 * 00000001404118AE: jz      short loc_1404118B9
 * 00000001404118B0: verw    word ptr gs:902Ah
 * 00000001404118B9: swapgs
 * 00000001404118BC: sysret
 * 00000001404118BF: mov     rdx, [rbp+0B8h]
 * 00000001404118C6: mov     [r11+90h], rdx
 * 00000001404118CD: mov     dl, [rbp-58h]
 * 00000001404118D0: mov     [r11+232h], dl
 * 00000001404118D7: cli
 * 00000001404118D8: mov     rsp, rbp
 * 00000001404118DB: mov     rbp, [rbp+0D8h]
 * 00000001404118E2: mov     rsp, [rsp+90h+arg_68]
 * 00000001404118EA: sti
 * 00000001404118EB: retn
 * 00000001404118EC: mov     r11, gs:188h
 * 00000001404118F5: mov     rcx, cr8
 * 00000001404118F9: or      cl, [r11+24Ah]
 * 0000000140411900: or      ecx, [r11+1E4h]
 * 0000000140411907: jnz     loc_140411C19
 * 000000014041190D: cli
 * 000000014041190E: mov     [rbp-50h], rax
 * 0000000140411912: mov     rcx, gs:188h
 * 000000014041191B: test    byte ptr [rcx+0C2h], 3
 * 0000000140411922: jz      short loc_14041193F
 * 0000000140411924: mov     ecx, 1
 * 0000000140411929: mov     cr8, rcx
 * 000000014041192D: sti
 * 000000014041192E: call    KiInitiateUserApc
 * 0000000140411933: mov     ecx, 0
 * 0000000140411938: mov     cr8, rcx
 * 000000014041193C: cli
 * 000000014041193D: jmp     short loc_140411912
 * 000000014041193F: test    byte ptr gs:86Ch, 2
 * 0000000140411948: jz      short loc_140411951
 * 000000014041194A: xor     ecx, ecx
 * 000000014041194C: call    KiUpdateStibpPairing
 * 0000000140411951: mov     rcx, gs:188h
 * 000000014041195A: test    dword ptr [rcx], 8000000h
 * 0000000140411960: jz      short loc_140411967
 * 0000000140411962: call    KiRestoreSetContextState
 * 0000000140411967: mov     rcx, gs:188h
 * 0000000140411970: test    byte ptr [rcx+2], 1
 * 0000000140411974: jz      short loc_140411984
 * 0000000140411976: call    KiCopyCounters
 * 000000014041197B: mov     rcx, gs:188h
 * 0000000140411984: cmp     word ptr [rbp+80h], 0
 * 000000014041198C: jz      short loc_140411993
 * 000000014041198E: call    KiRestoreDebugRegisterState
 * 0000000140411993: mov     byte ptr gs:856h, 0
 * 000000014041199C: movzx   eax, word ptr gs:86Ah
 * 00000001404119A5: cmp     gs:864h, ax
 * 00000001404119AE: jz      short loc_1404119C2
 * 00000001404119B0: mov     gs:864h, ax
 * 00000001404119B9: mov     ecx, 48h ; 'H'
 * 00000001404119BE: xor     edx, edx
 * 00000001404119C0: wrmsr
 * 00000001404119C2: btr     word ptr gs:860h, 2
 * 00000001404119CD: jnb     short loc_1404119DD
 * 00000001404119CF: mov     eax, 1
 * 00000001404119D4: xor     edx, edx
 * 00000001404119D6: mov     ecx, 49h ; 'I'
 * 00000001404119DB: wrmsr
 * 00000001404119DD: btr     word ptr gs:860h, 5
 * 00000001404119E8: jnb     loc_140411B13
 * 00000001404119EE: call    loc_140411B01
 * 00000001404119F3: add     rsp, 8
 * 00000001404119F7: call    loc_140411B0A
 * 00000001404119FC: add     rsp, 8
 * 0000000140411A00: call    loc_1404119F3
 * 0000000140411A05: add     rsp, 8
 * 0000000140411A09: call    loc_1404119FC
 * 0000000140411A0E: add     rsp, 8
 * 0000000140411A12: call    loc_140411A05
 * 0000000140411A17: add     rsp, 8
 * 0000000140411A1B: call    loc_140411A0E
 * 0000000140411A20: add     rsp, 8
 * 0000000140411A24: call    loc_140411A17
 * 0000000140411A29: add     rsp, 8
 * 0000000140411A2D: call    loc_140411A20
 * 0000000140411A32: add     rsp, 8
 * 0000000140411A36: call    loc_140411A29
 * 0000000140411A3B: add     rsp, 8
 * 0000000140411A3F: call    loc_140411A32
 * 0000000140411A44: add     rsp, 8
 * 0000000140411A48: call    loc_140411A3B
 * 0000000140411A4D: add     rsp, 8
 * 0000000140411A51: call    loc_140411A44
 * 0000000140411A56: add     rsp, 8
 * 0000000140411A5A: call    loc_140411A4D
 * 0000000140411A5F: add     rsp, 8
 * 0000000140411A63: call    loc_140411A56
 * 0000000140411A68: add     rsp, 8
 * 0000000140411A6C: call    loc_140411A5F
 * 0000000140411A71: add     rsp, 8
 * 0000000140411A75: call    loc_140411A68
 * 0000000140411A7A: add     rsp, 8
 * 0000000140411A7E: call    loc_140411A71
 * 0000000140411A83: add     rsp, 8
 * 0000000140411A87: call    loc_140411A7A
 * 0000000140411A8C: add     rsp, 8
 * 0000000140411A90: call    loc_140411A83
 * 0000000140411A95: add     rsp, 8
 * 0000000140411A99: call    loc_140411A8C
 * 0000000140411A9E: add     rsp, 8
 * 0000000140411AA2: call    loc_140411A95
 * 0000000140411AA7: add     rsp, 8
 * 0000000140411AAB: call    loc_140411A9E
 * 0000000140411AB0: add     rsp, 8
 * 0000000140411AB4: call    loc_140411AA7
 * 0000000140411AB9: add     rsp, 8
 * 0000000140411ABD: call    loc_140411AB0
 * 0000000140411AC2: add     rsp, 8
 * 0000000140411AC6: call    loc_140411AB9
 * 0000000140411ACB: add     rsp, 8
 * 0000000140411ACF: call    loc_140411AC2
 * 0000000140411AD4: add     rsp, 8
 * 0000000140411AD8: call    loc_140411ACB
 * 0000000140411ADD: add     rsp, 8
 * 0000000140411AE1: call    loc_140411AD4
 * 0000000140411AE6: add     rsp, 8
 * 0000000140411AEA: call    loc_140411ADD
 * 0000000140411AEF: add     rsp, 8
 * 0000000140411AF3: call    loc_140411AE6
 * 0000000140411AF8: add     rsp, 8
 * 0000000140411AFC: call    loc_140411AEF
 * 0000000140411B01: add     rsp, 8
 * 0000000140411B05: call    loc_140411AF8
 * 0000000140411B0A: add     rsp, 8
 * 0000000140411B0E: mov     eax, 0DADAh
 * 0000000140411B13: test    word ptr gs:860h, 80h
 * 0000000140411B1E: jz      short loc_140411B2C
 * 0000000140411B20: xor     eax, eax
 * 0000000140411B22: xor     edx, edx
 * 0000000140411B24: mov     ecx, 1
 * 0000000140411B29: div     rcx
 * 0000000140411B2C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140411B30: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140411B34: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140411B38: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140411B3C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140411B40: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140411B44: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140411B48: mov     r11, [rbp-20h]
 * 0000000140411B4C: mov     r10, [rbp-28h]
 * 0000000140411B50: mov     r9, [rbp-30h]
 * 0000000140411B54: mov     r8, [rbp-38h]
 * 0000000140411B58: mov     rdx, [rbp-40h]
 * 0000000140411B5C: mov     rcx, [rbp-48h]
 * 0000000140411B60: mov     rax, [rbp-50h]
 * 0000000140411B64: mov     rsi, [rbp+0D0h]
 * 0000000140411B6B: mov     rdi, [rbp+0C8h]
 * 0000000140411B72: mov     rbx, [rbp+0C0h]
 * 0000000140411B79: mov     rsp, rbp
 * 0000000140411B7C: mov     rbp, [rbp+0D8h]
 * 0000000140411B83: add     rsp, 0E8h
 * 0000000140411B8A: test    cs:KiKvaShadow, 1
 * 0000000140411B91: jz      short loc_140411B98
 * 0000000140411B93: jmp     KiKernelExit
 * 0000000140411B98: test    word ptr gs:860h, 100h
 * 0000000140411BA3: jz      short loc_140411BAA
 * 0000000140411BA5: verw    [rsp-158h+arg_170]
 * 0000000140411BAA: swapgs
 * 0000000140411BAD: iretq
 * 0000000140411BAF: cmp     edi, 20h ; ' '
 * 0000000140411BB2: jnz     short loc_140411C0F
 * 0000000140411BB4: mov     [rbp-80h], eax
 * 0000000140411BB7: mov     [rbp-78h], rcx
 * 0000000140411BBB: mov     [rbp-70h], rdx
 * 0000000140411BBF: mov     [rbp-68h], r8
 * 0000000140411BC3: mov     [rbp-60h], r9
 * 0000000140411BC7: call    KiConvertToGuiThread
 * 0000000140411BCC: or      eax, eax
 * 0000000140411BCE: mov     eax, [rbp-80h]
 * 0000000140411BD1: mov     rcx, [rbp-78h]
 * 0000000140411BD5: mov     rdx, [rbp-70h]
 * 0000000140411BD9: mov     r8, [rbp-68h]
 * 0000000140411BDD: mov     r9, [rbp-60h]
 * 0000000140411BE1: mov     [rbx+90h], rsp
 * 0000000140411BE8: jz      KiSystemServiceRepeat
 * 0000000140411BEE: lea     rdi, xmmword_140CFCA60
 * 0000000140411BF5: mov     esi, [rdi+10h]
 * 0000000140411BF8: mov     rdi, [rdi]
 * 0000000140411BFB: cmp     eax, esi
 * 0000000140411BFD: jnb     short loc_140411C0F
 * 0000000140411BFF: lea     rdi, [rdi+rsi*4]
 * 0000000140411C03: movsx   eax, byte ptr [rdi+rax]
 * 0000000140411C07: or      eax, eax
 * 0000000140411C09: jle     KiSystemServiceExit
 * 0000000140411C0F: mov     eax, 0C000001Ch
 * 0000000140411C14: jmp     KiSystemServiceExit
 * 0000000140411C19: mov     ecx, 4Ah ; 'J'
 * 0000000140411C1E: xor     r9d, r9d
 * 0000000140411C21: mov     r8, cr8
 * 0000000140411C25: or      r8d, r8d
 * 0000000140411C28: jnz     short loc_140411C3E
 * 0000000140411C2A: mov     ecx, 1
 * 0000000140411C2F: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140411C37: mov     r9d, [r11+1E4h]
 * 0000000140411C3E: mov     rdx, [rbp+0E8h]
 * 0000000140411C45: mov     r10, rbp
 * 0000000140411C48: call    KiBugCheckDispatch
 * 0000000140411C4D: sub     rsp, 50h
 * 0000000140411C51: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140411C56: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140411C5B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140411C60: mov     [rsp+0E0h+var_A8], r9
 * 0000000140411C65: mov     [rsp+0E0h+var_A0], r10
 * 0000000140411C6A: mov     rcx, r10
 * 0000000140411C6D: mov     rdx, rsp
 * 0000000140411C70: add     rdx, 20h ; ' '
 * 0000000140411C74: mov     r8, 4
 * 0000000140411C7B: mov     r9, rsp
 * 0000000140411C7E: add     r9, 70h ; 'p'
 * 0000000140411C82: call    KiTrackSystemCallEntry
 * 0000000140411C87: mov     [rbp-50h], rax
 * 0000000140411C8B: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140411C90: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140411C95: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140411C9A: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140411C9F: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140411CA4: add     rsp, 50h
 * 0000000140411CA8: mov     rax, r10
 * 0000000140411CAB: call    rax
 * 0000000140411CAD: nop     dword ptr [rax]
 * 0000000140411CB0: mov     rcx, [rbp-50h]
 * 0000000140411CB4: mov     rdx, rax
 * 0000000140411CB7: call    KiTrackSystemCallExit
 * 0000000140411CBC: jmp     loc_140411508
 * 0000000140411CC1: sub     rsp, 50h
 * 0000000140411CC5: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140411CCA: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140411CCF: mov     [rsp+0E0h+var_B0], r8
 * 0000000140411CD4: mov     [rsp+0E0h+var_A8], r9
 * 0000000140411CD9: mov     [rsp+0E0h+var_A0], r10
 * 0000000140411CDE: mov     rcx, r10
 * 0000000140411CE1: call    PerfInfoLogSysCallEntry
 * 0000000140411CE6: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140411CEB: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140411CF0: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140411CF5: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140411CFA: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140411CFF: add     rsp, 50h
 * 0000000140411D03: mov     rax, r10
 * 0000000140411D06: call    rax
 * 0000000140411D08: nop     dword ptr [rax]
 * 0000000140411D0B: mov     rcx, rax
 * 0000000140411D0E: call    PerfInfoLogSysCallExit
 * 0000000140411D13: jmp     loc_140411508
 * 0000000140411D18: retn
 */
