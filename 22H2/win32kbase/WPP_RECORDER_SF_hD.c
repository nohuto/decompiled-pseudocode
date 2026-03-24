/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C000B5BC
 * Callers:
 *     xxxInternalToUnicode @ 0x1C000B170 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01B1850 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C000B5BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000B5BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000B5BC: mov     [rsp+arg_0], rbx
 * 00000001C000B5C1: push    rdi
 * 00000001C000B5C2: sub     rsp, 50h
 * 00000001C000B5C6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000B5CD: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C000B5D4: movzx   ebx, r9w
 * 00000001C000B5D8: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C000B5DF: jnz     loc_1C00D7FC6
 * 00000001C000B5E5: and     [rsp+58h+var_10], 0
 * 00000001C000B5EB: lea     rax, [rsp+58h+arg_30]
 * 00000001C000B5F3: mov     [rsp+58h+var_18], 4
 * 00000001C000B5FC: lea     r9, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C000B603: mov     [rsp+58h+var_20], rax
 * 00000001C000B608: mov     edx, 4
 * 00000001C000B60D: lea     rax, [rsp+58h+arg_28]
 * 00000001C000B615: mov     [rsp+58h+var_28], 2
 * 00000001C000B61E: mov     [rsp+58h+var_30], rax
 * 00000001C000B623: mov     rcx, rdi
 * 00000001C000B626: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C000B62B: lea     r8d, [rdx+0Ch]
 * 00000001C000B62F: call    cs:__imp_WppAutoLogTrace
 * 00000001C000B636: nop     dword ptr [rax+rax+00h]
 * 00000001C000B63B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000B640: add     rsp, 50h
 * 00000001C000B644: pop     rdi
 * 00000001C000B645: retn
 * 00000001C00D7FC6: cmp     byte ptr [rcx+29h], 4
 * 00000001C00D7FCA: jb      loc_1C000B5E5
 * 00000001C00D7FD0: and     [rsp+58h+var_18], 0
 * 00000001C00D7FD6: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00D7FDE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D7FE5: lea     r8, WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids
 * 00000001C00D7FEC: mov     rcx, [rcx+18h]
 * 00000001C00D7FF0: mov     r9d, ebx
 * 00000001C00D7FF3: mov     [rsp+58h+var_20], 4
 * 00000001C00D7FFC: mov     [rsp+58h+var_28], rdx
 * 00000001C00D8001: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00D8009: mov     [rsp+58h+var_30], 2
 * 00000001C00D8012: mov     [rsp+58h+var_38], rdx
 * 00000001C00D8017: mov     edx, 2Bh ; '+'
 * 00000001C00D801C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D8022: nop
 * 00000001C00D8023: jmp     loc_1C000B5E5
 */
