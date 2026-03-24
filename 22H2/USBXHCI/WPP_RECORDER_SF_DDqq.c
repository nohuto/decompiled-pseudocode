/*
 * XREFs of WPP_RECORDER_SF_ddqq @ 0x1C004786C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqq @ 0x1C004786C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004786C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004786C: mov     r11, rsp
 * 00000001C004786F: mov     [r11+8], rbx
 * 00000001C0047873: mov     [r11+10h], rbp
 * 00000001C0047877: mov     [r11+18h], rsi
 * 00000001C004787B: push    rdi
 * 00000001C004787C: sub     rsp, 70h
 * 00000001C0047880: mov     ebp, 42h ; 'B'
 * 00000001C0047885: mov     rbx, rcx
 * 00000001C0047888: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004788F: lea     edi, [rbp-3Ah]
 * 00000001C0047892: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047899: lea     esi, [rbp-3Eh]
 * 00000001C004789C: jz      short loc_1C00478F8
 * 00000001C004789E: cmp     byte ptr [rcx+29h], 5
 * 00000001C00478A2: jb      short loc_1C00478F8
 * 00000001C00478A4: and     qword ptr [r11-18h], 0
 * 00000001C00478A9: lea     rdx, [r11+48h]
 * 00000001C00478AD: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00478B4: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00478BB: mov     rcx, [rcx+18h]
 * 00000001C00478BF: mov     [r11-20h], rdi
 * 00000001C00478C3: mov     [r11-28h], rdx
 * 00000001C00478C7: lea     rdx, [r11+40h]
 * 00000001C00478CB: mov     [r11-30h], rdi
 * 00000001C00478CF: mov     [r11-38h], rdx
 * 00000001C00478D3: lea     rdx, [r11+38h]
 * 00000001C00478D7: mov     [r11-40h], rsi
 * 00000001C00478DB: mov     [r11-48h], rdx
 * 00000001C00478DF: lea     rdx, [r11+30h]
 * 00000001C00478E3: mov     [r11-50h], rsi
 * 00000001C00478E7: mov     [r11-58h], rdx
 * 00000001C00478EB: lea     edx, [rbp-17h]
 * 00000001C00478EE: movzx   r9d, bp
 * 00000001C00478F2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00478F8: and     [rsp+78h+var_10], 0
 * 00000001C00478FE: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047906: mov     [rsp+78h+var_18], rdi
 * 00000001C004790B: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047912: mov     [rsp+78h+var_20], rax
 * 00000001C0047917: mov     edx, 5
 * 00000001C004791C: mov     [rsp+78h+var_28], rdi
 * 00000001C0047921: lea     rax, [rsp+78h+arg_38]
 * 00000001C0047929: mov     [rsp+78h+var_30], rax
 * 00000001C004792E: mov     rcx, rbx
 * 00000001C0047931: mov     [rsp+78h+var_38], rsi
 * 00000001C0047936: lea     rax, [rsp+78h+arg_30]
 * 00000001C004793E: mov     [rsp+78h+var_40], rax
 * 00000001C0047943: lea     r8d, [rdx+7]
 * 00000001C0047947: lea     rax, [rsp+78h+arg_28]
 * 00000001C004794F: mov     [rsp+78h+var_48], rsi
 * 00000001C0047954: mov     [rsp+78h+var_50], rax
 * 00000001C0047959: mov     [rsp+78h+var_58], bp
 * 00000001C004795E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047965: nop     dword ptr [rax+rax+00h]
 * 00000001C004796A: lea     r11, [rsp+78h+var_8]
 * 00000001C004796F: mov     rbx, [r11+10h]
 * 00000001C0047973: mov     rbp, [r11+18h]
 * 00000001C0047977: mov     rsi, [r11+20h]
 * 00000001C004797B: mov     rsp, r11
 * 00000001C004797E: pop     rdi
 * 00000001C004797F: retn
 */
