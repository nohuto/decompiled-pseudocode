/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C000A13C
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0009CF0 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01B1920 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C000A13C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A13C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A13C: mov     [rsp+arg_0], rbx
 * 00000001C000A141: push    rdi
 * 00000001C000A142: sub     rsp, 50h
 * 00000001C000A146: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000A14D: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C000A154: movzx   ebx, r9w
 * 00000001C000A158: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C000A15F: jnz     loc_1C00D7656
 * 00000001C000A165: and     [rsp+58h+var_10], 0
 * 00000001C000A16B: lea     rax, [rsp+58h+arg_30]
 * 00000001C000A173: mov     [rsp+58h+var_18], 4
 * 00000001C000A17C: lea     r9, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C000A183: mov     [rsp+58h+var_20], rax
 * 00000001C000A188: mov     edx, 4
 * 00000001C000A18D: lea     rax, [rsp+58h+arg_28]
 * 00000001C000A195: mov     [rsp+58h+var_28], 2
 * 00000001C000A19E: mov     [rsp+58h+var_30], rax
 * 00000001C000A1A3: mov     rcx, rdi
 * 00000001C000A1A6: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C000A1AB: lea     r8d, [rdx+0Ch]
 * 00000001C000A1AF: call    cs:__imp_WppAutoLogTrace
 * 00000001C000A1B6: nop     dword ptr [rax+rax+00h]
 * 00000001C000A1BB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000A1C0: add     rsp, 50h
 * 00000001C000A1C4: pop     rdi
 * 00000001C000A1C5: retn
 * 00000001C00D7656: cmp     byte ptr [rcx+29h], 4
 * 00000001C00D765A: jb      loc_1C000A165
 * 00000001C00D7660: and     [rsp+58h+var_18], 0
 * 00000001C00D7666: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00D766E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D7675: lea     r8, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C00D767C: mov     rcx, [rcx+18h]
 * 00000001C00D7680: mov     r9d, ebx
 * 00000001C00D7683: mov     [rsp+58h+var_20], 4
 * 00000001C00D768C: mov     [rsp+58h+var_28], rdx
 * 00000001C00D7691: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00D7699: mov     [rsp+58h+var_30], 2
 * 00000001C00D76A2: mov     [rsp+58h+var_38], rdx
 * 00000001C00D76A7: mov     edx, 2Bh ; '+'
 * 00000001C00D76AC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D76B2: nop
 * 00000001C00D76B3: jmp     loc_1C000A165
 */
