/*
 * XREFs of KiSystemCall64Shadow @ 0x140A161C0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140A161C0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140A161C0
 * Reason: Hex-Rays returned no pseudocode for 0x140A161C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A161C0: swapgs
 * 0000000140A161C3: mov     gs:9010h, rsp
 * 0000000140A161CC: mov     rsp, gs:9000h
 * 0000000140A161D5: bt      dword ptr gs:9018h, 1
 * 0000000140A161DF: jb      short loc_140A161E4
 * 0000000140A161E1: mov     cr3, rsp
 * 0000000140A161E4: mov     rsp, gs:9008h
 * 0000000140A161ED: push    2Bh ; '+'
 * 0000000140A161EF: push    qword ptr gs:9010h
 * 0000000140A161F7: push    r11
 * 0000000140A161F9: push    33h ; '3'
 * 0000000140A161FB: push    rcx
 * 0000000140A161FC: mov     rcx, r10
 * 0000000140A161FF: sub     rsp, 8
 * 0000000140A16203: push    rbp
 * 0000000140A16204: sub     rsp, 158h
 * 0000000140A1620B: lea     rbp, [rsp+190h+var_110]
 * 0000000140A16213: mov     [rbp+0C0h], rbx
 * 0000000140A1621A: mov     [rbp+0C8h], rdi
 * 0000000140A16221: mov     [rbp+0D0h], rsi
 * 0000000140A16228: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A1622F: jz      short loc_140A1623D
 * 0000000140A16231: test    byte ptr [rbp+0F0h], 1
 * 0000000140A16238: jz      short loc_140A1623D
 * 0000000140A1623A: stac
 * 0000000140A1623D: mov     [rbp-50h], rax
 * 0000000140A16241: mov     [rbp-48h], rcx
 * 0000000140A16245: mov     [rbp-40h], rdx
 * 0000000140A16249: mov     rcx, gs:188h
 * 0000000140A16252: mov     rcx, [rcx+220h]
 * 0000000140A16259: mov     rcx, [rcx+9E0h]
 * 0000000140A16260: mov     gs:858h, rcx
 * 0000000140A16269: mov     cx, gs:850h
 * 0000000140A16272: mov     gs:852h, cx
 * 0000000140A1627B: mov     cx, gs:860h
 * 0000000140A16284: mov     gs:854h, cx
 * 0000000140A1628D: movzx   eax, word ptr gs:866h
 * 0000000140A16296: cmp     gs:864h, ax
 * 0000000140A1629F: jz      short loc_140A162B3
 * 0000000140A162A1: mov     gs:864h, ax
 * 0000000140A162AA: mov     ecx, 48h ; 'H'
 * 0000000140A162AF: xor     edx, edx
 * 0000000140A162B1: wrmsr
 * 0000000140A162B3: movzx   edx, word ptr gs:860h
 * 0000000140A162BC: test    edx, 8
 * 0000000140A162C2: jz      short loc_140A162DB
 * 0000000140A162C4: mov     eax, 1
 * 0000000140A162C9: xor     edx, edx
 * 0000000140A162CB: mov     ecx, 49h ; 'I'
 * 0000000140A162D0: wrmsr
 * 0000000140A162D2: movzx   edx, word ptr gs:860h
 * 0000000140A162DB: test    edx, 2
 * 0000000140A162E1: jz      loc_140A1640C
 * 0000000140A162E7: call    loc_140A163FA
 * 0000000140A162EC: add     rsp, 8
 * 0000000140A162F0: call    loc_140A16403
 * 0000000140A162F5: add     rsp, 8
 * 0000000140A162F9: call    loc_140A162EC
 * 0000000140A162FE: add     rsp, 8
 * 0000000140A16302: call    loc_140A162F5
 * 0000000140A16307: add     rsp, 8
 * 0000000140A1630B: call    loc_140A162FE
 * 0000000140A16310: add     rsp, 8
 * 0000000140A16314: call    loc_140A16307
 * 0000000140A16319: add     rsp, 8
 * 0000000140A1631D: call    loc_140A16310
 * 0000000140A16322: add     rsp, 8
 * 0000000140A16326: call    loc_140A16319
 * 0000000140A1632B: add     rsp, 8
 * 0000000140A1632F: call    loc_140A16322
 * 0000000140A16334: add     rsp, 8
 * 0000000140A16338: call    loc_140A1632B
 * 0000000140A1633D: add     rsp, 8
 * 0000000140A16341: call    loc_140A16334
 * 0000000140A16346: add     rsp, 8
 * 0000000140A1634A: call    loc_140A1633D
 * 0000000140A1634F: add     rsp, 8
 * 0000000140A16353: call    loc_140A16346
 * 0000000140A16358: add     rsp, 8
 * 0000000140A1635C: call    loc_140A1634F
 * 0000000140A16361: add     rsp, 8
 * 0000000140A16365: call    loc_140A16358
 * 0000000140A1636A: add     rsp, 8
 * 0000000140A1636E: call    loc_140A16361
 * 0000000140A16373: add     rsp, 8
 * 0000000140A16377: call    loc_140A1636A
 * 0000000140A1637C: add     rsp, 8
 * 0000000140A16380: call    loc_140A16373
 * 0000000140A16385: add     rsp, 8
 * 0000000140A16389: call    loc_140A1637C
 * 0000000140A1638E: add     rsp, 8
 * 0000000140A16392: call    loc_140A16385
 * 0000000140A16397: add     rsp, 8
 * 0000000140A1639B: call    loc_140A1638E
 * 0000000140A163A0: add     rsp, 8
 * 0000000140A163A4: call    loc_140A16397
 * 0000000140A163A9: add     rsp, 8
 * 0000000140A163AD: call    loc_140A163A0
 * 0000000140A163B2: add     rsp, 8
 * 0000000140A163B6: call    loc_140A163A9
 * 0000000140A163BB: add     rsp, 8
 * 0000000140A163BF: call    loc_140A163B2
 * 0000000140A163C4: add     rsp, 8
 * 0000000140A163C8: call    loc_140A163BB
 * 0000000140A163CD: add     rsp, 8
 * 0000000140A163D1: call    loc_140A163C4
 * 0000000140A163D6: add     rsp, 8
 * 0000000140A163DA: call    loc_140A163CD
 * 0000000140A163DF: add     rsp, 8
 * 0000000140A163E3: call    loc_140A163D6
 * 0000000140A163E8: add     rsp, 8
 * 0000000140A163EC: call    loc_140A163DF
 * 0000000140A163F1: add     rsp, 8
 * 0000000140A163F5: call    loc_140A163E8
 * 0000000140A163FA: add     rsp, 8
 * 0000000140A163FE: call    loc_140A163F1
 * 0000000140A16403: add     rsp, 8
 * 0000000140A16407: mov     eax, 0DADAh
 * 0000000140A1640C: test    edx, 200h
 * 0000000140A16412: jz      short loc_140A16419
 * 0000000140A16414: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140A16419: lfence
 * 0000000140A1641C: mov     byte ptr gs:856h, 0
 * 0000000140A16425: jmp     KiSystemServiceUser
 * 0000000140A1642A: retn
 */
