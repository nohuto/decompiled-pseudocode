/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DEFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C00DEFD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DEFD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DEFD0: sub     rsp, 28h
 * 00000001C00DEFD4: cmp     byte ptr [rcx+8], 0
 * 00000001C00DEFD8: jnz     loc_1C01A2610
 * 00000001C00DEFDE: add     rsp, 28h
 * 00000001C00DEFE2: retn
 * 00000001C01A2610: mov     rcx, [rcx+10h]
 * 00000001C01A2614: xor     r9d, r9d
 * 00000001C01A2617: xor     r8d, r8d
 * 00000001C01A261A: call    cs:__imp_ExSetTimer
 * 00000001C01A2621: nop     dword ptr [rax+rax+00h]
 * 00000001C01A2626: nop
 * 00000001C01A2627: jmp     loc_1C00DEFDE
 */
