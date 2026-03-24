/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1403FE6C0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1403FE680 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1403FE6C0
 * Reason: Hex-Rays returned no pseudocode for 0x1403FE6C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403FE6C0: test    dword ptr [rbp+0F8h], 200h
 * 00000001403FE6CA: jz      short loc_1403FE6CD
 * 00000001403FE6CC: sti
 * 00000001403FE6CD: call    KiDispatchException
 * 00000001403FE6D2: cli
 * 00000001403FE6D3: mov     rsp, [rsp+arg_38]
 * 00000001403FE6D8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
