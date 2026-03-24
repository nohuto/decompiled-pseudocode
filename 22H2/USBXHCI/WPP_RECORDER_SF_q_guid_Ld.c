/*
 * XREFs of WPP_RECORDER_SF_q_guid_Ld @ 0x1C0016C88
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006EEB8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_Ld @ 0x1C0016C88
 * Reason: Hex-Rays returned no pseudocode for 0x1C0016C88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0016C88: mov     [rsp+arg_0], rbx
 * 00000001C0016C8D: mov     [rsp+arg_8], rsi
 * 00000001C0016C92: mov     [rsp+arg_10], rdi
 * 00000001C0016C97: push    r15
 * 00000001C0016C99: sub     rsp, 70h
 * 00000001C0016C9D: mov     rbx, [rsp+78h+arg_30]
 * 00000001C0016CA5: mov     rdi, rcx
 * 00000001C0016CA8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0016CAF: mov     esi, 4
 * 00000001C0016CB4: mov     r15d, 0FFh
 * 00000001C0016CBA: mov     eax, [rcx+2Ch]
 * 00000001C0016CBD: test    al, 8
 * 00000001C0016CBF: jnz     loc_1C0027A78
 * 00000001C0016CC5: and     [rsp+78h+var_10], 0
 * 00000001C0016CCB: lea     rax, [rsp+78h+arg_40]
 * 00000001C0016CD3: mov     [rsp+78h+var_18], rsi
 * 00000001C0016CD8: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0016CDF: mov     [rsp+78h+var_20], rax
 * 00000001C0016CE4: mov     r8d, esi
 * 00000001C0016CE7: mov     [rsp+78h+var_28], rsi
 * 00000001C0016CEC: lea     rax, [rsp+78h+arg_38]
 * 00000001C0016CF4: mov     [rsp+78h+var_30], rax
 * 00000001C0016CF9: mov     edx, esi
 * 00000001C0016CFB: mov     [rsp+78h+var_38], 10h
 * 00000001C0016D04: lea     rax, [rsp+78h+arg_28]
 * 00000001C0016D0C: mov     [rsp+78h+var_40], rbx
 * 00000001C0016D11: mov     rcx, rdi
 * 00000001C0016D14: mov     [rsp+78h+var_48], 8
 * 00000001C0016D1D: mov     [rsp+78h+var_50], rax
 * 00000001C0016D22: mov     word ptr [rsp+78h+var_58], r15w
 * 00000001C0016D28: call    cs:__imp_WppAutoLogTrace
 * 00000001C0016D2F: nop     dword ptr [rax+rax+00h]
 * 00000001C0016D34: lea     r11, [rsp+78h+var_8]
 * 00000001C0016D39: mov     rbx, [r11+10h]
 * 00000001C0016D3D: mov     rsi, [r11+18h]
 * 00000001C0016D41: mov     rdi, [r11+20h]
 * 00000001C0016D45: mov     rsp, r11
 * 00000001C0016D48: pop     r15
 * 00000001C0016D4A: retn
 * 00000001C0027A78: cmp     [rcx+29h], sil
 * 00000001C0027A7C: jb      loc_1C0016CC5
 * 00000001C0027A82: and     [rsp+78h+var_18], 0
 * 00000001C0027A88: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0027A90: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0027A97: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0027A9E: mov     rcx, [rcx+18h]
 * 00000001C0027AA2: mov     [rsp+78h+var_20], rsi
 * 00000001C0027AA7: mov     [rsp+78h+var_28], rdx
 * 00000001C0027AAC: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0027AB4: mov     [rsp+78h+var_30], rsi
 * 00000001C0027AB9: mov     [rsp+78h+var_38], rdx
 * 00000001C0027ABE: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0027AC6: mov     [rsp+78h+var_40], 10h
 * 00000001C0027ACF: mov     [rsp+78h+var_48], rbx
 * 00000001C0027AD4: mov     [rsp+78h+var_50], 8
 * 00000001C0027ADD: mov     [rsp+78h+var_58], rdx
 * 00000001C0027AE2: mov     edx, 2Bh ; '+'
 * 00000001C0027AE7: movzx   r9d, r15w
 * 00000001C0027AEB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0027AF1: nop
 * 00000001C0027AF2: jmp     loc_1C0016CC5
 */
