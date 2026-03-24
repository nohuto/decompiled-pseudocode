/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C0178EDC
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017C108 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C0178EDC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0178EDC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0178EDC: mov     r11, rsp
 * 00000001C0178EDF: mov     [r11+8], rbx
 * 00000001C0178EE3: mov     [r11+10h], rsi
 * 00000001C0178EE7: push    rdi
 * 00000001C0178EE8: sub     rsp, 50h
 * 00000001C0178EEC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0178EF3: mov     esi, 4
 * 00000001C0178EF8: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0178EFF: movzx   ebx, r9w
 * 00000001C0178F03: mov     eax, [rcx+2Ch]
 * 00000001C0178F06: test    al, 1
 * 00000001C0178F08: jz      short loc_1C0178F4B
 * 00000001C0178F0A: cmp     [rcx+29h], sil
 * 00000001C0178F0E: jb      short loc_1C0178F4B
 * 00000001C0178F10: and     qword ptr [r11-18h], 0
 * 00000001C0178F15: lea     rdx, [r11+38h]
 * 00000001C0178F19: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0178F20: lea     r8, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C0178F27: mov     rcx, [rcx+18h]
 * 00000001C0178F2B: mov     r9d, ebx
 * 00000001C0178F2E: mov     [r11-20h], rsi
 * 00000001C0178F32: mov     [r11-28h], rdx
 * 00000001C0178F36: lea     rdx, [r11+30h]
 * 00000001C0178F3A: mov     [r11-30h], rsi
 * 00000001C0178F3E: mov     [r11-38h], rdx
 * 00000001C0178F42: lea     edx, [rsi+27h]
 * 00000001C0178F45: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0178F4B: and     [rsp+58h+var_10], 0
 * 00000001C0178F51: lea     rax, [rsp+58h+arg_30]
 * 00000001C0178F59: mov     [rsp+58h+var_18], rsi
 * 00000001C0178F5E: lea     r9, WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids
 * 00000001C0178F65: mov     [rsp+58h+var_20], rax
 * 00000001C0178F6A: mov     r8d, 1
 * 00000001C0178F70: lea     rax, [rsp+58h+arg_28]
 * 00000001C0178F78: mov     [rsp+58h+var_28], rsi
 * 00000001C0178F7D: mov     [rsp+58h+var_30], rax
 * 00000001C0178F82: mov     edx, esi
 * 00000001C0178F84: mov     rcx, rdi
 * 00000001C0178F87: mov     [rsp+58h+var_38], bx
 * 00000001C0178F8C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0178F93: nop     dword ptr [rax+rax+00h]
 * 00000001C0178F98: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0178F9D: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0178FA2: add     rsp, 50h
 * 00000001C0178FA6: pop     rdi
 * 00000001C0178FA7: retn
 */
