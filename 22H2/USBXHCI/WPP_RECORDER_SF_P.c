/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C0035714
 * Callers:
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001536C (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0031884 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C0074FA0 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x1C0035714
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035714
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035714: mov     r11, rsp
 * 00000001C0035717: mov     [r11+8], rbx
 * 00000001C003571B: push    rdi
 * 00000001C003571C: sub     rsp, 40h
 * 00000001C0035720: mov     rdi, rcx
 * 00000001C0035723: movzx   ebx, r9w
 * 00000001C0035727: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003572E: mov     eax, [rcx+2Ch]
 * 00000001C0035731: test    al, 8
 * 00000001C0035733: jz      short loc_1C0035770
 * 00000001C0035735: cmp     byte ptr [rcx+29h], 2
 * 00000001C0035739: jb      short loc_1C0035770
 * 00000001C003573B: and     qword ptr [r11-18h], 0
 * 00000001C0035740: lea     rdx, [r11+30h]
 * 00000001C0035744: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003574B: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035752: mov     rcx, [rcx+18h]
 * 00000001C0035756: mov     r9d, ebx
 * 00000001C0035759: mov     qword ptr [r11-20h], 8
 * 00000001C0035761: mov     [r11-28h], rdx
 * 00000001C0035765: mov     edx, 2Bh ; '+'
 * 00000001C003576A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035770: and     [rsp+48h+var_10], 0
 * 00000001C0035776: lea     rax, [rsp+48h+arg_28]
 * 00000001C003577B: mov     edx, 2
 * 00000001C0035780: mov     [rsp+48h+var_18], 8
 * 00000001C0035789: mov     [rsp+48h+var_20], rax
 * 00000001C003578E: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035795: mov     rcx, rdi
 * 00000001C0035798: mov     [rsp+48h+var_28], bx
 * 00000001C003579D: lea     r8d, [rdx+2]
 * 00000001C00357A1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00357A8: nop     dword ptr [rax+rax+00h]
 * 00000001C00357AD: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00357B2: add     rsp, 40h
 * 00000001C00357B6: pop     rdi
 * 00000001C00357B7: retn
 */
