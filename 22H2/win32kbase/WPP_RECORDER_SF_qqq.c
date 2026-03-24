/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C0006624
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00061C0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C005720C (rimHandlePnpWaitersOnOwnedDevices.c)
 *     zzzDestroyQueue @ 0x1C011D730 (zzzDestroyQueue.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0139390 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C0006624
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006624
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006624: mov     [rsp+arg_0], rbx
 * 00000001C0006629: mov     [rsp+arg_8], rbp
 * 00000001C000662E: mov     [rsp+arg_10], rsi
 * 00000001C0006633: push    rdi
 * 00000001C0006634: push    r14
 * 00000001C0006636: push    r15
 * 00000001C0006638: sub     rsp, 60h
 * 00000001C000663C: mov     r14d, r8d
 * 00000001C000663F: mov     r15, rcx
 * 00000001C0006642: mov     edi, r8d
 * 00000001C0006645: shr     rdi, 10h
 * 00000001C0006649: movzx   esi, dl
 * 00000001C000664C: lea     ebx, [r14-1]
 * 00000001C0006650: movzx   ebp, r9w
 * 00000001C0006654: mov     r10d, ebx
 * 00000001C0006657: and     ebx, 1Fh
 * 00000001C000665A: shr     r10, 5
 * 00000001C000665E: lea     rax, [rdi+rdi*4]
 * 00000001C0006662: and     r10d, 7FFh
 * 00000001C0006669: mov     edx, ebx
 * 00000001C000666B: mov     ebx, 8
 * 00000001C0006670: lea     r11, [r10+rax*4]
 * 00000001C0006674: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000667B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0006680: bt      eax, edx
 * 00000001C0006683: jb      loc_1C00D5CE2
 * 00000001C0006689: and     [rsp+78h+var_20], 0
 * 00000001C000668F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0006697: mov     r9, [rsp+78h+arg_20]
 * 00000001C000669F: mov     r8d, r14d
 * 00000001C00066A2: mov     [rsp+78h+var_28], rbx
 * 00000001C00066A7: mov     edx, esi
 * 00000001C00066A9: mov     [rsp+78h+var_30], rax
 * 00000001C00066AE: mov     rcx, r15
 * 00000001C00066B1: mov     [rsp+78h+var_38], rbx
 * 00000001C00066B6: lea     rax, [rsp+78h+arg_30]
 * 00000001C00066BE: mov     [rsp+78h+var_40], rax
 * 00000001C00066C3: lea     rax, [rsp+78h+arg_28]
 * 00000001C00066CB: mov     [rsp+78h+var_48], rbx
 * 00000001C00066D0: mov     [rsp+78h+var_50], rax
 * 00000001C00066D5: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00066DA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00066E1: nop     dword ptr [rax+rax+00h]
 * 00000001C00066E6: lea     r11, [rsp+78h+var_18]
 * 00000001C00066EB: mov     rbx, [r11+20h]
 * 00000001C00066EF: mov     rbp, [r11+28h]
 * 00000001C00066F3: mov     rsi, [r11+30h]
 * 00000001C00066F7: mov     rsp, r11
 * 00000001C00066FA: pop     r15
 * 00000001C00066FC: pop     r14
 * 00000001C00066FE: pop     rdi
 * 00000001C00066FF: retn
 * 00000001C00D5CE2: lea     rcx, [rdi+rdi*4]
 * 00000001C00D5CE6: add     rcx, rcx
 * 00000001C00D5CE9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00D5CEE: jb      loc_1C0006689
 * 00000001C00D5CF4: and     [rsp+78h+var_28], 0
 * 00000001C00D5CFA: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00D5D02: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D5D09: mov     r9d, ebp
 * 00000001C00D5D0C: mov     r8, [rsp+78h+arg_20]
 * 00000001C00D5D14: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00D5D19: mov     [rsp+78h+var_30], rbx
 * 00000001C00D5D1E: mov     [rsp+78h+var_38], rdx
 * 00000001C00D5D23: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00D5D2B: mov     [rsp+78h+var_40], rbx
 * 00000001C00D5D30: mov     [rsp+78h+var_48], rdx
 * 00000001C00D5D35: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00D5D3D: mov     [rsp+78h+var_50], rbx
 * 00000001C00D5D42: mov     [rsp+78h+var_58], rdx
 * 00000001C00D5D47: mov     edx, 2Bh ; '+'
 * 00000001C00D5D4C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D5D52: nop
 * 00000001C00D5D53: jmp     loc_1C0006689
 */
