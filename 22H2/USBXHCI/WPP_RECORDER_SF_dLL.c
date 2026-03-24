/*
 * XREFs of WPP_RECORDER_SF_dLL @ 0x1C0047630
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045BB0 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dLL @ 0x1C0047630
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047630
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047630: mov     r11, rsp
 * 00000001C0047633: mov     [r11+8], rbx
 * 00000001C0047637: mov     [r11+10h], rsi
 * 00000001C004763B: push    rdi
 * 00000001C004763C: sub     rsp, 60h
 * 00000001C0047640: mov     rbx, rcx
 * 00000001C0047643: mov     esi, 40h ; '@'
 * 00000001C0047648: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004764F: lea     edi, [rsi-3Ch]
 * 00000001C0047652: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047659: jz      short loc_1C00476A9
 * 00000001C004765B: cmp     byte ptr [rcx+29h], 2
 * 00000001C004765F: jb      short loc_1C00476A9
 * 00000001C0047661: and     qword ptr [r11-18h], 0
 * 00000001C0047666: lea     rdx, [r11+40h]
 * 00000001C004766A: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047671: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047678: mov     rcx, [rcx+18h]
 * 00000001C004767C: mov     [r11-20h], rdi
 * 00000001C0047680: mov     [r11-28h], rdx
 * 00000001C0047684: lea     rdx, [r11+38h]
 * 00000001C0047688: mov     [r11-30h], rdi
 * 00000001C004768C: mov     [r11-38h], rdx
 * 00000001C0047690: lea     rdx, [r11+30h]
 * 00000001C0047694: mov     [r11-40h], rdi
 * 00000001C0047698: mov     [r11-48h], rdx
 * 00000001C004769C: lea     edx, [rsi-15h]
 * 00000001C004769F: movzx   r9d, si
 * 00000001C00476A3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00476A9: and     [rsp+68h+var_10], 0
 * 00000001C00476AF: lea     rax, [rsp+68h+arg_38]
 * 00000001C00476B7: mov     [rsp+68h+var_18], rdi
 * 00000001C00476BC: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00476C3: mov     [rsp+68h+var_20], rax
 * 00000001C00476C8: mov     edx, 2
 * 00000001C00476CD: mov     [rsp+68h+var_28], rdi
 * 00000001C00476D2: lea     rax, [rsp+68h+arg_30]
 * 00000001C00476DA: mov     [rsp+68h+var_30], rax
 * 00000001C00476DF: mov     rcx, rbx
 * 00000001C00476E2: lea     rax, [rsp+68h+arg_28]
 * 00000001C00476EA: mov     [rsp+68h+var_38], rdi
 * 00000001C00476EF: mov     [rsp+68h+var_40], rax
 * 00000001C00476F4: lea     r8d, [rdx+0Ah]
 * 00000001C00476F8: mov     [rsp+68h+var_48], si
 * 00000001C00476FD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047704: nop     dword ptr [rax+rax+00h]
 * 00000001C0047709: mov     rbx, [rsp+68h+arg_0]
 * 00000001C004770E: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0047713: add     rsp, 60h
 * 00000001C0047717: pop     rdi
 * 00000001C0047718: retn
 */
