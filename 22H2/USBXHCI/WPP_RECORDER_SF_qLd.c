/*
 * XREFs of WPP_RECORDER_SF_qLD @ 0x1C00358A4
 * Callers:
 *     Controller_WdfEvtDeviceUsageNotification @ 0x1C0076040 (Controller_WdfEvtDeviceUsageNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLD @ 0x1C00358A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00358A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00358A4: mov     r11, rsp
 * 00000001C00358A7: mov     [r11+8], rbx
 * 00000001C00358AB: mov     [r11+10h], rbp
 * 00000001C00358AF: push    rdi
 * 00000001C00358B0: sub     rsp, 60h
 * 00000001C00358B4: mov     rbx, rcx
 * 00000001C00358B7: mov     edi, 4
 * 00000001C00358BC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00358C3: lea     ebp, [rdi+30h]
 * 00000001C00358C6: mov     eax, [rcx+2Ch]
 * 00000001C00358C9: test    al, 8
 * 00000001C00358CB: jz      short loc_1C003591F
 * 00000001C00358CD: cmp     [rcx+29h], dil
 * 00000001C00358D1: jb      short loc_1C003591F
 * 00000001C00358D3: and     qword ptr [r11-18h], 0
 * 00000001C00358D8: lea     rdx, [r11+40h]
 * 00000001C00358DC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00358E3: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C00358EA: mov     rcx, [rcx+18h]
 * 00000001C00358EE: mov     [r11-20h], rdi
 * 00000001C00358F2: mov     [r11-28h], rdx
 * 00000001C00358F6: lea     rdx, [r11+38h]
 * 00000001C00358FA: mov     [r11-30h], rdi
 * 00000001C00358FE: mov     [r11-38h], rdx
 * 00000001C0035902: lea     rdx, [r11+30h]
 * 00000001C0035906: mov     qword ptr [r11-40h], 8
 * 00000001C003590E: mov     [r11-48h], rdx
 * 00000001C0035912: lea     edx, [rdi+27h]
 * 00000001C0035915: movzx   r9d, bp
 * 00000001C0035919: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003591F: and     [rsp+68h+var_10], 0
 * 00000001C0035925: lea     rax, [rsp+68h+arg_38]
 * 00000001C003592D: mov     [rsp+68h+var_18], rdi
 * 00000001C0035932: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035939: mov     [rsp+68h+var_20], rax
 * 00000001C003593E: mov     r8d, edi
 * 00000001C0035941: mov     [rsp+68h+var_28], rdi
 * 00000001C0035946: lea     rax, [rsp+68h+arg_30]
 * 00000001C003594E: mov     [rsp+68h+var_30], rax
 * 00000001C0035953: mov     edx, edi
 * 00000001C0035955: lea     rax, [rsp+68h+arg_28]
 * 00000001C003595D: mov     [rsp+68h+var_38], 8
 * 00000001C0035966: mov     [rsp+68h+var_40], rax
 * 00000001C003596B: mov     rcx, rbx
 * 00000001C003596E: mov     [rsp+68h+var_48], bp
 * 00000001C0035973: call    cs:__imp_WppAutoLogTrace
 * 00000001C003597A: nop     dword ptr [rax+rax+00h]
 * 00000001C003597F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0035984: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0035989: add     rsp, 60h
 * 00000001C003598D: pop     rdi
 * 00000001C003598E: retn
 */
