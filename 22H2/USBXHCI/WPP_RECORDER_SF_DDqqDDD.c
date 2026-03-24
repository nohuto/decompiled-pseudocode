/*
 * XREFs of WPP_RECORDER_SF_DDqqDDD @ 0x1C0043B30
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDDD @ 0x1C0043B30
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043B30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043B30: mov     r11, rsp
 * 00000001C0043B33: mov     [r11+8], rbx
 * 00000001C0043B37: mov     [r11+10h], rsi
 * 00000001C0043B3B: mov     [r11+18h], rdi
 * 00000001C0043B3F: mov     [r11+20h], r14
 * 00000001C0043B43: push    rbp
 * 00000001C0043B44: lea     rbp, [r11-1Fh]
 * 00000001C0043B48: sub     rsp, 0A0h
 * 00000001C0043B4F: mov     edi, 4
 * 00000001C0043B54: mov     rbx, rcx
 * 00000001C0043B57: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043B5E: lea     esi, [rdi+4]
 * 00000001C0043B61: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043B68: lea     r14d, [rdi+2Eh]
 * 00000001C0043B6C: jz      short loc_1C0043BED
 * 00000001C0043B6E: cmp     byte ptr [rcx+29h], 2
 * 00000001C0043B72: jb      short loc_1C0043BED
 * 00000001C0043B74: and     qword ptr [r11-18h], 0
 * 00000001C0043B79: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0043B7D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0043B84: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043B8B: mov     rcx, [rcx+18h]
 * 00000001C0043B8F: mov     [r11-20h], rdi
 * 00000001C0043B93: mov     [r11-28h], rdx
 * 00000001C0043B97: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0043B9B: mov     [r11-30h], rdi
 * 00000001C0043B9F: mov     [r11-38h], rdx
 * 00000001C0043BA3: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0043BA7: mov     [r11-40h], rdi
 * 00000001C0043BAB: mov     [r11-48h], rdx
 * 00000001C0043BAF: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0043BB3: mov     [r11-50h], rsi
 * 00000001C0043BB7: mov     [r11-58h], rdx
 * 00000001C0043BBB: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0043BBF: mov     [r11-60h], rsi
 * 00000001C0043BC3: mov     [r11-68h], rdx
 * 00000001C0043BC7: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0043BCB: mov     [r11-70h], rdi
 * 00000001C0043BCF: mov     [r11-78h], rdx
 * 00000001C0043BD3: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0043BD7: mov     [r11-80h], rdi
 * 00000001C0043BDB: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0043BE0: lea     edx, [rdi+27h]
 * 00000001C0043BE3: movzx   r9d, r14w
 * 00000001C0043BE7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043BED: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0043BF6: lea     rax, [rbp+17h+arg_58]
 * 00000001C0043BFA: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0043C02: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043C09: mov     [rsp+0A0h+var_18], rax
 * 00000001C0043C11: mov     edx, 2
 * 00000001C0043C16: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0043C1E: lea     rax, [rbp+17h+arg_50]
 * 00000001C0043C22: mov     [rsp+0A0h+var_28], rax
 * 00000001C0043C27: mov     rcx, rbx
 * 00000001C0043C2A: mov     [rsp+0A0h+var_30], rdi
 * 00000001C0043C2F: lea     rax, [rbp+17h+arg_48]
 * 00000001C0043C33: mov     [rsp+0A0h+var_38], rax
 * 00000001C0043C38: lea     r8d, [rdx+0Ch]
 * 00000001C0043C3C: mov     [rsp+0A0h+var_40], rsi
 * 00000001C0043C41: lea     rax, [rbp+17h+arg_40]
 * 00000001C0043C45: mov     [rsp+0A0h+var_48], rax
 * 00000001C0043C4A: lea     rax, [rbp+17h+arg_38]
 * 00000001C0043C4E: mov     [rsp+0A0h+var_50], rsi
 * 00000001C0043C53: mov     [rsp+0A0h+var_58], rax
 * 00000001C0043C58: lea     rax, [rbp+17h+arg_30]
 * 00000001C0043C5C: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0043C61: mov     [rsp+0A0h+var_68], rax
 * 00000001C0043C66: lea     rax, [rbp+17h+arg_28]
 * 00000001C0043C6A: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0043C6F: mov     [rsp+0A0h+var_78], rax
 * 00000001C0043C74: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C0043C7A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043C81: nop     dword ptr [rax+rax+00h]
 * 00000001C0043C86: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0043C8E: mov     rbx, [r11+10h]
 * 00000001C0043C92: mov     rsi, [r11+18h]
 * 00000001C0043C96: mov     rdi, [r11+20h]
 * 00000001C0043C9A: mov     r14, [r11+28h]
 * 00000001C0043C9E: mov     rsp, r11
 * 00000001C0043CA1: pop     rbp
 * 00000001C0043CA2: retn
 */
