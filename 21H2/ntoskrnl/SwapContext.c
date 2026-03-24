/*
 * XREFs of SwapContext @ 0x1404067C0
 * Callers:
 *     KiIdleLoop @ 0x140402950 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1404065E0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiUpdateSpeculationControl @ 0x14021ED00 (KiUpdateSpeculationControl.c)
 *     KiBeginThreadAccountingPeriod @ 0x140288A40 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceContextSwap @ 0x1403AED40 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     SwapContext @ 0x1404067C0 (SwapContext.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FAD60 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x140512700 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x140514D90 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x14051A4A0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x14051A5E0 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x14051E4A0 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x14051F140 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1404067C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404067C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404067C0: push    rbp
 * 00000001404067C2: sub     rsp, 30h
 * 00000001404067C6: prefetchw byte ptr [rsi+71h]
 * 00000001404067CA: mov     [rsp+38h+var_10], cl
 * 00000001404067CE: cmp     byte ptr [rsi+71h], 0
 * 00000001404067D2: jnz     loc_140406E2C
 * 00000001404067D8: mov     byte ptr [rsi+71h], 1
 * 00000001404067DC: cli
 * 00000001404067DD: rdtsc
 * 00000001404067DF: shl     rdx, 20h
 * 00000001404067E3: or      rax, rdx
 * 00000001404067E6: sub     rax, [rbx+7EC0h]
 * 00000001404067ED: add     [rbx+7F38h], rax
 * 00000001404067F4: add     [rbx+7EC0h], rax
 * 00000001404067FB: mov     r12, rax
 * 00000001404067FE: test    byte ptr [rbx+6], 0FFh
 * 0000000140406802: jz      short loc_14040681F
 * 0000000140406804: and     byte ptr [rbx+6], 0
 * 0000000140406808: cmp     [rbx+18h], rsi
 * 000000014040680C: jz      short loc_14040681F
 * 000000014040680E: mov     ecx, 2
 * 0000000140406813: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014040681A: nop     dword ptr [rax+rax+00h]
 * 000000014040681F: test    byte ptr [rsi+2], 36h
 * 0000000140406823: jnz     loc_140406DAA
 * 0000000140406829: dec     byte ptr [rbx+20h]
 * 000000014040682C: sti
 * 000000014040682D: inc     dword ptr [rbx+2D3Ch]
 * 0000000140406833: mov     rbp, cs:KeFeatureBits
 * 000000014040683A: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140406841: jz      short loc_140406855
 * 0000000140406843: bt      rbp, 2Ch ; ','
 * 0000000140406848: jnb     short loc_140406855
 * 000000014040684A: mov     rcx, rbx
 * 000000014040684D: mov     rdx, rsi
 * 0000000140406850: call    KiCheckAndApplyCacheIsolation
 * 0000000140406855: cmp     [rbx+18h], rsi
 * 0000000140406859: jz      short loc_14040687B
 * 000000014040685B: mov     ecx, [rsi+200h]
 * 0000000140406861: mov     eax, [rbx+0ECh]
 * 0000000140406867: xor     eax, ecx
 * 0000000140406869: test    eax, 0FFh
 * 000000014040686E: jz      short loc_14040687B
 * 0000000140406870: mov     rcx, rbx
 * 0000000140406873: mov     rdx, rsi
 * 0000000140406876: call    KeCheckAndApplyBamQos
 * 000000014040687B: mov     rdx, [rdi+250h]
 * 0000000140406882: mov     rcx, [rdi+60h]
 * 0000000140406886: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014040688A: mov     eax, edx
 * 000000014040688C: jz      short loc_1404068B8
 * 000000014040688E: shr     rdx, 20h
 * 0000000140406892: bt      rbp, 26h ; '&'
 * 0000000140406897: jb      short loc_1404068B0
 * 0000000140406899: bt      rbp, 0Fh
 * 000000014040689E: jb      short loc_1404068B5
 * 00000001404068A0: bt      ebp, 17h
 * 00000001404068A4: jnb     short loc_1404068AB
 * 00000001404068A6: xsave   byte ptr [rcx]
 * 00000001404068A9: jmp     short loc_1404068B8
 * 00000001404068AB: fxsave  dword ptr [rcx]
 * 00000001404068AE: jmp     short loc_1404068B8
 * 00000001404068B0: xsaves  byte ptr [rcx]
 * 00000001404068B3: jmp     short loc_1404068B8
 * 00000001404068B5: xsaveopt byte ptr [rcx]
 * 00000001404068B8: stmxcsr dword ptr [rcx+18h]
 * 00000001404068BC: test    eax, 100h
 * 00000001404068C1: jz      short loc_1404068D4
 * 00000001404068C3: cmp     cs:KiIptMsrMask, 0
 * 00000001404068CA: jz      short loc_1404068D4
 * 00000001404068CC: mov     rcx, rdi
 * 00000001404068CF: call    KiSaveThreadIptState
 * 00000001404068D4: mov     [rdi+58h], rsp
 * 00000001404068D8: mov     rsp, [rsi+58h]
 * 00000001404068DC: test    byte ptr [rdi+3], 80h
 * 00000001404068E0: jz      short loc_14040690D
 * 00000001404068E2: mov     ecx, 0C0000102h
 * 00000001404068E7: rdmsr
 * 00000001404068E9: shl     rdx, 20h
 * 00000001404068ED: or      rax, rdx
 * 00000001404068F0: cmp     rax, cs:MmUserProbeAddress
 * 00000001404068F7: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001404068FF: mov     r14, [rdi+1F0h]
 * 0000000140406906: mov     [r14+80h], rax
 * 000000014040690D: mov     rax, [rdi+220h]
 * 0000000140406914: cmp     qword ptr [rax+580h], 0
 * 000000014040691C: jz      short loc_140406931
 * 000000014040691E: mov     ecx, 0C0000100h
 * 0000000140406923: rdmsr
 * 0000000140406925: mov     [rdi+5E8h], eax
 * 000000014040692B: mov     [rdi+5ECh], edx
 * 0000000140406931: btr     dword ptr gs:856h, 0
 * 000000014040693B: jnb     short loc_140406941
 * 000000014040693D: or      byte ptr [rdi+7Fh], 2
 * 0000000140406941: btr     dword ptr [rsi+7Fh], 1
 * 0000000140406946: jnb     short loc_140406951
 * 0000000140406948: or      byte ptr gs:856h, 1
 * 0000000140406951: mov     rcx, [rsi+220h]
 * 0000000140406958: or      cl, [rbx+6ECh]
 * 000000014040695E: and     cl, 0C2h
 * 0000000140406961: cmp     rcx, [rdi+220h]
 * 0000000140406968: jz      short loc_140406977
 * 000000014040696A: and     cl, 0C0h
 * 000000014040696D: call    KiUpdateSpeculationControl
 * 0000000140406972: jmp     loc_140406B1B
 * 0000000140406977: movzx   ecx, byte ptr gs:856h
 * 0000000140406980: and     cx, 3
 * 0000000140406984: cmp     cx, 1
 * 0000000140406988: jnz     loc_140406B1B
 * 000000014040698E: cli
 * 000000014040698F: movzx   eax, word ptr gs:852h
 * 0000000140406998: cmp     gs:864h, ax
 * 00000001404069A1: jz      short loc_1404069B5
 * 00000001404069A3: mov     gs:864h, ax
 * 00000001404069AC: mov     ecx, 48h ; 'H'
 * 00000001404069B1: xor     edx, edx
 * 00000001404069B3: wrmsr
 * 00000001404069B5: movzx   edx, byte ptr gs:854h
 * 00000001404069BE: test    edx, 10h
 * 00000001404069C4: jz      short loc_1404069DD
 * 00000001404069C6: mov     eax, 1
 * 00000001404069CB: xor     edx, edx
 * 00000001404069CD: mov     ecx, 49h ; 'I'
 * 00000001404069D2: wrmsr
 * 00000001404069D4: movzx   edx, byte ptr gs:854h
 * 00000001404069DD: test    edx, 40h
 * 00000001404069E3: jz      loc_140406B0E
 * 00000001404069E9: call    loc_140406AFC
 * 00000001404069EE: add     rsp, 8
 * 00000001404069F2: call    loc_140406B05
 * 00000001404069F7: add     rsp, 8
 * 00000001404069FB: call    loc_1404069EE
 * 0000000140406A00: add     rsp, 8
 * 0000000140406A04: call    loc_1404069F7
 * 0000000140406A09: add     rsp, 8
 * 0000000140406A0D: call    loc_140406A00
 * 0000000140406A12: add     rsp, 8
 * 0000000140406A16: call    loc_140406A09
 * 0000000140406A1B: add     rsp, 8
 * 0000000140406A1F: call    loc_140406A12
 * 0000000140406A24: add     rsp, 8
 * 0000000140406A28: call    loc_140406A1B
 * 0000000140406A2D: add     rsp, 8
 * 0000000140406A31: call    loc_140406A24
 * 0000000140406A36: add     rsp, 8
 * 0000000140406A3A: call    loc_140406A2D
 * 0000000140406A3F: add     rsp, 8
 * 0000000140406A43: call    loc_140406A36
 * 0000000140406A48: add     rsp, 8
 * 0000000140406A4C: call    loc_140406A3F
 * 0000000140406A51: add     rsp, 8
 * 0000000140406A55: call    loc_140406A48
 * 0000000140406A5A: add     rsp, 8
 * 0000000140406A5E: call    loc_140406A51
 * 0000000140406A63: add     rsp, 8
 * 0000000140406A67: call    loc_140406A5A
 * 0000000140406A6C: add     rsp, 8
 * 0000000140406A70: call    loc_140406A63
 * 0000000140406A75: add     rsp, 8
 * 0000000140406A79: call    loc_140406A6C
 * 0000000140406A7E: add     rsp, 8
 * 0000000140406A82: call    loc_140406A75
 * 0000000140406A87: add     rsp, 8
 * 0000000140406A8B: call    loc_140406A7E
 * 0000000140406A90: add     rsp, 8
 * 0000000140406A94: call    loc_140406A87
 * 0000000140406A99: add     rsp, 8
 * 0000000140406A9D: call    loc_140406A90
 * 0000000140406AA2: add     rsp, 8
 * 0000000140406AA6: call    loc_140406A99
 * 0000000140406AAB: add     rsp, 8
 * 0000000140406AAF: call    loc_140406AA2
 * 0000000140406AB4: add     rsp, 8
 * 0000000140406AB8: call    loc_140406AAB
 * 0000000140406ABD: add     rsp, 8
 * 0000000140406AC1: call    loc_140406AB4
 * 0000000140406AC6: add     rsp, 8
 * 0000000140406ACA: call    loc_140406ABD
 * 0000000140406ACF: add     rsp, 8
 * 0000000140406AD3: call    loc_140406AC6
 * 0000000140406AD8: add     rsp, 8
 * 0000000140406ADC: call    loc_140406ACF
 * 0000000140406AE1: add     rsp, 8
 * 0000000140406AE5: call    loc_140406AD8
 * 0000000140406AEA: add     rsp, 8
 * 0000000140406AEE: call    loc_140406AE1
 * 0000000140406AF3: add     rsp, 8
 * 0000000140406AF7: call    loc_140406AEA
 * 0000000140406AFC: add     rsp, 8
 * 0000000140406B00: call    loc_140406AF3
 * 0000000140406B05: add     rsp, 8
 * 0000000140406B09: mov     eax, 0DADAh
 * 0000000140406B0E: lfence
 * 0000000140406B11: or      byte ptr gs:856h, 2
 * 0000000140406B1A: sti
 * 0000000140406B1B: mov     r14, [rsi+0B8h]
 * 0000000140406B22: cmp     r14, [rdi+0B8h]
 * 0000000140406B29: jz      loc_140406BE6
 * 0000000140406B2F: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140406B36: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140406B3D: lock bts [r14+rax*8+178h], rcx
 * 0000000140406B47: mov     rcx, [r14+28h]
 * 0000000140406B4B: test    cs:KiKvaShadow, 1
 * 0000000140406B52: jz      short loc_140406B8D
 * 0000000140406B54: cli
 * 0000000140406B55: bt      ecx, 1
 * 0000000140406B59: jnb     short loc_140406B67
 * 0000000140406B5B: bts     rcx, 3Fh ; '?'
 * 0000000140406B60: or      dword ptr [rbx+8E98h], 1
 * 0000000140406B67: mov     [rbx+8E80h], rcx
 * 0000000140406B6E: btr     rcx, 3Fh ; '?'
 * 0000000140406B73: and     dword ptr [rbx+8E98h], 0FFFFFFFDh
 * 0000000140406B7A: bt      dword ptr [r14+390h], 0
 * 0000000140406B83: jnb     short loc_140406B8C
 * 0000000140406B85: xor     dword ptr [rbx+8E98h], 3
 * 0000000140406B8C: sti
 * 0000000140406B8D: test    cs:HvlEnlightenments, 1
 * 0000000140406B97: jz      short loc_140406BA0
 * 0000000140406B99: call    HvlSwitchVirtualAddressSpace
 * 0000000140406B9E: jmp     short loc_140406BC7
 * 0000000140406BA0: mov     cr3, rcx
 * 0000000140406BA3: test    cs:KiKvaShadow, 1
 * 0000000140406BAA: jz      short loc_140406BC7
 * 0000000140406BAC: bt      ecx, 1
 * 0000000140406BB0: jb      short loc_140406BC7
 * 0000000140406BB2: mov     rax, cr4
 * 0000000140406BB5: xor     rax, 80h
 * 0000000140406BBB: mov     cr4, rax
 * 0000000140406BBE: xor     rax, 80h
 * 0000000140406BC4: mov     cr4, rax
 * 0000000140406BC7: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140406BCE: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140406BD5: mov     rdx, [rdi+0B8h]
 * 0000000140406BDC: lock btr [rdx+rax*8+178h], rcx
 * 0000000140406BE6: mov     rax, [rsi+28h]
 * 0000000140406BEA: test    cs:KiKvaShadow, 1
 * 0000000140406BF1: jnz     short loc_140406C00
 * 0000000140406BF3: mov     r15, [rbx-178h]
 * 0000000140406BFA: mov     [r15+4], rax
 * 0000000140406BFE: jmp     short loc_140406C07
 * 0000000140406C00: mov     [rbx+8E88h], rax
 * 0000000140406C07: mov     [rbx+28h], rax
 * 0000000140406C0B: test    rax, rax
 * 0000000140406C0E: jge     loc_140406E14
 * 0000000140406C14: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140406C1B: jnz     loc_140406DBD
 * 0000000140406C21: mov     rcx, 0FFFFF78000000000h
 * 0000000140406C2B: mov     rdx, [rdi+250h]
 * 0000000140406C32: and     rdx, [rcx+5F0h]
 * 0000000140406C39: or      rdx, [rsi+250h]
 * 0000000140406C40: mov     byte ptr [rdi+71h], 0
 * 0000000140406C44: mov     rcx, [rsi+60h]
 * 0000000140406C48: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140406C4C: mov     eax, edx
 * 0000000140406C4E: jz      short loc_140406C7B
 * 0000000140406C50: shr     rdx, 20h
 * 0000000140406C54: bt      rbp, 29h ; ')'
 * 0000000140406C59: jnb     short loc_140406C61
 * 0000000140406C5B: test    al, 1
 * 0000000140406C5D: jz      short loc_140406C61
 * 0000000140406C5F: fninit
 * 0000000140406C61: bt      rbp, 26h ; '&'
 * 0000000140406C66: jb      short loc_140406C73
 * 0000000140406C68: bt      ebp, 17h
 * 0000000140406C6C: jb      short loc_140406C78
 * 0000000140406C6E: fxrstor dword ptr [rcx]
 * 0000000140406C71: jmp     short loc_140406C7B
 * 0000000140406C73: xrstors byte ptr [rcx]
 * 0000000140406C76: jmp     short loc_140406C7B
 * 0000000140406C78: xrstor  byte ptr [rcx]
 * 0000000140406C7B: ldmxcsr dword ptr [rcx+18h]
 * 0000000140406C7F: test    eax, 100h
 * 0000000140406C84: jz      short loc_140406C97
 * 0000000140406C86: cmp     cs:KiIptMsrMask, 0
 * 0000000140406C8D: jz      short loc_140406C97
 * 0000000140406C8F: mov     rcx, rsi
 * 0000000140406C92: call    KiRestoreThreadIptState
 * 0000000140406C97: bt      dword ptr [rsi+74h], 0Ah
 * 0000000140406C9C: jb      loc_140406D5F
 * 0000000140406CA2: mov     rax, [rsi+220h]
 * 0000000140406CA9: cmp     qword ptr [rax+580h], 0
 * 0000000140406CB1: mov     eax, [rsi+5E8h]
 * 0000000140406CB7: jz      short loc_140406CC4
 * 0000000140406CB9: mov     eax, [rsi+0F0h]
 * 0000000140406CBF: add     eax, 2000h
 * 0000000140406CC4: mov     rcx, [rbx-180h]
 * 0000000140406CCB: mov     [rcx+52h], ax
 * 0000000140406CCF: shr     eax, 10h
 * 0000000140406CD2: mov     [rcx+54h], al
 * 0000000140406CD5: mov     [rcx+57h], ah
 * 0000000140406CD8: mov     eax, 53h ; 'S'
 * 0000000140406CDD: mov     fs, eax
 * 0000000140406CDF: mov     eax, [rsi+5E8h]
 * 0000000140406CE5: mov     edx, [rsi+5ECh]
 * 0000000140406CEB: mov     ecx, 0C0000100h
 * 0000000140406CF0: wrmsr
 * 0000000140406CF2: mov     eax, ds
 * 0000000140406CF4: mov     edx, es
 * 0000000140406CF6: and     eax, edx
 * 0000000140406CF8: mov     edx, gs
 * 0000000140406CFA: and     eax, edx
 * 0000000140406CFC: cmp     ax, 2Bh ; '+'
 * 0000000140406D00: jz      short loc_140406D15
 * 0000000140406D02: mov     edx, 2Bh ; '+'
 * 0000000140406D07: mov     ds, edx
 * 0000000140406D09: mov     es, edx
 * 0000000140406D0B: cli
 * 0000000140406D0C: swapgs
 * 0000000140406D0F: mov     gs, edx
 * 0000000140406D11: swapgs
 * 0000000140406D14: sti
 * 0000000140406D15: mov     rax, [rsi+0F0h]
 * 0000000140406D1C: mov     edx, [rsi+0F4h]
 * 0000000140406D22: mov     [rbx-150h], rax
 * 0000000140406D29: test    byte ptr [rsi+3], 84h
 * 0000000140406D2D: jz      short loc_140406D58
 * 0000000140406D2F: test    byte ptr [rsi+3], 80h
 * 0000000140406D33: jz      short loc_140406D4C
 * 0000000140406D35: mov     r8, [rsi+1F0h]
 * 0000000140406D3C: mov     eax, [r8+80h]
 * 0000000140406D43: mov     edx, [r8+84h]
 * 0000000140406D4A: jmp     short loc_140406D58
 * 0000000140406D4C: mov     eax, [rsi+5F0h]
 * 0000000140406D52: mov     edx, [rsi+5F4h]
 * 0000000140406D58: mov     ecx, 0C0000102h
 * 0000000140406D5D: wrmsr
 * 0000000140406D5F: test    dword ptr [rbx+312Ch], 10001h
 * 0000000140406D69: jnz     loc_140406DFB
 * 0000000140406D6F: inc     dword ptr [rsi+154h]
 * 0000000140406D75: cmp     byte ptr [rsi+0C1h], 1
 * 0000000140406D7C: jnz     short loc_140406DA1
 * 0000000140406D7E: movzx   ax, [rsp+38h+var_10]
 * 0000000140406D84: or      ax, [rsi+1E6h]
 * 0000000140406D8B: jz      short loc_140406DA1
 * 0000000140406D8D: mov     ecx, 1
 * 0000000140406D92: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140406D99: nop     dword ptr [rax+rax+00h]
 * 0000000140406D9E: or      rcx, rsp
 * 0000000140406DA1: setz    al
 * 0000000140406DA4: add     rsp, 30h
 * 0000000140406DA8: pop     rbp
 * 0000000140406DA9: retn
 * 0000000140406DAA: mov     rcx, rbx
 * 0000000140406DAD: mov     rdx, rsi
 * 0000000140406DB0: mov     r8, r12
 * 0000000140406DB3: call    KiBeginThreadAccountingPeriod
 * 0000000140406DB8: jmp     loc_14040682D
 * 0000000140406DBD: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 0000000140406DC7: jz      short loc_140406DD4
 * 0000000140406DC9: mov     rcx, rdi
 * 0000000140406DCC: mov     rdx, rsi
 * 0000000140406DCF: call    EtwTraceContextSwap
 * 0000000140406DD4: test    cs:KiCpuTracingFlags, 2
 * 0000000140406DDE: jz      short loc_140406DE5
 * 0000000140406DE0: call    KiClearLastBranchRecordStack
 * 0000000140406DE5: test    cs:KiCpuTracingFlags, 4
 * 0000000140406DEF: jz      short loc_140406DF6
 * 0000000140406DF1: call    KiResetProcessorTraceBuffer
 * 0000000140406DF6: jmp     loc_140406C21
 * 0000000140406DFB: xor     r9, r9; BugCheckParameter3
 * 0000000140406DFE: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140406E03: mov     r8, rsi; BugCheckParameter2
 * 0000000140406E06: mov     rdx, rdi; BugCheckParameter1
 * 0000000140406E09: mov     ecx, 0B8h; BugCheckCode
 * 0000000140406E0E: call    KeBugCheckEx
 * 0000000140406E14: xor     r9, r9; BugCheckParameter3
 * 0000000140406E17: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140406E1C: mov     r8, rsi; BugCheckParameter2
 * 0000000140406E1F: mov     rdx, rdi; BugCheckParameter1
 * 0000000140406E22: mov     ecx, 1CEh; BugCheckCode
 * 0000000140406E27: call    KeBugCheckEx
 * 0000000140406E2C: xor     ebp, ebp
 * 0000000140406E2E: inc     ebp
 * 0000000140406E30: test    cs:HvlLongSpinCountMask, ebp
 * 0000000140406E36: jnz     short loc_140406E54
 * 0000000140406E38: test    cs:HvlEnlightenments, 40h
 * 0000000140406E42: jz      short loc_140406E54
 * 0000000140406E44: call    KiCheckVpBackingLongSpinWaitHypercall
 * 0000000140406E49: test    al, al
 * 0000000140406E4B: jz      short loc_140406E54
 * 0000000140406E4D: mov     ecx, ebp
 * 0000000140406E4F: call    HvlNotifyLongSpinWait
 * 0000000140406E54: pause
 * 0000000140406E56: cmp     byte ptr [rsi+71h], 0
 * 0000000140406E5A: jz      loc_1404067D8
 * 0000000140406E60: jmp     short loc_140406E2E
 */
