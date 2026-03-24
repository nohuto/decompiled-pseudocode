/*
 * XREFs of WPP_RECORDER_SF_qdqddd @ 0x1C002F4B0
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqddd @ 0x1C002F4B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C002F4B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002F4B0: mov     r11, rsp
 * 00000001C002F4B3: mov     [r11+8], rbx
 * 00000001C002F4B7: mov     [r11+10h], rsi
 * 00000001C002F4BB: mov     [r11+18h], rdi
 * 00000001C002F4BF: mov     [r11+20h], r14
 * 00000001C002F4C3: push    rbp
 * 00000001C002F4C4: lea     rbp, [r11-27h]
 * 00000001C002F4C8: sub     rsp, 90h
 * 00000001C002F4CF: mov     edi, 4
 * 00000001C002F4D4: mov     rbx, rcx
 * 00000001C002F4D7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002F4DE: lea     esi, [rdi+4]
 * 00000001C002F4E1: mov     eax, [rcx+2Ch]
 * 00000001C002F4E4: lea     r14d, [rdi+33h]
 * 00000001C002F4E8: test    al, 40h
 * 00000001C002F4EA: jz      short loc_1C002F55E
 * 00000001C002F4EC: cmp     byte ptr [rcx+29h], 5
 * 00000001C002F4F0: jb      short loc_1C002F55E
 * 00000001C002F4F2: and     qword ptr [r11-18h], 0
 * 00000001C002F4F7: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C002F4FB: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002F502: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C002F509: mov     rcx, [rcx+18h]
 * 00000001C002F50D: mov     [r11-20h], rdi
 * 00000001C002F511: mov     [r11-28h], rdx
 * 00000001C002F515: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C002F519: mov     [r11-30h], rdi
 * 00000001C002F51D: mov     [r11-38h], rdx
 * 00000001C002F521: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C002F525: mov     [r11-40h], rdi
 * 00000001C002F529: mov     [r11-48h], rdx
 * 00000001C002F52D: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C002F531: mov     [r11-50h], rsi
 * 00000001C002F535: mov     [r11-58h], rdx
 * 00000001C002F539: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C002F53D: mov     [r11-60h], rdi
 * 00000001C002F541: mov     [r11-68h], rdx
 * 00000001C002F545: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C002F549: mov     [r11-70h], rsi
 * 00000001C002F54D: mov     [r11-78h], rdx
 * 00000001C002F551: lea     edx, [rdi+27h]
 * 00000001C002F554: movzx   r9d, r14w
 * 00000001C002F558: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F55E: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C002F567: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C002F56B: mov     [rsp+90h+var_10], rdi
 * 00000001C002F573: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C002F57A: mov     [rsp+90h+var_18], rax
 * 00000001C002F57F: mov     edx, 5
 * 00000001C002F584: mov     [rsp+90h+var_20], rdi
 * 00000001C002F589: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C002F58D: mov     [rsp+90h+var_28], rax
 * 00000001C002F592: mov     rcx, rbx
 * 00000001C002F595: mov     [rsp+90h+var_30], rdi
 * 00000001C002F59A: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C002F59E: mov     [rsp+90h+var_38], rax
 * 00000001C002F5A3: lea     r8d, [rdx+2]
 * 00000001C002F5A7: mov     [rsp+90h+var_40], rsi
 * 00000001C002F5AC: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C002F5B0: mov     [rsp+90h+var_48], rax
 * 00000001C002F5B5: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C002F5B9: mov     [rsp+90h+var_50], rdi
 * 00000001C002F5BE: mov     [rsp+90h+var_58], rax
 * 00000001C002F5C3: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C002F5C7: mov     [rsp+90h+var_60], rsi
 * 00000001C002F5CC: mov     [rsp+90h+var_68], rax
 * 00000001C002F5D1: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C002F5D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C002F5DE: nop     dword ptr [rax+rax+00h]
 * 00000001C002F5E3: lea     r11, [rsp+90h+var_s0]
 * 00000001C002F5EB: mov     rbx, [r11+10h]
 * 00000001C002F5EF: mov     rsi, [r11+18h]
 * 00000001C002F5F3: mov     rdi, [r11+20h]
 * 00000001C002F5F7: mov     r14, [r11+28h]
 * 00000001C002F5FB: mov     rsp, r11
 * 00000001C002F5FE: pop     rbp
 * 00000001C002F5FF: retn
 */
