/*
 * XREFs of WPP_RECORDER_SF_qqqq @ 0x1C0055C88
 * Callers:
 *     RIMReadInput @ 0x1C00532C0 (RIMReadInput.c)
 *     rimSignalReadComplete @ 0x1C0175F28 (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqq @ 0x1C0055C88
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055C88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055C88: mov     [rsp+arg_0], rbx
 * 00000001C0055C8D: mov     [rsp+arg_8], rbp
 * 00000001C0055C92: mov     [rsp+arg_10], rsi
 * 00000001C0055C97: push    rdi
 * 00000001C0055C98: sub     rsp, 70h
 * 00000001C0055C9C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0055CA3: mov     ebp, 8
 * 00000001C0055CA8: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0055CAF: movzx   edi, r9w
 * 00000001C0055CB3: movzx   ebx, dl
 * 00000001C0055CB6: mov     eax, [rcx+2Ch]
 * 00000001C0055CB9: test    al, 1
 * 00000001C0055CBB: jnz     loc_1C00EFF52
 * 00000001C0055CC1: and     [rsp+78h+var_10], 0
 * 00000001C0055CC7: lea     rax, [rsp+78h+arg_40]
 * 00000001C0055CCF: mov     r9, [rsp+78h+arg_20]
 * 00000001C0055CD7: mov     r8d, 1
 * 00000001C0055CDD: mov     [rsp+78h+var_18], rbp
 * 00000001C0055CE2: mov     edx, ebx
 * 00000001C0055CE4: mov     [rsp+78h+var_20], rax
 * 00000001C0055CE9: mov     rcx, rsi
 * 00000001C0055CEC: mov     [rsp+78h+var_28], rbp
 * 00000001C0055CF1: lea     rax, [rsp+78h+arg_38]
 * 00000001C0055CF9: mov     [rsp+78h+var_30], rax
 * 00000001C0055CFE: lea     rax, [rsp+78h+arg_30]
 * 00000001C0055D06: mov     [rsp+78h+var_38], rbp
 * 00000001C0055D0B: mov     [rsp+78h+var_40], rax
 * 00000001C0055D10: lea     rax, [rsp+78h+arg_28]
 * 00000001C0055D18: mov     [rsp+78h+var_48], rbp
 * 00000001C0055D1D: mov     [rsp+78h+var_50], rax
 * 00000001C0055D22: mov     word ptr [rsp+78h+var_58], di
 * 00000001C0055D27: call    cs:__imp_WppAutoLogTrace
 * 00000001C0055D2E: nop     dword ptr [rax+rax+00h]
 * 00000001C0055D33: lea     r11, [rsp+78h+var_8]
 * 00000001C0055D38: mov     rbx, [r11+10h]
 * 00000001C0055D3C: mov     rbp, [r11+18h]
 * 00000001C0055D40: mov     rsi, [r11+20h]
 * 00000001C0055D44: mov     rsp, r11
 * 00000001C0055D47: pop     rdi
 * 00000001C0055D48: retn
 * 00000001C00EFF52: cmp     [rcx+29h], bl
 * 00000001C00EFF55: jb      loc_1C0055CC1
 * 00000001C00EFF5B: and     [rsp+78h+var_18], 0
 * 00000001C00EFF61: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00EFF69: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EFF70: mov     r9d, edi
 * 00000001C00EFF73: mov     r8, [rsp+78h+arg_20]
 * 00000001C00EFF7B: mov     rcx, [rcx+18h]
 * 00000001C00EFF7F: mov     [rsp+78h+var_20], rbp
 * 00000001C00EFF84: mov     [rsp+78h+var_28], rdx
 * 00000001C00EFF89: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00EFF91: mov     [rsp+78h+var_30], rbp
 * 00000001C00EFF96: mov     [rsp+78h+var_38], rdx
 * 00000001C00EFF9B: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00EFFA3: mov     [rsp+78h+var_40], rbp
 * 00000001C00EFFA8: mov     [rsp+78h+var_48], rdx
 * 00000001C00EFFAD: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00EFFB5: mov     [rsp+78h+var_50], rbp
 * 00000001C00EFFBA: mov     [rsp+78h+var_58], rdx
 * 00000001C00EFFBF: mov     edx, 2Bh ; '+'
 * 00000001C00EFFC4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EFFCA: nop
 * 00000001C00EFFCB: jmp     loc_1C0055CC1
 */
