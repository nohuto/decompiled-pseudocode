/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0035D40
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031CC4 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0035D40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035D40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035D40: mov     rax, rsp
 * 00000001C0035D43: mov     [rax+8], rbx
 * 00000001C0035D47: mov     [rax+10h], rsi
 * 00000001C0035D4B: mov     [rax+18h], rdi
 * 00000001C0035D4F: mov     [rax+20h], r12
 * 00000001C0035D53: push    r15
 * 00000001C0035D55: sub     rsp, 40h
 * 00000001C0035D59: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0035D60: lea     r15, aNull; "NULL"
 * 00000001C0035D67: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0035D6C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0035D70: mov     rsi, rcx
 * 00000001C0035D73: mov     r12d, 0E6h
 * 00000001C0035D79: mov     eax, [rdx+2Ch]
 * 00000001C0035D7C: test    al, 8
 * 00000001C0035D7E: jz      short loc_1C0035DE3
 * 00000001C0035D80: cmp     byte ptr [rdx+29h], 2
 * 00000001C0035D84: jb      short loc_1C0035DE3
 * 00000001C0035D86: test    rdi, rdi
 * 00000001C0035D89: jz      short loc_1C0035D9C
 * 00000001C0035D8B: mov     rdx, rbx
 * 00000001C0035D8E: inc     rdx
 * 00000001C0035D91: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0035D95: jnz     short loc_1C0035D8E
 * 00000001C0035D97: inc     rdx
 * 00000001C0035D9A: jmp     short loc_1C0035DA1
 * 00000001C0035D9C: mov     edx, 5
 * 00000001C0035DA1: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035DA8: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035DAF: test    rdi, rdi
 * 00000001C0035DB2: movzx   r9d, r12w
 * 00000001C0035DB6: mov     rcx, rdi
 * 00000001C0035DB9: cmovz   rcx, r15
 * 00000001C0035DBD: and     [rsp+48h+var_18], 0
 * 00000001C0035DC3: mov     [rsp+48h+var_20], rdx
 * 00000001C0035DC8: mov     edx, 2Bh ; '+'
 * 00000001C0035DCD: mov     [rsp+48h+var_28], rcx
 * 00000001C0035DD2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035DD9: mov     rcx, [rcx+18h]
 * 00000001C0035DDD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035DE3: test    rdi, rdi
 * 00000001C0035DE6: jz      short loc_1C0035DF6
 * 00000001C0035DE8: inc     rbx
 * 00000001C0035DEB: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0035DEF: jnz     short loc_1C0035DE8
 * 00000001C0035DF1: inc     rbx
 * 00000001C0035DF4: jmp     short loc_1C0035DFB
 * 00000001C0035DF6: mov     ebx, 5
 * 00000001C0035DFB: test    rdi, rdi
 * 00000001C0035DFE: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035E05: mov     edx, 2
 * 00000001C0035E0A: mov     rcx, rsi
 * 00000001C0035E0D: cmovz   rdi, r15
 * 00000001C0035E11: and     [rsp+48h+var_10], 0
 * 00000001C0035E17: mov     [rsp+48h+var_18], rbx
 * 00000001C0035E1C: mov     [rsp+48h+var_20], rdi
 * 00000001C0035E21: lea     r8d, [rdx+2]
 * 00000001C0035E25: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0035E2B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035E32: nop     dword ptr [rax+rax+00h]
 * 00000001C0035E37: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0035E3C: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0035E41: mov     rdi, [rsp+48h+arg_10]
 * 00000001C0035E46: mov     r12, [rsp+48h+arg_18]
 * 00000001C0035E4B: add     rsp, 40h
 * 00000001C0035E4F: pop     r15
 * 00000001C0035E51: retn
 */
