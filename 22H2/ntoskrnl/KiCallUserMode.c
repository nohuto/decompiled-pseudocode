/*
 * XREFs of KiCallUserMode @ 0x140401950
 * Callers:
 *     KeUserModeCallback @ 0x14063D750 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1403FDA40 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x140401950 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x140401950
 * Reason: Hex-Rays returned no pseudocode for 0x140401950
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140401950: sub     rsp, 138h
 * 0000000140401957: lea     rax, [rsp+138h+var_38]
 * 000000014040195F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140401964: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140401969: movaps  [rsp+138h+var_E8], xmm8
 * 000000014040196F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140401975: movaps  [rsp+138h+var_C8], xmm10
 * 000000014040197B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140401980: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140401985: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014040198A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014040198F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140401994: mov     [rax-8], rbp
 * 0000000140401998: mov     rbp, rsp
 * 000000014040199B: mov     [rax], rbx
 * 000000014040199E: mov     [rax+8], rdi
 * 00000001404019A2: mov     [rax+10h], rsi
 * 00000001404019A6: mov     [rax+18h], r12
 * 00000001404019AA: mov     [rax+20h], r13
 * 00000001404019AE: mov     [rax+28h], r14
 * 00000001404019B2: mov     [rax+30h], r15
 * 00000001404019B6: xor     r10, r10
 * 00000001404019B9: xor     r12, r12
 * 00000001404019BC: xor     r13, r13
 * 00000001404019BF: xor     r14, r14
 * 00000001404019C2: xor     r15, r15
 * 00000001404019C5: pxor    xmm6, xmm6
 * 00000001404019C9: pxor    xmm7, xmm7
 * 00000001404019CD: pxor    xmm8, xmm8
 * 00000001404019D2: pxor    xmm9, xmm9
 * 00000001404019D7: pxor    xmm10, xmm10
 * 00000001404019DC: pxor    xmm11, xmm11
 * 00000001404019E1: pxor    xmm12, xmm12
 * 00000001404019E6: pxor    xmm13, xmm13
 * 00000001404019EB: pxor    xmm14, xmm14
 * 00000001404019F0: pxor    xmm15, xmm15
 * 00000001404019F5: mov     [rbp+0D8h], rcx
 * 00000001404019FC: mov     [rbp+0E0h], rdx
 * 0000000140401A03: mov     rbx, gs:188h
 * 0000000140401A0C: mov     [r8+20h], rsp
 * 0000000140401A10: mov     rsi, [rbx+90h]
 * 0000000140401A17: mov     [rbp+0D0h], rsi
 * 0000000140401A1E: cli
 * 0000000140401A1F: mov     [rbx+28h], r8
 * 0000000140401A23: mov     [rbx+38h], r9
 * 0000000140401A27: test    cs:KiKvaShadow, 1
 * 0000000140401A2E: jnz     short loc_140401A3F
 * 0000000140401A30: mov     rdi, gs:8
 * 0000000140401A39: mov     [rdi+4], r8
 * 0000000140401A3D: jmp     short loc_140401A48
 * 0000000140401A3F: mov     gs:9008h, r8
 * 0000000140401A48: mov     ecx, cs:KeKernelStackSize
 * 0000000140401A4E: sub     r9, rcx
 * 0000000140401A51: mov     gs:1A8h, r8
 * 0000000140401A5A: mov     [rbx+30h], r9
 * 0000000140401A5E: lea     rsp, [r8-190h]
 * 0000000140401A65: mov     rdi, rsp
 * 0000000140401A68: mov     ecx, 32h ; '2'
 * 0000000140401A6D: rep movsq
 * 0000000140401A70: xor     edi, edi
 * 0000000140401A72: test    byte ptr [rbx+0C2h], 3
 * 0000000140401A79: jnz     loc_140401CE1
 * 0000000140401A7F: test    dword ptr [rbx], 48010000h
 * 0000000140401A85: jnz     loc_140401CE1
 * 0000000140401A8B: test    byte ptr gs:86Ch, 2
 * 0000000140401A94: jnz     loc_140401CE1
 * 0000000140401A9A: lea     rbp, [rsi-110h]
 * 0000000140401AA1: ldmxcsr dword ptr [rbp-54h]
 * 0000000140401AA5: xor     esi, esi
 * 0000000140401AA7: test    byte ptr [rbx+3], 3
 * 0000000140401AAB: jnz     loc_140401CB6
 * 0000000140401AB1: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140401AB8: mov     byte ptr gs:856h, 0
 * 0000000140401AC1: movzx   eax, word ptr gs:86Ah
 * 0000000140401ACA: cmp     gs:864h, ax
 * 0000000140401AD3: jz      short loc_140401AE7
 * 0000000140401AD5: mov     gs:864h, ax
 * 0000000140401ADE: mov     ecx, 48h ; 'H'
 * 0000000140401AE3: xor     edx, edx
 * 0000000140401AE5: wrmsr
 * 0000000140401AE7: btr     word ptr gs:860h, 2
 * 0000000140401AF2: jnb     short loc_140401B02
 * 0000000140401AF4: mov     eax, 1
 * 0000000140401AF9: xor     edx, edx
 * 0000000140401AFB: mov     ecx, 49h ; 'I'
 * 0000000140401B00: wrmsr
 * 0000000140401B02: btr     word ptr gs:860h, 5
 * 0000000140401B0D: jnb     loc_140401C38
 * 0000000140401B13: call    loc_140401C26
 * 0000000140401B18: add     rsp, 8
 * 0000000140401B1C: call    loc_140401C2F
 * 0000000140401B21: add     rsp, 8
 * 0000000140401B25: call    loc_140401B18
 * 0000000140401B2A: add     rsp, 8
 * 0000000140401B2E: call    loc_140401B21
 * 0000000140401B33: add     rsp, 8
 * 0000000140401B37: call    loc_140401B2A
 * 0000000140401B3C: add     rsp, 8
 * 0000000140401B40: call    loc_140401B33
 * 0000000140401B45: add     rsp, 8
 * 0000000140401B49: call    loc_140401B3C
 * 0000000140401B4E: add     rsp, 8
 * 0000000140401B52: call    loc_140401B45
 * 0000000140401B57: add     rsp, 8
 * 0000000140401B5B: call    loc_140401B4E
 * 0000000140401B60: add     rsp, 8
 * 0000000140401B64: call    loc_140401B57
 * 0000000140401B69: add     rsp, 8
 * 0000000140401B6D: call    loc_140401B60
 * 0000000140401B72: add     rsp, 8
 * 0000000140401B76: call    loc_140401B69
 * 0000000140401B7B: add     rsp, 8
 * 0000000140401B7F: call    loc_140401B72
 * 0000000140401B84: add     rsp, 8
 * 0000000140401B88: call    loc_140401B7B
 * 0000000140401B8D: add     rsp, 8
 * 0000000140401B91: call    loc_140401B84
 * 0000000140401B96: add     rsp, 8
 * 0000000140401B9A: call    loc_140401B8D
 * 0000000140401B9F: add     rsp, 8
 * 0000000140401BA3: call    loc_140401B96
 * 0000000140401BA8: add     rsp, 8
 * 0000000140401BAC: call    loc_140401B9F
 * 0000000140401BB1: add     rsp, 8
 * 0000000140401BB5: call    loc_140401BA8
 * 0000000140401BBA: add     rsp, 8
 * 0000000140401BBE: call    loc_140401BB1
 * 0000000140401BC3: add     rsp, 8
 * 0000000140401BC7: call    loc_140401BBA
 * 0000000140401BCC: add     rsp, 8
 * 0000000140401BD0: call    loc_140401BC3
 * 0000000140401BD5: add     rsp, 8
 * 0000000140401BD9: call    loc_140401BCC
 * 0000000140401BDE: add     rsp, 8
 * 0000000140401BE2: call    loc_140401BD5
 * 0000000140401BE7: add     rsp, 8
 * 0000000140401BEB: call    loc_140401BDE
 * 0000000140401BF0: add     rsp, 8
 * 0000000140401BF4: call    loc_140401BE7
 * 0000000140401BF9: add     rsp, 8
 * 0000000140401BFD: call    loc_140401BF0
 * 0000000140401C02: add     rsp, 8
 * 0000000140401C06: call    loc_140401BF9
 * 0000000140401C0B: add     rsp, 8
 * 0000000140401C0F: call    loc_140401C02
 * 0000000140401C14: add     rsp, 8
 * 0000000140401C18: call    loc_140401C0B
 * 0000000140401C1D: add     rsp, 8
 * 0000000140401C21: call    loc_140401C14
 * 0000000140401C26: add     rsp, 8
 * 0000000140401C2A: call    loc_140401C1D
 * 0000000140401C2F: add     rsp, 8
 * 0000000140401C33: mov     eax, 0DADAh
 * 0000000140401C38: test    word ptr gs:860h, 80h
 * 0000000140401C43: jz      short loc_140401C51
 * 0000000140401C45: xor     eax, eax
 * 0000000140401C47: xor     edx, edx
 * 0000000140401C49: mov     ecx, 1
 * 0000000140401C4E: div     rcx
 * 0000000140401C51: mov     rcx, r9
 * 0000000140401C54: xor     eax, eax
 * 0000000140401C56: xor     edx, edx
 * 0000000140401C58: mov     r8, [rbp+100h]
 * 0000000140401C5F: mov     r9, [rbp+0D8h]
 * 0000000140401C66: pxor    xmm0, xmm0
 * 0000000140401C6A: pxor    xmm1, xmm1
 * 0000000140401C6E: pxor    xmm2, xmm2
 * 0000000140401C72: pxor    xmm3, xmm3
 * 0000000140401C76: pxor    xmm4, xmm4
 * 0000000140401C7A: pxor    xmm5, xmm5
 * 0000000140401C7E: mov     r11, [rbp+0F8h]
 * 0000000140401C85: xor     ebx, ebx
 * 0000000140401C87: test    cs:KiKvaShadow, 1
 * 0000000140401C8E: jnz     KiKernelSysretExit
 * 0000000140401C94: mov     rbp, r9
 * 0000000140401C97: mov     rsp, r8
 * 0000000140401C9A: test    word ptr gs:860h, 100h
 * 0000000140401CA5: jz      short loc_140401CB0
 * 0000000140401CA7: verw    word ptr gs:902Ah
 * 0000000140401CB0: swapgs
 * 0000000140401CB3: sysret
 * 0000000140401CB6: call    KiRestoreDebugRegisterState
 * 0000000140401CBB: mov     r10, cs:KeUserCallbackDispatcher
 * 0000000140401CC2: mov     r9, [rbx+0B8h]
 * 0000000140401CC9: mov     r9, [r9+3D8h]
 * 0000000140401CD0: or      r9, r9
 * 0000000140401CD3: jnz     loc_140401AB8
 * 0000000140401CD9: xchg    r9, r10
 * 0000000140401CDC: jmp     loc_140401AB8
 * 0000000140401CE1: lea     rbp, [rsp+138h+var_B8]
 * 0000000140401CE9: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140401CF2: mov     rax, cs:KeUserCallbackDispatcher
 * 0000000140401CF9: mov     [rbp+0E8h], rax
 * 0000000140401D00: lea     rcx, KiSystemServiceExit
 * 0000000140401D07: jmp     rcx
 * 0000000140401D0D: retn
 */
