/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0035AA0
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006EEB8 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C0035AA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035AA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035AA0: mov     r11, rsp
 * 00000001C0035AA3: mov     [r11+8], rbx
 * 00000001C0035AA7: mov     [r11+10h], rsi
 * 00000001C0035AAB: mov     [r11+18h], rdi
 * 00000001C0035AAF: mov     [r11+20h], r12
 * 00000001C0035AB3: push    rbp
 * 00000001C0035AB4: lea     rbp, [r11-1Fh]
 * 00000001C0035AB8: sub     rsp, 0A0h
 * 00000001C0035ABF: mov     rbx, [rbp+17h+arg_30]
 * 00000001C0035AC3: mov     rdi, rcx
 * 00000001C0035AC6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035ACD: mov     esi, 4
 * 00000001C0035AD2: mov     r12d, 101h
 * 00000001C0035AD8: mov     eax, [rcx+2Ch]
 * 00000001C0035ADB: test    al, 8
 * 00000001C0035ADD: jz      loc_1C0035B66
 * 00000001C0035AE3: cmp     [rcx+29h], sil
 * 00000001C0035AE7: jb      short loc_1C0035B66
 * 00000001C0035AE9: and     qword ptr [r11-18h], 0
 * 00000001C0035AEE: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0035AF2: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035AF9: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035B00: mov     rcx, [rcx+18h]
 * 00000001C0035B04: mov     [r11-20h], rsi
 * 00000001C0035B08: mov     [r11-28h], rdx
 * 00000001C0035B0C: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0035B10: mov     [r11-30h], rsi
 * 00000001C0035B14: mov     [r11-38h], rdx
 * 00000001C0035B18: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0035B1C: mov     [r11-40h], rsi
 * 00000001C0035B20: mov     [r11-48h], rdx
 * 00000001C0035B24: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0035B28: mov     [r11-50h], rsi
 * 00000001C0035B2C: mov     [r11-58h], rdx
 * 00000001C0035B30: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0035B34: mov     [r11-60h], rsi
 * 00000001C0035B38: mov     [r11-68h], rdx
 * 00000001C0035B3C: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0035B40: mov     qword ptr [r11-70h], 10h
 * 00000001C0035B48: mov     [r11-78h], rbx
 * 00000001C0035B4C: mov     qword ptr [r11-80h], 8
 * 00000001C0035B54: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0035B59: lea     edx, [rsi+27h]
 * 00000001C0035B5C: movzx   r9d, r12w
 * 00000001C0035B60: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035B66: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0035B6F: lea     rax, [rbp+17h+arg_58]
 * 00000001C0035B73: mov     [rsp+0A0h+var_10], rsi
 * 00000001C0035B7B: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0035B82: mov     [rsp+0A0h+var_18], rax
 * 00000001C0035B8A: mov     r8d, esi
 * 00000001C0035B8D: mov     [rsp+0A0h+var_20], rsi
 * 00000001C0035B95: lea     rax, [rbp+17h+arg_50]
 * 00000001C0035B99: mov     [rsp+0A0h+var_28], rax
 * 00000001C0035B9E: mov     edx, esi
 * 00000001C0035BA0: mov     [rsp+0A0h+var_30], rsi
 * 00000001C0035BA5: lea     rax, [rbp+17h+arg_48]
 * 00000001C0035BA9: mov     [rsp+0A0h+var_38], rax
 * 00000001C0035BAE: mov     rcx, rdi
 * 00000001C0035BB1: mov     [rsp+0A0h+var_40], rsi
 * 00000001C0035BB6: lea     rax, [rbp+17h+arg_40]
 * 00000001C0035BBA: mov     [rsp+0A0h+var_48], rax
 * 00000001C0035BBF: lea     rax, [rbp+17h+arg_38]
 * 00000001C0035BC3: mov     [rsp+0A0h+var_50], rsi
 * 00000001C0035BC8: mov     [rsp+0A0h+var_58], rax
 * 00000001C0035BCD: lea     rax, [rbp+17h+arg_28]
 * 00000001C0035BD1: mov     [rsp+0A0h+var_60], 10h
 * 00000001C0035BDA: mov     [rsp+0A0h+var_68], rbx
 * 00000001C0035BDF: mov     [rsp+0A0h+var_70], 8
 * 00000001C0035BE8: mov     [rsp+0A0h+var_78], rax
 * 00000001C0035BED: mov     word ptr [rsp+0A0h+var_80], r12w
 * 00000001C0035BF3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035BFA: nop     dword ptr [rax+rax+00h]
 * 00000001C0035BFF: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0035C07: mov     rbx, [r11+10h]
 * 00000001C0035C0B: mov     rsi, [r11+18h]
 * 00000001C0035C0F: mov     rdi, [r11+20h]
 * 00000001C0035C13: mov     r12, [r11+28h]
 * 00000001C0035C17: mov     rsp, r11
 * 00000001C0035C1A: pop     rbp
 * 00000001C0035C1B: retn
 */
