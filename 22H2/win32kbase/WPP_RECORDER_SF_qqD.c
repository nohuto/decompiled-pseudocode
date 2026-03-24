/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C00AC264
 * Callers:
 *     rimOnPnpRemoveComplete @ 0x1C0052D38 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C0056904 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     rimFakePnpRemoveComplete @ 0x1C00AC19C (rimFakePnpRemoveComplete.c)
 *     NtUserInjectDeviceInput @ 0x1C01309C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130DF0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131EC0 (NtUserInjectPointerInput.c)
 *     UserAddBaseWindowHandle @ 0x1C01390F0 (UserAddBaseWindowHandle.c)
 *     rimOnPnpQueryRemove @ 0x1C016DBA8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C016DD00 (rimOnPnpRemoveCancelled.c)
 *     rimInputApc @ 0x1C01745D0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018188C (RIMApplyPTPConfigRemedy.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BA054 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C00AC264
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AC264
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AC264: mov     [rsp+arg_0], rbx
 * 00000001C00AC269: mov     [rsp+arg_8], rbp
 * 00000001C00AC26E: mov     [rsp+arg_10], rsi
 * 00000001C00AC273: push    rdi
 * 00000001C00AC274: push    r14
 * 00000001C00AC276: push    r15
 * 00000001C00AC278: sub     rsp, 60h
 * 00000001C00AC27C: mov     r14d, r8d
 * 00000001C00AC27F: mov     r15, rcx
 * 00000001C00AC282: mov     edi, r8d
 * 00000001C00AC285: shr     rdi, 10h
 * 00000001C00AC289: movzx   esi, dl
 * 00000001C00AC28C: lea     ebx, [r14-1]
 * 00000001C00AC290: movzx   ebp, r9w
 * 00000001C00AC294: mov     r10d, ebx
 * 00000001C00AC297: and     ebx, 1Fh
 * 00000001C00AC29A: shr     r10, 5
 * 00000001C00AC29E: lea     rax, [rdi+rdi*4]
 * 00000001C00AC2A2: and     r10d, 7FFh
 * 00000001C00AC2A9: mov     edx, ebx
 * 00000001C00AC2AB: mov     ebx, 8
 * 00000001C00AC2B0: lea     r11, [r10+rax*4]
 * 00000001C00AC2B4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00AC2BB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00AC2C0: bt      eax, edx
 * 00000001C00AC2C3: jb      loc_1C010CF56
 * 00000001C00AC2C9: and     [rsp+78h+var_20], 0
 * 00000001C00AC2CF: lea     rax, [rsp+78h+arg_38]
 * 00000001C00AC2D7: mov     r9, [rsp+78h+arg_20]
 * 00000001C00AC2DF: mov     r8d, r14d
 * 00000001C00AC2E2: mov     [rsp+78h+var_28], 4
 * 00000001C00AC2EB: mov     edx, esi
 * 00000001C00AC2ED: mov     [rsp+78h+var_30], rax
 * 00000001C00AC2F2: mov     rcx, r15
 * 00000001C00AC2F5: mov     [rsp+78h+var_38], rbx
 * 00000001C00AC2FA: lea     rax, [rsp+78h+arg_30]
 * 00000001C00AC302: mov     [rsp+78h+var_40], rax
 * 00000001C00AC307: lea     rax, [rsp+78h+arg_28]
 * 00000001C00AC30F: mov     [rsp+78h+var_48], rbx
 * 00000001C00AC314: mov     [rsp+78h+var_50], rax
 * 00000001C00AC319: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00AC31E: call    cs:__imp_WppAutoLogTrace
 * 00000001C00AC325: nop     dword ptr [rax+rax+00h]
 * 00000001C00AC32A: lea     r11, [rsp+78h+var_18]
 * 00000001C00AC32F: mov     rbx, [r11+20h]
 * 00000001C00AC333: mov     rbp, [r11+28h]
 * 00000001C00AC337: mov     rsi, [r11+30h]
 * 00000001C00AC33B: mov     rsp, r11
 * 00000001C00AC33E: pop     r15
 * 00000001C00AC340: pop     r14
 * 00000001C00AC342: pop     rdi
 * 00000001C00AC343: retn
 * 00000001C010CF56: lea     rcx, [rdi+rdi*4]
 * 00000001C010CF5A: add     rcx, rcx
 * 00000001C010CF5D: cmp     [r10+rcx*8+29h], sil
 * 00000001C010CF62: jb      loc_1C00AC2C9
 * 00000001C010CF68: and     [rsp+78h+var_28], 0
 * 00000001C010CF6E: lea     rdx, [rsp+78h+arg_38]
 * 00000001C010CF76: mov     rax, cs:pfnWppTraceMessage
 * 00000001C010CF7D: mov     r9d, ebp
 * 00000001C010CF80: mov     r8, [rsp+78h+arg_20]
 * 00000001C010CF88: mov     rcx, [r10+rcx*8+18h]
 * 00000001C010CF8D: mov     [rsp+78h+var_30], 4
 * 00000001C010CF96: mov     [rsp+78h+var_38], rdx
 * 00000001C010CF9B: lea     rdx, [rsp+78h+arg_30]
 * 00000001C010CFA3: mov     [rsp+78h+var_40], rbx
 * 00000001C010CFA8: mov     [rsp+78h+var_48], rdx
 * 00000001C010CFAD: lea     rdx, [rsp+78h+arg_28]
 * 00000001C010CFB5: mov     [rsp+78h+var_50], rbx
 * 00000001C010CFBA: mov     [rsp+78h+var_58], rdx
 * 00000001C010CFBF: mov     edx, 2Bh ; '+'
 * 00000001C010CFC4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C010CFCA: nop
 * 00000001C010CFCB: jmp     loc_1C00AC2C9
 */
