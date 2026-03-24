/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C004702C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00B88C4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C004702C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004702C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004702C: mov     rax, rsp
 * 00000001C004702F: mov     [rax+8], rbx
 * 00000001C0047033: mov     [rax+10h], rsi
 * 00000001C0047037: mov     [rax+18h], rdi
 * 00000001C004703B: mov     [rax+20h], r12
 * 00000001C004703F: push    r13
 * 00000001C0047041: sub     rsp, 50h
 * 00000001C0047045: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004704C: lea     r12, aNull; "NULL"
 * 00000001C0047053: mov     rsi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C004705A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004705E: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0047066: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C004706D: lea     r13d, [rbx+14h]
 * 00000001C0047071: jnz     loc_1C00E9ADC
 * 00000001C0047077: test    rdi, rdi
 * 00000001C004707A: jz      loc_1C00E9B5F
 * 00000001C0047080: inc     rbx
 * 00000001C0047083: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0047087: jnz     short loc_1C0047080
 * 00000001C0047089: inc     rbx
 * 00000001C004708C: test    rdi, rdi
 * 00000001C004708F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0047097: mov     edx, 4
 * 00000001C004709C: lea     r9, WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids
 * 00000001C00470A3: cmovz   rdi, r12
 * 00000001C00470A7: mov     rcx, rsi
 * 00000001C00470AA: and     [rsp+58h+var_10], 0
 * 00000001C00470B0: mov     [rsp+58h+var_18], 8
 * 00000001C00470B9: mov     [rsp+58h+var_20], rax
 * 00000001C00470BE: lea     r8d, [rdx+9]
 * 00000001C00470C2: mov     [rsp+58h+var_28], rbx
 * 00000001C00470C7: mov     [rsp+58h+var_30], rdi
 * 00000001C00470CC: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C00470D2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00470D9: nop     dword ptr [rax+rax+00h]
 * 00000001C00470DE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00470E3: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00470E8: mov     rdi, [rsp+58h+arg_10]
 * 00000001C00470ED: mov     r12, [rsp+58h+arg_18]
 * 00000001C00470F2: add     rsp, 50h
 * 00000001C00470F6: pop     r13
 * 00000001C00470F8: retn
 * 00000001C00E9ADC: cmp     byte ptr [rcx+29h], 4
 * 00000001C00E9AE0: jb      loc_1C0047077
 * 00000001C00E9AE6: test    rdi, rdi
 * 00000001C00E9AE9: jz      short loc_1C00E9AFC
 * 00000001C00E9AEB: mov     rdx, rbx
 * 00000001C00E9AEE: inc     rdx
 * 00000001C00E9AF1: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00E9AF5: jnz     short loc_1C00E9AEE
 * 00000001C00E9AF7: inc     rdx
 * 00000001C00E9AFA: jmp     short loc_1C00E9B01
 * 00000001C00E9AFC: mov     edx, 5
 * 00000001C00E9B01: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E9B08: lea     r8, [rsp+58h+arg_30]
 * 00000001C00E9B10: test    rdi, rdi
 * 00000001C00E9B13: movzx   r9d, r13w
 * 00000001C00E9B17: mov     rcx, rdi
 * 00000001C00E9B1A: cmovz   rcx, r12
 * 00000001C00E9B1E: and     [rsp+58h+var_18], 0
 * 00000001C00E9B24: mov     [rsp+58h+var_20], 8
 * 00000001C00E9B2D: mov     [rsp+58h+var_28], r8
 * 00000001C00E9B32: lea     r8, WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids
 * 00000001C00E9B39: mov     [rsp+58h+var_30], rdx
 * 00000001C00E9B3E: mov     edx, 2Bh ; '+'
 * 00000001C00E9B43: mov     [rsp+58h+var_38], rcx
 * 00000001C00E9B48: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00E9B4F: mov     rcx, [rcx+18h]
 * 00000001C00E9B53: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E9B59: nop
 * 00000001C00E9B5A: jmp     loc_1C0047077
 * 00000001C00E9B5F: mov     ebx, 5
 * 00000001C00E9B64: jmp     loc_1C004708C
 */
