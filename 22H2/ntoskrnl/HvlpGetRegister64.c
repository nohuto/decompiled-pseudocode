/*
 * XREFs of HvlpGetRegister64 @ 0x1404F9E90
 * Callers:
 *     HvlGetReferenceTime @ 0x14038D8AC (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14038D8E0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x1403A7298 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1404F184C (HvlLogGuestCrashInformation.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA514 (HvlpPhase0Enlightenments.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404FA6D0 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 */

/*
 * Hex-Rays decompilation failed for HvlpGetRegister64 @ 0x1404F9E90
 * Reason: Hex-Rays returned no pseudocode for 0x1404F9E90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404F9E90: sub     rsp, 28h
 * 00000001404F9E94: mov     eax, 90004h
 * 00000001404F9E99: mov     r8, rdx
 * 00000001404F9E9C: cmp     ecx, eax
 * 00000001404F9E9E: jg      short loc_1404F9F04
 * 00000001404F9EA0: jz      short loc_1404F9EFD
 * 00000001404F9EA2: cmp     ecx, 210h
 * 00000001404F9EA8: jl      loc_1404F9F43
 * 00000001404F9EAE: cmp     ecx, 214h
 * 00000001404F9EB4: jle     short loc_1404F9EF5
 * 00000001404F9EB6: cmp     ecx, 215h
 * 00000001404F9EBC: jz      short loc_1404F9EEE
 * 00000001404F9EBE: cmp     ecx, 270h
 * 00000001404F9EC4: jz      short loc_1404F9EE7
 * 00000001404F9EC6: cmp     ecx, 90002h
 * 00000001404F9ECC: jz      short loc_1404F9EE0
 * 00000001404F9ECE: cmp     ecx, 90003h
 * 00000001404F9ED4: jnz     short loc_1404F9F43
 * 00000001404F9ED6: mov     ecx, 40000002h
 * 00000001404F9EDB: jmp     loc_1404F9F64
 * 00000001404F9EE0: mov     ecx, 40000000h
 * 00000001404F9EE5: jmp     short loc_1404F9F64
 * 00000001404F9EE7: mov     ecx, 40000116h
 * 00000001404F9EEC: jmp     short loc_1404F9F64
 * 00000001404F9EEE: mov     ecx, 40000105h
 * 00000001404F9EF3: jmp     short loc_1404F9F64
 * 00000001404F9EF5: add     ecx, 3FFFFEF0h
 * 00000001404F9EFB: jmp     short loc_1404F9F64
 * 00000001404F9EFD: mov     ecx, 40000020h
 * 00000001404F9F02: jmp     short loc_1404F9F64
 * 00000001404F9F04: cmp     ecx, 90007h
 * 00000001404F9F0A: jz      short loc_1404F9F5F
 * 00000001404F9F0C: cmp     ecx, 90013h
 * 00000001404F9F12: jz      short loc_1404F9F58
 * 00000001404F9F14: cmp     ecx, 90017h
 * 00000001404F9F1A: jz      short loc_1404F9F51
 * 00000001404F9F1C: cmp     ecx, 9FFFFh
 * 00000001404F9F22: jle     short loc_1404F9F43
 * 00000001404F9F24: cmp     ecx, 0A000Fh
 * 00000001404F9F2A: jle     short loc_1404F9F3B
 * 00000001404F9F2C: cmp     ecx, 0A0013h
 * 00000001404F9F32: jnz     short loc_1404F9F43
 * 00000001404F9F34: mov     ecx, 40000083h
 * 00000001404F9F39: jmp     short loc_1404F9F64
 * 00000001404F9F3B: add     ecx, 3FF60090h
 * 00000001404F9F41: jmp     short loc_1404F9F64
 * 00000001404F9F43: lea     rcx, unk_140C12590
 * 00000001404F9F4A: call    RtlRaiseException
 * 00000001404F9F4F: jmp     short loc_1404F9F70
 * 00000001404F9F51: mov     ecx, 40000021h
 * 00000001404F9F56: jmp     short loc_1404F9F64
 * 00000001404F9F58: mov     ecx, 40000073h
 * 00000001404F9F5D: jmp     short loc_1404F9F64
 * 00000001404F9F5F: mov     ecx, 40000004h
 * 00000001404F9F64: rdmsr
 * 00000001404F9F66: shl     rdx, 20h
 * 00000001404F9F6A: or      rax, rdx
 * 00000001404F9F6D: mov     [r8], rax
 * 00000001404F9F70: add     rsp, 28h
 * 00000001404F9F74: retn
 */
