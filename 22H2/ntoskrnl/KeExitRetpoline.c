/*
 * XREFs of KeExitRetpoline @ 0x1402F35B4
 * Callers:
 *     KiDispatchCallout @ 0x1402F3350 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14039EA94 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7210 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1403DB290 (CcBcbProfiler.c)
 *     sub_1403DC4C0 @ 0x1403DC4C0 (sub_1403DC4C0.c)
 *     KiSwInterruptDispatch @ 0x1403DC520 (KiSwInterruptDispatch.c)
 *     sub_1403DD450 @ 0x1403DD450 (sub_1403DD450.c)
 *     sub_1403E9AC0 @ 0x1403E9AC0 (sub_1403E9AC0.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB464 (RtlpComputeEpilogueOffset.c)
 *     sub_1405BF110 @ 0x1405BF110 (sub_1405BF110.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BF600 (FsRtlTruncateSmallMcb.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     KeUserModeCallback @ 0x14063D750 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A17560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for KeExitRetpoline @ 0x1402F35B4
 * Reason: Hex-Rays returned no pseudocode for 0x1402F35B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402F35B4: mov     [rsp+arg_8], rbx
 * 00000001402F35B9: pushfq
 * 00000001402F35BB: sub     rsp, 20h
 * 00000001402F35BF: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402F35C6: mov     cl, 1
 * 00000001402F35C8: shr     rax, 29h
 * 00000001402F35CC: and     al, cl
 * 00000001402F35CE: jnz     loc_140464A56
 * 00000001402F35D4: lfence
 * 00000001402F35D7: mov     rbx, [rsp+28h+arg_8]
 * 00000001402F35DC: add     rsp, 20h
 * 00000001402F35E0: pop     rcx
 * 00000001402F35E1: retn
 * 0000000140464A56: mov     ebx, [rsp+28h+var_8]
 * 0000000140464A5A: cli
 * 0000000140464A5B: mov     rax, gs:20h
 * 0000000140464A64: shr     ebx, 9
 * 0000000140464A67: and     bl, cl
 * 0000000140464A69: or      [rax+6D6h], cl
 * 0000000140464A6F: mov     al, [rax+6D6h]
 * 0000000140464A75: test    al, 2
 * 0000000140464A77: jnz     short loc_140464A7E
 * 0000000140464A79: call    __guard_retpoline_exit
 * 0000000140464A7E: test    bl, bl
 * 0000000140464A80: jz      loc_1402F35D4
 * 0000000140464A86: sti
 * 0000000140464A87: jmp     loc_1402F35D4
 */
