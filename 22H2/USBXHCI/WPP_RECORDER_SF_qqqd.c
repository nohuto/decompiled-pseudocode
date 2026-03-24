/*
 * XREFs of WPP_RECORDER_SF_qqqd @ 0x1C0035C24
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033BE0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqd @ 0x1C0035C24
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035C24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035C24: mov     r11, rsp
 * 00000001C0035C27: mov     [r11+8], rbx
 * 00000001C0035C2B: mov     [r11+10h], rbp
 * 00000001C0035C2F: push    rdi
 * 00000001C0035C30: sub     rsp, 70h
 * 00000001C0035C34: mov     rbx, rcx
 * 00000001C0035C37: mov     edi, 8
 * 00000001C0035C3C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035C43: mov     ebp, 12Eh
 * 00000001C0035C48: mov     eax, [rcx+2Ch]
 * 00000001C0035C4B: test    dil, al
 * 00000001C0035C4E: jz      short loc_1C0035CAE
 * 00000001C0035C50: cmp     byte ptr [rcx+29h], 5
 * 00000001C0035C54: jb      short loc_1C0035CAE
 * 00000001C0035C56: and     qword ptr [r11-18h], 0
 * 00000001C0035C5B: lea     rdx, [r11+48h]
 * 00000001C0035C5F: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035C66: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035C6D: mov     rcx, [rcx+18h]
 * 00000001C0035C71: mov     qword ptr [r11-20h], 4
 * 00000001C0035C79: mov     [r11-28h], rdx
 * 00000001C0035C7D: lea     rdx, [r11+40h]
 * 00000001C0035C81: mov     [r11-30h], rdi
 * 00000001C0035C85: mov     [r11-38h], rdx
 * 00000001C0035C89: lea     rdx, [r11+38h]
 * 00000001C0035C8D: mov     [r11-40h], rdi
 * 00000001C0035C91: mov     [r11-48h], rdx
 * 00000001C0035C95: lea     rdx, [r11+30h]
 * 00000001C0035C99: mov     [r11-50h], rdi
 * 00000001C0035C9D: mov     [r11-58h], rdx
 * 00000001C0035CA1: lea     edx, [rdi+23h]
 * 00000001C0035CA4: movzx   r9d, bp
 * 00000001C0035CA8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035CAE: and     [rsp+78h+var_10], 0
 * 00000001C0035CB4: lea     rax, [rsp+78h+arg_40]
 * 00000001C0035CBC: mov     [rsp+78h+var_18], 4
 * 00000001C0035CC5: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035CCC: mov     [rsp+78h+var_20], rax
 * 00000001C0035CD1: mov     edx, 5
 * 00000001C0035CD6: mov     [rsp+78h+var_28], rdi
 * 00000001C0035CDB: lea     rax, [rsp+78h+arg_38]
 * 00000001C0035CE3: mov     [rsp+78h+var_30], rax
 * 00000001C0035CE8: mov     rcx, rbx
 * 00000001C0035CEB: mov     [rsp+78h+var_38], rdi
 * 00000001C0035CF0: lea     rax, [rsp+78h+arg_30]
 * 00000001C0035CF8: mov     [rsp+78h+var_40], rax
 * 00000001C0035CFD: lea     r8d, [rdx-1]
 * 00000001C0035D01: lea     rax, [rsp+78h+arg_28]
 * 00000001C0035D09: mov     [rsp+78h+var_48], rdi
 * 00000001C0035D0E: mov     [rsp+78h+var_50], rax
 * 00000001C0035D13: mov     [rsp+78h+var_58], bp
 * 00000001C0035D18: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035D1F: nop     dword ptr [rax+rax+00h]
 * 00000001C0035D24: lea     r11, [rsp+78h+var_8]
 * 00000001C0035D29: mov     rbx, [r11+10h]
 * 00000001C0035D2D: mov     rbp, [r11+18h]
 * 00000001C0035D31: mov     rsp, r11
 * 00000001C0035D34: pop     rdi
 * 00000001C0035D35: retn
 */
