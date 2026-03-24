/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C017D544
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C017F5AC (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C017D544
 * Reason: Hex-Rays returned no pseudocode for 0x1C017D544
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017D544: mov     r11, rsp
 * 00000001C017D547: mov     [r11+8], rbx
 * 00000001C017D54B: push    rbp
 * 00000001C017D54C: sub     rsp, 50h
 * 00000001C017D550: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C017D557: mov     ebp, 29h ; ')'
 * 00000001C017D55C: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C017D563: test    dword ptr [rcx+2Ch], 400000h
 * 00000001C017D56A: jz      short loc_1C017D5B6
 * 00000001C017D56C: cmp     byte ptr [rcx+29h], 4
 * 00000001C017D570: jb      short loc_1C017D5B6
 * 00000001C017D572: and     qword ptr [r11-18h], 0
 * 00000001C017D577: lea     rdx, [r11+38h]
 * 00000001C017D57B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017D582: lea     r8, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017D589: mov     rcx, [rcx+18h]
 * 00000001C017D58D: mov     qword ptr [r11-20h], 4
 * 00000001C017D595: mov     [r11-28h], rdx
 * 00000001C017D599: lea     rdx, [r11+30h]
 * 00000001C017D59D: mov     qword ptr [r11-30h], 8
 * 00000001C017D5A5: mov     [r11-38h], rdx
 * 00000001C017D5A9: lea     edx, [rbp+2]
 * 00000001C017D5AC: movzx   r9d, bp
 * 00000001C017D5B0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017D5B6: and     [rsp+58h+var_10], 0
 * 00000001C017D5BC: lea     rax, [rsp+58h+arg_30]
 * 00000001C017D5C4: mov     [rsp+58h+var_18], 4
 * 00000001C017D5CD: lea     r9, WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids
 * 00000001C017D5D4: mov     [rsp+58h+var_20], rax
 * 00000001C017D5D9: mov     edx, 4
 * 00000001C017D5DE: lea     rax, [rsp+58h+arg_28]
 * 00000001C017D5E6: mov     [rsp+58h+var_28], 8
 * 00000001C017D5EF: mov     [rsp+58h+var_30], rax
 * 00000001C017D5F4: mov     rcx, rbx
 * 00000001C017D5F7: mov     [rsp+58h+var_38], bp
 * 00000001C017D5FC: lea     r8d, [rdx+13h]
 * 00000001C017D600: call    cs:__imp_WppAutoLogTrace
 * 00000001C017D607: nop     dword ptr [rax+rax+00h]
 * 00000001C017D60C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017D611: add     rsp, 50h
 * 00000001C017D615: pop     rbp
 * 00000001C017D616: retn
 */
