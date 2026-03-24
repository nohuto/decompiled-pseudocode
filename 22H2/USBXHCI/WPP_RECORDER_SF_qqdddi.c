/*
 * XREFs of WPP_RECORDER_SF_qqdddi @ 0x1C000F8B4
 * Callers:
 *     Interrupter_D0ExitStopped @ 0x1C000B76C (Interrupter_D0ExitStopped.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C00143C4 (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqdddi @ 0x1C000F8B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F8B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F8B4: mov     rax, rsp
 * 00000001C000F8B7: mov     [rax+8], rbx
 * 00000001C000F8BB: mov     [rax+10h], rsi
 * 00000001C000F8BF: mov     [rax+18h], rdi
 * 00000001C000F8C3: mov     [rax+20h], r14
 * 00000001C000F8C7: push    rbp
 * 00000001C000F8C8: lea     rbp, [rax-27h]
 * 00000001C000F8CC: sub     rsp, 90h
 * 00000001C000F8D3: mov     rdi, rcx
 * 00000001C000F8D6: movzx   ebx, r9w
 * 00000001C000F8DA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000F8E1: mov     esi, 4
 * 00000001C000F8E6: test    dword ptr [rcx+2Ch], 100h
 * 00000001C000F8ED: lea     r14d, [rsi+4]
 * 00000001C000F8F1: jnz     loc_1C0021C82
 * 00000001C000F8F7: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C000F900: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C000F904: mov     [rsp+90h+var_10], r14
 * 00000001C000F90C: lea     r9, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C000F913: mov     [rsp+90h+var_18], rax
 * 00000001C000F918: mov     r8d, 9
 * 00000001C000F91E: mov     [rsp+90h+var_20], rsi
 * 00000001C000F923: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C000F927: mov     [rsp+90h+var_28], rax
 * 00000001C000F92C: mov     edx, esi
 * 00000001C000F92E: mov     [rsp+90h+var_30], rsi
 * 00000001C000F933: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C000F937: mov     [rsp+90h+var_38], rax
 * 00000001C000F93C: mov     rcx, rdi
 * 00000001C000F93F: mov     [rsp+90h+var_40], rsi
 * 00000001C000F944: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C000F948: mov     [rsp+90h+var_48], rax
 * 00000001C000F94D: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C000F951: mov     [rsp+90h+var_50], r14
 * 00000001C000F956: mov     [rsp+90h+var_58], rax
 * 00000001C000F95B: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C000F95F: mov     [rsp+90h+var_60], r14
 * 00000001C000F964: mov     [rsp+90h+var_68], rax
 * 00000001C000F969: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C000F96E: call    cs:__imp_WppAutoLogTrace
 * 00000001C000F975: nop     dword ptr [rax+rax+00h]
 * 00000001C000F97A: lea     r11, [rsp+90h+var_s0]
 * 00000001C000F982: mov     rbx, [r11+10h]
 * 00000001C000F986: mov     rsi, [r11+18h]
 * 00000001C000F98A: mov     rdi, [r11+20h]
 * 00000001C000F98E: mov     r14, [r11+28h]
 * 00000001C000F992: mov     rsp, r11
 * 00000001C000F995: pop     rbp
 * 00000001C000F996: retn
 * 00000001C0021C82: cmp     [rcx+29h], sil
 * 00000001C0021C86: jb      loc_1C000F8F7
 * 00000001C0021C8C: and     [rsp+90h+var_10], 0
 * 00000001C0021C95: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0021C99: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0021CA0: lea     r8, WPP_260d7188460d377ee27ff5eb6158db37_Traceguids
 * 00000001C0021CA7: mov     rcx, [rcx+18h]
 * 00000001C0021CAB: mov     r9d, ebx
 * 00000001C0021CAE: mov     [rsp+90h+var_18], r14
 * 00000001C0021CB3: mov     [rsp+90h+var_20], rdx
 * 00000001C0021CB8: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0021CBC: mov     [rsp+90h+var_28], rsi
 * 00000001C0021CC1: mov     [rsp+90h+var_30], rdx
 * 00000001C0021CC6: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0021CCA: mov     [rsp+90h+var_38], rsi
 * 00000001C0021CCF: mov     [rsp+90h+var_40], rdx
 * 00000001C0021CD4: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0021CD8: mov     [rsp+90h+var_48], rsi
 * 00000001C0021CDD: mov     [rsp+90h+var_50], rdx
 * 00000001C0021CE2: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0021CE6: mov     [rsp+90h+var_58], r14
 * 00000001C0021CEB: mov     [rsp+90h+var_60], rdx
 * 00000001C0021CF0: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0021CF4: mov     [rsp+90h+var_68], r14
 * 00000001C0021CF9: mov     [rsp+90h+var_70], rdx
 * 00000001C0021CFE: mov     edx, 2Bh ; '+'
 * 00000001C0021D03: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0021D09: nop
 * 00000001C0021D0A: jmp     loc_1C000F8F7
 */
