/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C0019504
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0034050 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034690 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C0045B0C (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006F110 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqd @ 0x1C0019504
 * Reason: Hex-Rays returned no pseudocode for 0x1C0019504
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0019504: mov     [rsp+arg_0], rbx
 * 00000001C0019509: mov     [rsp+arg_8], rbp
 * 00000001C001950E: mov     [rsp+arg_10], rsi
 * 00000001C0019513: push    rdi
 * 00000001C0019514: push    r14
 * 00000001C0019516: push    r15
 * 00000001C0019518: sub     rsp, 60h
 * 00000001C001951C: mov     r14d, r8d
 * 00000001C001951F: mov     r15, rcx
 * 00000001C0019522: mov     edi, r8d
 * 00000001C0019525: shr     rdi, 10h
 * 00000001C0019529: movzx   esi, dl
 * 00000001C001952C: lea     ebx, [r14-1]
 * 00000001C0019530: movzx   ebp, r9w
 * 00000001C0019534: mov     r10d, ebx
 * 00000001C0019537: and     ebx, 1Fh
 * 00000001C001953A: shr     r10, 5
 * 00000001C001953E: lea     rax, [rdi+rdi*4]
 * 00000001C0019542: and     r10d, 7FFh
 * 00000001C0019549: mov     edx, ebx
 * 00000001C001954B: mov     ebx, 4
 * 00000001C0019550: lea     r11, [r10+rax*4]
 * 00000001C0019554: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001955B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0019560: bt      eax, edx
 * 00000001C0019563: jb      loc_1C002D5C2
 * 00000001C0019569: and     [rsp+78h+var_20], 0
 * 00000001C001956F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0019577: mov     r9, [rsp+78h+arg_20]
 * 00000001C001957F: mov     r8d, r14d
 * 00000001C0019582: mov     [rsp+78h+var_28], rbx
 * 00000001C0019587: mov     edx, esi
 * 00000001C0019589: mov     [rsp+78h+var_30], rax
 * 00000001C001958E: mov     rcx, r15
 * 00000001C0019591: mov     [rsp+78h+var_38], 8
 * 00000001C001959A: lea     rax, [rsp+78h+arg_30]
 * 00000001C00195A2: mov     [rsp+78h+var_40], rax
 * 00000001C00195A7: lea     rax, [rsp+78h+arg_28]
 * 00000001C00195AF: mov     [rsp+78h+var_48], rbx
 * 00000001C00195B4: mov     [rsp+78h+var_50], rax
 * 00000001C00195B9: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00195BE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00195C5: nop     dword ptr [rax+rax+00h]
 * 00000001C00195CA: lea     r11, [rsp+78h+var_18]
 * 00000001C00195CF: mov     rbx, [r11+20h]
 * 00000001C00195D3: mov     rbp, [r11+28h]
 * 00000001C00195D7: mov     rsi, [r11+30h]
 * 00000001C00195DB: mov     rsp, r11
 * 00000001C00195DE: pop     r15
 * 00000001C00195E0: pop     r14
 * 00000001C00195E2: pop     rdi
 * 00000001C00195E3: retn
 * 00000001C002D5C2: lea     rcx, [rdi+rdi*4]
 * 00000001C002D5C6: add     rcx, rcx
 * 00000001C002D5C9: cmp     [r10+rcx*8+29h], sil
 * 00000001C002D5CE: jb      loc_1C0019569
 * 00000001C002D5D4: and     [rsp+78h+var_28], 0
 * 00000001C002D5DA: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002D5E2: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002D5E9: mov     r9d, ebp
 * 00000001C002D5EC: mov     r8, [rsp+78h+arg_20]
 * 00000001C002D5F4: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002D5F9: mov     [rsp+78h+var_30], rbx
 * 00000001C002D5FE: mov     [rsp+78h+var_38], rdx
 * 00000001C002D603: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002D60B: mov     [rsp+78h+var_40], 8
 * 00000001C002D614: mov     [rsp+78h+var_48], rdx
 * 00000001C002D619: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002D621: mov     [rsp+78h+var_50], rbx
 * 00000001C002D626: mov     [rsp+78h+var_58], rdx
 * 00000001C002D62B: mov     edx, 2Bh ; '+'
 * 00000001C002D630: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D636: nop
 * 00000001C002D637: jmp     loc_1C0019569
 */
