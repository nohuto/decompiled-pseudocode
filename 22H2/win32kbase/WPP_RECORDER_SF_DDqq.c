/*
 * XREFs of WPP_RECORDER_SF_DDqq @ 0x1C0007FA8
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0007EF4 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqq @ 0x1C0007FA8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007FA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007FA8: mov     [rsp+arg_0], rbx
 * 00000001C0007FAD: mov     [rsp+arg_8], rbp
 * 00000001C0007FB2: mov     [rsp+arg_10], rsi
 * 00000001C0007FB7: push    rdi
 * 00000001C0007FB8: sub     rsp, 70h
 * 00000001C0007FBC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0007FC3: mov     edi, 4
 * 00000001C0007FC8: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C0007FCF: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C0007FD6: lea     ebp, [rdi+9]
 * 00000001C0007FD9: lea     esi, [rdi+4]
 * 00000001C0007FDC: jnz     loc_1C00D675C
 * 00000001C0007FE2: and     [rsp+78h+var_10], 0
 * 00000001C0007FE8: lea     rax, [rsp+78h+arg_40]
 * 00000001C0007FF0: mov     [rsp+78h+var_18], rsi
 * 00000001C0007FF5: lea     r9, WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids
 * 00000001C0007FFC: mov     [rsp+78h+var_20], rax
 * 00000001C0008001: mov     r8d, 12h
 * 00000001C0008007: mov     [rsp+78h+var_28], rsi
 * 00000001C000800C: lea     rax, [rsp+78h+arg_38]
 * 00000001C0008014: mov     [rsp+78h+var_30], rax
 * 00000001C0008019: mov     edx, edi
 * 00000001C000801B: mov     [rsp+78h+var_38], rdi
 * 00000001C0008020: lea     rax, [rsp+78h+arg_30]
 * 00000001C0008028: mov     [rsp+78h+var_40], rax
 * 00000001C000802D: mov     rcx, rbx
 * 00000001C0008030: lea     rax, [rsp+78h+arg_28]
 * 00000001C0008038: mov     [rsp+78h+var_48], rdi
 * 00000001C000803D: mov     [rsp+78h+var_50], rax
 * 00000001C0008042: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0008047: call    cs:__imp_WppAutoLogTrace
 * 00000001C000804E: nop     dword ptr [rax+rax+00h]
 * 00000001C0008053: lea     r11, [rsp+78h+var_8]
 * 00000001C0008058: mov     rbx, [r11+10h]
 * 00000001C000805C: mov     rbp, [r11+18h]
 * 00000001C0008060: mov     rsi, [r11+20h]
 * 00000001C0008064: mov     rsp, r11
 * 00000001C0008067: pop     rdi
 * 00000001C0008068: retn
 * 00000001C00D675C: cmp     [rcx+29h], dil
 * 00000001C00D6760: jb      loc_1C0007FE2
 * 00000001C00D6766: and     [rsp+78h+var_18], 0
 * 00000001C00D676C: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00D6774: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D677B: lea     r8, WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids
 * 00000001C00D6782: mov     rcx, [rcx+18h]
 * 00000001C00D6786: mov     [rsp+78h+var_20], rsi
 * 00000001C00D678B: mov     [rsp+78h+var_28], rdx
 * 00000001C00D6790: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00D6798: mov     [rsp+78h+var_30], rsi
 * 00000001C00D679D: mov     [rsp+78h+var_38], rdx
 * 00000001C00D67A2: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00D67AA: mov     [rsp+78h+var_40], rdi
 * 00000001C00D67AF: mov     [rsp+78h+var_48], rdx
 * 00000001C00D67B4: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00D67BC: mov     [rsp+78h+var_50], rdi
 * 00000001C00D67C1: mov     [rsp+78h+var_58], rdx
 * 00000001C00D67C6: mov     edx, 2Bh ; '+'
 * 00000001C00D67CB: movzx   r9d, bp
 * 00000001C00D67CF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D67D5: nop
 * 00000001C00D67D6: jmp     loc_1C0007FE2
 */
