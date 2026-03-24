/*
 * XREFs of WPP_RECORDER_SF_DDqq @ 0x1C004B2C8
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C004B214 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqq @ 0x1C004B2C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B2C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B2C8: mov     [rsp+arg_0], rbx
 * 00000001C004B2CD: mov     [rsp+arg_8], rbp
 * 00000001C004B2D2: mov     [rsp+arg_10], rsi
 * 00000001C004B2D7: push    rdi
 * 00000001C004B2D8: sub     rsp, 70h
 * 00000001C004B2DC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004B2E3: mov     edi, 4
 * 00000001C004B2E8: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C004B2EF: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C004B2F6: lea     ebp, [rdi+9]
 * 00000001C004B2F9: lea     esi, [rdi+4]
 * 00000001C004B2FC: jnz     loc_1C00EB452
 * 00000001C004B302: and     [rsp+78h+var_10], 0
 * 00000001C004B308: lea     rax, [rsp+78h+arg_40]
 * 00000001C004B310: mov     [rsp+78h+var_18], rsi
 * 00000001C004B315: lea     r9, WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids
 * 00000001C004B31C: mov     [rsp+78h+var_20], rax
 * 00000001C004B321: mov     r8d, 12h
 * 00000001C004B327: mov     [rsp+78h+var_28], rsi
 * 00000001C004B32C: lea     rax, [rsp+78h+arg_38]
 * 00000001C004B334: mov     [rsp+78h+var_30], rax
 * 00000001C004B339: mov     edx, edi
 * 00000001C004B33B: mov     [rsp+78h+var_38], rdi
 * 00000001C004B340: lea     rax, [rsp+78h+arg_30]
 * 00000001C004B348: mov     [rsp+78h+var_40], rax
 * 00000001C004B34D: mov     rcx, rbx
 * 00000001C004B350: lea     rax, [rsp+78h+arg_28]
 * 00000001C004B358: mov     [rsp+78h+var_48], rdi
 * 00000001C004B35D: mov     [rsp+78h+var_50], rax
 * 00000001C004B362: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C004B367: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B36E: nop     dword ptr [rax+rax+00h]
 * 00000001C004B373: lea     r11, [rsp+78h+var_8]
 * 00000001C004B378: mov     rbx, [r11+10h]
 * 00000001C004B37C: mov     rbp, [r11+18h]
 * 00000001C004B380: mov     rsi, [r11+20h]
 * 00000001C004B384: mov     rsp, r11
 * 00000001C004B387: pop     rdi
 * 00000001C004B388: retn
 * 00000001C00EB452: cmp     [rcx+29h], dil
 * 00000001C00EB456: jb      loc_1C004B302
 * 00000001C00EB45C: and     [rsp+78h+var_18], 0
 * 00000001C00EB462: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00EB46A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EB471: lea     r8, WPP_54d33ffc9e3d3dbf4995411973a3d843_Traceguids
 * 00000001C00EB478: mov     rcx, [rcx+18h]
 * 00000001C00EB47C: mov     [rsp+78h+var_20], rsi
 * 00000001C00EB481: mov     [rsp+78h+var_28], rdx
 * 00000001C00EB486: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00EB48E: mov     [rsp+78h+var_30], rsi
 * 00000001C00EB493: mov     [rsp+78h+var_38], rdx
 * 00000001C00EB498: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00EB4A0: mov     [rsp+78h+var_40], rdi
 * 00000001C00EB4A5: mov     [rsp+78h+var_48], rdx
 * 00000001C00EB4AA: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00EB4B2: mov     [rsp+78h+var_50], rdi
 * 00000001C00EB4B7: mov     [rsp+78h+var_58], rdx
 * 00000001C00EB4BC: mov     edx, 2Bh ; '+'
 * 00000001C00EB4C1: movzx   r9d, bp
 * 00000001C00EB4C5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EB4CB: nop
 * 00000001C00EB4CC: jmp     loc_1C004B302
 */
