/*
 * XREFs of WPP_RECORDER_SF_dqLL @ 0x1C0047AA0
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045BB0 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLL @ 0x1C0047AA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047AA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047AA0: mov     r11, rsp
 * 00000001C0047AA3: mov     [r11+8], rbx
 * 00000001C0047AA7: mov     [r11+10h], rbp
 * 00000001C0047AAB: push    rdi
 * 00000001C0047AAC: sub     rsp, 70h
 * 00000001C0047AB0: mov     rbx, rcx
 * 00000001C0047AB3: mov     ebp, 41h ; 'A'
 * 00000001C0047AB8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047ABF: lea     edi, [rbp-3Dh]
 * 00000001C0047AC2: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047AC9: jz      short loc_1C0047B29
 * 00000001C0047ACB: cmp     byte ptr [rcx+29h], 2
 * 00000001C0047ACF: jb      short loc_1C0047B29
 * 00000001C0047AD1: and     qword ptr [r11-18h], 0
 * 00000001C0047AD6: lea     rdx, [r11+48h]
 * 00000001C0047ADA: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047AE1: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047AE8: mov     rcx, [rcx+18h]
 * 00000001C0047AEC: mov     [r11-20h], rdi
 * 00000001C0047AF0: mov     [r11-28h], rdx
 * 00000001C0047AF4: lea     rdx, [r11+40h]
 * 00000001C0047AF8: mov     [r11-30h], rdi
 * 00000001C0047AFC: mov     [r11-38h], rdx
 * 00000001C0047B00: lea     rdx, [r11+38h]
 * 00000001C0047B04: mov     qword ptr [r11-40h], 8
 * 00000001C0047B0C: mov     [r11-48h], rdx
 * 00000001C0047B10: lea     rdx, [r11+30h]
 * 00000001C0047B14: mov     [r11-50h], rdi
 * 00000001C0047B18: mov     [r11-58h], rdx
 * 00000001C0047B1C: lea     edx, [rbp-16h]
 * 00000001C0047B1F: movzx   r9d, bp
 * 00000001C0047B23: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047B29: and     [rsp+78h+var_10], 0
 * 00000001C0047B2F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047B37: mov     [rsp+78h+var_18], rdi
 * 00000001C0047B3C: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047B43: mov     [rsp+78h+var_20], rax
 * 00000001C0047B48: mov     edx, 2
 * 00000001C0047B4D: mov     [rsp+78h+var_28], rdi
 * 00000001C0047B52: lea     rax, [rsp+78h+arg_38]
 * 00000001C0047B5A: mov     [rsp+78h+var_30], rax
 * 00000001C0047B5F: mov     rcx, rbx
 * 00000001C0047B62: mov     [rsp+78h+var_38], 8
 * 00000001C0047B6B: lea     rax, [rsp+78h+arg_30]
 * 00000001C0047B73: mov     [rsp+78h+var_40], rax
 * 00000001C0047B78: lea     r8d, [rdx+0Ah]
 * 00000001C0047B7C: lea     rax, [rsp+78h+arg_28]
 * 00000001C0047B84: mov     [rsp+78h+var_48], rdi
 * 00000001C0047B89: mov     [rsp+78h+var_50], rax
 * 00000001C0047B8E: mov     [rsp+78h+var_58], bp
 * 00000001C0047B93: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047B9A: nop     dword ptr [rax+rax+00h]
 * 00000001C0047B9F: lea     r11, [rsp+78h+var_8]
 * 00000001C0047BA4: mov     rbx, [r11+10h]
 * 00000001C0047BA8: mov     rbp, [r11+18h]
 * 00000001C0047BAC: mov     rsp, r11
 * 00000001C0047BAF: pop     rdi
 * 00000001C0047BB0: retn
 */
