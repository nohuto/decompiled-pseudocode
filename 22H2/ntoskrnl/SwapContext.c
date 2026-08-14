// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x140405E40
 * Callers:
 *     KiIdleLoop @ 0x140401FD0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x140405C60 (KxDispatchInterrupt.c)
 * Callees:
 *     KiUpdateSpeculationControl @ 0x14021ECC0 (KiUpdateSpeculationControl.c)
 *     KiBeginThreadAccountingPeriod @ 0x1402DE830 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceContextSwap @ 0x1403A9B60 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     SwapContext @ 0x140405E40 (SwapContext.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FA9E0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x140512640 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x140514CD0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x14051A3E0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x14051A520 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x14051E3E0 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x14051F080 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x140405E40
 * Reason: Hex-Rays returned no pseudocode for 0x140405E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140405E40: push    rbp
 * 0000000140405E42: sub     rsp, 30h
 * 0000000140405E46: prefetchw byte ptr [rsi+71h]
 * 0000000140405E4A: mov     [rsp+38h+var_10], cl
 * 0000000140405E4E: cmp     byte ptr [rsi+71h], 0
 * 0000000140405E52: jnz     loc_1404064AC
 * 0000000140405E58: mov     byte ptr [rsi+71h], 1
 * 0000000140405E5C: cli
 * 0000000140405E5D: rdtsc
 * 0000000140405E5F: shl     rdx, 20h
 * 0000000140405E63: or      rax, rdx
 * 0000000140405E66: sub     rax, [rbx+7EC0h]
 * 0000000140405E6D: add     [rbx+7F38h], rax
 * 0000000140405E74: add     [rbx+7EC0h], rax
 * 0000000140405E7B: mov     r12, rax
 * 0000000140405E7E: test    byte ptr [rbx+6], 0FFh
 * 0000000140405E82: jz      short loc_140405E9F
 * 0000000140405E84: and     byte ptr [rbx+6], 0
 * 0000000140405E88: cmp     [rbx+18h], rsi
 * 0000000140405E8C: jz      short loc_140405E9F
 * 0000000140405E8E: mov     ecx, 2
 * 0000000140405E93: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140405E9A: nop     dword ptr [rax+rax+00h]
 * 0000000140405E9F: test    byte ptr [rsi+2], 36h
 * 0000000140405EA3: jnz     loc_14040642A
 * 0000000140405EA9: dec     byte ptr [rbx+20h]
 * 0000000140405EAC: sti
 * 0000000140405EAD: inc     dword ptr [rbx+2D3Ch]
 * 0000000140405EB3: mov     rbp, cs:KeFeatureBits
 * 0000000140405EBA: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140405EC1: jz      short loc_140405ED5
 * 0000000140405EC3: bt      rbp, 2Ch ; ','
 * 0000000140405EC8: jnb     short loc_140405ED5
 * 0000000140405ECA: mov     rcx, rbx
 * 0000000140405ECD: mov     rdx, rsi
 * 0000000140405ED0: call    KiCheckAndApplyCacheIsolation
 * 0000000140405ED5: cmp     [rbx+18h], rsi
 * 0000000140405ED9: jz      short loc_140405EFB
 * 0000000140405EDB: mov     ecx, [rsi+200h]
 * 0000000140405EE1: mov     eax, [rbx+0ECh]
 * 0000000140405EE7: xor     eax, ecx
 * 0000000140405EE9: test    eax, 0FFh
 * 0000000140405EEE: jz      short loc_140405EFB
 * 0000000140405EF0: mov     rcx, rbx
 * 0000000140405EF3: mov     rdx, rsi
 * 0000000140405EF6: call    KeCheckAndApplyBamQos
 * 0000000140405EFB: mov     rdx, [rdi+250h]
 * 0000000140405F02: mov     rcx, [rdi+60h]
 * 0000000140405F06: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140405F0A: mov     eax, edx
 * 0000000140405F0C: jz      short loc_140405F38
 * 0000000140405F0E: shr     rdx, 20h
 * 0000000140405F12: bt      rbp, 26h ; '&'
 * 0000000140405F17: jb      short loc_140405F30
 * 0000000140405F19: bt      rbp, 0Fh
 * 0000000140405F1E: jb      short loc_140405F35
 * 0000000140405F20: bt      ebp, 17h
 * 0000000140405F24: jnb     short loc_140405F2B
 * 0000000140405F26: xsave   byte ptr [rcx]
 * 0000000140405F29: jmp     short loc_140405F38
 * 0000000140405F2B: fxsave  dword ptr [rcx]
 * 0000000140405F2E: jmp     short loc_140405F38
 * 0000000140405F30: xsaves  byte ptr [rcx]
 * 0000000140405F33: jmp     short loc_140405F38
 * 0000000140405F35: xsaveopt byte ptr [rcx]
 * 0000000140405F38: stmxcsr dword ptr [rcx+18h]
 * 0000000140405F3C: test    eax, 100h
 * 0000000140405F41: jz      short loc_140405F54
 * 0000000140405F43: cmp     cs:KiIptMsrMask, 0
 * 0000000140405F4A: jz      short loc_140405F54
 * 0000000140405F4C: mov     rcx, rdi
 * 0000000140405F4F: call    KiSaveThreadIptState
 * 0000000140405F54: mov     [rdi+58h], rsp
 * 0000000140405F58: mov     rsp, [rsi+58h]
 * 0000000140405F5C: test    byte ptr [rdi+3], 80h
 * 0000000140405F60: jz      short loc_140405F8D
 * 0000000140405F62: mov     ecx, 0C0000102h
 * 0000000140405F67: rdmsr
 * 0000000140405F69: shl     rdx, 20h
 * 0000000140405F6D: or      rax, rdx
 * 0000000140405F70: cmp     rax, cs:MmUserProbeAddress
 * 0000000140405F77: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140405F7F: mov     r14, [rdi+1F0h]
 * 0000000140405F86: mov     [r14+80h], rax
 * 0000000140405F8D: mov     rax, [rdi+220h]
 * 0000000140405F94: cmp     qword ptr [rax+580h], 0
 * 0000000140405F9C: jz      short loc_140405FB1
 * 0000000140405F9E: mov     ecx, 0C0000100h
 * 0000000140405FA3: rdmsr
 * 0000000140405FA5: mov     [rdi+5E8h], eax
 * 0000000140405FAB: mov     [rdi+5ECh], edx
 * 0000000140405FB1: btr     dword ptr gs:856h, 0
 * 0000000140405FBB: jnb     short loc_140405FC1
 * 0000000140405FBD: or      byte ptr [rdi+7Fh], 2
 * 0000000140405FC1: btr     dword ptr [rsi+7Fh], 1
 * 0000000140405FC6: jnb     short loc_140405FD1
 * 0000000140405FC8: or      byte ptr gs:856h, 1
 * 0000000140405FD1: mov     rcx, [rsi+220h]
 * 0000000140405FD8: or      cl, [rbx+6ECh]
 * 0000000140405FDE: and     cl, 0C2h
 * 0000000140405FE1: cmp     rcx, [rdi+220h]
 * 0000000140405FE8: jz      short loc_140405FF7
 * 0000000140405FEA: and     cl, 0C0h
 * 0000000140405FED: call    KiUpdateSpeculationControl
 * 0000000140405FF2: jmp     loc_14040619B
 * 0000000140405FF7: movzx   ecx, byte ptr gs:856h
 * 0000000140406000: and     cx, 3
 * 0000000140406004: cmp     cx, 1
 * 0000000140406008: jnz     loc_14040619B
 * 000000014040600E: cli
 * 000000014040600F: movzx   eax, word ptr gs:852h
 * 0000000140406018: cmp     gs:864h, ax
 * 0000000140406021: jz      short loc_140406035
 * 0000000140406023: mov     gs:864h, ax
 * 000000014040602C: mov     ecx, 48h ; 'H'
 * 0000000140406031: xor     edx, edx
 * 0000000140406033: wrmsr
 * 0000000140406035: movzx   edx, byte ptr gs:854h
 * 000000014040603E: test    edx, 10h
 * 0000000140406044: jz      short loc_14040605D
 * 0000000140406046: mov     eax, 1
 * 000000014040604B: xor     edx, edx
 * 000000014040604D: mov     ecx, 49h ; 'I'
 * 0000000140406052: wrmsr
 * 0000000140406054: movzx   edx, byte ptr gs:854h
 * 000000014040605D: test    edx, 40h
 * 0000000140406063: jz      loc_14040618E
 * 0000000140406069: call    loc_14040617C
 * 000000014040606E: add     rsp, 8
 * 0000000140406072: call    loc_140406185
 * 0000000140406077: add     rsp, 8
 * 000000014040607B: call    loc_14040606E
 * 0000000140406080: add     rsp, 8
 * 0000000140406084: call    loc_140406077
 * 0000000140406089: add     rsp, 8
 * 000000014040608D: call    loc_140406080
 * 0000000140406092: add     rsp, 8
 * 0000000140406096: call    loc_140406089
 * 000000014040609B: add     rsp, 8
 * 000000014040609F: call    loc_140406092
 * 00000001404060A4: add     rsp, 8
 * 00000001404060A8: call    loc_14040609B
 * 00000001404060AD: add     rsp, 8
 * 00000001404060B1: call    loc_1404060A4
 * 00000001404060B6: add     rsp, 8
 * 00000001404060BA: call    loc_1404060AD
 * 00000001404060BF: add     rsp, 8
 * 00000001404060C3: call    loc_1404060B6
 * 00000001404060C8: add     rsp, 8
 * 00000001404060CC: call    loc_1404060BF
 * 00000001404060D1: add     rsp, 8
 * 00000001404060D5: call    loc_1404060C8
 * 00000001404060DA: add     rsp, 8
 * 00000001404060DE: call    loc_1404060D1
 * 00000001404060E3: add     rsp, 8
 * 00000001404060E7: call    loc_1404060DA
 * 00000001404060EC: add     rsp, 8
 * 00000001404060F0: call    loc_1404060E3
 * 00000001404060F5: add     rsp, 8
 * 00000001404060F9: call    loc_1404060EC
 * 00000001404060FE: add     rsp, 8
 * 0000000140406102: call    loc_1404060F5
 * 0000000140406107: add     rsp, 8
 * 000000014040610B: call    loc_1404060FE
 * 0000000140406110: add     rsp, 8
 * 0000000140406114: call    loc_140406107
 * 0000000140406119: add     rsp, 8
 * 000000014040611D: call    loc_140406110
 * 0000000140406122: add     rsp, 8
 * 0000000140406126: call    loc_140406119
 * 000000014040612B: add     rsp, 8
 * 000000014040612F: call    loc_140406122
 * 0000000140406134: add     rsp, 8
 * 0000000140406138: call    loc_14040612B
 * 000000014040613D: add     rsp, 8
 * 0000000140406141: call    loc_140406134
 * 0000000140406146: add     rsp, 8
 * 000000014040614A: call    loc_14040613D
 * 000000014040614F: add     rsp, 8
 * 0000000140406153: call    loc_140406146
 * 0000000140406158: add     rsp, 8
 * 000000014040615C: call    loc_14040614F
 * 0000000140406161: add     rsp, 8
 * 0000000140406165: call    loc_140406158
 * 000000014040616A: add     rsp, 8
 * 000000014040616E: call    loc_140406161
 * 0000000140406173: add     rsp, 8
 * 0000000140406177: call    loc_14040616A
 * 000000014040617C: add     rsp, 8
 * 0000000140406180: call    loc_140406173
 * 0000000140406185: add     rsp, 8
 * 0000000140406189: mov     eax, 0DADAh
 * 000000014040618E: lfence
 * 0000000140406191: or      byte ptr gs:856h, 2
 * 000000014040619A: sti
 * 000000014040619B: mov     r14, [rsi+0B8h]
 * 00000001404061A2: cmp     r14, [rdi+0B8h]
 * 00000001404061A9: jz      loc_140406266
 * 00000001404061AF: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001404061B6: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001404061BD: lock bts [r14+rax*8+178h], rcx
 * 00000001404061C7: mov     rcx, [r14+28h]
 * 00000001404061CB: test    cs:KiKvaShadow, 1
 * 00000001404061D2: jz      short loc_14040620D
 * 00000001404061D4: cli
 * 00000001404061D5: bt      ecx, 1
 * 00000001404061D9: jnb     short loc_1404061E7
 * 00000001404061DB: bts     rcx, 3Fh ; '?'
 * 00000001404061E0: or      dword ptr [rbx+8E98h], 1
 * 00000001404061E7: mov     [rbx+8E80h], rcx
 * 00000001404061EE: btr     rcx, 3Fh ; '?'
 * 00000001404061F3: and     dword ptr [rbx+8E98h], 0FFFFFFFDh
 * 00000001404061FA: bt      dword ptr [r14+390h], 0
 * 0000000140406203: jnb     short loc_14040620C
 * 0000000140406205: xor     dword ptr [rbx+8E98h], 3
 * 000000014040620C: sti
 * 000000014040620D: test    cs:HvlEnlightenments, 1
 * 0000000140406217: jz      short loc_140406220
 * 0000000140406219: call    HvlSwitchVirtualAddressSpace
 * 000000014040621E: jmp     short loc_140406247
 * 0000000140406220: mov     cr3, rcx
 * 0000000140406223: test    cs:KiKvaShadow, 1
 * 000000014040622A: jz      short loc_140406247
 * 000000014040622C: bt      ecx, 1
 * 0000000140406230: jb      short loc_140406247
 * 0000000140406232: mov     rax, cr4
 * 0000000140406235: xor     rax, 80h
 * 000000014040623B: mov     cr4, rax
 * 000000014040623E: xor     rax, 80h
 * 0000000140406244: mov     cr4, rax
 * 0000000140406247: movzx   ecx, byte ptr [rbx+0D1h]
 * 000000014040624E: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140406255: mov     rdx, [rdi+0B8h]
 * 000000014040625C: lock btr [rdx+rax*8+178h], rcx
 * 0000000140406266: mov     rax, [rsi+28h]
 * 000000014040626A: test    cs:KiKvaShadow, 1
 * 0000000140406271: jnz     short loc_140406280
 * 0000000140406273: mov     r15, [rbx-178h]
 * 000000014040627A: mov     [r15+4], rax
 * 000000014040627E: jmp     short loc_140406287
 * 0000000140406280: mov     [rbx+8E88h], rax
 * 0000000140406287: mov     [rbx+28h], rax
 * 000000014040628B: test    rax, rax
 * 000000014040628E: jge     loc_140406494
 * 0000000140406294: cmp     cs:KiCpuTracingFlags, 0
 * 000000014040629B: jnz     loc_14040643D
 * 00000001404062A1: mov     rcx, 0FFFFF78000000000h
 * 00000001404062AB: mov     rdx, [rdi+250h]
 * 00000001404062B2: and     rdx, [rcx+5F0h]
 * 00000001404062B9: or      rdx, [rsi+250h]
 * 00000001404062C0: mov     byte ptr [rdi+71h], 0
 * 00000001404062C4: mov     rcx, [rsi+60h]
 * 00000001404062C8: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001404062CC: mov     eax, edx
 * 00000001404062CE: jz      short loc_1404062FB
 * 00000001404062D0: shr     rdx, 20h
 * 00000001404062D4: bt      rbp, 29h ; ')'
 * 00000001404062D9: jnb     short loc_1404062E1
 * 00000001404062DB: test    al, 1
 * 00000001404062DD: jz      short loc_1404062E1
 * 00000001404062DF: fninit
 * 00000001404062E1: bt      rbp, 26h ; '&'
 * 00000001404062E6: jb      short loc_1404062F3
 * 00000001404062E8: bt      ebp, 17h
 * 00000001404062EC: jb      short loc_1404062F8
 * 00000001404062EE: fxrstor dword ptr [rcx]
 * 00000001404062F1: jmp     short loc_1404062FB
 * 00000001404062F3: xrstors byte ptr [rcx]
 * 00000001404062F6: jmp     short loc_1404062FB
 * 00000001404062F8: xrstor  byte ptr [rcx]
 * 00000001404062FB: ldmxcsr dword ptr [rcx+18h]
 * 00000001404062FF: test    eax, 100h
 * 0000000140406304: jz      short loc_140406317
 * 0000000140406306: cmp     cs:KiIptMsrMask, 0
 * 000000014040630D: jz      short loc_140406317
 * 000000014040630F: mov     rcx, rsi
 * 0000000140406312: call    KiRestoreThreadIptState
 * 0000000140406317: bt      dword ptr [rsi+74h], 0Ah
 * 000000014040631C: jb      loc_1404063DF
 * 0000000140406322: mov     rax, [rsi+220h]
 * 0000000140406329: cmp     qword ptr [rax+580h], 0
 * 0000000140406331: mov     eax, [rsi+5E8h]
 * 0000000140406337: jz      short loc_140406344
 * 0000000140406339: mov     eax, [rsi+0F0h]
 * 000000014040633F: add     eax, 2000h
 * 0000000140406344: mov     rcx, [rbx-180h]
 * 000000014040634B: mov     [rcx+52h], ax
 * 000000014040634F: shr     eax, 10h
 * 0000000140406352: mov     [rcx+54h], al
 * 0000000140406355: mov     [rcx+57h], ah
 * 0000000140406358: mov     eax, 53h ; 'S'
 * 000000014040635D: mov     fs, eax
 * 000000014040635F: mov     eax, [rsi+5E8h]
 * 0000000140406365: mov     edx, [rsi+5ECh]
 * 000000014040636B: mov     ecx, 0C0000100h
 * 0000000140406370: wrmsr
 * 0000000140406372: mov     eax, ds
 * 0000000140406374: mov     edx, es
 * 0000000140406376: and     eax, edx
 * 0000000140406378: mov     edx, gs
 * 000000014040637A: and     eax, edx
 * 000000014040637C: cmp     ax, 2Bh ; '+'
 * 0000000140406380: jz      short loc_140406395
 * 0000000140406382: mov     edx, 2Bh ; '+'
 * 0000000140406387: mov     ds, edx
 * 0000000140406389: mov     es, edx
 * 000000014040638B: cli
 * 000000014040638C: swapgs
 * 000000014040638F: mov     gs, edx
 * 0000000140406391: swapgs
 * 0000000140406394: sti
 * 0000000140406395: mov     rax, [rsi+0F0h]
 * 000000014040639C: mov     edx, [rsi+0F4h]
 * 00000001404063A2: mov     [rbx-150h], rax
 * 00000001404063A9: test    byte ptr [rsi+3], 84h
 * 00000001404063AD: jz      short loc_1404063D8
 * 00000001404063AF: test    byte ptr [rsi+3], 80h
 * 00000001404063B3: jz      short loc_1404063CC
 * 00000001404063B5: mov     r8, [rsi+1F0h]
 * 00000001404063BC: mov     eax, [r8+80h]
 * 00000001404063C3: mov     edx, [r8+84h]
 * 00000001404063CA: jmp     short loc_1404063D8
 * 00000001404063CC: mov     eax, [rsi+5F0h]
 * 00000001404063D2: mov     edx, [rsi+5F4h]
 * 00000001404063D8: mov     ecx, 0C0000102h
 * 00000001404063DD: wrmsr
 * 00000001404063DF: test    dword ptr [rbx+312Ch], 10001h
 * 00000001404063E9: jnz     loc_14040647B
 * 00000001404063EF: inc     dword ptr [rsi+154h]
 * 00000001404063F5: cmp     byte ptr [rsi+0C1h], 1
 * 00000001404063FC: jnz     short loc_140406421
 * 00000001404063FE: movzx   ax, [rsp+38h+var_10]
 * 0000000140406404: or      ax, [rsi+1E6h]
 * 000000014040640B: jz      short loc_140406421
 * 000000014040640D: mov     ecx, 1
 * 0000000140406412: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140406419: nop     dword ptr [rax+rax+00h]
 * 000000014040641E: or      rcx, rsp
 * 0000000140406421: setz    al
 * 0000000140406424: add     rsp, 30h
 * 0000000140406428: pop     rbp
 * 0000000140406429: retn
 * 000000014040642A: mov     rcx, rbx
 * 000000014040642D: mov     rdx, rsi
 * 0000000140406430: mov     r8, r12
 * 0000000140406433: call    KiBeginThreadAccountingPeriod
 * 0000000140406438: jmp     loc_140405EAD
 * 000000014040643D: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 0000000140406447: jz      short loc_140406454
 * 0000000140406449: mov     rcx, rdi
 * 000000014040644C: mov     rdx, rsi
 * 000000014040644F: call    EtwTraceContextSwap
 * 0000000140406454: test    cs:KiCpuTracingFlags, 2
 * 000000014040645E: jz      short loc_140406465
 * 0000000140406460: call    KiClearLastBranchRecordStack
 * 0000000140406465: test    cs:KiCpuTracingFlags, 4
 * 000000014040646F: jz      short loc_140406476
 * 0000000140406471: call    KiResetProcessorTraceBuffer
 * 0000000140406476: jmp     loc_1404062A1
 * 000000014040647B: xor     r9, r9; BugCheckParameter3
 * 000000014040647E: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140406483: mov     r8, rsi; BugCheckParameter2
 * 0000000140406486: mov     rdx, rdi; BugCheckParameter1
 * 0000000140406489: mov     ecx, 0B8h; BugCheckCode
 * 000000014040648E: call    KeBugCheckEx
 * 0000000140406494: xor     r9, r9; BugCheckParameter3
 * 0000000140406497: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 000000014040649C: mov     r8, rsi; BugCheckParameter2
 * 000000014040649F: mov     rdx, rdi; BugCheckParameter1
 * 00000001404064A2: mov     ecx, 1CEh; BugCheckCode
 * 00000001404064A7: call    KeBugCheckEx
 * 00000001404064AC: xor     ebp, ebp
 * 00000001404064AE: inc     ebp
 * 00000001404064B0: test    cs:HvlLongSpinCountMask, ebp
 * 00000001404064B6: jnz     short loc_1404064D4
 * 00000001404064B8: test    cs:HvlEnlightenments, 40h
 * 00000001404064C2: jz      short loc_1404064D4
 * 00000001404064C4: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001404064C9: test    al, al
 * 00000001404064CB: jz      short loc_1404064D4
 * 00000001404064CD: mov     ecx, ebp
 * 00000001404064CF: call    HvlNotifyLongSpinWait
 * 00000001404064D4: pause
 * 00000001404064D6: cmp     byte ptr [rsi+71h], 0
 * 00000001404064DA: jz      loc_140405E58
 * 00000001404064E0: jmp     short loc_1404064AE
 */
