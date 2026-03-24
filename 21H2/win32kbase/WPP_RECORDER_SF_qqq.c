/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C0066C84
 * Callers:
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C005620C (rimHandlePnpWaitersOnOwnedDevices.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0066820 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 *     UserDeleteBaseWindowHandle @ 0x1C01390C0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C0066C84
 * Reason: Hex-Rays returned no pseudocode for 0x1C0066C84
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0066C84: mov     [rsp+arg_0], rbx
 * 00000001C0066C89: mov     [rsp+arg_8], rbp
 * 00000001C0066C8E: mov     [rsp+arg_10], rsi
 * 00000001C0066C93: push    rdi
 * 00000001C0066C94: push    r14
 * 00000001C0066C96: push    r15
 * 00000001C0066C98: sub     rsp, 60h
 * 00000001C0066C9C: mov     r14d, r8d
 * 00000001C0066C9F: mov     r15, rcx
 * 00000001C0066CA2: mov     edi, r8d
 * 00000001C0066CA5: shr     rdi, 10h
 * 00000001C0066CA9: movzx   esi, dl
 * 00000001C0066CAC: lea     ebx, [r14-1]
 * 00000001C0066CB0: movzx   ebp, r9w
 * 00000001C0066CB4: mov     r10d, ebx
 * 00000001C0066CB7: and     ebx, 1Fh
 * 00000001C0066CBA: shr     r10, 5
 * 00000001C0066CBE: lea     rax, [rdi+rdi*4]
 * 00000001C0066CC2: and     r10d, 7FFh
 * 00000001C0066CC9: mov     edx, ebx
 * 00000001C0066CCB: mov     ebx, 8
 * 00000001C0066CD0: lea     r11, [r10+rax*4]
 * 00000001C0066CD4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0066CDB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0066CE0: bt      eax, edx
 * 00000001C0066CE3: jb      loc_1C00F37C8
 * 00000001C0066CE9: and     [rsp+78h+var_20], 0
 * 00000001C0066CEF: lea     rax, [rsp+78h+arg_38]
 * 00000001C0066CF7: mov     r9, [rsp+78h+arg_20]
 * 00000001C0066CFF: mov     r8d, r14d
 * 00000001C0066D02: mov     [rsp+78h+var_28], rbx
 * 00000001C0066D07: mov     edx, esi
 * 00000001C0066D09: mov     [rsp+78h+var_30], rax
 * 00000001C0066D0E: mov     rcx, r15
 * 00000001C0066D11: mov     [rsp+78h+var_38], rbx
 * 00000001C0066D16: lea     rax, [rsp+78h+arg_30]
 * 00000001C0066D1E: mov     [rsp+78h+var_40], rax
 * 00000001C0066D23: lea     rax, [rsp+78h+arg_28]
 * 00000001C0066D2B: mov     [rsp+78h+var_48], rbx
 * 00000001C0066D30: mov     [rsp+78h+var_50], rax
 * 00000001C0066D35: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0066D3A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0066D41: nop     dword ptr [rax+rax+00h]
 * 00000001C0066D46: lea     r11, [rsp+78h+var_18]
 * 00000001C0066D4B: mov     rbx, [r11+20h]
 * 00000001C0066D4F: mov     rbp, [r11+28h]
 * 00000001C0066D53: mov     rsi, [r11+30h]
 * 00000001C0066D57: mov     rsp, r11
 * 00000001C0066D5A: pop     r15
 * 00000001C0066D5C: pop     r14
 * 00000001C0066D5E: pop     rdi
 * 00000001C0066D5F: retn
 * 00000001C00F37C8: lea     rcx, [rdi+rdi*4]
 * 00000001C00F37CC: add     rcx, rcx
 * 00000001C00F37CF: cmp     [r10+rcx*8+29h], sil
 * 00000001C00F37D4: jb      loc_1C0066CE9
 * 00000001C00F37DA: and     [rsp+78h+var_28], 0
 * 00000001C00F37E0: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00F37E8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00F37EF: mov     r9d, ebp
 * 00000001C00F37F2: mov     r8, [rsp+78h+arg_20]
 * 00000001C00F37FA: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00F37FF: mov     [rsp+78h+var_30], rbx
 * 00000001C00F3804: mov     [rsp+78h+var_38], rdx
 * 00000001C00F3809: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00F3811: mov     [rsp+78h+var_40], rbx
 * 00000001C00F3816: mov     [rsp+78h+var_48], rdx
 * 00000001C00F381B: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00F3823: mov     [rsp+78h+var_50], rbx
 * 00000001C00F3828: mov     [rsp+78h+var_58], rdx
 * 00000001C00F382D: mov     edx, 2Bh ; '+'
 * 00000001C00F3832: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00F3838: nop
 * 00000001C00F3839: jmp     loc_1C0066CE9
 */
