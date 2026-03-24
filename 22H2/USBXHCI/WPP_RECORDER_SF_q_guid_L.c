/*
 * XREFs of WPP_RECORDER_SF_q_guid_L @ 0x1C0035998
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006EEB8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_L @ 0x1C0035998
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035998
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035998: mov     r11, rsp
 * 00000001C003599B: mov     [r11+8], rbx
 * 00000001C003599F: mov     [r11+10h], rsi
 * 00000001C00359A3: mov     [r11+18h], rdi
 * 00000001C00359A7: push    r15
 * 00000001C00359A9: sub     rsp, 60h
 * 00000001C00359AD: mov     rbx, [rsp+68h+arg_30]
 * 00000001C00359B5: mov     rdi, rcx
 * 00000001C00359B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00359BF: mov     esi, 4
 * 00000001C00359C4: mov     r15d, 100h
 * 00000001C00359CA: mov     eax, [rcx+2Ch]
 * 00000001C00359CD: test    al, 8
 * 00000001C00359CF: jz      short loc_1C0035A23
 * 00000001C00359D1: cmp     [rcx+29h], sil
 * 00000001C00359D5: jb      short loc_1C0035A23
 * 00000001C00359D7: and     qword ptr [r11-18h], 0
 * 00000001C00359DC: lea     rdx, [r11+40h]
 * 00000001C00359E0: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00359E7: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C00359EE: mov     rcx, [rcx+18h]
 * 00000001C00359F2: mov     [r11-20h], rsi
 * 00000001C00359F6: mov     [r11-28h], rdx
 * 00000001C00359FA: lea     rdx, [r11+30h]
 * 00000001C00359FE: mov     qword ptr [r11-30h], 10h
 * 00000001C0035A06: mov     [r11-38h], rbx
 * 00000001C0035A0A: mov     qword ptr [r11-40h], 8
 * 00000001C0035A12: mov     [r11-48h], rdx
 * 00000001C0035A16: lea     edx, [rsi+27h]
 * 00000001C0035A19: movzx   r9d, r15w
 * 00000001C0035A1D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035A23: and     [rsp+68h+var_10], 0
 * 00000001C0035A29: lea     rax, [rsp+68h+arg_38]
 * 00000001C0035A31: mov     [rsp+68h+var_18], rsi
 * 00000001C0035A36: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035A3D: mov     [rsp+68h+var_20], rax
 * 00000001C0035A42: mov     r8d, esi
 * 00000001C0035A45: mov     [rsp+68h+var_28], 10h
 * 00000001C0035A4E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0035A56: mov     [rsp+68h+var_30], rbx
 * 00000001C0035A5B: mov     edx, esi
 * 00000001C0035A5D: mov     [rsp+68h+var_38], 8
 * 00000001C0035A66: mov     rcx, rdi
 * 00000001C0035A69: mov     [rsp+68h+var_40], rax
 * 00000001C0035A6E: mov     [rsp+68h+var_48], r15w
 * 00000001C0035A74: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035A7B: nop     dword ptr [rax+rax+00h]
 * 00000001C0035A80: lea     r11, [rsp+68h+var_8]
 * 00000001C0035A85: mov     rbx, [r11+10h]
 * 00000001C0035A89: mov     rsi, [r11+18h]
 * 00000001C0035A8D: mov     rdi, [r11+20h]
 * 00000001C0035A91: mov     rsp, r11
 * 00000001C0035A94: pop     r15
 * 00000001C0035A96: retn
 */
