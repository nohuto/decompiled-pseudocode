/*
 * XREFs of WPP_RECORDER_SF_DDDDq @ 0x1C0044C68
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C000D560 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDq @ 0x1C0044C68
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044C68
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044C68: mov     r11, rsp
 * 00000001C0044C6B: mov     [r11+8], rbx
 * 00000001C0044C6F: mov     [r11+10h], rsi
 * 00000001C0044C73: push    rdi
 * 00000001C0044C74: sub     rsp, 80h
 * 00000001C0044C7B: mov     rdi, rcx
 * 00000001C0044C7E: movzx   ebx, r9w
 * 00000001C0044C82: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044C89: mov     esi, 4
 * 00000001C0044C8E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044C95: jz      short loc_1C0044D00
 * 00000001C0044C97: cmp     byte ptr [rcx+29h], 5
 * 00000001C0044C9B: jb      short loc_1C0044D00
 * 00000001C0044C9D: and     qword ptr [r11-18h], 0
 * 00000001C0044CA2: lea     rdx, [r11+50h]
 * 00000001C0044CA6: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0044CAD: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044CB4: mov     rcx, [rcx+18h]
 * 00000001C0044CB8: mov     r9d, ebx
 * 00000001C0044CBB: mov     qword ptr [r11-20h], 8
 * 00000001C0044CC3: mov     [r11-28h], rdx
 * 00000001C0044CC7: lea     rdx, [r11+48h]
 * 00000001C0044CCB: mov     [r11-30h], rsi
 * 00000001C0044CCF: mov     [r11-38h], rdx
 * 00000001C0044CD3: lea     rdx, [r11+40h]
 * 00000001C0044CD7: mov     [r11-40h], rsi
 * 00000001C0044CDB: mov     [r11-48h], rdx
 * 00000001C0044CDF: lea     rdx, [r11+38h]
 * 00000001C0044CE3: mov     [r11-50h], rsi
 * 00000001C0044CE7: mov     [r11-58h], rdx
 * 00000001C0044CEB: lea     rdx, [r11+30h]
 * 00000001C0044CEF: mov     [r11-60h], rsi
 * 00000001C0044CF3: mov     [r11-68h], rdx
 * 00000001C0044CF7: lea     edx, [rsi+27h]
 * 00000001C0044CFA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044D00: and     [rsp+88h+var_10], 0
 * 00000001C0044D06: lea     rax, [rsp+88h+arg_48]
 * 00000001C0044D0E: mov     [rsp+88h+var_18], 8
 * 00000001C0044D17: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044D1E: mov     [rsp+88h+var_20], rax
 * 00000001C0044D23: mov     edx, 5
 * 00000001C0044D28: mov     [rsp+88h+var_28], rsi
 * 00000001C0044D2D: lea     rax, [rsp+88h+arg_40]
 * 00000001C0044D35: mov     [rsp+88h+var_30], rax
 * 00000001C0044D3A: mov     rcx, rdi
 * 00000001C0044D3D: mov     [rsp+88h+var_38], rsi
 * 00000001C0044D42: lea     rax, [rsp+88h+arg_38]
 * 00000001C0044D4A: mov     [rsp+88h+var_40], rax
 * 00000001C0044D4F: lea     r8d, [rdx+9]
 * 00000001C0044D53: mov     [rsp+88h+var_48], rsi
 * 00000001C0044D58: lea     rax, [rsp+88h+arg_30]
 * 00000001C0044D60: mov     [rsp+88h+var_50], rax
 * 00000001C0044D65: lea     rax, [rsp+88h+arg_28]
 * 00000001C0044D6D: mov     [rsp+88h+var_58], rsi
 * 00000001C0044D72: mov     [rsp+88h+var_60], rax
 * 00000001C0044D77: mov     [rsp+88h+var_68], bx
 * 00000001C0044D7C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044D83: nop     dword ptr [rax+rax+00h]
 * 00000001C0044D88: lea     r11, [rsp+88h+var_8]
 * 00000001C0044D90: mov     rbx, [r11+10h]
 * 00000001C0044D94: mov     rsi, [r11+18h]
 * 00000001C0044D98: mov     rsp, r11
 * 00000001C0044D9B: pop     rdi
 * 00000001C0044D9C: retn
 */
