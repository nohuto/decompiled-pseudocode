/*
 * XREFs of __guard_retpoline_exit @ 0x140A18560
 * Callers:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140A183A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140A18420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A18560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140A18560
 * Reason: Hex-Rays returned no pseudocode for 0x140A18560
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A18560: pushfq
 * 0000000140A18562: sub     rsp, 18h
 * 0000000140A18566: mov     [rsp+20h+var_20], rax
 * 0000000140A1856A: mov     [rsp+20h+var_18], rcx
 * 0000000140A1856F: mov     [rsp+20h+var_10], rdx
 * 0000000140A18574: cli
 * 0000000140A18575: movzx   eax, word ptr gs:852h
 * 0000000140A1857E: cmp     gs:864h, ax
 * 0000000140A18587: jz      short loc_140A1859B
 * 0000000140A18589: mov     gs:864h, ax
 * 0000000140A18592: mov     ecx, 48h ; 'H'
 * 0000000140A18597: xor     edx, edx
 * 0000000140A18599: wrmsr
 * 0000000140A1859B: movzx   edx, byte ptr gs:854h
 * 0000000140A185A4: test    edx, 10h
 * 0000000140A185AA: jz      short loc_140A185C3
 * 0000000140A185AC: mov     eax, 1
 * 0000000140A185B1: xor     edx, edx
 * 0000000140A185B3: mov     ecx, 49h ; 'I'
 * 0000000140A185B8: wrmsr
 * 0000000140A185BA: movzx   edx, byte ptr gs:854h
 * 0000000140A185C3: test    edx, 40h
 * 0000000140A185C9: jz      loc_140A186F4
 * 0000000140A185CF: call    loc_140A186E2
 * 0000000140A185D4: add     rsp, 8
 * 0000000140A185D8: call    loc_140A186EB
 * 0000000140A185DD: add     rsp, 8
 * 0000000140A185E1: call    loc_140A185D4
 * 0000000140A185E6: add     rsp, 8
 * 0000000140A185EA: call    loc_140A185DD
 * 0000000140A185EF: add     rsp, 8
 * 0000000140A185F3: call    loc_140A185E6
 * 0000000140A185F8: add     rsp, 8
 * 0000000140A185FC: call    loc_140A185EF
 * 0000000140A18601: add     rsp, 8
 * 0000000140A18605: call    loc_140A185F8
 * 0000000140A1860A: add     rsp, 8
 * 0000000140A1860E: call    loc_140A18601
 * 0000000140A18613: add     rsp, 8
 * 0000000140A18617: call    loc_140A1860A
 * 0000000140A1861C: add     rsp, 8
 * 0000000140A18620: call    loc_140A18613
 * 0000000140A18625: add     rsp, 8
 * 0000000140A18629: call    loc_140A1861C
 * 0000000140A1862E: add     rsp, 8
 * 0000000140A18632: call    loc_140A18625
 * 0000000140A18637: add     rsp, 8
 * 0000000140A1863B: call    loc_140A1862E
 * 0000000140A18640: add     rsp, 8
 * 0000000140A18644: call    loc_140A18637
 * 0000000140A18649: add     rsp, 8
 * 0000000140A1864D: call    loc_140A18640
 * 0000000140A18652: add     rsp, 8
 * 0000000140A18656: call    loc_140A18649
 * 0000000140A1865B: add     rsp, 8
 * 0000000140A1865F: call    loc_140A18652
 * 0000000140A18664: add     rsp, 8
 * 0000000140A18668: call    loc_140A1865B
 * 0000000140A1866D: add     rsp, 8
 * 0000000140A18671: call    loc_140A18664
 * 0000000140A18676: add     rsp, 8
 * 0000000140A1867A: call    loc_140A1866D
 * 0000000140A1867F: add     rsp, 8
 * 0000000140A18683: call    loc_140A18676
 * 0000000140A18688: add     rsp, 8
 * 0000000140A1868C: call    loc_140A1867F
 * 0000000140A18691: add     rsp, 8
 * 0000000140A18695: call    loc_140A18688
 * 0000000140A1869A: add     rsp, 8
 * 0000000140A1869E: call    loc_140A18691
 * 0000000140A186A3: add     rsp, 8
 * 0000000140A186A7: call    loc_140A1869A
 * 0000000140A186AC: add     rsp, 8
 * 0000000140A186B0: call    loc_140A186A3
 * 0000000140A186B5: add     rsp, 8
 * 0000000140A186B9: call    loc_140A186AC
 * 0000000140A186BE: add     rsp, 8
 * 0000000140A186C2: call    loc_140A186B5
 * 0000000140A186C7: add     rsp, 8
 * 0000000140A186CB: call    loc_140A186BE
 * 0000000140A186D0: add     rsp, 8
 * 0000000140A186D4: call    loc_140A186C7
 * 0000000140A186D9: add     rsp, 8
 * 0000000140A186DD: call    loc_140A186D0
 * 0000000140A186E2: add     rsp, 8
 * 0000000140A186E6: call    loc_140A186D9
 * 0000000140A186EB: add     rsp, 8
 * 0000000140A186EF: mov     eax, 0DADAh
 * 0000000140A186F4: lfence
 * 0000000140A186F7: or      byte ptr gs:856h, 2
 * 0000000140A18700: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140A18707: jnb     short loc_140A1870A
 * 0000000140A18709: sti
 * 0000000140A1870A: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140A1870E: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140A18713: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140A18718: add     rsp, 20h
 * 0000000140A1871C: retn
 */
