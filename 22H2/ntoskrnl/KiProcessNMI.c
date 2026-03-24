/*
 * XREFs of KiProcessNMI @ 0x1405129B0
 * Callers:
 *     KxNmiInterrupt @ 0x14040A840 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140329D48 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 *     HalHandleNMI @ 0x1404BD690 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x140512550 (KiCheckForFreezeExecution.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x1405129B0
 * Reason: Hex-Rays returned no pseudocode for 0x1405129B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405129B0: mov     [rsp+arg_0], rbx
 * 00000001405129B5: mov     [rsp+arg_8], rbp
 * 00000001405129BA: mov     [rsp+arg_18], rsi
 * 00000001405129BF: push    rdi
 * 00000001405129C0: push    r12
 * 00000001405129C2: push    r13
 * 00000001405129C4: push    r14
 * 00000001405129C6: push    r15
 * 00000001405129C8: sub     rsp, 20h
 * 00000001405129CC: mov     rax, cs:off_140C00978
 * 00000001405129D3: mov     r14, rcx
 * 00000001405129D6: xor     ecx, ecx
 * 00000001405129D8: mov     rbp, rdx
 * 00000001405129DB: call    _guard_dispatch_icall
 * 00000001405129E0: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001405129E7: mov     ebx, 1
 * 00000001405129EC: shr     rax, 29h
 * 00000001405129F0: and     al, bl
 * 00000001405129F2: jz      short loc_1405129F9
 * 00000001405129F4: call    KiFlushCurrentRsb
 * 00000001405129F9: lfence
 * 00000001405129FC: mov     rdx, rbp
 * 00000001405129FF: mov     rcx, r14
 * 0000000140512A02: call    KiCheckForFreezeExecution
 * 0000000140512A07: xor     r12d, r12d
 * 0000000140512A0A: test    al, al
 * 0000000140512A0C: jnz     loc_140512B1D
 * 0000000140512A12: mov     rax, gs:20h
 * 0000000140512A1B: lea     r13, cs:140000000h
 * 0000000140512A22: mov     r8, rbx
 * 0000000140512A25: mov     ecx, [rax+24h]
 * 0000000140512A28: mov     r15d, ecx
 * 0000000140512A2B: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 0000000140512A33: mov     ecx, eax
 * 0000000140512A35: mov     edx, eax
 * 0000000140512A37: and     ecx, 3Fh
 * 0000000140512A3A: shr     rdx, 6
 * 0000000140512A3E: shl     r8, cl
 * 0000000140512A41: prefetchw byte ptr ds:rva qword_140C12818[r13+rdx*8]
 * 0000000140512A4A: mov     rax, ds:rva qword_140C12818[r13+rdx*8]
 * 0000000140512A52: mov     rcx, rax
 * 0000000140512A55: or      rcx, r8
 * 0000000140512A58: lock cmpxchg ds:rva qword_140C12818[r13+rdx*8], rcx
 * 0000000140512A62: jnz     short loc_140512A52
 * 0000000140512A64: test    rax, r8
 * 0000000140512A67: jnz     loc_140512B1D
 * 0000000140512A6D: mov     rax, cs:off_140C00978
 * 0000000140512A74: mov     ecx, ebx
 * 0000000140512A76: call    _guard_dispatch_icall
 * 0000000140512A7B: mov     rdi, cs:KiNmiCallbackListHead
 * 0000000140512A82: mov     sil, r12b
 * 0000000140512A85: test    rdi, rdi
 * 0000000140512A88: jz      short loc_140512AAA
 * 0000000140512A8A: mov     rax, [rdi+8]
 * 0000000140512A8E: mov     dl, sil
 * 0000000140512A91: mov     rcx, [rdi+10h]
 * 0000000140512A95: call    _guard_dispatch_icall
 * 0000000140512A9A: mov     rdi, [rdi]
 * 0000000140512A9D: or      sil, al
 * 0000000140512AA0: test    rdi, rdi
 * 0000000140512AA3: jnz     short loc_140512A8A
 * 0000000140512AA5: test    sil, sil
 * 0000000140512AA8: jnz     short loc_140512AFB
 * 0000000140512AAA: lea     rcx, KiNMILock
 * 0000000140512AB1: call    KxTryToAcquireSpinLock
 * 0000000140512AB6: test    al, al
 * 0000000140512AB8: jnz     short loc_140512AD3
 * 0000000140512ABA: mov     rdx, rbp
 * 0000000140512ABD: mov     rcx, r14
 * 0000000140512AC0: call    KiCheckForFreezeExecution
 * 0000000140512AC5: mov     rax, cs:KiNMILock
 * 0000000140512ACC: test    rax, rax
 * 0000000140512ACF: jnz     short loc_140512ABA
 * 0000000140512AD1: jmp     short loc_140512AAA
 * 0000000140512AD3: xor     eax, eax
 * 0000000140512AD5: lock cmpxchg cs:KiBugCheckActive, ebx
 * 0000000140512ADD: xor     ecx, ecx
 * 0000000140512ADF: call    HalHandleNMI
 * 0000000140512AE4: mov     eax, ebx
 * 0000000140512AE6: lock cmpxchg cs:KiBugCheckActive, r12d
 * 0000000140512AEF: lea     rcx, KiNMILock; SpinLock
 * 0000000140512AF6: call    KxReleaseSpinLock
 * 0000000140512AFB: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 0000000140512B03: mov     ecx, edx
 * 0000000140512B05: mov     eax, edx
 * 0000000140512B07: and     ecx, 3Fh
 * 0000000140512B0A: shl     rbx, cl
 * 0000000140512B0D: not     rbx
 * 0000000140512B10: shr     rax, 6
 * 0000000140512B14: lock and ds:rva qword_140C12818[r13+rax*8], rbx
 * 0000000140512B1D: mov     rbx, [rsp+48h+arg_0]
 * 0000000140512B22: mov     rbp, [rsp+48h+arg_8]
 * 0000000140512B27: mov     rsi, [rsp+48h+arg_18]
 * 0000000140512B2C: add     rsp, 20h
 * 0000000140512B30: pop     r15
 * 0000000140512B32: pop     r14
 * 0000000140512B34: pop     r13
 * 0000000140512B36: pop     r12
 * 0000000140512B38: pop     rdi
 * 0000000140512B39: retn
 */
