/*
 * XREFs of WPP_RECORDER_SF_DDiqq @ 0x1C00408DC
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDiqq @ 0x1C00408DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00408DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00408DC: mov     r11, rsp
 * 00000001C00408DF: mov     [r11+8], rbx
 * 00000001C00408E3: mov     [r11+10h], rbp
 * 00000001C00408E7: mov     [r11+18h], rsi
 * 00000001C00408EB: push    rdi
 * 00000001C00408EC: sub     rsp, 80h
 * 00000001C00408F3: mov     rdi, rcx
 * 00000001C00408F6: movzx   ebx, r9w
 * 00000001C00408FA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040901: mov     esi, 8
 * 00000001C0040906: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004090D: lea     ebp, [rsi-4]
 * 00000001C0040910: jz      short loc_1C0040977
 * 00000001C0040912: cmp     byte ptr [rcx+29h], 2
 * 00000001C0040916: jb      short loc_1C0040977
 * 00000001C0040918: and     qword ptr [r11-18h], 0
 * 00000001C004091D: lea     rdx, [r11+50h]
 * 00000001C0040921: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0040928: lea     r8, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C004092F: mov     rcx, [rcx+18h]
 * 00000001C0040933: mov     r9d, ebx
 * 00000001C0040936: mov     [r11-20h], rsi
 * 00000001C004093A: mov     [r11-28h], rdx
 * 00000001C004093E: lea     rdx, [r11+48h]
 * 00000001C0040942: mov     [r11-30h], rsi
 * 00000001C0040946: mov     [r11-38h], rdx
 * 00000001C004094A: lea     rdx, [r11+40h]
 * 00000001C004094E: mov     [r11-40h], rsi
 * 00000001C0040952: mov     [r11-48h], rdx
 * 00000001C0040956: lea     rdx, [r11+38h]
 * 00000001C004095A: mov     [r11-50h], rbp
 * 00000001C004095E: mov     [r11-58h], rdx
 * 00000001C0040962: lea     rdx, [r11+30h]
 * 00000001C0040966: mov     [r11-60h], rbp
 * 00000001C004096A: mov     [r11-68h], rdx
 * 00000001C004096E: lea     edx, [rsi+23h]
 * 00000001C0040971: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040977: and     [rsp+88h+var_10], 0
 * 00000001C004097D: lea     rax, [rsp+88h+arg_48]
 * 00000001C0040985: mov     [rsp+88h+var_18], rsi
 * 00000001C004098A: lea     r9, WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids
 * 00000001C0040991: mov     [rsp+88h+var_20], rax
 * 00000001C0040996: mov     edx, 2
 * 00000001C004099B: mov     [rsp+88h+var_28], rsi
 * 00000001C00409A0: lea     rax, [rsp+88h+arg_40]
 * 00000001C00409A8: mov     [rsp+88h+var_30], rax
 * 00000001C00409AD: mov     rcx, rdi
 * 00000001C00409B0: mov     [rsp+88h+var_38], rsi
 * 00000001C00409B5: lea     rax, [rsp+88h+arg_38]
 * 00000001C00409BD: mov     [rsp+88h+var_40], rax
 * 00000001C00409C2: lea     r8d, [rdx+0Ch]
 * 00000001C00409C6: mov     [rsp+88h+var_48], rbp
 * 00000001C00409CB: lea     rax, [rsp+88h+arg_30]
 * 00000001C00409D3: mov     [rsp+88h+var_50], rax
 * 00000001C00409D8: lea     rax, [rsp+88h+arg_28]
 * 00000001C00409E0: mov     [rsp+88h+var_58], rbp
 * 00000001C00409E5: mov     [rsp+88h+var_60], rax
 * 00000001C00409EA: mov     [rsp+88h+var_68], bx
 * 00000001C00409EF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00409F6: nop     dword ptr [rax+rax+00h]
 * 00000001C00409FB: lea     r11, [rsp+88h+var_8]
 * 00000001C0040A03: mov     rbx, [r11+10h]
 * 00000001C0040A07: mov     rbp, [r11+18h]
 * 00000001C0040A0B: mov     rsi, [r11+20h]
 * 00000001C0040A0F: mov     rsp, r11
 * 00000001C0040A12: pop     rdi
 * 00000001C0040A13: retn
 */
