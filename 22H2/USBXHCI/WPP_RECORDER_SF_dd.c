/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C003C09C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006DCA0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C003C09C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C09C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C09C: mov     r11, rsp
 * 00000001C003C09F: mov     [r11+8], rbx
 * 00000001C003C0A3: mov     [r11+10h], rsi
 * 00000001C003C0A7: push    rdi
 * 00000001C003C0A8: sub     rsp, 50h
 * 00000001C003C0AC: mov     rdi, rcx
 * 00000001C003C0AF: movzx   ebx, r9w
 * 00000001C003C0B3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C0BA: mov     esi, 4
 * 00000001C003C0BF: test    dword ptr [rcx+2Ch], 100h
 * 00000001C003C0C6: jz      short loc_1C003C109
 * 00000001C003C0C8: cmp     byte ptr [rcx+29h], 2
 * 00000001C003C0CC: jb      short loc_1C003C109
 * 00000001C003C0CE: and     qword ptr [r11-18h], 0
 * 00000001C003C0D3: lea     rdx, [r11+38h]
 * 00000001C003C0D7: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003C0DE: lea     r8, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C003C0E5: mov     rcx, [rcx+18h]
 * 00000001C003C0E9: mov     r9d, ebx
 * 00000001C003C0EC: mov     [r11-20h], rsi
 * 00000001C003C0F0: mov     [r11-28h], rdx
 * 00000001C003C0F4: lea     rdx, [r11+30h]
 * 00000001C003C0F8: mov     [r11-30h], rsi
 * 00000001C003C0FC: mov     [r11-38h], rdx
 * 00000001C003C100: lea     edx, [rsi+27h]
 * 00000001C003C103: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C109: and     [rsp+58h+var_10], 0
 * 00000001C003C10F: lea     rax, [rsp+58h+arg_30]
 * 00000001C003C117: mov     [rsp+58h+var_18], rsi
 * 00000001C003C11C: lea     r9, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C003C123: mov     [rsp+58h+var_20], rax
 * 00000001C003C128: mov     edx, 2
 * 00000001C003C12D: lea     rax, [rsp+58h+arg_28]
 * 00000001C003C135: mov     [rsp+58h+var_28], rsi
 * 00000001C003C13A: mov     [rsp+58h+var_30], rax
 * 00000001C003C13F: mov     rcx, rdi
 * 00000001C003C142: mov     [rsp+58h+var_38], bx
 * 00000001C003C147: lea     r8d, [rdx+7]
 * 00000001C003C14B: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C152: nop     dword ptr [rax+rax+00h]
 * 00000001C003C157: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003C15C: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003C161: add     rsp, 50h
 * 00000001C003C165: pop     rdi
 * 00000001C003C166: retn
 */
