/*
 * XREFs of HvlpGetRegister128 @ 0x1404F9E00
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F6CE0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA044 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister128 @ 0x1404F9E00
 * Reason: Hex-Rays returned no pseudocode for 0x1404F9E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F9E00: push    rbx
 * 00000001404F9E02: sub     rsp, 20h
 * 00000001404F9E06: mov     eax, 100h
 * 00000001404F9E0B: mov     r8, rdx
 * 00000001404F9E0E: sub     ecx, eax
 * 00000001404F9E10: jz      short loc_1404F9E67
 * 00000001404F9E12: sub     ecx, eax
 * 00000001404F9E14: jz      short loc_1404F9E60
 * 00000001404F9E16: sub     ecx, 1
 * 00000001404F9E19: jz      short loc_1404F9E59
 * 00000001404F9E1B: sub     ecx, 1
 * 00000001404F9E1E: jz      short loc_1404F9E52
 * 00000001404F9E20: sub     ecx, 1
 * 00000001404F9E23: jz      short loc_1404F9E4B
 * 00000001404F9E25: sub     ecx, 1
 * 00000001404F9E28: jz      short loc_1404F9E44
 * 00000001404F9E2A: cmp     ecx, 1
 * 00000001404F9E2D: jz      short loc_1404F9E3D
 * 00000001404F9E2F: lea     rcx, unk_140C12590
 * 00000001404F9E36: call    RtlRaiseException
 * 00000001404F9E3B: jmp     short loc_1404F9E7F
 * 00000001404F9E3D: mov     eax, 40000008h
 * 00000001404F9E42: jmp     short loc_1404F9E6C
 * 00000001404F9E44: mov     eax, 40000007h
 * 00000001404F9E49: jmp     short loc_1404F9E6C
 * 00000001404F9E4B: mov     eax, 40000006h
 * 00000001404F9E50: jmp     short loc_1404F9E6C
 * 00000001404F9E52: mov     eax, 40000005h
 * 00000001404F9E57: jmp     short loc_1404F9E6C
 * 00000001404F9E59: mov     eax, 40000004h
 * 00000001404F9E5E: jmp     short loc_1404F9E6C
 * 00000001404F9E60: mov     eax, 40000003h
 * 00000001404F9E65: jmp     short loc_1404F9E6C
 * 00000001404F9E67: mov     eax, 40000002h
 * 00000001404F9E6C: xor     ecx, ecx
 * 00000001404F9E6E: cpuid
 * 00000001404F9E70: mov     [r8], eax
 * 00000001404F9E73: mov     [r8+4], ebx
 * 00000001404F9E77: mov     [r8+8], ecx
 * 00000001404F9E7B: mov     [r8+0Ch], edx
 * 00000001404F9E7F: add     rsp, 20h
 * 00000001404F9E83: pop     rbx
 * 00000001404F9E84: retn
 */
