/*
 * XREFs of WPP_RECORDER_SF_dqL @ 0x1C0009510
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010610 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045DE4 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqL @ 0x1C0009510
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009510
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009510: mov     [rsp+arg_0], rbx
 * 00000001C0009515: mov     [rsp+arg_8], rbp
 * 00000001C000951A: mov     [rsp+arg_10], rsi
 * 00000001C000951F: push    rdi
 * 00000001C0009520: sub     rsp, 60h
 * 00000001C0009524: mov     rsi, rcx
 * 00000001C0009527: movzx   edi, r9w
 * 00000001C000952B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0009532: mov     ebp, 4
 * 00000001C0009537: movzx   ebx, dl
 * 00000001C000953A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0009541: jnz     loc_1C0024F8C
 * 00000001C0009547: and     [rsp+68h+var_10], 0
 * 00000001C000954D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0009555: mov     [rsp+68h+var_18], rbp
 * 00000001C000955A: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0009561: mov     [rsp+68h+var_20], rax
 * 00000001C0009566: mov     r8d, 0Ch
 * 00000001C000956C: mov     [rsp+68h+var_28], 8
 * 00000001C0009575: lea     rax, [rsp+68h+arg_30]
 * 00000001C000957D: mov     [rsp+68h+var_30], rax
 * 00000001C0009582: mov     edx, ebx
 * 00000001C0009584: lea     rax, [rsp+68h+arg_28]
 * 00000001C000958C: mov     [rsp+68h+var_38], rbp
 * 00000001C0009591: mov     [rsp+68h+var_40], rax
 * 00000001C0009596: mov     rcx, rsi
 * 00000001C0009599: mov     word ptr [rsp+68h+var_48], di
 * 00000001C000959E: call    cs:__imp_WppAutoLogTrace
 * 00000001C00095A5: nop     dword ptr [rax+rax+00h]
 * 00000001C00095AA: lea     r11, [rsp+68h+var_8]
 * 00000001C00095AF: mov     rbx, [r11+10h]
 * 00000001C00095B3: mov     rbp, [r11+18h]
 * 00000001C00095B7: mov     rsi, [r11+20h]
 * 00000001C00095BB: mov     rsp, r11
 * 00000001C00095BE: pop     rdi
 * 00000001C00095BF: retn
 * 00000001C0024F8C: cmp     [rcx+29h], bl
 * 00000001C0024F8F: jb      loc_1C0009547
 * 00000001C0024F95: and     [rsp+68h+var_18], 0
 * 00000001C0024F9B: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0024FA3: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0024FAA: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0024FB1: mov     rcx, [rcx+18h]
 * 00000001C0024FB5: mov     r9d, edi
 * 00000001C0024FB8: mov     [rsp+68h+var_20], rbp
 * 00000001C0024FBD: mov     [rsp+68h+var_28], rdx
 * 00000001C0024FC2: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0024FCA: mov     [rsp+68h+var_30], 8
 * 00000001C0024FD3: mov     [rsp+68h+var_38], rdx
 * 00000001C0024FD8: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0024FE0: mov     [rsp+68h+var_40], rbp
 * 00000001C0024FE5: mov     [rsp+68h+var_48], rdx
 * 00000001C0024FEA: mov     edx, 2Bh ; '+'
 * 00000001C0024FEF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024FF5: nop
 * 00000001C0024FF6: jmp     loc_1C0009547
 */
