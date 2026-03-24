/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C004849C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00B8BC4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C004849C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004849C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004849C: mov     rax, rsp
 * 00000001C004849F: mov     [rax+8], rbx
 * 00000001C00484A3: mov     [rax+10h], rsi
 * 00000001C00484A7: mov     [rax+18h], rdi
 * 00000001C00484AB: mov     [rax+20h], r12
 * 00000001C00484AF: push    r13
 * 00000001C00484B1: sub     rsp, 50h
 * 00000001C00484B5: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00484BC: lea     r12, aNull; "NULL"
 * 00000001C00484C3: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00484CA: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00484CE: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00484D6: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C00484DD: lea     r13d, [rbx+14h]
 * 00000001C00484E1: jnz     loc_1C00EA44C
 * 00000001C00484E7: test    rdi, rdi
 * 00000001C00484EA: jz      loc_1C00EA4CF
 * 00000001C00484F0: inc     rbx
 * 00000001C00484F3: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00484F7: jnz     short loc_1C00484F0
 * 00000001C00484F9: inc     rbx
 * 00000001C00484FC: test    rdi, rdi
 * 00000001C00484FF: lea     rax, [rsp+58h+arg_30]
 * 00000001C0048507: mov     edx, 4
 * 00000001C004850C: lea     r9, WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids
 * 00000001C0048513: cmovz   rdi, r12
 * 00000001C0048517: mov     rcx, rsi
 * 00000001C004851A: and     [rsp+58h+var_10], 0
 * 00000001C0048520: mov     [rsp+58h+var_18], 8
 * 00000001C0048529: mov     [rsp+58h+var_20], rax
 * 00000001C004852E: lea     r8d, [rdx+9]
 * 00000001C0048532: mov     [rsp+58h+var_28], rbx
 * 00000001C0048537: mov     [rsp+58h+var_30], rdi
 * 00000001C004853C: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0048542: call    cs:__imp_WppAutoLogTrace
 * 00000001C0048549: nop     dword ptr [rax+rax+00h]
 * 00000001C004854E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0048553: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0048558: mov     rdi, [rsp+58h+arg_10]
 * 00000001C004855D: mov     r12, [rsp+58h+arg_18]
 * 00000001C0048562: add     rsp, 50h
 * 00000001C0048566: pop     r13
 * 00000001C0048568: retn
 * 00000001C00EA44C: cmp     byte ptr [rcx+29h], 4
 * 00000001C00EA450: jb      loc_1C00484E7
 * 00000001C00EA456: test    rdi, rdi
 * 00000001C00EA459: jz      short loc_1C00EA46C
 * 00000001C00EA45B: mov     rdx, rbx
 * 00000001C00EA45E: inc     rdx
 * 00000001C00EA461: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00EA465: jnz     short loc_1C00EA45E
 * 00000001C00EA467: inc     rdx
 * 00000001C00EA46A: jmp     short loc_1C00EA471
 * 00000001C00EA46C: mov     edx, 5
 * 00000001C00EA471: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EA478: lea     r8, [rsp+58h+arg_30]
 * 00000001C00EA480: test    rdi, rdi
 * 00000001C00EA483: movzx   r9d, r13w
 * 00000001C00EA487: mov     rcx, rdi
 * 00000001C00EA48A: cmovz   rcx, r12
 * 00000001C00EA48E: and     [rsp+58h+var_18], 0
 * 00000001C00EA494: mov     [rsp+58h+var_20], 8
 * 00000001C00EA49D: mov     [rsp+58h+var_28], r8
 * 00000001C00EA4A2: lea     r8, WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids
 * 00000001C00EA4A9: mov     [rsp+58h+var_30], rdx
 * 00000001C00EA4AE: mov     edx, 2Bh ; '+'
 * 00000001C00EA4B3: mov     [rsp+58h+var_38], rcx
 * 00000001C00EA4B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00EA4BF: mov     rcx, [rcx+18h]
 * 00000001C00EA4C3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EA4C9: nop
 * 00000001C00EA4CA: jmp     loc_1C00484E7
 * 00000001C00EA4CF: mov     ebx, 5
 * 00000001C00EA4D4: jmp     loc_1C00484FC
 */
