/*
 * XREFs of NVMeHwResetBus @ 0x1C000AF10
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerAsyncReset @ 0x1C000D560 (NVMeControllerAsyncReset.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwResetBus @ 0x1C000AF10
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AF10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AF10: push    rbx
 * 00000001C000AF12: sub     rsp, 20h
 * 00000001C000AF16: cmp     byte ptr [rcx+10h], 0
 * 00000001C000AF1A: mov     rbx, rcx
 * 00000001C000AF1D: jz      short loc_1C000AF23
 * 00000001C000AF1F: mov     al, 1
 * 00000001C000AF21: jmp     short loc_1C000AF3E
 * 00000001C000AF23: xor     r9d, r9d
 * 00000001C000AF26: xor     r8d, r8d
 * 00000001C000AF29: xor     edx, edx
 * 00000001C000AF2B: call    NVMeControllerAsyncReset
 * 00000001C000AF30: test    al, al
 * 00000001C000AF32: jnz     short loc_1C000AF3E
 * 00000001C000AF34: xor     edx, edx
 * 00000001C000AF36: mov     rcx, rbx; int
 * 00000001C000AF39: call    NVMeControllerReset
 * 00000001C000AF3E: add     rsp, 20h
 * 00000001C000AF42: pop     rbx
 * 00000001C000AF43: retn
 */
