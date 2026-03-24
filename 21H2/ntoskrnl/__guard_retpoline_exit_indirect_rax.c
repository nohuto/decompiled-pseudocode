/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140A173A0
 * Callers:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A172A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1405A80B0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140A17560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140A173A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A173A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A173A0: sub     rsp, 48h
 * 0000000140A173A4: call    __guard_retpoline_exit
 * 0000000140A173A9: lfence
 * 0000000140A173AC: mov     r10, (offset xmmword_140CFC490+4)
 * 0000000140A173B6: mov     r10d, [r10]
 * 0000000140A173B9: test    r10d, 2
 * 0000000140A173C0: jz      short loc_140A17403
 * 0000000140A173C2: mov     [rsp+48h+var_28], rax
 * 0000000140A173C7: mov     [rsp+48h+var_20], rcx
 * 0000000140A173CC: mov     [rsp+48h+var_18], rdx
 * 0000000140A173D1: mov     [rsp+48h+var_10], r8
 * 0000000140A173D6: mov     [rsp+48h+var_8], r9
 * 0000000140A173DB: mov     rcx, rax
 * 0000000140A173DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140A173E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140A173EA: mov     rax, [rsp+48h+var_28]
 * 0000000140A173EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140A173F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140A173F9: mov     r8, [rsp+48h+var_10]
 * 0000000140A173FE: mov     r9, [rsp+48h+var_8]
 * 0000000140A17403: add     rsp, 48h
 * 0000000140A17407: jmp     rax
 */
