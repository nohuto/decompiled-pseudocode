/*
 * XREFs of WPP_RECORDER_SF_DDqqDD @ 0x1C00439D8
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqqDD @ 0x1C00439D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00439D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00439D8: mov     r11, rsp
 * 00000001C00439DB: mov     [r11+8], rbx
 * 00000001C00439DF: mov     [r11+10h], rsi
 * 00000001C00439E3: mov     [r11+18h], rdi
 * 00000001C00439E7: mov     [r11+20h], r14
 * 00000001C00439EB: push    rbp
 * 00000001C00439EC: lea     rbp, [r11-27h]
 * 00000001C00439F0: sub     rsp, 90h
 * 00000001C00439F7: mov     edi, 4
 * 00000001C00439FC: mov     rbx, rcx
 * 00000001C00439FF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043A06: lea     esi, [rdi+4]
 * 00000001C0043A09: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043A10: lea     r14d, [rdi+2Bh]
 * 00000001C0043A14: jz      short loc_1C0043A88
 * 00000001C0043A16: cmp     [rcx+29h], dil
 * 00000001C0043A1A: jb      short loc_1C0043A88
 * 00000001C0043A1C: and     qword ptr [r11-18h], 0
 * 00000001C0043A21: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0043A25: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0043A2C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043A33: mov     rcx, [rcx+18h]
 * 00000001C0043A37: mov     [r11-20h], rdi
 * 00000001C0043A3B: mov     [r11-28h], rdx
 * 00000001C0043A3F: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0043A43: mov     [r11-30h], rdi
 * 00000001C0043A47: mov     [r11-38h], rdx
 * 00000001C0043A4B: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0043A4F: mov     [r11-40h], rsi
 * 00000001C0043A53: mov     [r11-48h], rdx
 * 00000001C0043A57: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0043A5B: mov     [r11-50h], rsi
 * 00000001C0043A5F: mov     [r11-58h], rdx
 * 00000001C0043A63: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0043A67: mov     [r11-60h], rdi
 * 00000001C0043A6B: mov     [r11-68h], rdx
 * 00000001C0043A6F: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0043A73: mov     [r11-70h], rdi
 * 00000001C0043A77: mov     [r11-78h], rdx
 * 00000001C0043A7B: lea     edx, [rdi+27h]
 * 00000001C0043A7E: movzx   r9d, r14w
 * 00000001C0043A82: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043A88: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0043A91: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0043A95: mov     [rsp+90h+var_10], rdi
 * 00000001C0043A9D: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043AA4: mov     [rsp+90h+var_18], rax
 * 00000001C0043AA9: mov     r8d, 0Eh
 * 00000001C0043AAF: mov     [rsp+90h+var_20], rdi
 * 00000001C0043AB4: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0043AB8: mov     [rsp+90h+var_28], rax
 * 00000001C0043ABD: mov     edx, edi
 * 00000001C0043ABF: mov     [rsp+90h+var_30], rsi
 * 00000001C0043AC4: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0043AC8: mov     [rsp+90h+var_38], rax
 * 00000001C0043ACD: mov     rcx, rbx
 * 00000001C0043AD0: mov     [rsp+90h+var_40], rsi
 * 00000001C0043AD5: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0043AD9: mov     [rsp+90h+var_48], rax
 * 00000001C0043ADE: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0043AE2: mov     [rsp+90h+var_50], rdi
 * 00000001C0043AE7: mov     [rsp+90h+var_58], rax
 * 00000001C0043AEC: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0043AF0: mov     [rsp+90h+var_60], rdi
 * 00000001C0043AF5: mov     [rsp+90h+var_68], rax
 * 00000001C0043AFA: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0043B00: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043B07: nop     dword ptr [rax+rax+00h]
 * 00000001C0043B0C: lea     r11, [rsp+90h+var_s0]
 * 00000001C0043B14: mov     rbx, [r11+10h]
 * 00000001C0043B18: mov     rsi, [r11+18h]
 * 00000001C0043B1C: mov     rdi, [r11+20h]
 * 00000001C0043B20: mov     r14, [r11+28h]
 * 00000001C0043B24: mov     rsp, r11
 * 00000001C0043B27: pop     rbp
 * 00000001C0043B28: retn
 */
