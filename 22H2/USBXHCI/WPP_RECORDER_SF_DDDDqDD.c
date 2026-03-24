/*
 * XREFs of WPP_RECORDER_SF_DDDDqDD @ 0x1C0044DA4
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C000D560 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDqDD @ 0x1C0044DA4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044DA4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044DA4: mov     r11, rsp
 * 00000001C0044DA7: mov     [r11+8], rbx
 * 00000001C0044DAB: mov     [r11+10h], rdi
 * 00000001C0044DAF: mov     [r11+18h], r14
 * 00000001C0044DB3: push    rbp
 * 00000001C0044DB4: lea     rbp, [r11-1Fh]
 * 00000001C0044DB8: sub     rsp, 0A0h
 * 00000001C0044DBF: mov     rbx, rcx
 * 00000001C0044DC2: mov     edi, 4
 * 00000001C0044DC7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044DCE: lea     r14d, [rdi+0Fh]
 * 00000001C0044DD2: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044DD9: jz      loc_1C0044E62
 * 00000001C0044DDF: cmp     byte ptr [rcx+29h], 5
 * 00000001C0044DE3: jb      short loc_1C0044E62
 * 00000001C0044DE5: and     qword ptr [r11-18h], 0
 * 00000001C0044DEA: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0044DEE: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0044DF5: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044DFC: mov     rcx, [rcx+18h]
 * 00000001C0044E00: mov     [r11-20h], rdi
 * 00000001C0044E04: mov     [r11-28h], rdx
 * 00000001C0044E08: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0044E0C: mov     [r11-30h], rdi
 * 00000001C0044E10: mov     [r11-38h], rdx
 * 00000001C0044E14: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0044E18: mov     qword ptr [r11-40h], 8
 * 00000001C0044E20: mov     [r11-48h], rdx
 * 00000001C0044E24: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0044E28: mov     [r11-50h], rdi
 * 00000001C0044E2C: mov     [r11-58h], rdx
 * 00000001C0044E30: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0044E34: mov     [r11-60h], rdi
 * 00000001C0044E38: mov     [r11-68h], rdx
 * 00000001C0044E3C: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0044E40: mov     [r11-70h], rdi
 * 00000001C0044E44: mov     [r11-78h], rdx
 * 00000001C0044E48: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0044E4C: mov     [r11-80h], rdi
 * 00000001C0044E50: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0044E55: lea     edx, [rdi+27h]
 * 00000001C0044E58: movzx   r9d, r14w
 * 00000001C0044E5C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044E62: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0044E6B: lea     rax, [rbp+17h+arg_58]
 * 00000001C0044E6F: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0044E77: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044E7E: mov     [rsp+0A0h+var_18], rax
 * 00000001C0044E86: mov     edx, 5
 * 00000001C0044E8B: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0044E93: lea     rax, [rbp+17h+arg_50]
 * 00000001C0044E97: mov     [rsp+0A0h+var_28], rax
 * 00000001C0044E9C: mov     rcx, rbx
 * 00000001C0044E9F: mov     [rsp+0A0h+var_30], 8
 * 00000001C0044EA8: lea     rax, [rbp+17h+arg_48]
 * 00000001C0044EAC: mov     [rsp+0A0h+var_38], rax
 * 00000001C0044EB1: lea     r8d, [rdx+9]
 * 00000001C0044EB5: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0044EBA: lea     rax, [rbp+17h+arg_40]
 * 00000001C0044EBE: mov     [rsp+0A0h+var_48], rax
 * 00000001C0044EC3: lea     rax, [rbp+17h+arg_38]
 * 00000001C0044EC7: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0044ECC: mov     [rsp+0A0h+var_58], rax
 * 00000001C0044ED1: lea     rax, [rbp+17h+arg_30]
 * 00000001C0044ED5: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0044EDA: mov     [rsp+0A0h+var_68], rax
 * 00000001C0044EDF: lea     rax, [rbp+17h+arg_28]
 * 00000001C0044EE3: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0044EE8: mov     [rsp+0A0h+var_78], rax
 * 00000001C0044EED: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0044EF3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044EFA: nop     dword ptr [rax+rax+00h]
 * 00000001C0044EFF: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0044F07: mov     rbx, [r11+10h]
 * 00000001C0044F0B: mov     rdi, [r11+18h]
 * 00000001C0044F0F: mov     r14, [r11+20h]
 * 00000001C0044F13: mov     rsp, r11
 * 00000001C0044F16: pop     rbp
 * 00000001C0044F17: retn
 */
