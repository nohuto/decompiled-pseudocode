/*
 * XREFs of sub_1800620D0 @ 0x1800620D0
 * Callers:
 *     sub_180061E00 @ 0x180061E00 (sub_180061E00.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for sub_1800620D0 @ 0x1800620D0
 * Reason: Hex-Rays returned no pseudocode for 0x1800620D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800620D0: sub     rsp, 28h
 * 00000001800620D4: xor     eax, eax
 * 00000001800620D6: cmp     cs:qword_18019C400, rax
 * 00000001800620DD: jnz     short loc_180062103
 * 00000001800620DF: lea     r8, qword_18019C400
 * 00000001800620E6: mov     r9, r8
 * 00000001800620E9: lea     rdx, sub_1800664A0
 * 00000001800620F0: lea     rcx, unk_18015C918
 * 00000001800620F7: call    cs:EtwEventRegister
 * 00000001800620FE: nop     dword ptr [rax+rax+00h]
 * 0000000180062103: add     rsp, 28h
 * 0000000180062107: retn
 */
