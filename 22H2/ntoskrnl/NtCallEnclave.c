/*
 * XREFs of NtCallEnclave @ 0x140407D00
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F570 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FE7A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140402BA0 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140407D00 (NtCallEnclave.c)
 *     KiUmsExit @ 0x140413000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BDA0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14090D220 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x140407D00
 * Reason: Hex-Rays returned no pseudocode for 0x140407D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407D00: sub     rsp, 28h
 * 0000000140407D04: xor     eax, eax
 * 0000000140407D06: xorps   xmm0, xmm0
 * 0000000140407D09: mov     [rbp-48h], eax
 * 0000000140407D0C: mov     [rbp-40h], eax
 * 0000000140407D0F: mov     [rbp-38h], eax
 * 0000000140407D12: mov     [rbp-30h], eax
 * 0000000140407D15: mov     [rbp-28h], eax
 * 0000000140407D18: mov     [rbp-20h], eax
 * 0000000140407D1B: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140407D1F: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140407D23: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140407D27: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140407D2B: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140407D2F: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140407D33: call    PsCallEnclave
 * 0000000140407D38: mov     [rbp-50h], rax
 * 0000000140407D3C: mov     rbx, [rbp+0C0h]
 * 0000000140407D43: mov     rdi, [rbp+0C8h]
 * 0000000140407D4A: mov     rsi, [rbp+0D0h]
 * 0000000140407D51: cli
 * 0000000140407D52: test    byte ptr [rbp+0F0h], 1
 * 0000000140407D59: jz      loc_14040800C
 * 0000000140407D5F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140407D66: jz      short loc_140407D6B
 * 0000000140407D68: stac
 * 0000000140407D6B: mov     rcx, gs:188h
 * 0000000140407D74: test    byte ptr [rcx+0C2h], 3
 * 0000000140407D7B: jz      short loc_140407D98
 * 0000000140407D7D: mov     ecx, 1
 * 0000000140407D82: mov     cr8, rcx
 * 0000000140407D86: sti
 * 0000000140407D87: call    KiInitiateUserApc
 * 0000000140407D8C: cli
 * 0000000140407D8D: mov     ecx, 0
 * 0000000140407D92: mov     cr8, rcx
 * 0000000140407D96: jmp     short loc_140407D6B
 * 0000000140407D98: test    byte ptr gs:86Ch, 2
 * 0000000140407DA1: jz      short loc_140407DAA
 * 0000000140407DA3: xor     ecx, ecx
 * 0000000140407DA5: call    KiUpdateStibpPairing
 * 0000000140407DAA: mov     rcx, gs:188h
 * 0000000140407DB3: test    dword ptr [rcx], 8000000h
 * 0000000140407DB9: jz      short loc_140407DC0
 * 0000000140407DBB: call    KiRestoreSetContextState
 * 0000000140407DC0: mov     rcx, gs:188h
 * 0000000140407DC9: test    dword ptr [rcx], 40010000h
 * 0000000140407DCF: jz      short loc_140407DF6
 * 0000000140407DD1: test    byte ptr [rcx+2], 1
 * 0000000140407DD5: jz      short loc_140407DE5
 * 0000000140407DD7: call    KiCopyCounters
 * 0000000140407DDC: mov     rcx, gs:188h
 * 0000000140407DE5: test    byte ptr [rcx+3], 40h
 * 0000000140407DE9: jz      short loc_140407DF6
 * 0000000140407DEB: lea     rsp, [rbp-80h]
 * 0000000140407DEF: mov     cl, 1
 * 0000000140407DF1: call    KiUmsExit
 * 0000000140407DF6: ldmxcsr dword ptr [rbp-54h]
 * 0000000140407DFA: cmp     word ptr [rbp+80h], 0
 * 0000000140407E02: jz      short loc_140407E09
 * 0000000140407E04: call    KiRestoreDebugRegisterState
 * 0000000140407E09: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140407E0D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140407E11: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140407E15: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140407E19: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140407E1D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140407E21: mov     r11, [rbp-20h]
 * 0000000140407E25: mov     r10, [rbp-28h]
 * 0000000140407E29: mov     r9, [rbp-30h]
 * 0000000140407E2D: mov     r8, [rbp-38h]
 * 0000000140407E31: mov     byte ptr gs:856h, 0
 * 0000000140407E3A: movzx   eax, word ptr gs:86Ah
 * 0000000140407E43: cmp     gs:864h, ax
 * 0000000140407E4C: jz      short loc_140407E60
 * 0000000140407E4E: mov     gs:864h, ax
 * 0000000140407E57: mov     ecx, 48h ; 'H'
 * 0000000140407E5C: xor     edx, edx
 * 0000000140407E5E: wrmsr
 * 0000000140407E60: btr     word ptr gs:860h, 2
 * 0000000140407E6B: jnb     short loc_140407E7B
 * 0000000140407E6D: mov     eax, 1
 * 0000000140407E72: xor     edx, edx
 * 0000000140407E74: mov     ecx, 49h ; 'I'
 * 0000000140407E79: wrmsr
 * 0000000140407E7B: btr     word ptr gs:860h, 5
 * 0000000140407E86: jnb     loc_140407FB1
 * 0000000140407E8C: call    loc_140407F9F
 * 0000000140407E91: add     rsp, 8
 * 0000000140407E95: call    loc_140407FA8
 * 0000000140407E9A: add     rsp, 8
 * 0000000140407E9E: call    loc_140407E91
 * 0000000140407EA3: add     rsp, 8
 * 0000000140407EA7: call    loc_140407E9A
 * 0000000140407EAC: add     rsp, 8
 * 0000000140407EB0: call    loc_140407EA3
 * 0000000140407EB5: add     rsp, 8
 * 0000000140407EB9: call    loc_140407EAC
 * 0000000140407EBE: add     rsp, 8
 * 0000000140407EC2: call    loc_140407EB5
 * 0000000140407EC7: add     rsp, 8
 * 0000000140407ECB: call    loc_140407EBE
 * 0000000140407ED0: add     rsp, 8
 * 0000000140407ED4: call    loc_140407EC7
 * 0000000140407ED9: add     rsp, 8
 * 0000000140407EDD: call    loc_140407ED0
 * 0000000140407EE2: add     rsp, 8
 * 0000000140407EE6: call    loc_140407ED9
 * 0000000140407EEB: add     rsp, 8
 * 0000000140407EEF: call    loc_140407EE2
 * 0000000140407EF4: add     rsp, 8
 * 0000000140407EF8: call    loc_140407EEB
 * 0000000140407EFD: add     rsp, 8
 * 0000000140407F01: call    loc_140407EF4
 * 0000000140407F06: add     rsp, 8
 * 0000000140407F0A: call    loc_140407EFD
 * 0000000140407F0F: add     rsp, 8
 * 0000000140407F13: call    loc_140407F06
 * 0000000140407F18: add     rsp, 8
 * 0000000140407F1C: call    loc_140407F0F
 * 0000000140407F21: add     rsp, 8
 * 0000000140407F25: call    loc_140407F18
 * 0000000140407F2A: add     rsp, 8
 * 0000000140407F2E: call    loc_140407F21
 * 0000000140407F33: add     rsp, 8
 * 0000000140407F37: call    loc_140407F2A
 * 0000000140407F3C: add     rsp, 8
 * 0000000140407F40: call    loc_140407F33
 * 0000000140407F45: add     rsp, 8
 * 0000000140407F49: call    loc_140407F3C
 * 0000000140407F4E: add     rsp, 8
 * 0000000140407F52: call    loc_140407F45
 * 0000000140407F57: add     rsp, 8
 * 0000000140407F5B: call    loc_140407F4E
 * 0000000140407F60: add     rsp, 8
 * 0000000140407F64: call    loc_140407F57
 * 0000000140407F69: add     rsp, 8
 * 0000000140407F6D: call    loc_140407F60
 * 0000000140407F72: add     rsp, 8
 * 0000000140407F76: call    loc_140407F69
 * 0000000140407F7B: add     rsp, 8
 * 0000000140407F7F: call    loc_140407F72
 * 0000000140407F84: add     rsp, 8
 * 0000000140407F88: call    loc_140407F7B
 * 0000000140407F8D: add     rsp, 8
 * 0000000140407F91: call    loc_140407F84
 * 0000000140407F96: add     rsp, 8
 * 0000000140407F9A: call    loc_140407F8D
 * 0000000140407F9F: add     rsp, 8
 * 0000000140407FA3: call    loc_140407F96
 * 0000000140407FA8: add     rsp, 8
 * 0000000140407FAC: mov     eax, 0DADAh
 * 0000000140407FB1: test    word ptr gs:860h, 80h
 * 0000000140407FBC: jz      short loc_140407FCA
 * 0000000140407FBE: xor     eax, eax
 * 0000000140407FC0: xor     edx, edx
 * 0000000140407FC2: mov     ecx, 1
 * 0000000140407FC7: div     rcx
 * 0000000140407FCA: mov     rdx, [rbp-40h]
 * 0000000140407FCE: mov     rcx, [rbp-48h]
 * 0000000140407FD2: mov     rax, [rbp-50h]
 * 0000000140407FD6: mov     rsp, rbp
 * 0000000140407FD9: mov     rbp, [rbp+0D8h]
 * 0000000140407FE0: add     rsp, 0E8h
 * 0000000140407FE7: test    cs:KiKvaShadow, 1
 * 0000000140407FEE: jz      short loc_140407FF5
 * 0000000140407FF0: jmp     KiKernelExit
 * 0000000140407FF5: test    word ptr gs:860h, 100h
 * 0000000140408000: jz      short loc_140408007
 * 0000000140408002: verw    [rsp-188h+arg_1A0]
 * 0000000140408007: swapgs
 * 000000014040800A: iretq
 * 000000014040800C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140408010: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140408014: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140408018: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014040801C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140408020: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140408024: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140408028: mov     r11, [rbp-20h]
 * 000000014040802C: mov     r10, [rbp-28h]
 * 0000000140408030: mov     r9, [rbp-30h]
 * 0000000140408034: mov     r8, [rbp-38h]
 * 0000000140408038: mov     rdx, [rbp-40h]
 * 000000014040803C: mov     rcx, [rbp-48h]
 * 0000000140408040: mov     rax, [rbp-50h]
 * 0000000140408044: mov     rsp, rbp
 * 0000000140408047: mov     rbp, [rbp+0D8h]
 * 000000014040804E: add     rsp, 0E8h
 * 0000000140408055: iretq
 */
