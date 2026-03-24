/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C0047CD0
 * Callers:
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0046230 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C0047CD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047CD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047CD0: mov     r11, rsp
 * 00000001C0047CD3: mov     [r11+8], rbx
 * 00000001C0047CD7: mov     [r11+10h], rbp
 * 00000001C0047CDB: push    rsi
 * 00000001C0047CDC: sub     rsp, 70h
 * 00000001C0047CE0: mov     rbx, rcx
 * 00000001C0047CE3: mov     ebp, 0Dh
 * 00000001C0047CE8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047CEF: lea     esi, [rbp-5]
 * 00000001C0047CF2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047CF9: jz      short loc_1C0047D59
 * 00000001C0047CFB: cmp     byte ptr [rcx+29h], 4
 * 00000001C0047CFF: jb      short loc_1C0047D59
 * 00000001C0047D01: and     qword ptr [r11-18h], 0
 * 00000001C0047D06: lea     rdx, [r11+48h]
 * 00000001C0047D0A: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047D11: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047D18: mov     rcx, [rcx+18h]
 * 00000001C0047D1C: mov     [r11-20h], rsi
 * 00000001C0047D20: mov     [r11-28h], rdx
 * 00000001C0047D24: lea     rdx, [r11+40h]
 * 00000001C0047D28: mov     [r11-30h], rsi
 * 00000001C0047D2C: mov     [r11-38h], rdx
 * 00000001C0047D30: lea     rdx, [r11+38h]
 * 00000001C0047D34: mov     [r11-40h], rsi
 * 00000001C0047D38: mov     [r11-48h], rdx
 * 00000001C0047D3C: lea     rdx, [r11+30h]
 * 00000001C0047D40: mov     qword ptr [r11-50h], 4
 * 00000001C0047D48: mov     [r11-58h], rdx
 * 00000001C0047D4C: lea     edx, [rbp+1Eh]
 * 00000001C0047D4F: movzx   r9d, bp
 * 00000001C0047D53: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047D59: and     [rsp+78h+var_10], 0
 * 00000001C0047D5F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047D67: mov     [rsp+78h+var_18], rsi
 * 00000001C0047D6C: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047D73: mov     [rsp+78h+var_20], rax
 * 00000001C0047D78: mov     edx, 4
 * 00000001C0047D7D: mov     [rsp+78h+var_28], rsi
 * 00000001C0047D82: lea     rax, [rsp+78h+arg_38]
 * 00000001C0047D8A: mov     [rsp+78h+var_30], rax
 * 00000001C0047D8F: mov     rcx, rbx
 * 00000001C0047D92: mov     [rsp+78h+var_38], rsi
 * 00000001C0047D97: lea     rax, [rsp+78h+arg_30]
 * 00000001C0047D9F: mov     [rsp+78h+var_40], rax
 * 00000001C0047DA4: lea     r8d, [rdx+8]
 * 00000001C0047DA8: lea     rax, [rsp+78h+arg_28]
 * 00000001C0047DB0: mov     [rsp+78h+var_48], 4
 * 00000001C0047DB9: mov     [rsp+78h+var_50], rax
 * 00000001C0047DBE: mov     [rsp+78h+var_58], bp
 * 00000001C0047DC3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047DCA: nop     dword ptr [rax+rax+00h]
 * 00000001C0047DCF: lea     r11, [rsp+78h+var_8]
 * 00000001C0047DD4: mov     rbx, [r11+10h]
 * 00000001C0047DD8: mov     rbp, [r11+18h]
 * 00000001C0047DDC: mov     rsp, r11
 * 00000001C0047DDF: pop     rsi
 * 00000001C0047DE0: retn
 */
