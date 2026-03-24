/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0178FAC
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017C1D8 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C0178FAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0178FAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0178FAC: mov     r11, rsp
 * 00000001C0178FAF: mov     [r11+8], rbx
 * 00000001C0178FB3: mov     [r11+10h], rsi
 * 00000001C0178FB7: push    rdi
 * 00000001C0178FB8: sub     rsp, 50h
 * 00000001C0178FBC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0178FC3: mov     esi, 4
 * 00000001C0178FC8: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0178FCF: movzx   ebx, r9w
 * 00000001C0178FD3: mov     eax, [rcx+2Ch]
 * 00000001C0178FD6: test    al, 1
 * 00000001C0178FD8: jz      short loc_1C017901B
 * 00000001C0178FDA: cmp     [rcx+29h], sil
 * 00000001C0178FDE: jb      short loc_1C017901B
 * 00000001C0178FE0: and     qword ptr [r11-18h], 0
 * 00000001C0178FE5: lea     rdx, [r11+38h]
 * 00000001C0178FE9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0178FF0: lea     r8, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C0178FF7: mov     rcx, [rcx+18h]
 * 00000001C0178FFB: mov     r9d, ebx
 * 00000001C0178FFE: mov     [r11-20h], rsi
 * 00000001C0179002: mov     [r11-28h], rdx
 * 00000001C0179006: lea     rdx, [r11+30h]
 * 00000001C017900A: mov     [r11-30h], rsi
 * 00000001C017900E: mov     [r11-38h], rdx
 * 00000001C0179012: lea     edx, [rsi+27h]
 * 00000001C0179015: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017901B: and     [rsp+58h+var_10], 0
 * 00000001C0179021: lea     rax, [rsp+58h+arg_30]
 * 00000001C0179029: mov     [rsp+58h+var_18], rsi
 * 00000001C017902E: lea     r9, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C0179035: mov     [rsp+58h+var_20], rax
 * 00000001C017903A: mov     r8d, 1
 * 00000001C0179040: lea     rax, [rsp+58h+arg_28]
 * 00000001C0179048: mov     [rsp+58h+var_28], rsi
 * 00000001C017904D: mov     [rsp+58h+var_30], rax
 * 00000001C0179052: mov     edx, esi
 * 00000001C0179054: mov     rcx, rdi
 * 00000001C0179057: mov     [rsp+58h+var_38], bx
 * 00000001C017905C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0179063: nop     dword ptr [rax+rax+00h]
 * 00000001C0179068: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017906D: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0179072: add     rsp, 50h
 * 00000001C0179076: pop     rdi
 * 00000001C0179077: retn
 */
