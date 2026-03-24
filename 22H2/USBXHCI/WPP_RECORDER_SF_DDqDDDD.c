/*
 * XREFs of WPP_RECORDER_SF_ddqDddd @ 0x1C004FD48
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015F74 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqDddd @ 0x1C004FD48
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FD48
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FD48: mov     r11, rsp
 * 00000001C004FD4B: mov     [r11+8], rbx
 * 00000001C004FD4F: mov     [r11+10h], rdi
 * 00000001C004FD53: mov     [r11+18h], r14
 * 00000001C004FD57: push    rbp
 * 00000001C004FD58: lea     rbp, [r11-1Fh]
 * 00000001C004FD5C: sub     rsp, 0A0h
 * 00000001C004FD63: mov     rbx, rcx
 * 00000001C004FD66: mov     edi, 4
 * 00000001C004FD6B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004FD72: lea     r14d, [rdi+0Ah]
 * 00000001C004FD76: mov     eax, [rcx+2Ch]
 * 00000001C004FD79: test    al, al
 * 00000001C004FD7B: jns     loc_1C004FE04
 * 00000001C004FD81: cmp     byte ptr [rcx+29h], 5
 * 00000001C004FD85: jb      short loc_1C004FE04
 * 00000001C004FD87: and     qword ptr [r11-18h], 0
 * 00000001C004FD8C: lea     rdx, [rbp+17h+arg_58]
 * 00000001C004FD90: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004FD97: lea     r8, WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids
 * 00000001C004FD9E: mov     rcx, [rcx+18h]
 * 00000001C004FDA2: mov     [r11-20h], rdi
 * 00000001C004FDA6: mov     [r11-28h], rdx
 * 00000001C004FDAA: lea     rdx, [rbp+17h+arg_50]
 * 00000001C004FDAE: mov     [r11-30h], rdi
 * 00000001C004FDB2: mov     [r11-38h], rdx
 * 00000001C004FDB6: lea     rdx, [rbp+17h+arg_48]
 * 00000001C004FDBA: mov     [r11-40h], rdi
 * 00000001C004FDBE: mov     [r11-48h], rdx
 * 00000001C004FDC2: lea     rdx, [rbp+17h+arg_40]
 * 00000001C004FDC6: mov     [r11-50h], rdi
 * 00000001C004FDCA: mov     [r11-58h], rdx
 * 00000001C004FDCE: lea     rdx, [rbp+17h+arg_38]
 * 00000001C004FDD2: mov     qword ptr [r11-60h], 8
 * 00000001C004FDDA: mov     [r11-68h], rdx
 * 00000001C004FDDE: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004FDE2: mov     [r11-70h], rdi
 * 00000001C004FDE6: mov     [r11-78h], rdx
 * 00000001C004FDEA: lea     rdx, [rbp+17h+arg_28]
 * 00000001C004FDEE: mov     [r11-80h], rdi
 * 00000001C004FDF2: mov     [rsp+0A0h+var_80], rdx
 * 00000001C004FDF7: lea     edx, [rdi+27h]
 * 00000001C004FDFA: movzx   r9d, r14w
 * 00000001C004FDFE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FE04: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C004FE0D: lea     rax, [rbp+17h+arg_58]
 * 00000001C004FE11: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004FE19: lea     r9, WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids
 * 00000001C004FE20: mov     [rsp+0A0h+var_18], rax
 * 00000001C004FE28: mov     edx, 5
 * 00000001C004FE2D: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004FE35: lea     rax, [rbp+17h+arg_50]
 * 00000001C004FE39: mov     [rsp+0A0h+var_28], rax
 * 00000001C004FE3E: mov     rcx, rbx
 * 00000001C004FE41: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004FE46: lea     rax, [rbp+17h+arg_48]
 * 00000001C004FE4A: mov     [rsp+0A0h+var_38], rax
 * 00000001C004FE4F: lea     r8d, [rdx+3]
 * 00000001C004FE53: mov     [rsp+0A0h+var_40], rdi
 * 00000001C004FE58: lea     rax, [rbp+17h+arg_40]
 * 00000001C004FE5C: mov     [rsp+0A0h+var_48], rax
 * 00000001C004FE61: lea     rax, [rbp+17h+arg_38]
 * 00000001C004FE65: mov     [rsp+0A0h+var_50], 8
 * 00000001C004FE6E: mov     [rsp+0A0h+var_58], rax
 * 00000001C004FE73: lea     rax, [rbp+17h+arg_30]
 * 00000001C004FE77: mov     [rsp+0A0h+var_60], rdi
 * 00000001C004FE7C: mov     [rsp+0A0h+var_68], rax
 * 00000001C004FE81: lea     rax, [rbp+17h+arg_28]
 * 00000001C004FE85: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004FE8A: mov     [rsp+0A0h+var_78], rax
 * 00000001C004FE8F: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C004FE95: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FE9C: nop     dword ptr [rax+rax+00h]
 * 00000001C004FEA1: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C004FEA9: mov     rbx, [r11+10h]
 * 00000001C004FEAD: mov     rdi, [r11+18h]
 * 00000001C004FEB1: mov     r14, [r11+20h]
 * 00000001C004FEB5: mov     rsp, r11
 * 00000001C004FEB8: pop     rbp
 * 00000001C004FEB9: retn
 */
