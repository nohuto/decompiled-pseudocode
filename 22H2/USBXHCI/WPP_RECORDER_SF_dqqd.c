/*
 * XREFs of WPP_RECORDER_SF_dqqd @ 0x1C0007A5C
 * Callers:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C000793C (UsbDevice_CompleteConfigureEndpointRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqd @ 0x1C0007A5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007A5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007A5C: mov     [rsp+arg_0], rbx
 * 00000001C0007A61: mov     [rsp+arg_8], rbp
 * 00000001C0007A66: mov     [rsp+arg_10], rsi
 * 00000001C0007A6B: push    rdi
 * 00000001C0007A6C: sub     rsp, 70h
 * 00000001C0007A70: mov     edi, 4
 * 00000001C0007A75: mov     rbx, rcx
 * 00000001C0007A78: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0007A7F: lea     ebp, [rdi+1Ch]
 * 00000001C0007A82: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0007A89: lea     esi, [rdi+4]
 * 00000001C0007A8C: jnz     loc_1C00244E4
 * 00000001C0007A92: and     [rsp+78h+var_10], 0
 * 00000001C0007A98: lea     rax, [rsp+78h+arg_40]
 * 00000001C0007AA0: mov     [rsp+78h+var_18], rdi
 * 00000001C0007AA5: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0007AAC: mov     [rsp+78h+var_20], rax
 * 00000001C0007AB1: mov     r8d, 0Ch
 * 00000001C0007AB7: mov     [rsp+78h+var_28], rsi
 * 00000001C0007ABC: lea     rax, [rsp+78h+arg_38]
 * 00000001C0007AC4: mov     [rsp+78h+var_30], rax
 * 00000001C0007AC9: mov     edx, edi
 * 00000001C0007ACB: mov     [rsp+78h+var_38], rsi
 * 00000001C0007AD0: lea     rax, [rsp+78h+arg_30]
 * 00000001C0007AD8: mov     [rsp+78h+var_40], rax
 * 00000001C0007ADD: mov     rcx, rbx
 * 00000001C0007AE0: lea     rax, [rsp+78h+arg_28]
 * 00000001C0007AE8: mov     [rsp+78h+var_48], rdi
 * 00000001C0007AED: mov     [rsp+78h+var_50], rax
 * 00000001C0007AF2: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0007AF7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007AFE: nop     dword ptr [rax+rax+00h]
 * 00000001C0007B03: lea     r11, [rsp+78h+var_8]
 * 00000001C0007B08: mov     rbx, [r11+10h]
 * 00000001C0007B0C: mov     rbp, [r11+18h]
 * 00000001C0007B10: mov     rsi, [r11+20h]
 * 00000001C0007B14: mov     rsp, r11
 * 00000001C0007B17: pop     rdi
 * 00000001C0007B18: retn
 * 00000001C00244E4: cmp     [rcx+29h], dil
 * 00000001C00244E8: jb      loc_1C0007A92
 * 00000001C00244EE: and     [rsp+78h+var_18], 0
 * 00000001C00244F4: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00244FC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0024503: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C002450A: mov     rcx, [rcx+18h]
 * 00000001C002450E: mov     [rsp+78h+var_20], rdi
 * 00000001C0024513: mov     [rsp+78h+var_28], rdx
 * 00000001C0024518: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0024520: mov     [rsp+78h+var_30], rsi
 * 00000001C0024525: mov     [rsp+78h+var_38], rdx
 * 00000001C002452A: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0024532: mov     [rsp+78h+var_40], rsi
 * 00000001C0024537: mov     [rsp+78h+var_48], rdx
 * 00000001C002453C: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0024544: mov     [rsp+78h+var_50], rdi
 * 00000001C0024549: mov     [rsp+78h+var_58], rdx
 * 00000001C002454E: mov     edx, 2Bh ; '+'
 * 00000001C0024553: movzx   r9d, bp
 * 00000001C0024557: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002455D: nop
 * 00000001C002455E: jmp     loc_1C0007A92
 */
