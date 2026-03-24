/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140A172A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A172A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140A172A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A172A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A172A0: mov     r11, offset _guard_icall_bitmap
 * 0000000140A172AA: mov     r11, [r11]
 * 0000000140A172AD: test    rax, rax
 * 0000000140A172B0: jge     loc_140A17358
 * 0000000140A172B6: test    r11, r11
 * 0000000140A172B9: jz      short __guard_retpoline_indirect_rax
 * 0000000140A172BB: mov     r10, rax
 * 0000000140A172BE: shr     r10, 9
 * 0000000140A172C2: mov     r11, [r11+r10*8]
 * 0000000140A172C6: mov     r10, rax
 * 0000000140A172C9: shr     r10, 3
 * 0000000140A172CD: test    al, 0Fh
 * 0000000140A172CF: jnz     loc_140A17341
 * 0000000140A172D5: bt      r11, r10
 * 0000000140A172D9: jnb     loc_140A17358
 * 0000000140A172DF: nop
 * 0000000140A172E0: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A172EA: mov     r11, [r11]
 * 0000000140A172ED: test    r11, r11
 * 0000000140A172F0: jz      short loc_140A1733B
 * 0000000140A172F2: mov     r10, rax
 * 0000000140A172F5: shr     r10, 10h
 * 0000000140A172F9: bt      [r11], r10
 * 0000000140A172FD: jnb     short loc_140A17325
 * 0000000140A172FF: call    loc_140A17320
 * 0000000140A17304: int     3; Trap to Debugger
 * 0000000140A17320: mov     [rsp+0], rax
 * 0000000140A17324: retn
 * 0000000140A17325: or      byte ptr gs:856h, 1
 * 0000000140A1732E: test    byte ptr gs:856h, 2
 * 0000000140A17337: jnz     short loc_140A1733B
 * 0000000140A17339: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140A1733B: lfence
 * 0000000140A1733E: jmp     rax
 * 0000000140A17341: btr     r10, 0
 * 0000000140A17346: bt      r11, r10
 * 0000000140A1734A: jnb     short loc_140A17358
 * 0000000140A1734C: or      r10, 1
 * 0000000140A17350: bt      r11, r10
 * 0000000140A17354: jnb     short loc_140A17358
 * 0000000140A17356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140A17358: mov     rcx, rax
 * 0000000140A1735B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140A17365: call    loc_140A17380
 * 0000000140A1736A: int     3; Trap to Debugger
 * 0000000140A17380: mov     [rsp+0], rax
 * 0000000140A17384: retn
 */
