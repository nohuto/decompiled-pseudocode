/*
 * XREFs of WPP_RECORDER_SF_qddd @ 0x1C002F398
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qddd @ 0x1C002F398
 * Reason: Hex-Rays returned no pseudocode for 0x1C002F398
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002F398: mov     r11, rsp
 * 00000001C002F39B: mov     [r11+8], rbx
 * 00000001C002F39F: mov     [r11+10h], rbp
 * 00000001C002F3A3: push    rdi
 * 00000001C002F3A4: sub     rsp, 70h
 * 00000001C002F3A8: mov     rbx, rcx
 * 00000001C002F3AB: mov     ebp, 36h ; '6'
 * 00000001C002F3B0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002F3B7: lea     edi, [rbp-32h]
 * 00000001C002F3BA: mov     eax, [rcx+2Ch]
 * 00000001C002F3BD: test    al, 40h
 * 00000001C002F3BF: jz      short loc_1C002F41F
 * 00000001C002F3C1: cmp     byte ptr [rcx+29h], 5
 * 00000001C002F3C5: jb      short loc_1C002F41F
 * 00000001C002F3C7: and     qword ptr [r11-18h], 0
 * 00000001C002F3CC: lea     rdx, [r11+48h]
 * 00000001C002F3D0: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002F3D7: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C002F3DE: mov     rcx, [rcx+18h]
 * 00000001C002F3E2: mov     [r11-20h], rdi
 * 00000001C002F3E6: mov     [r11-28h], rdx
 * 00000001C002F3EA: lea     rdx, [r11+40h]
 * 00000001C002F3EE: mov     [r11-30h], rdi
 * 00000001C002F3F2: mov     [r11-38h], rdx
 * 00000001C002F3F6: lea     rdx, [r11+38h]
 * 00000001C002F3FA: mov     [r11-40h], rdi
 * 00000001C002F3FE: mov     [r11-48h], rdx
 * 00000001C002F402: lea     rdx, [r11+30h]
 * 00000001C002F406: mov     qword ptr [r11-50h], 8
 * 00000001C002F40E: mov     [r11-58h], rdx
 * 00000001C002F412: lea     edx, [rbp-0Bh]
 * 00000001C002F415: movzx   r9d, bp
 * 00000001C002F419: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F41F: and     [rsp+78h+var_10], 0
 * 00000001C002F425: lea     rax, [rsp+78h+arg_40]
 * 00000001C002F42D: mov     [rsp+78h+var_18], rdi
 * 00000001C002F432: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C002F439: mov     [rsp+78h+var_20], rax
 * 00000001C002F43E: mov     edx, 5
 * 00000001C002F443: mov     [rsp+78h+var_28], rdi
 * 00000001C002F448: lea     rax, [rsp+78h+arg_38]
 * 00000001C002F450: mov     [rsp+78h+var_30], rax
 * 00000001C002F455: mov     rcx, rbx
 * 00000001C002F458: mov     [rsp+78h+var_38], rdi
 * 00000001C002F45D: lea     rax, [rsp+78h+arg_30]
 * 00000001C002F465: mov     [rsp+78h+var_40], rax
 * 00000001C002F46A: lea     r8d, [rdx+2]
 * 00000001C002F46E: lea     rax, [rsp+78h+arg_28]
 * 00000001C002F476: mov     [rsp+78h+var_48], 8
 * 00000001C002F47F: mov     [rsp+78h+var_50], rax
 * 00000001C002F484: mov     [rsp+78h+var_58], bp
 * 00000001C002F489: call    cs:__imp_WppAutoLogTrace
 * 00000001C002F490: nop     dword ptr [rax+rax+00h]
 * 00000001C002F495: lea     r11, [rsp+78h+var_8]
 * 00000001C002F49A: mov     rbx, [r11+10h]
 * 00000001C002F49E: mov     rbp, [r11+18h]
 * 00000001C002F4A2: mov     rsp, r11
 * 00000001C002F4A5: pop     rdi
 * 00000001C002F4A6: retn
 */
