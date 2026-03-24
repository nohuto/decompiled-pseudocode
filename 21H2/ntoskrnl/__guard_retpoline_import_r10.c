/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140A17420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140A17500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140A17560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140A17420
 * Reason: Hex-Rays returned no pseudocode for 0x140A17420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A17420: sub     rsp, 18h
 * 0000000140A17424: mov     [rsp+18h+var_18], rax
 * 0000000140A17428: mov     [rsp+18h+var_10], r11
 * 0000000140A1742D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A17437: mov     r11, [r11]
 * 0000000140A1743A: test    r11, r11
 * 0000000140A1743D: jz      short loc_140A1748F
 * 0000000140A1743F: mov     rax, r10
 * 0000000140A17442: shr     rax, 10h
 * 0000000140A17446: bt      [r11], rax
 * 0000000140A1744A: jnb     short loc_140A1745B
 * 0000000140A1744C: mov     rax, [rsp+18h+var_18]
 * 0000000140A17450: mov     r11, [rsp+18h+var_10]
 * 0000000140A17455: add     rsp, 18h
 * 0000000140A17459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140A1745B: or      byte ptr gs:856h, 1
 * 0000000140A17464: test    byte ptr gs:856h, 2
 * 0000000140A1746D: jnz     short loc_140A1748F
 * 0000000140A1746F: call    __guard_retpoline_exit
 * 0000000140A17474: mov     r11, (offset xmmword_140CFC490+4)
 * 0000000140A1747E: mov     r11d, [r11]
 * 0000000140A17481: test    r11d, 2
 * 0000000140A17488: jz      short loc_140A1748F
 * 0000000140A1748A: call    __guard_retpoline_import_r10_log_event
 * 0000000140A1748F: lfence
 * 0000000140A17492: mov     rax, [rsp+18h+var_18]
 * 0000000140A17496: mov     r11, [rsp+18h+var_10]
 * 0000000140A1749B: add     rsp, 18h
 * 0000000140A1749F: jmp     r10
 */
