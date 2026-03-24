/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C017D474
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C017F4DC (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C017D474
 * Reason: Hex-Rays returned no pseudocode for 0x1C017D474
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017D474: mov     r11, rsp
 * 00000001C017D477: mov     [r11+8], rbx
 * 00000001C017D47B: push    rbp
 * 00000001C017D47C: sub     rsp, 50h
 * 00000001C017D480: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017D487: mov     ebp, 29h ; ')'
 * 00000001C017D48C: mov     rbx, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C017D493: test    dword ptr [rcx+2Ch], 400000h
 * 00000001C017D49A: jz      short loc_1C017D4E6
 * 00000001C017D49C: cmp     byte ptr [rcx+29h], 4
 * 00000001C017D4A0: jb      short loc_1C017D4E6
 * 00000001C017D4A2: and     qword ptr [r11-18h], 0
 * 00000001C017D4A7: lea     rdx, [r11+38h]
 * 00000001C017D4AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017D4B2: lea     r8, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017D4B9: mov     rcx, [rcx+18h]
 * 00000001C017D4BD: mov     qword ptr [r11-20h], 4
 * 00000001C017D4C5: mov     [r11-28h], rdx
 * 00000001C017D4C9: lea     rdx, [r11+30h]
 * 00000001C017D4CD: mov     qword ptr [r11-30h], 8
 * 00000001C017D4D5: mov     [r11-38h], rdx
 * 00000001C017D4D9: lea     edx, [rbp+2]
 * 00000001C017D4DC: movzx   r9d, bp
 * 00000001C017D4E0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017D4E6: and     [rsp+58h+var_10], 0
 * 00000001C017D4EC: lea     rax, [rsp+58h+arg_30]
 * 00000001C017D4F4: mov     [rsp+58h+var_18], 4
 * 00000001C017D4FD: lea     r9, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017D504: mov     [rsp+58h+var_20], rax
 * 00000001C017D509: mov     edx, 4
 * 00000001C017D50E: lea     rax, [rsp+58h+arg_28]
 * 00000001C017D516: mov     [rsp+58h+var_28], 8
 * 00000001C017D51F: mov     [rsp+58h+var_30], rax
 * 00000001C017D524: mov     rcx, rbx
 * 00000001C017D527: mov     [rsp+58h+var_38], bp
 * 00000001C017D52C: lea     r8d, [rdx+13h]
 * 00000001C017D530: call    cs:__imp_WppAutoLogTrace
 * 00000001C017D537: nop     dword ptr [rax+rax+00h]
 * 00000001C017D53C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017D541: add     rsp, 50h
 * 00000001C017D545: pop     rbp
 * 00000001C017D546: retn
 */
