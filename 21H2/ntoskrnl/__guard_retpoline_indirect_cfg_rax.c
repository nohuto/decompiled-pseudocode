/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x140A182A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x140A182A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x140A182A0
 * Reason: Hex-Rays returned no pseudocode for 0x140A182A0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A182A0: mov     r11, offset _guard_icall_bitmap
 * 0000000140A182AA: mov     r11, [r11]
 * 0000000140A182AD: test    rax, rax
 * 0000000140A182B0: jge     loc_140A18358
 * 0000000140A182B6: test    r11, r11
 * 0000000140A182B9: jz      short __guard_retpoline_indirect_rax
 * 0000000140A182BB: mov     r10, rax
 * 0000000140A182BE: shr     r10, 9
 * 0000000140A182C2: mov     r11, [r11+r10*8]
 * 0000000140A182C6: mov     r10, rax
 * 0000000140A182C9: shr     r10, 3
 * 0000000140A182CD: test    al, 0Fh
 * 0000000140A182CF: jnz     loc_140A18341
 * 0000000140A182D5: bt      r11, r10
 * 0000000140A182D9: jnb     loc_140A18358
 * 0000000140A182DF: nop
 * 0000000140A182E0: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A182EA: mov     r11, [r11]
 * 0000000140A182ED: test    r11, r11
 * 0000000140A182F0: jz      short loc_140A1833B
 * 0000000140A182F2: mov     r10, rax
 * 0000000140A182F5: shr     r10, 10h
 * 0000000140A182F9: bt      [r11], r10
 * 0000000140A182FD: jnb     short loc_140A18325
 * 0000000140A182FF: call    loc_140A18320
 * 0000000140A18304: int     3; Trap to Debugger
 * 0000000140A18320: mov     [rsp+0], rax
 * 0000000140A18324: retn
 * 0000000140A18325: or      byte ptr gs:856h, 1
 * 0000000140A1832E: test    byte ptr gs:856h, 2
 * 0000000140A18337: jnz     short loc_140A1833B
 * 0000000140A18339: jmp     short __guard_retpoline_exit_indirect_rax
 * 0000000140A1833B: lfence
 * 0000000140A1833E: jmp     rax
 * 0000000140A18341: btr     r10, 0
 * 0000000140A18346: bt      r11, r10
 * 0000000140A1834A: jnb     short loc_140A18358
 * 0000000140A1834C: or      r10, 1
 * 0000000140A18350: bt      r11, r10
 * 0000000140A18354: jnb     short loc_140A18358
 * 0000000140A18356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140A18358: mov     rcx, rax
 * 0000000140A1835B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140A18365: call    loc_140A18380
 * 0000000140A1836A: int     3; Trap to Debugger
 * 0000000140A18380: mov     [rsp+0], rax
 * 0000000140A18384: retn
 */
