/*
 * XREFs of KiBoundFault @ 0x14040AFC0
 * Callers:
 *     KiBoundFaultShadow @ 0x140A143C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14040AFC0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140411D40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x140412B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x140514AB0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14040AFC0
 * Reason: Hex-Rays returned no pseudocode for 0x14040AFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040AFC0: sub     rsp, 8
 * 000000014040AFC4: push    rbp
 * 000000014040AFC5: sub     rsp, 158h
 * 000000014040AFCC: lea     rbp, [rsp+80h]
 * 000000014040AFD4: mov     [rbp+0E8h+var_13D], 1
 * 000000014040AFD8: mov     [rbp+0E8h+var_138], rax
 * 000000014040AFDC: mov     [rbp+0E8h+var_130], rcx
 * 000000014040AFE0: mov     [rbp+0E8h+var_128], rdx
 * 000000014040AFE4: mov     [rbp+0E8h+var_120], r8
 * 000000014040AFE8: mov     [rbp+0E8h+var_118], r9
 * 000000014040AFEC: mov     [rbp+0E8h+var_110], r10
 * 000000014040AFF0: mov     [rbp+0E8h+var_108], r11
 * 000000014040AFF4: test    [rbp+0E8h+arg_0], 1
 * 000000014040AFFB: jnz     short loc_14040B02C
 * 000000014040AFFD: lfence
 * 000000014040B000: test    word ptr gs:860h, 1
 * 000000014040B00B: jnz     short loc_14040B015
 * 000000014040B00D: lfence
 * 000000014040B010: jmp     loc_14040B27E
 * 000000014040B015: movzx   eax, word ptr gs:864h
 * 000000014040B01E: mov     ecx, 48h ; 'H'
 * 000000014040B023: xor     edx, edx
 * 000000014040B025: wrmsr
 * 000000014040B027: jmp     loc_14040B27E
 * 000000014040B02C: test    cs:KiKvaShadow, 1
 * 000000014040B033: jnz     short loc_14040B038
 * 000000014040B035: swapgs
 * 000000014040B038: lfence
 * 000000014040B03B: mov     r10, gs:188h
 * 000000014040B044: mov     rcx, gs:188h
 * 000000014040B04D: mov     rcx, [rcx+220h]
 * 000000014040B054: mov     rcx, [rcx+9E0h]
 * 000000014040B05B: mov     gs:858h, rcx
 * 000000014040B064: mov     cx, gs:850h
 * 000000014040B06D: mov     gs:852h, cx
 * 000000014040B076: mov     cx, gs:860h
 * 000000014040B07F: mov     gs:854h, cx
 * 000000014040B088: movzx   eax, word ptr gs:866h
 * 000000014040B091: cmp     gs:864h, ax
 * 000000014040B09A: jz      short loc_14040B0AE
 * 000000014040B09C: mov     gs:864h, ax
 * 000000014040B0A5: mov     ecx, 48h ; 'H'
 * 000000014040B0AA: xor     edx, edx
 * 000000014040B0AC: wrmsr
 * 000000014040B0AE: movzx   edx, word ptr gs:860h
 * 000000014040B0B7: test    edx, 8
 * 000000014040B0BD: jz      short loc_14040B0D6
 * 000000014040B0BF: mov     eax, 1
 * 000000014040B0C4: xor     edx, edx
 * 000000014040B0C6: mov     ecx, 49h ; 'I'
 * 000000014040B0CB: wrmsr
 * 000000014040B0CD: movzx   edx, word ptr gs:860h
 * 000000014040B0D6: test    edx, 2
 * 000000014040B0DC: jz      loc_14040B207
 * 000000014040B0E2: call    loc_14040B1F5
 * 000000014040B0E7: add     rsp, 8
 * 000000014040B0EB: call    loc_14040B1FE
 * 000000014040B0F0: add     rsp, 8
 * 000000014040B0F4: call    loc_14040B0E7
 * 000000014040B0F9: add     rsp, 8
 * 000000014040B0FD: call    loc_14040B0F0
 * 000000014040B102: add     rsp, 8
 * 000000014040B106: call    loc_14040B0F9
 * 000000014040B10B: add     rsp, 8
 * 000000014040B10F: call    loc_14040B102
 * 000000014040B114: add     rsp, 8
 * 000000014040B118: call    loc_14040B10B
 * 000000014040B11D: add     rsp, 8
 * 000000014040B121: call    loc_14040B114
 * 000000014040B126: add     rsp, 8
 * 000000014040B12A: call    loc_14040B11D
 * 000000014040B12F: add     rsp, 8
 * 000000014040B133: call    loc_14040B126
 * 000000014040B138: add     rsp, 8
 * 000000014040B13C: call    loc_14040B12F
 * 000000014040B141: add     rsp, 8
 * 000000014040B145: call    loc_14040B138
 * 000000014040B14A: add     rsp, 8
 * 000000014040B14E: call    loc_14040B141
 * 000000014040B153: add     rsp, 8
 * 000000014040B157: call    loc_14040B14A
 * 000000014040B15C: add     rsp, 8
 * 000000014040B160: call    loc_14040B153
 * 000000014040B165: add     rsp, 8
 * 000000014040B169: call    loc_14040B15C
 * 000000014040B16E: add     rsp, 8
 * 000000014040B172: call    loc_14040B165
 * 000000014040B177: add     rsp, 8
 * 000000014040B17B: call    loc_14040B16E
 * 000000014040B180: add     rsp, 8
 * 000000014040B184: call    loc_14040B177
 * 000000014040B189: add     rsp, 8
 * 000000014040B18D: call    loc_14040B180
 * 000000014040B192: add     rsp, 8
 * 000000014040B196: call    loc_14040B189
 * 000000014040B19B: add     rsp, 8
 * 000000014040B19F: call    loc_14040B192
 * 000000014040B1A4: add     rsp, 8
 * 000000014040B1A8: call    loc_14040B19B
 * 000000014040B1AD: add     rsp, 8
 * 000000014040B1B1: call    loc_14040B1A4
 * 000000014040B1B6: add     rsp, 8
 * 000000014040B1BA: call    loc_14040B1AD
 * 000000014040B1BF: add     rsp, 8
 * 000000014040B1C3: call    loc_14040B1B6
 * 000000014040B1C8: add     rsp, 8
 * 000000014040B1CC: call    loc_14040B1BF
 * 000000014040B1D1: add     rsp, 8
 * 000000014040B1D5: call    loc_14040B1C8
 * 000000014040B1DA: add     rsp, 8
 * 000000014040B1DE: call    loc_14040B1D1
 * 000000014040B1E3: add     rsp, 8
 * 000000014040B1E7: call    loc_14040B1DA
 * 000000014040B1EC: add     rsp, 8
 * 000000014040B1F0: call    loc_14040B1E3
 * 000000014040B1F5: add     rsp, 8
 * 000000014040B1F9: call    loc_14040B1EC
 * 000000014040B1FE: add     rsp, 8
 * 000000014040B202: mov     eax, 0DADAh
 * 000000014040B207: test    edx, 200h
 * 000000014040B20D: jz      short loc_14040B214
 * 000000014040B20F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040B214: lfence
 * 000000014040B217: mov     byte ptr gs:856h, 0
 * 000000014040B220: test    byte ptr [r10+3], 80h
 * 000000014040B225: jz      short loc_14040B269
 * 000000014040B227: mov     ecx, 0C0000102h
 * 000000014040B22C: rdmsr
 * 000000014040B22E: shl     rdx, 20h
 * 000000014040B232: or      rax, rdx
 * 000000014040B235: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B23C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B244: cmp     [r10+0F0h], rax
 * 000000014040B24B: jz      short loc_14040B269
 * 000000014040B24D: mov     rdx, [r10+1F0h]
 * 000000014040B254: bts     dword ptr [r10+74h], 8
 * 000000014040B25A: dec     word ptr [r10+1E6h]
 * 000000014040B262: mov     [rdx+80h], rax
 * 000000014040B269: test    byte ptr [r10+3], 3
 * 000000014040B26E: mov     [rbp+0E8h+var_68], 0
 * 000000014040B277: jz      short loc_14040B27E
 * 000000014040B279: call    KiSaveDebugRegisterState
 * 000000014040B27E: cld
 * 000000014040B27F: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040B283: ldmxcsr dword ptr gs:180h
 * 000000014040B28C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040B290: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040B294: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040B298: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040B29C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040B2A0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040B2A4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B2AB: jz      short loc_14040B2B9
 * 000000014040B2AD: test    [rbp+0E8h+arg_0], 1
 * 000000014040B2B4: jz      short loc_14040B2B9
 * 000000014040B2B6: stac
 * 000000014040B2B9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040B2C3: jz      short loc_14040B2C6
 * 000000014040B2C5: sti
 * 000000014040B2C6: test    [rbp+0E8h+arg_0], 1
 * 000000014040B2CD: jz      short loc_14040B326
 * 000000014040B2CF: mov     r9, gs:188h
 * 000000014040B2D8: bt      dword ptr [r9+74h], 8
 * 000000014040B2DE: jnb     short loc_14040B2E5
 * 000000014040B2E0: call    KiUmsTrapEntry
 * 000000014040B2E5: call    KiHandleBound
 * 000000014040B2EA: cmp     eax, 0
 * 000000014040B2ED: jz      short loc_14040B326
 * 000000014040B2EF: cmp     eax, 1
 * 000000014040B2F2: jz      short loc_14040B33A
 * 000000014040B2F4: cmp     eax, 2
 * 000000014040B2F7: jz      short loc_14040B308
 * 000000014040B2F9: mov     edx, 5
 * 000000014040B2FE: mov     ecx, 7Fh
 * 000000014040B303: call    KiBugCheckDispatch
 * 000000014040B308: mov     r9, 1Ch
 * 000000014040B30F: mov     ecx, 0C0000409h
 * 000000014040B314: mov     edx, 1
 * 000000014040B319: mov     r8, [rbp+0E8h]
 * 000000014040B320: call    KiFastFailDispatch
 * 000000014040B325: nop
 * 000000014040B326: mov     ecx, 0C000008Ch
 * 000000014040B32B: xor     edx, edx
 * 000000014040B32D: mov     r8, [rbp+0E8h]
 * 000000014040B334: call    KiExceptionDispatch
 * 000000014040B339: nop
 * 000000014040B33A: cli
 * 000000014040B33B: test    [rbp+0E8h+arg_0], 1
 * 000000014040B342: jz      loc_14040B5F5
 * 000000014040B348: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B34F: jz      short loc_14040B354
 * 000000014040B351: stac
 * 000000014040B354: mov     rcx, gs:188h
 * 000000014040B35D: test    byte ptr [rcx+0C2h], 3
 * 000000014040B364: jz      short loc_14040B381
 * 000000014040B366: mov     ecx, 1
 * 000000014040B36B: mov     cr8, rcx
 * 000000014040B36F: sti
 * 000000014040B370: call    KiInitiateUserApc
 * 000000014040B375: cli
 * 000000014040B376: mov     ecx, 0
 * 000000014040B37B: mov     cr8, rcx
 * 000000014040B37F: jmp     short loc_14040B354
 * 000000014040B381: test    byte ptr gs:86Ch, 2
 * 000000014040B38A: jz      short loc_14040B393
 * 000000014040B38C: xor     ecx, ecx
 * 000000014040B38E: call    KiUpdateStibpPairing
 * 000000014040B393: mov     rcx, gs:188h
 * 000000014040B39C: test    dword ptr [rcx], 8000000h
 * 000000014040B3A2: jz      short loc_14040B3A9
 * 000000014040B3A4: call    KiRestoreSetContextState
 * 000000014040B3A9: mov     rcx, gs:188h
 * 000000014040B3B2: test    dword ptr [rcx], 40010000h
 * 000000014040B3B8: jz      short loc_14040B3DF
 * 000000014040B3BA: test    byte ptr [rcx+2], 1
 * 000000014040B3BE: jz      short loc_14040B3CE
 * 000000014040B3C0: call    KiCopyCounters
 * 000000014040B3C5: mov     rcx, gs:188h
 * 000000014040B3CE: test    byte ptr [rcx+3], 40h
 * 000000014040B3D2: jz      short loc_14040B3DF
 * 000000014040B3D4: lea     rsp, [rbp-80h]
 * 000000014040B3D8: mov     cl, 1
 * 000000014040B3DA: call    KiUmsExit
 * 000000014040B3DF: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040B3E3: cmp     [rbp+0E8h+var_68], 0
 * 000000014040B3EB: jz      short loc_14040B3F2
 * 000000014040B3ED: call    KiRestoreDebugRegisterState
 * 000000014040B3F2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040B3F6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040B3FA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040B3FE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040B402: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040B406: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040B40A: mov     r11, [rbp+0E8h+var_108]
 * 000000014040B40E: mov     r10, [rbp+0E8h+var_110]
 * 000000014040B412: mov     r9, [rbp+0E8h+var_118]
 * 000000014040B416: mov     r8, [rbp+0E8h+var_120]
 * 000000014040B41A: mov     byte ptr gs:856h, 0
 * 000000014040B423: movzx   eax, word ptr gs:86Ah
 * 000000014040B42C: cmp     gs:864h, ax
 * 000000014040B435: jz      short loc_14040B449
 * 000000014040B437: mov     gs:864h, ax
 * 000000014040B440: mov     ecx, 48h ; 'H'
 * 000000014040B445: xor     edx, edx
 * 000000014040B447: wrmsr
 * 000000014040B449: btr     word ptr gs:860h, 2
 * 000000014040B454: jnb     short loc_14040B464
 * 000000014040B456: mov     eax, 1
 * 000000014040B45B: xor     edx, edx
 * 000000014040B45D: mov     ecx, 49h ; 'I'
 * 000000014040B462: wrmsr
 * 000000014040B464: btr     word ptr gs:860h, 5
 * 000000014040B46F: jnb     loc_14040B59A
 * 000000014040B475: call    loc_14040B588
 * 000000014040B47A: add     rsp, 8
 * 000000014040B47E: call    loc_14040B591
 * 000000014040B483: add     rsp, 8
 * 000000014040B487: call    loc_14040B47A
 * 000000014040B48C: add     rsp, 8
 * 000000014040B490: call    loc_14040B483
 * 000000014040B495: add     rsp, 8
 * 000000014040B499: call    loc_14040B48C
 * 000000014040B49E: add     rsp, 8
 * 000000014040B4A2: call    loc_14040B495
 * 000000014040B4A7: add     rsp, 8
 * 000000014040B4AB: call    loc_14040B49E
 * 000000014040B4B0: add     rsp, 8
 * 000000014040B4B4: call    loc_14040B4A7
 * 000000014040B4B9: add     rsp, 8
 * 000000014040B4BD: call    loc_14040B4B0
 * 000000014040B4C2: add     rsp, 8
 * 000000014040B4C6: call    loc_14040B4B9
 * 000000014040B4CB: add     rsp, 8
 * 000000014040B4CF: call    loc_14040B4C2
 * 000000014040B4D4: add     rsp, 8
 * 000000014040B4D8: call    loc_14040B4CB
 * 000000014040B4DD: add     rsp, 8
 * 000000014040B4E1: call    loc_14040B4D4
 * 000000014040B4E6: add     rsp, 8
 * 000000014040B4EA: call    loc_14040B4DD
 * 000000014040B4EF: add     rsp, 8
 * 000000014040B4F3: call    loc_14040B4E6
 * 000000014040B4F8: add     rsp, 8
 * 000000014040B4FC: call    loc_14040B4EF
 * 000000014040B501: add     rsp, 8
 * 000000014040B505: call    loc_14040B4F8
 * 000000014040B50A: add     rsp, 8
 * 000000014040B50E: call    loc_14040B501
 * 000000014040B513: add     rsp, 8
 * 000000014040B517: call    loc_14040B50A
 * 000000014040B51C: add     rsp, 8
 * 000000014040B520: call    loc_14040B513
 * 000000014040B525: add     rsp, 8
 * 000000014040B529: call    loc_14040B51C
 * 000000014040B52E: add     rsp, 8
 * 000000014040B532: call    loc_14040B525
 * 000000014040B537: add     rsp, 8
 * 000000014040B53B: call    loc_14040B52E
 * 000000014040B540: add     rsp, 8
 * 000000014040B544: call    loc_14040B537
 * 000000014040B549: add     rsp, 8
 * 000000014040B54D: call    loc_14040B540
 * 000000014040B552: add     rsp, 8
 * 000000014040B556: call    loc_14040B549
 * 000000014040B55B: add     rsp, 8
 * 000000014040B55F: call    loc_14040B552
 * 000000014040B564: add     rsp, 8
 * 000000014040B568: call    loc_14040B55B
 * 000000014040B56D: add     rsp, 8
 * 000000014040B571: call    loc_14040B564
 * 000000014040B576: add     rsp, 8
 * 000000014040B57A: call    loc_14040B56D
 * 000000014040B57F: add     rsp, 8
 * 000000014040B583: call    loc_14040B576
 * 000000014040B588: add     rsp, 8
 * 000000014040B58C: call    loc_14040B57F
 * 000000014040B591: add     rsp, 8
 * 000000014040B595: mov     eax, 0DADAh
 * 000000014040B59A: test    word ptr gs:860h, 80h
 * 000000014040B5A5: jz      short loc_14040B5B3
 * 000000014040B5A7: xor     eax, eax
 * 000000014040B5A9: xor     edx, edx
 * 000000014040B5AB: mov     ecx, 1
 * 000000014040B5B0: div     rcx
 * 000000014040B5B3: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040B5B7: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040B5BB: mov     rax, [rbp+0E8h+var_138]
 * 000000014040B5BF: mov     rsp, rbp
 * 000000014040B5C2: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040B5C9: add     rsp, 0E8h
 * 000000014040B5D0: test    cs:KiKvaShadow, 1
 * 000000014040B5D7: jz      short loc_14040B5DE
 * 000000014040B5D9: jmp     KiKernelExit
 * 000000014040B5DE: test    word ptr gs:860h, 100h
 * 000000014040B5E9: jz      short loc_14040B5F0
 * 000000014040B5EB: verw    [rsp+arg_18]
 * 000000014040B5F0: swapgs
 * 000000014040B5F3: iretq
 * 000000014040B5F5: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014040B5F9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014040B5FD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014040B601: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014040B605: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014040B609: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014040B60D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014040B611: mov     r11, [rbp+0E8h+var_108]
 * 000000014040B615: mov     r10, [rbp+0E8h+var_110]
 * 000000014040B619: mov     r9, [rbp+0E8h+var_118]
 * 000000014040B61D: mov     r8, [rbp+0E8h+var_120]
 * 000000014040B621: mov     rdx, [rbp+0E8h+var_128]
 * 000000014040B625: mov     rcx, [rbp+0E8h+var_130]
 * 000000014040B629: mov     rax, [rbp+0E8h+var_138]
 * 000000014040B62D: mov     rsp, rbp
 * 000000014040B630: mov     rbp, [rbp+0E8h+var_10]
 * 000000014040B637: add     rsp, 0E8h
 * 000000014040B63E: iretq
 */
