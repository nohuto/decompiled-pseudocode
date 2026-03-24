/*
 * XREFs of KiGeneralProtectionFault @ 0x14040CFC0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140A147C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14040CFC0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14040CFC0
 * Reason: Hex-Rays returned no pseudocode for 0x14040CFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040CFC0: push    rbp
 * 000000014040CFC1: sub     rsp, 158h
 * 000000014040CFC8: lea     rbp, [rsp+80h]
 * 000000014040CFD0: mov     [rbp+0D8h+var_12D], 1
 * 000000014040CFD4: mov     [rbp+0D8h+var_128], rax
 * 000000014040CFD8: mov     [rbp+0D8h+var_120], rcx
 * 000000014040CFDC: mov     [rbp+0D8h+var_118], rdx
 * 000000014040CFE0: mov     [rbp+0D8h+var_110], r8
 * 000000014040CFE4: mov     [rbp+0D8h+var_108], r9
 * 000000014040CFE8: mov     [rbp+0D8h+var_100], r10
 * 000000014040CFEC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040CFF0: test    [rbp+0D8h+arg_8], 1
 * 000000014040CFF7: jnz     short loc_14040D028
 * 000000014040CFF9: lfence
 * 000000014040CFFC: test    word ptr gs:860h, 1
 * 000000014040D007: jnz     short loc_14040D011
 * 000000014040D009: lfence
 * 000000014040D00C: jmp     loc_14040D27A
 * 000000014040D011: movzx   eax, word ptr gs:864h
 * 000000014040D01A: mov     ecx, 48h ; 'H'
 * 000000014040D01F: xor     edx, edx
 * 000000014040D021: wrmsr
 * 000000014040D023: jmp     loc_14040D27A
 * 000000014040D028: test    cs:KiKvaShadow, 1
 * 000000014040D02F: jnz     short loc_14040D034
 * 000000014040D031: swapgs
 * 000000014040D034: lfence
 * 000000014040D037: mov     r10, gs:188h
 * 000000014040D040: mov     rcx, gs:188h
 * 000000014040D049: mov     rcx, [rcx+220h]
 * 000000014040D050: mov     rcx, [rcx+9E0h]
 * 000000014040D057: mov     gs:858h, rcx
 * 000000014040D060: mov     cx, gs:850h
 * 000000014040D069: mov     gs:852h, cx
 * 000000014040D072: mov     cx, gs:860h
 * 000000014040D07B: mov     gs:854h, cx
 * 000000014040D084: movzx   eax, word ptr gs:866h
 * 000000014040D08D: cmp     gs:864h, ax
 * 000000014040D096: jz      short loc_14040D0AA
 * 000000014040D098: mov     gs:864h, ax
 * 000000014040D0A1: mov     ecx, 48h ; 'H'
 * 000000014040D0A6: xor     edx, edx
 * 000000014040D0A8: wrmsr
 * 000000014040D0AA: movzx   edx, word ptr gs:860h
 * 000000014040D0B3: test    edx, 8
 * 000000014040D0B9: jz      short loc_14040D0D2
 * 000000014040D0BB: mov     eax, 1
 * 000000014040D0C0: xor     edx, edx
 * 000000014040D0C2: mov     ecx, 49h ; 'I'
 * 000000014040D0C7: wrmsr
 * 000000014040D0C9: movzx   edx, word ptr gs:860h
 * 000000014040D0D2: test    edx, 2
 * 000000014040D0D8: jz      loc_14040D203
 * 000000014040D0DE: call    loc_14040D1F1
 * 000000014040D0E3: add     rsp, 8
 * 000000014040D0E7: call    loc_14040D1FA
 * 000000014040D0EC: add     rsp, 8
 * 000000014040D0F0: call    loc_14040D0E3
 * 000000014040D0F5: add     rsp, 8
 * 000000014040D0F9: call    loc_14040D0EC
 * 000000014040D0FE: add     rsp, 8
 * 000000014040D102: call    loc_14040D0F5
 * 000000014040D107: add     rsp, 8
 * 000000014040D10B: call    loc_14040D0FE
 * 000000014040D110: add     rsp, 8
 * 000000014040D114: call    loc_14040D107
 * 000000014040D119: add     rsp, 8
 * 000000014040D11D: call    loc_14040D110
 * 000000014040D122: add     rsp, 8
 * 000000014040D126: call    loc_14040D119
 * 000000014040D12B: add     rsp, 8
 * 000000014040D12F: call    loc_14040D122
 * 000000014040D134: add     rsp, 8
 * 000000014040D138: call    loc_14040D12B
 * 000000014040D13D: add     rsp, 8
 * 000000014040D141: call    loc_14040D134
 * 000000014040D146: add     rsp, 8
 * 000000014040D14A: call    loc_14040D13D
 * 000000014040D14F: add     rsp, 8
 * 000000014040D153: call    loc_14040D146
 * 000000014040D158: add     rsp, 8
 * 000000014040D15C: call    loc_14040D14F
 * 000000014040D161: add     rsp, 8
 * 000000014040D165: call    loc_14040D158
 * 000000014040D16A: add     rsp, 8
 * 000000014040D16E: call    loc_14040D161
 * 000000014040D173: add     rsp, 8
 * 000000014040D177: call    loc_14040D16A
 * 000000014040D17C: add     rsp, 8
 * 000000014040D180: call    loc_14040D173
 * 000000014040D185: add     rsp, 8
 * 000000014040D189: call    loc_14040D17C
 * 000000014040D18E: add     rsp, 8
 * 000000014040D192: call    loc_14040D185
 * 000000014040D197: add     rsp, 8
 * 000000014040D19B: call    loc_14040D18E
 * 000000014040D1A0: add     rsp, 8
 * 000000014040D1A4: call    loc_14040D197
 * 000000014040D1A9: add     rsp, 8
 * 000000014040D1AD: call    loc_14040D1A0
 * 000000014040D1B2: add     rsp, 8
 * 000000014040D1B6: call    loc_14040D1A9
 * 000000014040D1BB: add     rsp, 8
 * 000000014040D1BF: call    loc_14040D1B2
 * 000000014040D1C4: add     rsp, 8
 * 000000014040D1C8: call    loc_14040D1BB
 * 000000014040D1CD: add     rsp, 8
 * 000000014040D1D1: call    loc_14040D1C4
 * 000000014040D1D6: add     rsp, 8
 * 000000014040D1DA: call    loc_14040D1CD
 * 000000014040D1DF: add     rsp, 8
 * 000000014040D1E3: call    loc_14040D1D6
 * 000000014040D1E8: add     rsp, 8
 * 000000014040D1EC: call    loc_14040D1DF
 * 000000014040D1F1: add     rsp, 8
 * 000000014040D1F5: call    loc_14040D1E8
 * 000000014040D1FA: add     rsp, 8
 * 000000014040D1FE: mov     eax, 0DADAh
 * 000000014040D203: test    edx, 200h
 * 000000014040D209: jz      short loc_14040D210
 * 000000014040D20B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040D210: lfence
 * 000000014040D213: mov     byte ptr gs:856h, 0
 * 000000014040D21C: test    byte ptr [r10+3], 80h
 * 000000014040D221: jz      short loc_14040D265
 * 000000014040D223: mov     ecx, 0C0000102h
 * 000000014040D228: rdmsr
 * 000000014040D22A: shl     rdx, 20h
 * 000000014040D22E: or      rax, rdx
 * 000000014040D231: cmp     rax, cs:MmUserProbeAddress
 * 000000014040D238: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040D240: cmp     [r10+0F0h], rax
 * 000000014040D247: jz      short loc_14040D265
 * 000000014040D249: mov     rdx, [r10+1F0h]
 * 000000014040D250: bts     dword ptr [r10+74h], 8
 * 000000014040D256: dec     word ptr [r10+1E6h]
 * 000000014040D25E: mov     [rdx+80h], rax
 * 000000014040D265: test    byte ptr [r10+3], 3
 * 000000014040D26A: mov     [rbp+0D8h+var_58], 0
 * 000000014040D273: jz      short loc_14040D27A
 * 000000014040D275: call    KiSaveDebugRegisterState
 * 000000014040D27A: cld
 * 000000014040D27B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040D27F: ldmxcsr dword ptr gs:180h
 * 000000014040D288: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040D28C: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040D290: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040D294: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040D298: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040D29C: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040D2A0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040D2A7: jz      short loc_14040D2B5
 * 000000014040D2A9: test    [rbp+0D8h+arg_8], 1
 * 000000014040D2B0: jz      short loc_14040D2B5
 * 000000014040D2B2: stac
 * 000000014040D2B5: mov     eax, [rbp+0E0h]
 * 000000014040D2BB: test    [rbp+0D8h+arg_10], 200h
 * 000000014040D2C5: jz      short loc_14040D2C8
 * 000000014040D2C7: sti
 * 000000014040D2C8: mov     ecx, 10000001h
 * 000000014040D2CD: mov     edx, 2
 * 000000014040D2D2: mov     r9d, [rbp+0E0h]
 * 000000014040D2D9: and     r9d, 0FFFFh
 * 000000014040D2E0: xor     r10, r10
 * 000000014040D2E3: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040D2EA: call    KiExceptionDispatch
 * 000000014040D2EF: nop
 * 000000014040D2F0: retn
 */
