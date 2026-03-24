/*
 * XREFs of KxDebugTrapOrFault @ 0x14040A000
 * Callers:
 *     KiDebugTrapOrFault @ 0x140409F40 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14040A000 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14040A000
 * Reason: Hex-Rays returned no pseudocode for 0x14040A000
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040A000: sub     rsp, 8
 * 000000014040A004: push    rbp
 * 000000014040A005: sub     rsp, 158h
 * 000000014040A00C: lea     rbp, [rsp+80h]
 * 000000014040A014: mov     [rbp+0E8h+var_13D], 1
 * 000000014040A018: mov     [rbp+0E8h+var_138], rax
 * 000000014040A01C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040A020: mov     [rbp+0E8h+var_128], rdx
 * 000000014040A024: mov     [rbp+0E8h+var_120], r8
 * 000000014040A028: mov     [rbp+0E8h+var_118], r9
 * 000000014040A02C: mov     [rbp+0E8h+var_110], r10
 * 000000014040A030: mov     [rbp+0E8h+var_108], r11
 * 000000014040A034: test    [rbp+0E8h+arg_0], 1
 * 000000014040A03B: jnz     short loc_14040A06C
 * 000000014040A03D: lfence
 * 000000014040A040: test    word ptr gs:860h, 1
 * 000000014040A04B: jnz     short loc_14040A055
 * 000000014040A04D: lfence
 * 000000014040A050: jmp     loc_14040A2BE
 * 000000014040A055: movzx   eax, word ptr gs:864h
 * 000000014040A05E: mov     ecx, 48h ; 'H'
 * 000000014040A063: xor     edx, edx
 * 000000014040A065: wrmsr
 * 000000014040A067: jmp     loc_14040A2BE
 * 000000014040A06C: test    cs:KiKvaShadow, 1
 * 000000014040A073: jnz     short loc_14040A078
 * 000000014040A075: swapgs
 * 000000014040A078: lfence
 * 000000014040A07B: mov     r10, gs:188h
 * 000000014040A084: mov     rcx, gs:188h
 * 000000014040A08D: mov     rcx, [rcx+220h]
 * 000000014040A094: mov     rcx, [rcx+9E0h]
 * 000000014040A09B: mov     gs:858h, rcx
 * 000000014040A0A4: mov     cx, gs:850h
 * 000000014040A0AD: mov     gs:852h, cx
 * 000000014040A0B6: mov     cx, gs:860h
 * 000000014040A0BF: mov     gs:854h, cx
 * 000000014040A0C8: movzx   eax, word ptr gs:866h
 * 000000014040A0D1: cmp     gs:864h, ax
 * 000000014040A0DA: jz      short loc_14040A0EE
 * 000000014040A0DC: mov     gs:864h, ax
 * 000000014040A0E5: mov     ecx, 48h ; 'H'
 * 000000014040A0EA: xor     edx, edx
 * 000000014040A0EC: wrmsr
 * 000000014040A0EE: movzx   edx, word ptr gs:860h
 * 000000014040A0F7: test    edx, 8
 * 000000014040A0FD: jz      short loc_14040A116
 * 000000014040A0FF: mov     eax, 1
 * 000000014040A104: xor     edx, edx
 * 000000014040A106: mov     ecx, 49h ; 'I'
 * 000000014040A10B: wrmsr
 * 000000014040A10D: movzx   edx, word ptr gs:860h
 * 000000014040A116: test    edx, 2
 * 000000014040A11C: jz      loc_14040A247
 * 000000014040A122: call    loc_14040A235
 * 000000014040A127: add     rsp, 8
 * 000000014040A12B: call    loc_14040A23E
 * 000000014040A130: add     rsp, 8
 * 000000014040A134: call    loc_14040A127
 * 000000014040A139: add     rsp, 8
 * 000000014040A13D: call    loc_14040A130
 * 000000014040A142: add     rsp, 8
 * 000000014040A146: call    loc_14040A139
 * 000000014040A14B: add     rsp, 8
 * 000000014040A14F: call    loc_14040A142
 * 000000014040A154: add     rsp, 8
 * 000000014040A158: call    loc_14040A14B
 * 000000014040A15D: add     rsp, 8
 * 000000014040A161: call    loc_14040A154
 * 000000014040A166: add     rsp, 8
 * 000000014040A16A: call    loc_14040A15D
 * 000000014040A16F: add     rsp, 8
 * 000000014040A173: call    loc_14040A166
 * 000000014040A178: add     rsp, 8
 * 000000014040A17C: call    loc_14040A16F
 * 000000014040A181: add     rsp, 8
 * 000000014040A185: call    loc_14040A178
 * 000000014040A18A: add     rsp, 8
 * 000000014040A18E: call    loc_14040A181
 * 000000014040A193: add     rsp, 8
 * 000000014040A197: call    loc_14040A18A
 * 000000014040A19C: add     rsp, 8
 * 000000014040A1A0: call    loc_14040A193
 * 000000014040A1A5: add     rsp, 8
 * 000000014040A1A9: call    loc_14040A19C
 * 000000014040A1AE: add     rsp, 8
 * 000000014040A1B2: call    loc_14040A1A5
 * 000000014040A1B7: add     rsp, 8
 * 000000014040A1BB: call    loc_14040A1AE
 * 000000014040A1C0: add     rsp, 8
 * 000000014040A1C4: call    loc_14040A1B7
 * 000000014040A1C9: add     rsp, 8
 * 000000014040A1CD: call    loc_14040A1C0
 * 000000014040A1D2: add     rsp, 8
 * 000000014040A1D6: call    loc_14040A1C9
 * 000000014040A1DB: add     rsp, 8
 * 000000014040A1DF: call    loc_14040A1D2
 * 000000014040A1E4: add     rsp, 8
 * 000000014040A1E8: call    loc_14040A1DB
 * 000000014040A1ED: add     rsp, 8
 * 000000014040A1F1: call    loc_14040A1E4
 * 000000014040A1F6: add     rsp, 8
 * 000000014040A1FA: call    loc_14040A1ED
 * 000000014040A1FF: add     rsp, 8
 * 000000014040A203: call    loc_14040A1F6
 * 000000014040A208: add     rsp, 8
 * 000000014040A20C: call    loc_14040A1FF
 * 000000014040A211: add     rsp, 8
 * 000000014040A215: call    loc_14040A208
 * 000000014040A21A: add     rsp, 8
 * 000000014040A21E: call    loc_14040A211
 * 000000014040A223: add     rsp, 8
 * 000000014040A227: call    loc_14040A21A
 * 000000014040A22C: add     rsp, 8
 * 000000014040A230: call    loc_14040A223
 * 000000014040A235: add     rsp, 8
 * 000000014040A239: call    loc_14040A22C
 * 000000014040A23E: add     rsp, 8
 * 000000014040A242: mov     eax, 0DADAh
 * 000000014040A247: test    edx, 200h
 * 000000014040A24D: jz      short loc_14040A254
 * 000000014040A24F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040A254: lfence
 * 000000014040A257: mov     byte ptr gs:856h, 0
 * 000000014040A260: test    byte ptr [r10+3], 80h
 * 000000014040A265: jz      short loc_14040A2A9
 * 000000014040A267: mov     ecx, 0C0000102h
 * 000000014040A26C: rdmsr
 * 000000014040A26E: shl     rdx, 20h
 * 000000014040A272: or      rax, rdx
 * 000000014040A275: cmp     rax, cs:MmUserProbeAddress
 * 000000014040A27C: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040A284: cmp     [r10+0F0h], rax
 * 000000014040A28B: jz      short loc_14040A2A9
 * 000000014040A28D: mov     rdx, [r10+1F0h]
 * 000000014040A294: bts     dword ptr [r10+74h], 8
 * 000000014040A29A: dec     word ptr [r10+1E6h]
 * 000000014040A2A2: mov     [rdx+80h], rax
 * 000000014040A2A9: test    byte ptr [r10+3], 3
 * 000000014040A2AE: mov     [rbp+0E8h+var_68], 0
 * 000000014040A2B7: jz      short loc_14040A2BE
 * 000000014040A2B9: call    KiSaveDebugRegisterState
 * 000000014040A2BE: cld
 * 000000014040A2BF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040A2C3: ldmxcsr dword ptr gs:180h
 * 000000014040A2CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040A2D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040A2D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040A2D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040A2DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040A2E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040A2E4: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040A2EB: jz      short loc_14040A2F9
 * 000000014040A2ED: test    [rbp+0E8h+arg_0], 1
 * 000000014040A2F4: jz      short loc_14040A2F9
 * 000000014040A2F6: stac
 * 000000014040A2F9: test    [rbp+0E8h+arg_8], 200h
 * 000000014040A303: jz      short loc_14040A306
 * 000000014040A305: sti
 * 000000014040A306: test    cs:KiCpuTracingFlags, 2
 * 000000014040A310: jz      short loc_14040A325
 * 000000014040A312: mov     ecx, 1D9h
 * 000000014040A317: rdmsr
 * 000000014040A319: or      eax, 1
 * 000000014040A31C: wrmsr
 * 000000014040A31E: xor     edx, edx
 * 000000014040A320: jmp     loc_14040A3F4
 * 000000014040A325: xor     edx, edx
 * 000000014040A327: test    [rbp+0E8h+arg_8], 100h
 * 000000014040A331: jz      loc_14040A3F4
 * 000000014040A337: test    byte ptr gs:8722h, 2
 * 000000014040A340: jz      loc_14040A3F4
 * 000000014040A346: test    [rbp+0E8h+arg_0], 1
 * 000000014040A34D: jnz     short loc_14040A3A6
 * 000000014040A34F: mov     rax, dr7
 * 000000014040A352: test    ax, 200h
 * 000000014040A356: jz      loc_14040A3F4
 * 000000014040A35C: test    ax, 100h
 * 000000014040A360: jz      loc_14040A3F4
 * 000000014040A366: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014040A36D: or      r8d, r8d
 * 000000014040A370: jz      short loc_14040A37A
 * 000000014040A372: mov     ecx, r8d
 * 000000014040A375: rdmsr
 * 000000014040A377: mov     r8d, eax
 * 000000014040A37A: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014040A380: add     ecx, r8d
 * 000000014040A383: rdmsr
 * 000000014040A385: mov     r9d, eax
 * 000000014040A388: shl     rdx, 20h
 * 000000014040A38C: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014040A392: or      r9, rdx
 * 000000014040A395: add     ecx, r8d
 * 000000014040A398: rdmsr
 * 000000014040A39A: mov     r10d, eax
 * 000000014040A39D: shl     rdx, 20h
 * 000000014040A3A1: or      r10, rdx
 * 000000014040A3A4: jmp     short loc_14040A3EF
 * 000000014040A3A6: test    [rbp+0E8h+var_68], 200h
 * 000000014040A3AF: jz      short loc_14040A3F4
 * 000000014040A3B1: test    [rbp+0E8h+var_68], 100h
 * 000000014040A3BA: jz      short loc_14040A3F4
 * 000000014040A3BC: and     [rbp+0E8h+var_40], 0
 * 000000014040A3C4: and     [rbp+0E8h+var_48], 0
 * 000000014040A3CC: mov     rcx, cs:MmUserProbeAddress
 * 000000014040A3D3: mov     r9, [rbp+0E8h+var_50]
 * 000000014040A3DA: cmp     r9, rcx
 * 000000014040A3DD: cmovnb  r9, rcx
 * 000000014040A3E1: mov     r10, [rbp+0E8h+var_58]
 * 000000014040A3E8: cmp     r10, rcx
 * 000000014040A3EB: cmovnb  r10, rcx
 * 000000014040A3EF: mov     edx, 2
 * 000000014040A3F4: mov     ecx, 80000004h
 * 000000014040A3F9: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014040A403: mov     r8, [rbp+0E8h]
 * 000000014040A40A: call    KiExceptionDispatch
 * 000000014040A40F: nop
 * 000000014040A410: retn
 */
