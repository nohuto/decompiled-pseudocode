/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C004FA8C
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F688 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C004FA8C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FA8C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FA8C: mov     r11, rsp
 * 00000001C004FA8F: mov     [r11+8], rbx
 * 00000001C004FA93: mov     [r11+10h], rsi
 * 00000001C004FA97: push    rdi
 * 00000001C004FA98: sub     rsp, 50h
 * 00000001C004FA9C: mov     rbx, rcx
 * 00000001C004FA9F: mov     esi, 10h
 * 00000001C004FAA4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004FAAB: lea     edi, [rsi-0Ch]
 * 00000001C004FAAE: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C004FAB5: jz      short loc_1C004FAF9
 * 00000001C004FAB7: cmp     byte ptr [rcx+29h], 2
 * 00000001C004FABB: jb      short loc_1C004FAF9
 * 00000001C004FABD: and     qword ptr [r11-18h], 0
 * 00000001C004FAC2: lea     rdx, [r11+38h]
 * 00000001C004FAC6: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004FACD: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FAD4: mov     rcx, [rcx+18h]
 * 00000001C004FAD8: mov     [r11-20h], rdi
 * 00000001C004FADC: mov     [r11-28h], rdx
 * 00000001C004FAE0: lea     rdx, [r11+30h]
 * 00000001C004FAE4: mov     [r11-30h], rdi
 * 00000001C004FAE8: mov     [r11-38h], rdx
 * 00000001C004FAEC: lea     edx, [rsi+1Bh]
 * 00000001C004FAEF: movzx   r9d, si
 * 00000001C004FAF3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FAF9: and     [rsp+58h+var_10], 0
 * 00000001C004FAFF: lea     rax, [rsp+58h+arg_30]
 * 00000001C004FB07: mov     [rsp+58h+var_18], rdi
 * 00000001C004FB0C: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C004FB13: mov     [rsp+58h+var_20], rax
 * 00000001C004FB18: mov     edx, 2
 * 00000001C004FB1D: lea     rax, [rsp+58h+arg_28]
 * 00000001C004FB25: mov     [rsp+58h+var_28], rdi
 * 00000001C004FB2A: mov     [rsp+58h+var_30], rax
 * 00000001C004FB2F: mov     rcx, rbx
 * 00000001C004FB32: mov     [rsp+58h+var_38], si
 * 00000001C004FB37: lea     r8d, [rdx+11h]
 * 00000001C004FB3B: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FB42: nop     dword ptr [rax+rax+00h]
 * 00000001C004FB47: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004FB4C: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004FB51: add     rsp, 50h
 * 00000001C004FB55: pop     rdi
 * 00000001C004FB56: retn
 */
