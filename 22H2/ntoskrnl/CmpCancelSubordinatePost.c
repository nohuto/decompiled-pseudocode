/*
 * XREFs of CmpCancelSubordinatePost @ 0x14068049C
 * Callers:
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1406C5510 (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x1406804E8 (CmpAddToDelayedDeref.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCancelSubordinatePost @ 0x14068049C
 * Reason: Hex-Rays returned no pseudocode for 0x14068049C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014068049C: sub     rsp, 28h
 * 00000001406804A0: add     rcx, 20h ; ' '
 * 00000001406804A4: mov     rax, [rcx]
 * 00000001406804A7: cmp     rax, rcx
 * 00000001406804AA: jnz     short loc_1406804B2
 * 00000001406804AC: add     rsp, 28h
 * 00000001406804B0: retn
 * 00000001406804B2: lea     rcx, [rax-20h]
 * 00000001406804B6: mov     r8, [rcx]
 * 00000001406804B9: cmp     [r8+8], rcx
 * 00000001406804BD: jnz     short loc_1406804DB
 * 00000001406804BF: mov     rax, [rcx+8]
 * 00000001406804C3: cmp     [rax], rcx
 * 00000001406804C6: jnz     short loc_1406804DB
 * 00000001406804C8: mov     [rax], r8
 * 00000001406804CB: mov     [r8+8], rax
 * 00000001406804CF: test    rdx, rdx
 * 00000001406804D2: jz      short loc_1406804AC
 * 00000001406804D4: call    CmpAddToDelayedDeref
 * 00000001406804D9: jmp     short loc_1406804AC
 * 00000001406804DB: mov     ecx, 3
 * 00000001406804E0: int     29h; Win8: RtlFailFast(ecx)
 */
