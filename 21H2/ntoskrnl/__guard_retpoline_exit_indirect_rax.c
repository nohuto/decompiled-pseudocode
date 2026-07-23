/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x140A183A0
 * Callers:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A182A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1405A82E0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140A18560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x140A183A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A183A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A183A0: sub     rsp, 48h
 * 0000000140A183A4: call    __guard_retpoline_exit
 * 0000000140A183A9: lfence
 * 0000000140A183AC: mov     r10, (offset xmmword_140CFC490+4)
 * 0000000140A183B6: mov     r10d, [r10]
 * 0000000140A183B9: test    r10d, 2
 * 0000000140A183C0: jz      short loc_140A18403
 * 0000000140A183C2: mov     [rsp+48h+var_28], rax
 * 0000000140A183C7: mov     [rsp+48h+var_20], rcx
 * 0000000140A183CC: mov     [rsp+48h+var_18], rdx
 * 0000000140A183D1: mov     [rsp+48h+var_10], r8
 * 0000000140A183D6: mov     [rsp+48h+var_8], r9
 * 0000000140A183DB: mov     rcx, rax
 * 0000000140A183DE: mov     rax, offset EtwTraceRetpolineExit
 * 0000000140A183E8: call    rax ; EtwTraceRetpolineExit
 * 0000000140A183EA: mov     rax, [rsp+48h+var_28]
 * 0000000140A183EF: mov     rcx, [rsp+48h+var_20]
 * 0000000140A183F4: mov     rdx, [rsp+48h+var_18]
 * 0000000140A183F9: mov     r8, [rsp+48h+var_10]
 * 0000000140A183FE: mov     r9, [rsp+48h+var_8]
 * 0000000140A18403: add     rsp, 48h
 * 0000000140A18407: jmp     rax
 */
