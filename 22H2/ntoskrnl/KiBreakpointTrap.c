/*
 * XREFs of KiBreakpointTrap @ 0x14040A940
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140A142C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FDAC0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14040A940 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140411DC0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14040A940
 * Reason: Hex-Rays returned no pseudocode for 0x14040A940
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040A940: sub     rsp, 8
 * 000000014040A944: push    rbp
 * 000000014040A945: sub     rsp, 158h
 * 000000014040A94C: lea     rbp, [rsp+80h]
 * 000000014040A954: mov     [rbp+0E8h+var_13D], 1
 * 000000014040A958: mov     [rbp+0E8h+var_138], rax
 * 000000014040A95C: mov     [rbp+0E8h+var_130], rcx
 * 000000014040A960: mov     [rbp+0E8h+var_128], rdx
 * 000000014040A964: mov     [rbp+0E8h+var_120], r8
 * 000000014040A968: mov     [rbp+0E8h+var_118], r9
 * 000000014040A96C: mov     [rbp+0E8h+var_110], r10
 * 000000014040A970: mov     [rbp+0E8h+var_108], r11
 * 000000014040A974: test    [rbp+0E8h+arg_0], 1
 * 000000014040A97B: jnz     short loc_14040A9AC
 * 000000014040A97D: lfence
 * 000000014040A980: test    word ptr gs:860h, 1
 * 000000014040A98B: jnz     short loc_14040A995
 * 000000014040A98D: lfence
 * 000000014040A990: jmp     loc_14040ABFE
 * 000000014040A995: movzx   eax, word ptr gs:864h
 * 000000014040A99E: mov     ecx, 48h ; 'H'
 * 000000014040A9A3: xor     edx, edx
 * 000000014040A9A5: wrmsr
 * 000000014040A9A7: jmp     loc_14040ABFE
 * 000000014040A9AC: test    cs:KiKvaShadow, 1
 * 000000014040A9B3: jnz     short loc_14040A9B8
 * 000000014040A9B5: swapgs
 * 000000014040A9B8: lfence
 * 000000014040A9BB: mov     r10, gs:188h
 * 000000014040A9C4: mov     rcx, gs:188h
 * 000000014040A9CD: mov     rcx, [rcx+220h]
 * 000000014040A9D4: mov     rcx, [rcx+9E0h]
 * 000000014040A9DB: mov     gs:858h, rcx
 * 000000014040A9E4: mov     cx, gs:850h
 * 000000014040A9ED: mov     gs:852h, cx
 * 000000014040A9F6: mov     cx, gs:860h
 * 000000014040A9FF: mov     gs:854h, cx
 * 000000014040AA08: movzx   eax, word ptr gs:866h
 * 000000014040AA11: cmp     gs:864h, ax
 * 000000014040AA1A: jz      short loc_14040AA2E
 * 000000014040AA1C: mov     gs:864h, ax
 * 000000014040AA25: mov     ecx, 48h ; 'H'
 * 000000014040AA2A: xor     edx, edx
 * 000000014040AA2C: wrmsr
 * 000000014040AA2E: movzx   edx, word ptr gs:860h
 * 000000014040AA37: test    edx, 8
 * 000000014040AA3D: jz      short loc_14040AA56
 * 000000014040AA3F: mov     eax, 1
 * 000000014040AA44: xor     edx, edx
 * 000000014040AA46: mov     ecx, 49h ; 'I'
 * 000000014040AA4B: wrmsr
 * 000000014040AA4D: movzx   edx, word ptr gs:860h
 * 000000014040AA56: test    edx, 2
 * 000000014040AA5C: jz      loc_14040AB87
 * 000000014040AA62: call    loc_14040AB75
 * 000000014040AA67: add     rsp, 8
 * 000000014040AA6B: call    loc_14040AB7E
 * 000000014040AA70: add     rsp, 8
 * 000000014040AA74: call    loc_14040AA67
 * 000000014040AA79: add     rsp, 8
 * 000000014040AA7D: call    loc_14040AA70
 * 000000014040AA82: add     rsp, 8
 * 000000014040AA86: call    loc_14040AA79
 * 000000014040AA8B: add     rsp, 8
 * 000000014040AA8F: call    loc_14040AA82
 * 000000014040AA94: add     rsp, 8
 * 000000014040AA98: call    loc_14040AA8B
 * 000000014040AA9D: add     rsp, 8
 * 000000014040AAA1: call    loc_14040AA94
 * 000000014040AAA6: add     rsp, 8
 * 000000014040AAAA: call    loc_14040AA9D
 * 000000014040AAAF: add     rsp, 8
 * 000000014040AAB3: call    loc_14040AAA6
 * 000000014040AAB8: add     rsp, 8
 * 000000014040AABC: call    loc_14040AAAF
 * 000000014040AAC1: add     rsp, 8
 * 000000014040AAC5: call    loc_14040AAB8
 * 000000014040AACA: add     rsp, 8
 * 000000014040AACE: call    loc_14040AAC1
 * 000000014040AAD3: add     rsp, 8
 * 000000014040AAD7: call    loc_14040AACA
 * 000000014040AADC: add     rsp, 8
 * 000000014040AAE0: call    loc_14040AAD3
 * 000000014040AAE5: add     rsp, 8
 * 000000014040AAE9: call    loc_14040AADC
 * 000000014040AAEE: add     rsp, 8
 * 000000014040AAF2: call    loc_14040AAE5
 * 000000014040AAF7: add     rsp, 8
 * 000000014040AAFB: call    loc_14040AAEE
 * 000000014040AB00: add     rsp, 8
 * 000000014040AB04: call    loc_14040AAF7
 * 000000014040AB09: add     rsp, 8
 * 000000014040AB0D: call    loc_14040AB00
 * 000000014040AB12: add     rsp, 8
 * 000000014040AB16: call    loc_14040AB09
 * 000000014040AB1B: add     rsp, 8
 * 000000014040AB1F: call    loc_14040AB12
 * 000000014040AB24: add     rsp, 8
 * 000000014040AB28: call    loc_14040AB1B
 * 000000014040AB2D: add     rsp, 8
 * 000000014040AB31: call    loc_14040AB24
 * 000000014040AB36: add     rsp, 8
 * 000000014040AB3A: call    loc_14040AB2D
 * 000000014040AB3F: add     rsp, 8
 * 000000014040AB43: call    loc_14040AB36
 * 000000014040AB48: add     rsp, 8
 * 000000014040AB4C: call    loc_14040AB3F
 * 000000014040AB51: add     rsp, 8
 * 000000014040AB55: call    loc_14040AB48
 * 000000014040AB5A: add     rsp, 8
 * 000000014040AB5E: call    loc_14040AB51
 * 000000014040AB63: add     rsp, 8
 * 000000014040AB67: call    loc_14040AB5A
 * 000000014040AB6C: add     rsp, 8
 * 000000014040AB70: call    loc_14040AB63
 * 000000014040AB75: add     rsp, 8
 * 000000014040AB79: call    loc_14040AB6C
 * 000000014040AB7E: add     rsp, 8
 * 000000014040AB82: mov     eax, 0DADAh
 * 000000014040AB87: test    edx, 200h
 * 000000014040AB8D: jz      short loc_14040AB94
 * 000000014040AB8F: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014040AB94: lfence
 * 000000014040AB97: mov     byte ptr gs:856h, 0
 * 000000014040ABA0: test    byte ptr [r10+3], 80h
 * 000000014040ABA5: jz      short loc_14040ABE9
 * 000000014040ABA7: mov     ecx, 0C0000102h
 * 000000014040ABAC: rdmsr
 * 000000014040ABAE: shl     rdx, 20h
 * 000000014040ABB2: or      rax, rdx
 * 000000014040ABB5: cmp     rax, cs:MmUserProbeAddress
 * 000000014040ABBC: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040ABC4: cmp     [r10+0F0h], rax
 * 000000014040ABCB: jz      short loc_14040ABE9
 * 000000014040ABCD: mov     rdx, [r10+1F0h]
 * 000000014040ABD4: bts     dword ptr [r10+74h], 8
 * 000000014040ABDA: dec     word ptr [r10+1E6h]
 * 000000014040ABE2: mov     [rdx+80h], rax
 * 000000014040ABE9: test    byte ptr [r10+3], 3
 * 000000014040ABEE: mov     [rbp+0E8h+var_68], 0
 * 000000014040ABF7: jz      short loc_14040ABFE
 * 000000014040ABF9: call    KiSaveDebugRegisterState
 * 000000014040ABFE: cld
 * 000000014040ABFF: stmxcsr [rbp+0E8h+var_13C]
 * 000000014040AC03: ldmxcsr dword ptr gs:180h
 * 000000014040AC0C: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014040AC10: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014040AC14: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014040AC18: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014040AC1C: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014040AC20: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014040AC24: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040AC2B: jz      short loc_14040AC39
 * 000000014040AC2D: test    [rbp+0E8h+arg_0], 1
 * 000000014040AC34: jz      short loc_14040AC39
 * 000000014040AC36: stac
 * 000000014040AC39: test    [rbp+0E8h+arg_8], 200h
 * 000000014040AC43: jz      short loc_14040AC46
 * 000000014040AC45: sti
 * 000000014040AC46: mov     ecx, 80000003h
 * 000000014040AC4B: mov     edx, 1
 * 000000014040AC50: mov     r8, [rbp+0E8h]
 * 000000014040AC57: dec     r8
 * 000000014040AC5A: mov     r9d, 0
 * 000000014040AC60: call    KiExceptionDispatch
 * 000000014040AC65: nop
 * 000000014040AC66: retn
 */
