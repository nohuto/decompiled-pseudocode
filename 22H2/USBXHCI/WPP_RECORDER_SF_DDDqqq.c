/*
 * XREFs of WPP_RECORDER_SF_DDDqqq @ 0x1C000DE80
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqq @ 0x1C000DE80
 * Reason: Hex-Rays returned no pseudocode for 0x1C000DE80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000DE80: mov     rax, rsp
 * 00000001C000DE83: mov     [rax+8], rbx
 * 00000001C000DE87: mov     [rax+10h], rsi
 * 00000001C000DE8B: mov     [rax+18h], rdi
 * 00000001C000DE8F: mov     [rax+20h], r14
 * 00000001C000DE93: push    rbp
 * 00000001C000DE94: lea     rbp, [rax-27h]
 * 00000001C000DE98: sub     rsp, 90h
 * 00000001C000DE9F: mov     edi, 4
 * 00000001C000DEA4: mov     rbx, rcx
 * 00000001C000DEA7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000DEAE: lea     esi, [rdi+4]
 * 00000001C000DEB1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C000DEB8: lea     r14d, [rdi+35h]
 * 00000001C000DEBC: jnz     loc_1C001FF94
 * 00000001C000DEC2: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C000DECB: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C000DECF: mov     [rsp+90h+var_10], rsi
 * 00000001C000DED7: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C000DEDE: mov     [rsp+90h+var_18], rax
 * 00000001C000DEE3: mov     r8d, 0Eh
 * 00000001C000DEE9: mov     [rsp+90h+var_20], rsi
 * 00000001C000DEEE: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C000DEF2: mov     [rsp+90h+var_28], rax
 * 00000001C000DEF7: mov     edx, edi
 * 00000001C000DEF9: mov     [rsp+90h+var_30], rsi
 * 00000001C000DEFE: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C000DF02: mov     [rsp+90h+var_38], rax
 * 00000001C000DF07: mov     rcx, rbx
 * 00000001C000DF0A: mov     [rsp+90h+var_40], rdi
 * 00000001C000DF0F: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C000DF13: mov     [rsp+90h+var_48], rax
 * 00000001C000DF18: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C000DF1C: mov     [rsp+90h+var_50], rdi
 * 00000001C000DF21: mov     [rsp+90h+var_58], rax
 * 00000001C000DF26: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C000DF2A: mov     [rsp+90h+var_60], rdi
 * 00000001C000DF2F: mov     [rsp+90h+var_68], rax
 * 00000001C000DF34: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C000DF3A: call    cs:__imp_WppAutoLogTrace
 * 00000001C000DF41: nop     dword ptr [rax+rax+00h]
 * 00000001C000DF46: lea     r11, [rsp+90h+var_s0]
 * 00000001C000DF4E: mov     rbx, [r11+10h]
 * 00000001C000DF52: mov     rsi, [r11+18h]
 * 00000001C000DF56: mov     rdi, [r11+20h]
 * 00000001C000DF5A: mov     r14, [r11+28h]
 * 00000001C000DF5E: mov     rsp, r11
 * 00000001C000DF61: pop     rbp
 * 00000001C000DF62: retn
 * 00000001C001FF94: cmp     [rcx+29h], dil
 * 00000001C001FF98: jb      loc_1C000DEC2
 * 00000001C001FF9E: and     [rsp+90h+var_10], 0
 * 00000001C001FFA7: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C001FFAB: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001FFB2: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C001FFB9: mov     rcx, [rcx+18h]
 * 00000001C001FFBD: mov     [rsp+90h+var_18], rsi
 * 00000001C001FFC2: mov     [rsp+90h+var_20], rdx
 * 00000001C001FFC7: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C001FFCB: mov     [rsp+90h+var_28], rsi
 * 00000001C001FFD0: mov     [rsp+90h+var_30], rdx
 * 00000001C001FFD5: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C001FFD9: mov     [rsp+90h+var_38], rsi
 * 00000001C001FFDE: mov     [rsp+90h+var_40], rdx
 * 00000001C001FFE3: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C001FFE7: mov     [rsp+90h+var_48], rdi
 * 00000001C001FFEC: mov     [rsp+90h+var_50], rdx
 * 00000001C001FFF1: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C001FFF5: mov     [rsp+90h+var_58], rdi
 * 00000001C001FFFA: mov     [rsp+90h+var_60], rdx
 * 00000001C001FFFF: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0020003: mov     [rsp+90h+var_68], rdi
 * 00000001C0020008: mov     [rsp+90h+var_70], rdx
 * 00000001C002000D: mov     edx, 2Bh ; '+'
 * 00000001C0020012: movzx   r9d, r14w
 * 00000001C0020016: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002001C: nop
 * 00000001C002001D: jmp     loc_1C000DEC2
 */
