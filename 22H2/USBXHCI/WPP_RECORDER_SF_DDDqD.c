/*
 * XREFs of WPP_RECORDER_SF_DDDqd @ 0x1C0045208
 * Callers:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000C124 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_CompleteTransfers @ 0x1C000C2F0 (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqd @ 0x1C0045208
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045208
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045208: mov     r11, rsp
 * 00000001C004520B: mov     [r11+8], rbx
 * 00000001C004520F: mov     [r11+10h], rbp
 * 00000001C0045213: mov     [r11+18h], rsi
 * 00000001C0045217: push    rdi
 * 00000001C0045218: sub     rsp, 80h
 * 00000001C004521F: mov     rsi, rcx
 * 00000001C0045222: movzx   edi, r9w
 * 00000001C0045226: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004522D: mov     ebp, 4
 * 00000001C0045232: movzx   ebx, dl
 * 00000001C0045235: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004523C: jz      short loc_1C00452A6
 * 00000001C004523E: cmp     [rcx+29h], bl
 * 00000001C0045241: jb      short loc_1C00452A6
 * 00000001C0045243: and     qword ptr [r11-18h], 0
 * 00000001C0045248: lea     rdx, [r11+50h]
 * 00000001C004524C: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0045253: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004525A: mov     rcx, [rcx+18h]
 * 00000001C004525E: mov     r9d, edi
 * 00000001C0045261: mov     [r11-20h], rbp
 * 00000001C0045265: mov     [r11-28h], rdx
 * 00000001C0045269: lea     rdx, [r11+48h]
 * 00000001C004526D: mov     qword ptr [r11-30h], 8
 * 00000001C0045275: mov     [r11-38h], rdx
 * 00000001C0045279: lea     rdx, [r11+40h]
 * 00000001C004527D: mov     [r11-40h], rbp
 * 00000001C0045281: mov     [r11-48h], rdx
 * 00000001C0045285: lea     rdx, [r11+38h]
 * 00000001C0045289: mov     [r11-50h], rbp
 * 00000001C004528D: mov     [r11-58h], rdx
 * 00000001C0045291: lea     rdx, [r11+30h]
 * 00000001C0045295: mov     [r11-60h], rbp
 * 00000001C0045299: mov     [r11-68h], rdx
 * 00000001C004529D: lea     edx, [rbp+27h]
 * 00000001C00452A0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00452A6: and     [rsp+88h+var_10], 0
 * 00000001C00452AC: lea     rax, [rsp+88h+arg_48]
 * 00000001C00452B4: mov     [rsp+88h+var_18], rbp
 * 00000001C00452B9: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00452C0: mov     [rsp+88h+var_20], rax
 * 00000001C00452C5: mov     r8d, 0Eh
 * 00000001C00452CB: mov     [rsp+88h+var_28], 8
 * 00000001C00452D4: lea     rax, [rsp+88h+arg_40]
 * 00000001C00452DC: mov     [rsp+88h+var_30], rax
 * 00000001C00452E1: mov     edx, ebx
 * 00000001C00452E3: mov     [rsp+88h+var_38], rbp
 * 00000001C00452E8: lea     rax, [rsp+88h+arg_38]
 * 00000001C00452F0: mov     [rsp+88h+var_40], rax
 * 00000001C00452F5: mov     rcx, rsi
 * 00000001C00452F8: mov     [rsp+88h+var_48], rbp
 * 00000001C00452FD: lea     rax, [rsp+88h+arg_30]
 * 00000001C0045305: mov     [rsp+88h+var_50], rax
 * 00000001C004530A: lea     rax, [rsp+88h+arg_28]
 * 00000001C0045312: mov     [rsp+88h+var_58], rbp
 * 00000001C0045317: mov     [rsp+88h+var_60], rax
 * 00000001C004531C: mov     [rsp+88h+var_68], di
 * 00000001C0045321: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045328: nop     dword ptr [rax+rax+00h]
 * 00000001C004532D: lea     r11, [rsp+88h+var_8]
 * 00000001C0045335: mov     rbx, [r11+10h]
 * 00000001C0045339: mov     rbp, [r11+18h]
 * 00000001C004533D: mov     rsi, [r11+20h]
 * 00000001C0045341: mov     rsp, r11
 * 00000001C0045344: pop     rdi
 * 00000001C0045345: retn
 */
