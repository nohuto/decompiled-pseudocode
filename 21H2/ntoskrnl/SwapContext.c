/*
 * XREFs of SwapContext @ 0x1404069A0
 * Callers:
 *     KiIdleLoop @ 0x140402B30 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1404067C0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140205BE0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateSpeculationControl @ 0x1402C3600 (KiUpdateSpeculationControl.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceContextSwap @ 0x1403AEEB0 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x140512940 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x140514FD0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x14051A6E0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x14051A820 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x14051E6E0 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x14051F380 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1404069A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404069A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404069A0: push    rbp
 * 00000001404069A2: sub     rsp, 30h
 * 00000001404069A6: prefetchw byte ptr [rsi+71h]
 * 00000001404069AA: mov     [rsp+38h+var_10], cl
 * 00000001404069AE: cmp     byte ptr [rsi+71h], 0
 * 00000001404069B2: jnz     loc_14040700C
 * 00000001404069B8: mov     byte ptr [rsi+71h], 1
 * 00000001404069BC: cli
 * 00000001404069BD: rdtsc
 * 00000001404069BF: shl     rdx, 20h
 * 00000001404069C3: or      rax, rdx
 * 00000001404069C6: sub     rax, [rbx+7EC0h]
 * 00000001404069CD: add     [rbx+7F38h], rax
 * 00000001404069D4: add     [rbx+7EC0h], rax
 * 00000001404069DB: mov     r12, rax
 * 00000001404069DE: test    byte ptr [rbx+6], 0FFh
 * 00000001404069E2: jz      short loc_1404069FF
 * 00000001404069E4: and     byte ptr [rbx+6], 0
 * 00000001404069E8: cmp     [rbx+18h], rsi
 * 00000001404069EC: jz      short loc_1404069FF
 * 00000001404069EE: mov     ecx, 2
 * 00000001404069F3: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404069FA: nop     dword ptr [rax+rax+00h]
 * 00000001404069FF: test    byte ptr [rsi+2], 36h
 * 0000000140406A03: jnz     loc_140406F8A
 * 0000000140406A09: dec     byte ptr [rbx+20h]
 * 0000000140406A0C: sti
 * 0000000140406A0D: inc     dword ptr [rbx+2D3Ch]
 * 0000000140406A13: mov     rbp, cs:KeFeatureBits
 * 0000000140406A1A: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140406A21: jz      short loc_140406A35
 * 0000000140406A23: bt      rbp, 2Ch ; ','
 * 0000000140406A28: jnb     short loc_140406A35
 * 0000000140406A2A: mov     rcx, rbx
 * 0000000140406A2D: mov     rdx, rsi
 * 0000000140406A30: call    KiCheckAndApplyCacheIsolation
 * 0000000140406A35: cmp     [rbx+18h], rsi
 * 0000000140406A39: jz      short loc_140406A5B
 * 0000000140406A3B: mov     ecx, [rsi+200h]
 * 0000000140406A41: mov     eax, [rbx+0ECh]
 * 0000000140406A47: xor     eax, ecx
 * 0000000140406A49: test    eax, 0FFh
 * 0000000140406A4E: jz      short loc_140406A5B
 * 0000000140406A50: mov     rcx, rbx
 * 0000000140406A53: mov     rdx, rsi
 * 0000000140406A56: call    KeCheckAndApplyBamQos
 * 0000000140406A5B: mov     rdx, [rdi+250h]
 * 0000000140406A62: mov     rcx, [rdi+60h]
 * 0000000140406A66: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140406A6A: mov     eax, edx
 * 0000000140406A6C: jz      short loc_140406A98
 * 0000000140406A6E: shr     rdx, 20h
 * 0000000140406A72: bt      rbp, 26h ; '&'
 * 0000000140406A77: jb      short loc_140406A90
 * 0000000140406A79: bt      rbp, 0Fh
 * 0000000140406A7E: jb      short loc_140406A95
 * 0000000140406A80: bt      ebp, 17h
 * 0000000140406A84: jnb     short loc_140406A8B
 * 0000000140406A86: xsave   byte ptr [rcx]
 * 0000000140406A89: jmp     short loc_140406A98
 * 0000000140406A8B: fxsave  dword ptr [rcx]
 * 0000000140406A8E: jmp     short loc_140406A98
 * 0000000140406A90: xsaves  byte ptr [rcx]
 * 0000000140406A93: jmp     short loc_140406A98
 * 0000000140406A95: xsaveopt byte ptr [rcx]
 * 0000000140406A98: stmxcsr dword ptr [rcx+18h]
 * 0000000140406A9C: test    eax, 100h
 * 0000000140406AA1: jz      short loc_140406AB4
 * 0000000140406AA3: cmp     cs:KiIptMsrMask, 0
 * 0000000140406AAA: jz      short loc_140406AB4
 * 0000000140406AAC: mov     rcx, rdi
 * 0000000140406AAF: call    KiSaveThreadIptState
 * 0000000140406AB4: mov     [rdi+58h], rsp
 * 0000000140406AB8: mov     rsp, [rsi+58h]
 * 0000000140406ABC: test    byte ptr [rdi+3], 80h
 * 0000000140406AC0: jz      short loc_140406AED
 * 0000000140406AC2: mov     ecx, 0C0000102h
 * 0000000140406AC7: rdmsr
 * 0000000140406AC9: shl     rdx, 20h
 * 0000000140406ACD: or      rax, rdx
 * 0000000140406AD0: cmp     rax, cs:MmUserProbeAddress
 * 0000000140406AD7: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140406ADF: mov     r14, [rdi+1F0h]
 * 0000000140406AE6: mov     [r14+80h], rax
 * 0000000140406AED: mov     rax, [rdi+220h]
 * 0000000140406AF4: cmp     qword ptr [rax+580h], 0
 * 0000000140406AFC: jz      short loc_140406B11
 * 0000000140406AFE: mov     ecx, 0C0000100h
 * 0000000140406B03: rdmsr
 * 0000000140406B05: mov     [rdi+5E8h], eax
 * 0000000140406B0B: mov     [rdi+5ECh], edx
 * 0000000140406B11: btr     dword ptr gs:856h, 0
 * 0000000140406B1B: jnb     short loc_140406B21
 * 0000000140406B1D: or      byte ptr [rdi+7Fh], 2
 * 0000000140406B21: btr     dword ptr [rsi+7Fh], 1
 * 0000000140406B26: jnb     short loc_140406B31
 * 0000000140406B28: or      byte ptr gs:856h, 1
 * 0000000140406B31: mov     rcx, [rsi+220h]
 * 0000000140406B38: or      cl, [rbx+6ECh]
 * 0000000140406B3E: and     cl, 0C2h
 * 0000000140406B41: cmp     rcx, [rdi+220h]
 * 0000000140406B48: jz      short loc_140406B57
 * 0000000140406B4A: and     cl, 0C0h
 * 0000000140406B4D: call    KiUpdateSpeculationControl
 * 0000000140406B52: jmp     loc_140406CFB
 * 0000000140406B57: movzx   ecx, byte ptr gs:856h
 * 0000000140406B60: and     cx, 3
 * 0000000140406B64: cmp     cx, 1
 * 0000000140406B68: jnz     loc_140406CFB
 * 0000000140406B6E: cli
 * 0000000140406B6F: movzx   eax, word ptr gs:852h
 * 0000000140406B78: cmp     gs:864h, ax
 * 0000000140406B81: jz      short loc_140406B95
 * 0000000140406B83: mov     gs:864h, ax
 * 0000000140406B8C: mov     ecx, 48h ; 'H'
 * 0000000140406B91: xor     edx, edx
 * 0000000140406B93: wrmsr
 * 0000000140406B95: movzx   edx, byte ptr gs:854h
 * 0000000140406B9E: test    edx, 10h
 * 0000000140406BA4: jz      short loc_140406BBD
 * 0000000140406BA6: mov     eax, 1
 * 0000000140406BAB: xor     edx, edx
 * 0000000140406BAD: mov     ecx, 49h ; 'I'
 * 0000000140406BB2: wrmsr
 * 0000000140406BB4: movzx   edx, byte ptr gs:854h
 * 0000000140406BBD: test    edx, 40h
 * 0000000140406BC3: jz      loc_140406CEE
 * 0000000140406BC9: call    loc_140406CDC
 * 0000000140406BCE: add     rsp, 8
 * 0000000140406BD2: call    loc_140406CE5
 * 0000000140406BD7: add     rsp, 8
 * 0000000140406BDB: call    loc_140406BCE
 * 0000000140406BE0: add     rsp, 8
 * 0000000140406BE4: call    loc_140406BD7
 * 0000000140406BE9: add     rsp, 8
 * 0000000140406BED: call    loc_140406BE0
 * 0000000140406BF2: add     rsp, 8
 * 0000000140406BF6: call    loc_140406BE9
 * 0000000140406BFB: add     rsp, 8
 * 0000000140406BFF: call    loc_140406BF2
 * 0000000140406C04: add     rsp, 8
 * 0000000140406C08: call    loc_140406BFB
 * 0000000140406C0D: add     rsp, 8
 * 0000000140406C11: call    loc_140406C04
 * 0000000140406C16: add     rsp, 8
 * 0000000140406C1A: call    loc_140406C0D
 * 0000000140406C1F: add     rsp, 8
 * 0000000140406C23: call    loc_140406C16
 * 0000000140406C28: add     rsp, 8
 * 0000000140406C2C: call    loc_140406C1F
 * 0000000140406C31: add     rsp, 8
 * 0000000140406C35: call    loc_140406C28
 * 0000000140406C3A: add     rsp, 8
 * 0000000140406C3E: call    loc_140406C31
 * 0000000140406C43: add     rsp, 8
 * 0000000140406C47: call    loc_140406C3A
 * 0000000140406C4C: add     rsp, 8
 * 0000000140406C50: call    loc_140406C43
 * 0000000140406C55: add     rsp, 8
 * 0000000140406C59: call    loc_140406C4C
 * 0000000140406C5E: add     rsp, 8
 * 0000000140406C62: call    loc_140406C55
 * 0000000140406C67: add     rsp, 8
 * 0000000140406C6B: call    loc_140406C5E
 * 0000000140406C70: add     rsp, 8
 * 0000000140406C74: call    loc_140406C67
 * 0000000140406C79: add     rsp, 8
 * 0000000140406C7D: call    loc_140406C70
 * 0000000140406C82: add     rsp, 8
 * 0000000140406C86: call    loc_140406C79
 * 0000000140406C8B: add     rsp, 8
 * 0000000140406C8F: call    loc_140406C82
 * 0000000140406C94: add     rsp, 8
 * 0000000140406C98: call    loc_140406C8B
 * 0000000140406C9D: add     rsp, 8
 * 0000000140406CA1: call    loc_140406C94
 * 0000000140406CA6: add     rsp, 8
 * 0000000140406CAA: call    loc_140406C9D
 * 0000000140406CAF: add     rsp, 8
 * 0000000140406CB3: call    loc_140406CA6
 * 0000000140406CB8: add     rsp, 8
 * 0000000140406CBC: call    loc_140406CAF
 * 0000000140406CC1: add     rsp, 8
 * 0000000140406CC5: call    loc_140406CB8
 * 0000000140406CCA: add     rsp, 8
 * 0000000140406CCE: call    loc_140406CC1
 * 0000000140406CD3: add     rsp, 8
 * 0000000140406CD7: call    loc_140406CCA
 * 0000000140406CDC: add     rsp, 8
 * 0000000140406CE0: call    loc_140406CD3
 * 0000000140406CE5: add     rsp, 8
 * 0000000140406CE9: mov     eax, 0DADAh
 * 0000000140406CEE: lfence
 * 0000000140406CF1: or      byte ptr gs:856h, 2
 * 0000000140406CFA: sti
 * 0000000140406CFB: mov     r14, [rsi+0B8h]
 * 0000000140406D02: cmp     r14, [rdi+0B8h]
 * 0000000140406D09: jz      loc_140406DC6
 * 0000000140406D0F: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140406D16: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140406D1D: lock bts [r14+rax*8+178h], rcx
 * 0000000140406D27: mov     rcx, [r14+28h]
 * 0000000140406D2B: test    cs:KiKvaShadow, 1
 * 0000000140406D32: jz      short loc_140406D6D
 * 0000000140406D34: cli
 * 0000000140406D35: bt      ecx, 1
 * 0000000140406D39: jnb     short loc_140406D47
 * 0000000140406D3B: bts     rcx, 3Fh ; '?'
 * 0000000140406D40: or      dword ptr [rbx+8E98h], 1
 * 0000000140406D47: mov     [rbx+8E80h], rcx
 * 0000000140406D4E: btr     rcx, 3Fh ; '?'
 * 0000000140406D53: and     dword ptr [rbx+8E98h], 0FFFFFFFDh
 * 0000000140406D5A: bt      dword ptr [r14+390h], 0
 * 0000000140406D63: jnb     short loc_140406D6C
 * 0000000140406D65: xor     dword ptr [rbx+8E98h], 3
 * 0000000140406D6C: sti
 * 0000000140406D6D: test    cs:HvlEnlightenments, 1
 * 0000000140406D77: jz      short loc_140406D80
 * 0000000140406D79: call    HvlSwitchVirtualAddressSpace
 * 0000000140406D7E: jmp     short loc_140406DA7
 * 0000000140406D80: mov     cr3, rcx
 * 0000000140406D83: test    cs:KiKvaShadow, 1
 * 0000000140406D8A: jz      short loc_140406DA7
 * 0000000140406D8C: bt      ecx, 1
 * 0000000140406D90: jb      short loc_140406DA7
 * 0000000140406D92: mov     rax, cr4
 * 0000000140406D95: xor     rax, 80h
 * 0000000140406D9B: mov     cr4, rax
 * 0000000140406D9E: xor     rax, 80h
 * 0000000140406DA4: mov     cr4, rax
 * 0000000140406DA7: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140406DAE: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140406DB5: mov     rdx, [rdi+0B8h]
 * 0000000140406DBC: lock btr [rdx+rax*8+178h], rcx
 * 0000000140406DC6: mov     rax, [rsi+28h]
 * 0000000140406DCA: test    cs:KiKvaShadow, 1
 * 0000000140406DD1: jnz     short loc_140406DE0
 * 0000000140406DD3: mov     r15, [rbx-178h]
 * 0000000140406DDA: mov     [r15+4], rax
 * 0000000140406DDE: jmp     short loc_140406DE7
 * 0000000140406DE0: mov     [rbx+8E88h], rax
 * 0000000140406DE7: mov     [rbx+28h], rax
 * 0000000140406DEB: test    rax, rax
 * 0000000140406DEE: jge     loc_140406FF4
 * 0000000140406DF4: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140406DFB: jnz     loc_140406F9D
 * 0000000140406E01: mov     rcx, 0FFFFF78000000000h
 * 0000000140406E0B: mov     rdx, [rdi+250h]
 * 0000000140406E12: and     rdx, [rcx+5F0h]
 * 0000000140406E19: or      rdx, [rsi+250h]
 * 0000000140406E20: mov     byte ptr [rdi+71h], 0
 * 0000000140406E24: mov     rcx, [rsi+60h]
 * 0000000140406E28: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140406E2C: mov     eax, edx
 * 0000000140406E2E: jz      short loc_140406E5B
 * 0000000140406E30: shr     rdx, 20h
 * 0000000140406E34: bt      rbp, 29h ; ')'
 * 0000000140406E39: jnb     short loc_140406E41
 * 0000000140406E3B: test    al, 1
 * 0000000140406E3D: jz      short loc_140406E41
 * 0000000140406E3F: fninit
 * 0000000140406E41: bt      rbp, 26h ; '&'
 * 0000000140406E46: jb      short loc_140406E53
 * 0000000140406E48: bt      ebp, 17h
 * 0000000140406E4C: jb      short loc_140406E58
 * 0000000140406E4E: fxrstor dword ptr [rcx]
 * 0000000140406E51: jmp     short loc_140406E5B
 * 0000000140406E53: xrstors byte ptr [rcx]
 * 0000000140406E56: jmp     short loc_140406E5B
 * 0000000140406E58: xrstor  byte ptr [rcx]
 * 0000000140406E5B: ldmxcsr dword ptr [rcx+18h]
 * 0000000140406E5F: test    eax, 100h
 * 0000000140406E64: jz      short loc_140406E77
 * 0000000140406E66: cmp     cs:KiIptMsrMask, 0
 * 0000000140406E6D: jz      short loc_140406E77
 * 0000000140406E6F: mov     rcx, rsi
 * 0000000140406E72: call    KiRestoreThreadIptState
 * 0000000140406E77: bt      dword ptr [rsi+74h], 0Ah
 * 0000000140406E7C: jb      loc_140406F3F
 * 0000000140406E82: mov     rax, [rsi+220h]
 * 0000000140406E89: cmp     qword ptr [rax+580h], 0
 * 0000000140406E91: mov     eax, [rsi+5E8h]
 * 0000000140406E97: jz      short loc_140406EA4
 * 0000000140406E99: mov     eax, [rsi+0F0h]
 * 0000000140406E9F: add     eax, 2000h
 * 0000000140406EA4: mov     rcx, [rbx-180h]
 * 0000000140406EAB: mov     [rcx+52h], ax
 * 0000000140406EAF: shr     eax, 10h
 * 0000000140406EB2: mov     [rcx+54h], al
 * 0000000140406EB5: mov     [rcx+57h], ah
 * 0000000140406EB8: mov     eax, 53h ; 'S'
 * 0000000140406EBD: mov     fs, eax
 * 0000000140406EBF: mov     eax, [rsi+5E8h]
 * 0000000140406EC5: mov     edx, [rsi+5ECh]
 * 0000000140406ECB: mov     ecx, 0C0000100h
 * 0000000140406ED0: wrmsr
 * 0000000140406ED2: mov     eax, ds
 * 0000000140406ED4: mov     edx, es
 * 0000000140406ED6: and     eax, edx
 * 0000000140406ED8: mov     edx, gs
 * 0000000140406EDA: and     eax, edx
 * 0000000140406EDC: cmp     ax, 2Bh ; '+'
 * 0000000140406EE0: jz      short loc_140406EF5
 * 0000000140406EE2: mov     edx, 2Bh ; '+'
 * 0000000140406EE7: mov     ds, edx
 * 0000000140406EE9: mov     es, edx
 * 0000000140406EEB: cli
 * 0000000140406EEC: swapgs
 * 0000000140406EEF: mov     gs, edx
 * 0000000140406EF1: swapgs
 * 0000000140406EF4: sti
 * 0000000140406EF5: mov     rax, [rsi+0F0h]
 * 0000000140406EFC: mov     edx, [rsi+0F4h]
 * 0000000140406F02: mov     [rbx-150h], rax
 * 0000000140406F09: test    byte ptr [rsi+3], 84h
 * 0000000140406F0D: jz      short loc_140406F38
 * 0000000140406F0F: test    byte ptr [rsi+3], 80h
 * 0000000140406F13: jz      short loc_140406F2C
 * 0000000140406F15: mov     r8, [rsi+1F0h]
 * 0000000140406F1C: mov     eax, [r8+80h]
 * 0000000140406F23: mov     edx, [r8+84h]
 * 0000000140406F2A: jmp     short loc_140406F38
 * 0000000140406F2C: mov     eax, [rsi+5F0h]
 * 0000000140406F32: mov     edx, [rsi+5F4h]
 * 0000000140406F38: mov     ecx, 0C0000102h
 * 0000000140406F3D: wrmsr
 * 0000000140406F3F: test    dword ptr [rbx+312Ch], 10001h
 * 0000000140406F49: jnz     loc_140406FDB
 * 0000000140406F4F: inc     dword ptr [rsi+154h]
 * 0000000140406F55: cmp     byte ptr [rsi+0C1h], 1
 * 0000000140406F5C: jnz     short loc_140406F81
 * 0000000140406F5E: movzx   ax, [rsp+38h+var_10]
 * 0000000140406F64: or      ax, [rsi+1E6h]
 * 0000000140406F6B: jz      short loc_140406F81
 * 0000000140406F6D: mov     ecx, 1
 * 0000000140406F72: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140406F79: nop     dword ptr [rax+rax+00h]
 * 0000000140406F7E: or      rcx, rsp
 * 0000000140406F81: setz    al
 * 0000000140406F84: add     rsp, 30h
 * 0000000140406F88: pop     rbp
 * 0000000140406F89: retn
 * 0000000140406F8A: mov     rcx, rbx
 * 0000000140406F8D: mov     rdx, rsi
 * 0000000140406F90: mov     r8, r12
 * 0000000140406F93: call    KiBeginThreadAccountingPeriod
 * 0000000140406F98: jmp     loc_140406A0D
 * 0000000140406F9D: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 0000000140406FA7: jz      short loc_140406FB4
 * 0000000140406FA9: mov     rcx, rdi
 * 0000000140406FAC: mov     rdx, rsi
 * 0000000140406FAF: call    EtwTraceContextSwap
 * 0000000140406FB4: test    cs:KiCpuTracingFlags, 2
 * 0000000140406FBE: jz      short loc_140406FC5
 * 0000000140406FC0: call    KiClearLastBranchRecordStack
 * 0000000140406FC5: test    cs:KiCpuTracingFlags, 4
 * 0000000140406FCF: jz      short loc_140406FD6
 * 0000000140406FD1: call    KiResetProcessorTraceBuffer
 * 0000000140406FD6: jmp     loc_140406E01
 * 0000000140406FDB: xor     r9, r9; BugCheckParameter3
 * 0000000140406FDE: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140406FE3: mov     r8, rsi; BugCheckParameter2
 * 0000000140406FE6: mov     rdx, rdi; BugCheckParameter1
 * 0000000140406FE9: mov     ecx, 0B8h; BugCheckCode
 * 0000000140406FEE: call    KeBugCheckEx
 * 0000000140406FF4: xor     r9, r9; BugCheckParameter3
 * 0000000140406FF7: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140406FFC: mov     r8, rsi; BugCheckParameter2
 * 0000000140406FFF: mov     rdx, rdi; BugCheckParameter1
 * 0000000140407002: mov     ecx, 1CEh; BugCheckCode
 * 0000000140407007: call    KeBugCheckEx
 * 000000014040700C: xor     ebp, ebp
 * 000000014040700E: inc     ebp
 * 0000000140407010: test    cs:HvlLongSpinCountMask, ebp
 * 0000000140407016: jnz     short loc_140407034
 * 0000000140407018: test    cs:HvlEnlightenments, 40h
 * 0000000140407022: jz      short loc_140407034
 * 0000000140407024: call    KiCheckVpBackingLongSpinWaitHypercall
 * 0000000140407029: test    al, al
 * 000000014040702B: jz      short loc_140407034
 * 000000014040702D: mov     ecx, ebp
 * 000000014040702F: call    HvlNotifyLongSpinWait
 * 0000000140407034: pause
 * 0000000140407036: cmp     byte ptr [rsi+71h], 0
 * 000000014040703A: jz      loc_1404069B8
 * 0000000140407040: jmp     short loc_14040700E
 */
