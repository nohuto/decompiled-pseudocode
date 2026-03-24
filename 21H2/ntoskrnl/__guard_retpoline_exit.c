/*
 * XREFs of __guard_retpoline_exit @ 0x140A17560
 * Callers:
 *     KeExitRetpoline @ 0x14035E888 (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140A173A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140A17420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A17560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140A17560
 * Reason: Hex-Rays returned no pseudocode for 0x140A17560
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A17560: pushfq
 * 0000000140A17562: sub     rsp, 18h
 * 0000000140A17566: mov     [rsp+20h+var_20], rax
 * 0000000140A1756A: mov     [rsp+20h+var_18], rcx
 * 0000000140A1756F: mov     [rsp+20h+var_10], rdx
 * 0000000140A17574: cli
 * 0000000140A17575: movzx   eax, word ptr gs:852h
 * 0000000140A1757E: cmp     gs:864h, ax
 * 0000000140A17587: jz      short loc_140A1759B
 * 0000000140A17589: mov     gs:864h, ax
 * 0000000140A17592: mov     ecx, 48h ; 'H'
 * 0000000140A17597: xor     edx, edx
 * 0000000140A17599: wrmsr
 * 0000000140A1759B: movzx   edx, byte ptr gs:854h
 * 0000000140A175A4: test    edx, 10h
 * 0000000140A175AA: jz      short loc_140A175C3
 * 0000000140A175AC: mov     eax, 1
 * 0000000140A175B1: xor     edx, edx
 * 0000000140A175B3: mov     ecx, 49h ; 'I'
 * 0000000140A175B8: wrmsr
 * 0000000140A175BA: movzx   edx, byte ptr gs:854h
 * 0000000140A175C3: test    edx, 40h
 * 0000000140A175C9: jz      loc_140A176F4
 * 0000000140A175CF: call    loc_140A176E2
 * 0000000140A175D4: add     rsp, 8
 * 0000000140A175D8: call    loc_140A176EB
 * 0000000140A175DD: add     rsp, 8
 * 0000000140A175E1: call    loc_140A175D4
 * 0000000140A175E6: add     rsp, 8
 * 0000000140A175EA: call    loc_140A175DD
 * 0000000140A175EF: add     rsp, 8
 * 0000000140A175F3: call    loc_140A175E6
 * 0000000140A175F8: add     rsp, 8
 * 0000000140A175FC: call    loc_140A175EF
 * 0000000140A17601: add     rsp, 8
 * 0000000140A17605: call    loc_140A175F8
 * 0000000140A1760A: add     rsp, 8
 * 0000000140A1760E: call    loc_140A17601
 * 0000000140A17613: add     rsp, 8
 * 0000000140A17617: call    loc_140A1760A
 * 0000000140A1761C: add     rsp, 8
 * 0000000140A17620: call    loc_140A17613
 * 0000000140A17625: add     rsp, 8
 * 0000000140A17629: call    loc_140A1761C
 * 0000000140A1762E: add     rsp, 8
 * 0000000140A17632: call    loc_140A17625
 * 0000000140A17637: add     rsp, 8
 * 0000000140A1763B: call    loc_140A1762E
 * 0000000140A17640: add     rsp, 8
 * 0000000140A17644: call    loc_140A17637
 * 0000000140A17649: add     rsp, 8
 * 0000000140A1764D: call    loc_140A17640
 * 0000000140A17652: add     rsp, 8
 * 0000000140A17656: call    loc_140A17649
 * 0000000140A1765B: add     rsp, 8
 * 0000000140A1765F: call    loc_140A17652
 * 0000000140A17664: add     rsp, 8
 * 0000000140A17668: call    loc_140A1765B
 * 0000000140A1766D: add     rsp, 8
 * 0000000140A17671: call    loc_140A17664
 * 0000000140A17676: add     rsp, 8
 * 0000000140A1767A: call    loc_140A1766D
 * 0000000140A1767F: add     rsp, 8
 * 0000000140A17683: call    loc_140A17676
 * 0000000140A17688: add     rsp, 8
 * 0000000140A1768C: call    loc_140A1767F
 * 0000000140A17691: add     rsp, 8
 * 0000000140A17695: call    loc_140A17688
 * 0000000140A1769A: add     rsp, 8
 * 0000000140A1769E: call    loc_140A17691
 * 0000000140A176A3: add     rsp, 8
 * 0000000140A176A7: call    loc_140A1769A
 * 0000000140A176AC: add     rsp, 8
 * 0000000140A176B0: call    loc_140A176A3
 * 0000000140A176B5: add     rsp, 8
 * 0000000140A176B9: call    loc_140A176AC
 * 0000000140A176BE: add     rsp, 8
 * 0000000140A176C2: call    loc_140A176B5
 * 0000000140A176C7: add     rsp, 8
 * 0000000140A176CB: call    loc_140A176BE
 * 0000000140A176D0: add     rsp, 8
 * 0000000140A176D4: call    loc_140A176C7
 * 0000000140A176D9: add     rsp, 8
 * 0000000140A176DD: call    loc_140A176D0
 * 0000000140A176E2: add     rsp, 8
 * 0000000140A176E6: call    loc_140A176D9
 * 0000000140A176EB: add     rsp, 8
 * 0000000140A176EF: mov     eax, 0DADAh
 * 0000000140A176F4: lfence
 * 0000000140A176F7: or      byte ptr gs:856h, 2
 * 0000000140A17700: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140A17707: jnb     short loc_140A1770A
 * 0000000140A17709: sti
 * 0000000140A1770A: mov     rax, [rsp-0E0h+arg_D8]
 * 0000000140A1770E: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140A17713: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140A17718: add     rsp, 20h
 * 0000000140A1771C: retn
 */
