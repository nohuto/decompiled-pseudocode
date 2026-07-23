/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140A18420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140A18500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140A18560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140A18420
 * Reason: Hex-Rays returned no pseudocode for 0x140A18420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A18420: sub     rsp, 18h
 * 0000000140A18424: mov     [rsp+18h+var_18], rax
 * 0000000140A18428: mov     [rsp+18h+var_10], r11
 * 0000000140A1842D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A18437: mov     r11, [r11]
 * 0000000140A1843A: test    r11, r11
 * 0000000140A1843D: jz      short loc_140A1848F
 * 0000000140A1843F: mov     rax, r10
 * 0000000140A18442: shr     rax, 10h
 * 0000000140A18446: bt      [r11], rax
 * 0000000140A1844A: jnb     short loc_140A1845B
 * 0000000140A1844C: mov     rax, [rsp+18h+var_18]
 * 0000000140A18450: mov     r11, [rsp+18h+var_10]
 * 0000000140A18455: add     rsp, 18h
 * 0000000140A18459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140A1845B: or      byte ptr gs:856h, 1
 * 0000000140A18464: test    byte ptr gs:856h, 2
 * 0000000140A1846D: jnz     short loc_140A1848F
 * 0000000140A1846F: call    __guard_retpoline_exit
 * 0000000140A18474: mov     r11, (offset xmmword_140CFC490+4)
 * 0000000140A1847E: mov     r11d, [r11]
 * 0000000140A18481: test    r11d, 2
 * 0000000140A18488: jz      short loc_140A1848F
 * 0000000140A1848A: call    __guard_retpoline_import_r10_log_event
 * 0000000140A1848F: lfence
 * 0000000140A18492: mov     rax, [rsp+18h+var_18]
 * 0000000140A18496: mov     r11, [rsp+18h+var_10]
 * 0000000140A1849B: add     rsp, 18h
 * 0000000140A1849F: jmp     r10
 */
