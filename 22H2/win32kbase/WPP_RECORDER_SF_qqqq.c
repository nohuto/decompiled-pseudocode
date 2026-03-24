/*
 * XREFs of WPP_RECORDER_SF_qqqq @ 0x1C0056C88
 * Callers:
 *     RIMReadInput @ 0x1C00542C0 (RIMReadInput.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqq @ 0x1C0056C88
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056C88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056C88: mov     [rsp+arg_0], rbx
 * 00000001C0056C8D: mov     [rsp+arg_8], rbp
 * 00000001C0056C92: mov     [rsp+arg_10], rsi
 * 00000001C0056C97: push    rdi
 * 00000001C0056C98: sub     rsp, 70h
 * 00000001C0056C9C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0056CA3: mov     ebp, 8
 * 00000001C0056CA8: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0056CAF: movzx   edi, r9w
 * 00000001C0056CB3: movzx   ebx, dl
 * 00000001C0056CB6: mov     eax, [rcx+2Ch]
 * 00000001C0056CB9: test    al, 1
 * 00000001C0056CBB: jnz     loc_1C00F0758
 * 00000001C0056CC1: and     [rsp+78h+var_10], 0
 * 00000001C0056CC7: lea     rax, [rsp+78h+arg_40]
 * 00000001C0056CCF: mov     r9, [rsp+78h+arg_20]
 * 00000001C0056CD7: mov     r8d, 1
 * 00000001C0056CDD: mov     [rsp+78h+var_18], rbp
 * 00000001C0056CE2: mov     edx, ebx
 * 00000001C0056CE4: mov     [rsp+78h+var_20], rax
 * 00000001C0056CE9: mov     rcx, rsi
 * 00000001C0056CEC: mov     [rsp+78h+var_28], rbp
 * 00000001C0056CF1: lea     rax, [rsp+78h+arg_38]
 * 00000001C0056CF9: mov     [rsp+78h+var_30], rax
 * 00000001C0056CFE: lea     rax, [rsp+78h+arg_30]
 * 00000001C0056D06: mov     [rsp+78h+var_38], rbp
 * 00000001C0056D0B: mov     [rsp+78h+var_40], rax
 * 00000001C0056D10: lea     rax, [rsp+78h+arg_28]
 * 00000001C0056D18: mov     [rsp+78h+var_48], rbp
 * 00000001C0056D1D: mov     [rsp+78h+var_50], rax
 * 00000001C0056D22: mov     word ptr [rsp+78h+var_58], di
 * 00000001C0056D27: call    cs:__imp_WppAutoLogTrace
 * 00000001C0056D2E: nop     dword ptr [rax+rax+00h]
 * 00000001C0056D33: lea     r11, [rsp+78h+var_8]
 * 00000001C0056D38: mov     rbx, [r11+10h]
 * 00000001C0056D3C: mov     rbp, [r11+18h]
 * 00000001C0056D40: mov     rsi, [r11+20h]
 * 00000001C0056D44: mov     rsp, r11
 * 00000001C0056D47: pop     rdi
 * 00000001C0056D48: retn
 * 00000001C00F0758: cmp     [rcx+29h], bl
 * 00000001C00F075B: jb      loc_1C0056CC1
 * 00000001C00F0761: and     [rsp+78h+var_18], 0
 * 00000001C00F0767: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00F076F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00F0776: mov     r9d, edi
 * 00000001C00F0779: mov     r8, [rsp+78h+arg_20]
 * 00000001C00F0781: mov     rcx, [rcx+18h]
 * 00000001C00F0785: mov     [rsp+78h+var_20], rbp
 * 00000001C00F078A: mov     [rsp+78h+var_28], rdx
 * 00000001C00F078F: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00F0797: mov     [rsp+78h+var_30], rbp
 * 00000001C00F079C: mov     [rsp+78h+var_38], rdx
 * 00000001C00F07A1: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00F07A9: mov     [rsp+78h+var_40], rbp
 * 00000001C00F07AE: mov     [rsp+78h+var_48], rdx
 * 00000001C00F07B3: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00F07BB: mov     [rsp+78h+var_50], rbp
 * 00000001C00F07C0: mov     [rsp+78h+var_58], rdx
 * 00000001C00F07C5: mov     edx, 2Bh ; '+'
 * 00000001C00F07CA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00F07D0: nop
 * 00000001C00F07D1: jmp     loc_1C0056CC1
 */
