/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x14040FEC0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140A14D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x14040FEC0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140412280 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x14040FEC0
 * Reason: Hex-Rays returned no pseudocode for 0x14040FEC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040FEC0: sub     qword ptr [rsp+0], 2
 * 000000014040FEC5: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040FECB: jnz     short loc_14040FED2
 * 000000014040FECD: and     dword ptr [rsp+4], 0
 * 000000014040FED2: sub     rsp, 8
 * 000000014040FED6: push    rbp
 * 000000014040FED7: sub     rsp, 158h
 * 000000014040FEDE: lea     rbp, [rsp+168h+var_E8]
 * 000000014040FEE6: mov     byte ptr [rbp-55h], 1
 * 000000014040FEEA: mov     [rbp-50h], rax
 * 000000014040FEEE: mov     [rbp-48h], rcx
 * 000000014040FEF2: mov     [rbp-40h], rdx
 * 000000014040FEF6: mov     [rbp-38h], r8
 * 000000014040FEFA: mov     [rbp-30h], r9
 * 000000014040FEFE: mov     [rbp-28h], r10
 * 000000014040FF02: mov     [rbp-20h], r11
 * 000000014040FF06: test    byte ptr [rbp+0F0h], 1
 * 000000014040FF0D: jnz     short loc_14040FF3E
 * 000000014040FF0F: lfence
 * 000000014040FF12: test    word ptr gs:860h, 1
 * 000000014040FF1D: jnz     short loc_14040FF27
 * 000000014040FF1F: lfence
 * 000000014040FF22: jmp     loc_140410190
 * 000000014040FF27: movzx   eax, word ptr gs:864h
 * 000000014040FF30: mov     ecx, 48h ; 'H'
 * 000000014040FF35: xor     edx, edx
 * 000000014040FF37: wrmsr
 * 000000014040FF39: jmp     loc_140410190
 * 000000014040FF3E: test    cs:KiKvaShadow, 1
 * 000000014040FF45: jnz     short loc_14040FF4A
 * 000000014040FF47: swapgs
 * 000000014040FF4A: lfence
 * 000000014040FF4D: mov     r10, gs:188h
 * 000000014040FF56: mov     rcx, gs:188h
 * 000000014040FF5F: mov     rcx, [rcx+220h]
 * 000000014040FF66: mov     rcx, [rcx+9E0h]
 * 000000014040FF6D: mov     gs:858h, rcx
 * 000000014040FF76: mov     cx, gs:850h
 * 000000014040FF7F: mov     gs:852h, cx
 * 000000014040FF88: mov     cx, gs:860h
 * 000000014040FF91: mov     gs:854h, cx
 * 000000014040FF9A: movzx   eax, word ptr gs:866h
 * 000000014040FFA3: cmp     gs:864h, ax
 * 000000014040FFAC: jz      short loc_14040FFC0
 * 000000014040FFAE: mov     gs:864h, ax
 * 000000014040FFB7: mov     ecx, 48h ; 'H'
 * 000000014040FFBC: xor     edx, edx
 * 000000014040FFBE: wrmsr
 * 000000014040FFC0: movzx   edx, word ptr gs:860h
 * 000000014040FFC9: test    edx, 8
 * 000000014040FFCF: jz      short loc_14040FFE8
 * 000000014040FFD1: mov     eax, 1
 * 000000014040FFD6: xor     edx, edx
 * 000000014040FFD8: mov     ecx, 49h ; 'I'
 * 000000014040FFDD: wrmsr
 * 000000014040FFDF: movzx   edx, word ptr gs:860h
 * 000000014040FFE8: test    edx, 2
 * 000000014040FFEE: jz      loc_140410119
 * 000000014040FFF4: call    loc_140410107
 * 000000014040FFF9: add     rsp, 8
 * 000000014040FFFD: call    loc_140410110
 * 0000000140410002: add     rsp, 8
 * 0000000140410006: call    loc_14040FFF9
 * 000000014041000B: add     rsp, 8
 * 000000014041000F: call    loc_140410002
 * 0000000140410014: add     rsp, 8
 * 0000000140410018: call    loc_14041000B
 * 000000014041001D: add     rsp, 8
 * 0000000140410021: call    loc_140410014
 * 0000000140410026: add     rsp, 8
 * 000000014041002A: call    loc_14041001D
 * 000000014041002F: add     rsp, 8
 * 0000000140410033: call    loc_140410026
 * 0000000140410038: add     rsp, 8
 * 000000014041003C: call    loc_14041002F
 * 0000000140410041: add     rsp, 8
 * 0000000140410045: call    loc_140410038
 * 000000014041004A: add     rsp, 8
 * 000000014041004E: call    loc_140410041
 * 0000000140410053: add     rsp, 8
 * 0000000140410057: call    loc_14041004A
 * 000000014041005C: add     rsp, 8
 * 0000000140410060: call    loc_140410053
 * 0000000140410065: add     rsp, 8
 * 0000000140410069: call    loc_14041005C
 * 000000014041006E: add     rsp, 8
 * 0000000140410072: call    loc_140410065
 * 0000000140410077: add     rsp, 8
 * 000000014041007B: call    loc_14041006E
 * 0000000140410080: add     rsp, 8
 * 0000000140410084: call    loc_140410077
 * 0000000140410089: add     rsp, 8
 * 000000014041008D: call    loc_140410080
 * 0000000140410092: add     rsp, 8
 * 0000000140410096: call    loc_140410089
 * 000000014041009B: add     rsp, 8
 * 000000014041009F: call    loc_140410092
 * 00000001404100A4: add     rsp, 8
 * 00000001404100A8: call    loc_14041009B
 * 00000001404100AD: add     rsp, 8
 * 00000001404100B1: call    loc_1404100A4
 * 00000001404100B6: add     rsp, 8
 * 00000001404100BA: call    loc_1404100AD
 * 00000001404100BF: add     rsp, 8
 * 00000001404100C3: call    loc_1404100B6
 * 00000001404100C8: add     rsp, 8
 * 00000001404100CC: call    loc_1404100BF
 * 00000001404100D1: add     rsp, 8
 * 00000001404100D5: call    loc_1404100C8
 * 00000001404100DA: add     rsp, 8
 * 00000001404100DE: call    loc_1404100D1
 * 00000001404100E3: add     rsp, 8
 * 00000001404100E7: call    loc_1404100DA
 * 00000001404100EC: add     rsp, 8
 * 00000001404100F0: call    loc_1404100E3
 * 00000001404100F5: add     rsp, 8
 * 00000001404100F9: call    loc_1404100EC
 * 00000001404100FE: add     rsp, 8
 * 0000000140410102: call    loc_1404100F5
 * 0000000140410107: add     rsp, 8
 * 000000014041010B: call    loc_1404100FE
 * 0000000140410110: add     rsp, 8
 * 0000000140410114: mov     eax, 0DADAh
 * 0000000140410119: test    edx, 200h
 * 000000014041011F: jz      short loc_140410126
 * 0000000140410121: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410126: lfence
 * 0000000140410129: mov     byte ptr gs:856h, 0
 * 0000000140410132: test    byte ptr [r10+3], 80h
 * 0000000140410137: jz      short loc_14041017B
 * 0000000140410139: mov     ecx, 0C0000102h
 * 000000014041013E: rdmsr
 * 0000000140410140: shl     rdx, 20h
 * 0000000140410144: or      rax, rdx
 * 0000000140410147: cmp     rax, cs:MmUserProbeAddress
 * 000000014041014E: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140410156: cmp     [r10+0F0h], rax
 * 000000014041015D: jz      short loc_14041017B
 * 000000014041015F: mov     rdx, [r10+1F0h]
 * 0000000140410166: bts     dword ptr [r10+74h], 8
 * 000000014041016C: dec     word ptr [r10+1E6h]
 * 0000000140410174: mov     [rdx+80h], rax
 * 000000014041017B: test    byte ptr [r10+3], 3
 * 0000000140410180: mov     word ptr [rbp+80h], 0
 * 0000000140410189: jz      short loc_140410190
 * 000000014041018B: call    KiSaveDebugRegisterState
 * 0000000140410190: cld
 * 0000000140410191: stmxcsr dword ptr [rbp-54h]
 * 0000000140410195: ldmxcsr dword ptr gs:180h
 * 000000014041019E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404101A2: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404101A6: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404101AA: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404101AE: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404101B2: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404101B6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404101BD: jz      short loc_1404101CB
 * 00000001404101BF: test    byte ptr [rbp+0F0h], 1
 * 00000001404101C6: jz      short loc_1404101CB
 * 00000001404101C8: stac
 * 00000001404101CB: test    dword ptr [rbp+0F8h], 200h
 * 00000001404101D5: jz      short loc_1404101D8
 * 00000001404101D7: sti
 * 00000001404101D8: mov     r9, [rbp-48h]
 * 00000001404101DC: mov     ecx, 0C0000409h
 * 00000001404101E1: mov     edx, 1
 * 00000001404101E6: mov     r8, [rbp+0E8h]
 * 00000001404101ED: call    KiFastFailDispatch
 * 00000001404101F2: nop
 * 00000001404101F3: retn
 */
