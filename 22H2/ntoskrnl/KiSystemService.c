/*
 * XREFs of KiSystemService @ 0x140410880
 * Callers:
 *     KiSystemServiceShadow @ 0x140A14EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140410880 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140410880
 * Reason: Hex-Rays returned no pseudocode for 0x140410880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140410880: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140410886: jz      KiSystemService32User
 * 000000014041088C: test    cs:KiKvaShadow, 1
 * 0000000140410893: jnz     short loc_140410898
 * 0000000140410895: swapgs
 * 0000000140410898: lfence
 * 000000014041089B: mov     rcx, r10
 * 000000014041089E: sub     rsp, 8
 * 00000001404108A2: push    rbp
 * 00000001404108A3: sub     rsp, 158h
 * 00000001404108AA: lea     rbp, [rsp+168h+var_E8]
 * 00000001404108B2: mov     [rbp+0C0h], rbx
 * 00000001404108B9: mov     [rbp+0C8h], rdi
 * 00000001404108C0: mov     [rbp+0D0h], rsi
 * 00000001404108C7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404108CE: jz      short loc_1404108DC
 * 00000001404108D0: test    byte ptr [rbp+0F0h], 1
 * 00000001404108D7: jz      short loc_1404108DC
 * 00000001404108D9: stac
 * 00000001404108DC: mov     [rbp-50h], rax
 * 00000001404108E0: mov     [rbp-48h], rcx
 * 00000001404108E4: mov     [rbp-40h], rdx
 * 00000001404108E8: mov     rcx, gs:188h
 * 00000001404108F1: mov     rcx, [rcx+220h]
 * 00000001404108F8: mov     rcx, [rcx+9E0h]
 * 00000001404108FF: mov     gs:858h, rcx
 * 0000000140410908: mov     cx, gs:850h
 * 0000000140410911: mov     gs:852h, cx
 * 000000014041091A: mov     cx, gs:860h
 * 0000000140410923: mov     gs:854h, cx
 * 000000014041092C: movzx   eax, word ptr gs:866h
 * 0000000140410935: cmp     gs:864h, ax
 * 000000014041093E: jz      short loc_140410952
 * 0000000140410940: mov     gs:864h, ax
 * 0000000140410949: mov     ecx, 48h ; 'H'
 * 000000014041094E: xor     edx, edx
 * 0000000140410950: wrmsr
 * 0000000140410952: movzx   edx, word ptr gs:860h
 * 000000014041095B: test    edx, 8
 * 0000000140410961: jz      short loc_14041097A
 * 0000000140410963: mov     eax, 1
 * 0000000140410968: xor     edx, edx
 * 000000014041096A: mov     ecx, 49h ; 'I'
 * 000000014041096F: wrmsr
 * 0000000140410971: movzx   edx, word ptr gs:860h
 * 000000014041097A: test    edx, 2
 * 0000000140410980: jz      loc_140410AAB
 * 0000000140410986: call    loc_140410A99
 * 000000014041098B: add     rsp, 8
 * 000000014041098F: call    loc_140410AA2
 * 0000000140410994: add     rsp, 8
 * 0000000140410998: call    loc_14041098B
 * 000000014041099D: add     rsp, 8
 * 00000001404109A1: call    loc_140410994
 * 00000001404109A6: add     rsp, 8
 * 00000001404109AA: call    loc_14041099D
 * 00000001404109AF: add     rsp, 8
 * 00000001404109B3: call    loc_1404109A6
 * 00000001404109B8: add     rsp, 8
 * 00000001404109BC: call    loc_1404109AF
 * 00000001404109C1: add     rsp, 8
 * 00000001404109C5: call    loc_1404109B8
 * 00000001404109CA: add     rsp, 8
 * 00000001404109CE: call    loc_1404109C1
 * 00000001404109D3: add     rsp, 8
 * 00000001404109D7: call    loc_1404109CA
 * 00000001404109DC: add     rsp, 8
 * 00000001404109E0: call    loc_1404109D3
 * 00000001404109E5: add     rsp, 8
 * 00000001404109E9: call    loc_1404109DC
 * 00000001404109EE: add     rsp, 8
 * 00000001404109F2: call    loc_1404109E5
 * 00000001404109F7: add     rsp, 8
 * 00000001404109FB: call    loc_1404109EE
 * 0000000140410A00: add     rsp, 8
 * 0000000140410A04: call    loc_1404109F7
 * 0000000140410A09: add     rsp, 8
 * 0000000140410A0D: call    loc_140410A00
 * 0000000140410A12: add     rsp, 8
 * 0000000140410A16: call    loc_140410A09
 * 0000000140410A1B: add     rsp, 8
 * 0000000140410A1F: call    loc_140410A12
 * 0000000140410A24: add     rsp, 8
 * 0000000140410A28: call    loc_140410A1B
 * 0000000140410A2D: add     rsp, 8
 * 0000000140410A31: call    loc_140410A24
 * 0000000140410A36: add     rsp, 8
 * 0000000140410A3A: call    loc_140410A2D
 * 0000000140410A3F: add     rsp, 8
 * 0000000140410A43: call    loc_140410A36
 * 0000000140410A48: add     rsp, 8
 * 0000000140410A4C: call    loc_140410A3F
 * 0000000140410A51: add     rsp, 8
 * 0000000140410A55: call    loc_140410A48
 * 0000000140410A5A: add     rsp, 8
 * 0000000140410A5E: call    loc_140410A51
 * 0000000140410A63: add     rsp, 8
 * 0000000140410A67: call    loc_140410A5A
 * 0000000140410A6C: add     rsp, 8
 * 0000000140410A70: call    loc_140410A63
 * 0000000140410A75: add     rsp, 8
 * 0000000140410A79: call    loc_140410A6C
 * 0000000140410A7E: add     rsp, 8
 * 0000000140410A82: call    loc_140410A75
 * 0000000140410A87: add     rsp, 8
 * 0000000140410A8B: call    loc_140410A7E
 * 0000000140410A90: add     rsp, 8
 * 0000000140410A94: call    loc_140410A87
 * 0000000140410A99: add     rsp, 8
 * 0000000140410A9D: call    loc_140410A90
 * 0000000140410AA2: add     rsp, 8
 * 0000000140410AA6: mov     eax, 0DADAh
 * 0000000140410AAB: test    edx, 200h
 * 0000000140410AB1: jz      short loc_140410AB8
 * 0000000140410AB3: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140410AB8: lfence
 * 0000000140410ABB: mov     byte ptr gs:856h, 0
 * 0000000140410AC4: jmp     KiSystemServiceUser
 * 0000000140410AC9: retn
 */
