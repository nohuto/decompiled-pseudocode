/*
 * XREFs of WPP_RECORDER_SF_DDqLDDi @ 0x1C0004E60
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0019120 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqLDDi @ 0x1C0004E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004E60: mov     [rsp+arg_0], rbx
 * 00000001C0004E65: push    rdi
 * 00000001C0004E66: sub     rsp, 0A0h
 * 00000001C0004E6D: mov     rdi, rcx
 * 00000001C0004E70: movzx   ebx, r9w
 * 00000001C0004E74: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0004E7B: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0004E82: jnz     loc_1C001CA18
 * 00000001C0004E88: mov     [rsp+0A8h+var_10], 0
 * 00000001C0004E94: lea     rax, [rsp+0A8h+arg_58]
 * 00000001C0004E9C: mov     [rsp+0A8h+var_18], 8
 * 00000001C0004EA8: lea     r9, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C0004EAF: mov     [rsp+0A8h+var_20], rax
 * 00000001C0004EB7: mov     edx, 4
 * 00000001C0004EBC: mov     [rsp+0A8h+var_28], 4
 * 00000001C0004EC8: lea     rax, [rsp+0A8h+arg_50]
 * 00000001C0004ED0: mov     [rsp+0A8h+var_30], rax
 * 00000001C0004ED5: mov     rcx, rdi
 * 00000001C0004ED8: mov     [rsp+0A8h+var_38], 4
 * 00000001C0004EE1: lea     rax, [rsp+0A8h+arg_48]
 * 00000001C0004EE9: mov     [rsp+0A8h+var_40], rax
 * 00000001C0004EEE: lea     r8d, [rdx+0Ah]
 * 00000001C0004EF2: mov     [rsp+0A8h+var_48], 4
 * 00000001C0004EFB: lea     rax, [rsp+0A8h+arg_40]
 * 00000001C0004F03: mov     [rsp+0A8h+var_50], rax
 * 00000001C0004F08: lea     rax, [rsp+0A8h+arg_38]
 * 00000001C0004F10: mov     [rsp+0A8h+var_58], 8
 * 00000001C0004F19: mov     [rsp+0A8h+var_60], rax
 * 00000001C0004F1E: lea     rax, [rsp+0A8h+arg_30]
 * 00000001C0004F26: mov     [rsp+0A8h+var_68], 4
 * 00000001C0004F2F: mov     [rsp+0A8h+var_70], rax
 * 00000001C0004F34: lea     rax, [rsp+0A8h+arg_28]
 * 00000001C0004F3C: mov     [rsp+0A8h+var_78], 4
 * 00000001C0004F45: mov     [rsp+0A8h+var_80], rax
 * 00000001C0004F4A: mov     word ptr [rsp+0A8h+var_88], bx
 * 00000001C0004F4F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0004F56: nop     dword ptr [rax+rax+00h]
 * 00000001C0004F5B: mov     rbx, [rsp+0A8h+arg_0]
 * 00000001C0004F63: add     rsp, 0A0h
 * 00000001C0004F6A: pop     rdi
 * 00000001C0004F6B: retn
 * 00000001C001CA18: cmp     byte ptr [rcx+29h], 4
 * 00000001C001CA1C: jb      loc_1C0004E88
 * 00000001C001CA22: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C001CA29: lea     rdx, [rsp+0A8h+arg_58]
 * 00000001C001CA31: mov     rcx, [rcx+18h]
 * 00000001C001CA35: lea     r8, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C001CA3C: mov     [rsp+0A8h+var_18], 0
 * 00000001C001CA48: mov     r9d, ebx
 * 00000001C001CA4B: mov     [rsp+0A8h+var_20], 8
 * 00000001C001CA57: mov     [rsp+0A8h+var_28], rdx
 * 00000001C001CA5F: lea     rdx, [rsp+0A8h+arg_50]
 * 00000001C001CA67: mov     [rsp+0A8h+var_30], 4
 * 00000001C001CA70: mov     [rsp+0A8h+var_38], rdx
 * 00000001C001CA75: lea     rdx, [rsp+0A8h+arg_48]
 * 00000001C001CA7D: mov     [rsp+0A8h+var_40], 4
 * 00000001C001CA86: mov     [rsp+0A8h+var_48], rdx
 * 00000001C001CA8B: lea     rdx, [rsp+0A8h+arg_40]
 * 00000001C001CA93: mov     [rsp+0A8h+var_50], 4
 * 00000001C001CA9C: mov     [rsp+0A8h+var_58], rdx
 * 00000001C001CAA1: lea     rdx, [rsp+0A8h+arg_38]
 * 00000001C001CAA9: mov     [rsp+0A8h+var_60], 8
 * 00000001C001CAB2: mov     [rsp+0A8h+var_68], rdx
 * 00000001C001CAB7: lea     rdx, [rsp+0A8h+arg_30]
 * 00000001C001CABF: mov     [rsp+0A8h+var_70], 4
 * 00000001C001CAC8: mov     [rsp+0A8h+var_78], rdx
 * 00000001C001CACD: lea     rdx, [rsp+0A8h+arg_28]
 * 00000001C001CAD5: mov     [rsp+0A8h+var_80], 4
 * 00000001C001CADE: mov     [rsp+0A8h+var_88], rdx
 * 00000001C001CAE3: mov     edx, 2Bh ; '+'
 * 00000001C001CAE8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001CAEE: nop
 * 00000001C001CAEF: jmp     loc_1C0004E88
 */
