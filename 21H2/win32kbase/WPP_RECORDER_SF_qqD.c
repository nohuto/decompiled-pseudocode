/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C00ABD64
 * Callers:
 *     rimOnPnpRemoveComplete @ 0x1C0051D38 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006A2E8 (RIMStartDeviceSpecificRead.c)
 *     rimFakePnpRemoveComplete @ 0x1C00ABC9C (rimFakePnpRemoveComplete.c)
 *     NtUserInjectDeviceInput @ 0x1C01306F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130B20 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131BF0 (NtUserInjectPointerInput.c)
 *     UserAddBaseWindowHandle @ 0x1C0138E20 (UserAddBaseWindowHandle.c)
 *     rimOnPnpQueryRemove @ 0x1C016DC78 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C016DDD0 (rimOnPnpRemoveCancelled.c)
 *     rimInputApc @ 0x1C01746A0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018195C (RIMApplyPTPConfigRemedy.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BA124 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C00ABD64
 * Reason: Hex-Rays returned no pseudocode for 0x1C00ABD64
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00ABD64: mov     [rsp+arg_0], rbx
 * 00000001C00ABD69: mov     [rsp+arg_8], rbp
 * 00000001C00ABD6E: mov     [rsp+arg_10], rsi
 * 00000001C00ABD73: push    rdi
 * 00000001C00ABD74: push    r14
 * 00000001C00ABD76: push    r15
 * 00000001C00ABD78: sub     rsp, 60h
 * 00000001C00ABD7C: mov     r14d, r8d
 * 00000001C00ABD7F: mov     r15, rcx
 * 00000001C00ABD82: mov     edi, r8d
 * 00000001C00ABD85: shr     rdi, 10h
 * 00000001C00ABD89: movzx   esi, dl
 * 00000001C00ABD8C: lea     ebx, [r14-1]
 * 00000001C00ABD90: movzx   ebp, r9w
 * 00000001C00ABD94: mov     r10d, ebx
 * 00000001C00ABD97: and     ebx, 1Fh
 * 00000001C00ABD9A: shr     r10, 5
 * 00000001C00ABD9E: lea     rax, [rdi+rdi*4]
 * 00000001C00ABDA2: and     r10d, 7FFh
 * 00000001C00ABDA9: mov     edx, ebx
 * 00000001C00ABDAB: mov     ebx, 8
 * 00000001C00ABDB0: lea     r11, [r10+rax*4]
 * 00000001C00ABDB4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00ABDBB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00ABDC0: bt      eax, edx
 * 00000001C00ABDC3: jb      loc_1C010CD1A
 * 00000001C00ABDC9: and     [rsp+78h+var_20], 0
 * 00000001C00ABDCF: lea     rax, [rsp+78h+arg_38]
 * 00000001C00ABDD7: mov     r9, [rsp+78h+arg_20]
 * 00000001C00ABDDF: mov     r8d, r14d
 * 00000001C00ABDE2: mov     [rsp+78h+var_28], 4
 * 00000001C00ABDEB: mov     edx, esi
 * 00000001C00ABDED: mov     [rsp+78h+var_30], rax
 * 00000001C00ABDF2: mov     rcx, r15
 * 00000001C00ABDF5: mov     [rsp+78h+var_38], rbx
 * 00000001C00ABDFA: lea     rax, [rsp+78h+arg_30]
 * 00000001C00ABE02: mov     [rsp+78h+var_40], rax
 * 00000001C00ABE07: lea     rax, [rsp+78h+arg_28]
 * 00000001C00ABE0F: mov     [rsp+78h+var_48], rbx
 * 00000001C00ABE14: mov     [rsp+78h+var_50], rax
 * 00000001C00ABE19: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00ABE1E: call    cs:__imp_WppAutoLogTrace
 * 00000001C00ABE25: nop     dword ptr [rax+rax+00h]
 * 00000001C00ABE2A: lea     r11, [rsp+78h+var_18]
 * 00000001C00ABE2F: mov     rbx, [r11+20h]
 * 00000001C00ABE33: mov     rbp, [r11+28h]
 * 00000001C00ABE37: mov     rsi, [r11+30h]
 * 00000001C00ABE3B: mov     rsp, r11
 * 00000001C00ABE3E: pop     r15
 * 00000001C00ABE40: pop     r14
 * 00000001C00ABE42: pop     rdi
 * 00000001C00ABE43: retn
 * 00000001C010CD1A: lea     rcx, [rdi+rdi*4]
 * 00000001C010CD1E: add     rcx, rcx
 * 00000001C010CD21: cmp     [r10+rcx*8+29h], sil
 * 00000001C010CD26: jb      loc_1C00ABDC9
 * 00000001C010CD2C: and     [rsp+78h+var_28], 0
 * 00000001C010CD32: lea     rdx, [rsp+78h+arg_38]
 * 00000001C010CD3A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C010CD41: mov     r9d, ebp
 * 00000001C010CD44: mov     r8, [rsp+78h+arg_20]
 * 00000001C010CD4C: mov     rcx, [r10+rcx*8+18h]
 * 00000001C010CD51: mov     [rsp+78h+var_30], 4
 * 00000001C010CD5A: mov     [rsp+78h+var_38], rdx
 * 00000001C010CD5F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C010CD67: mov     [rsp+78h+var_40], rbx
 * 00000001C010CD6C: mov     [rsp+78h+var_48], rdx
 * 00000001C010CD71: lea     rdx, [rsp+78h+arg_28]
 * 00000001C010CD79: mov     [rsp+78h+var_50], rbx
 * 00000001C010CD7E: mov     [rsp+78h+var_58], rdx
 * 00000001C010CD83: mov     edx, 2Bh ; '+'
 * 00000001C010CD88: call    cs:__guard_dispatch_icall_fptr
 * 00000001C010CD8E: nop
 * 00000001C010CD8F: jmp     loc_1C00ABDC9
 */
