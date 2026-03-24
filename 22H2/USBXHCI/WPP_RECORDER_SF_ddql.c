/*
 * XREFs of WPP_RECORDER_SF_ddqL @ 0x1C003B394
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqL @ 0x1C003B394
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B394
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B394: mov     r11, rsp
 * 00000001C003B397: mov     [r11+8], rbx
 * 00000001C003B39B: mov     [r11+10h], rsi
 * 00000001C003B39F: push    rdi
 * 00000001C003B3A0: sub     rsp, 70h
 * 00000001C003B3A4: mov     rdi, rcx
 * 00000001C003B3A7: movzx   ebx, r9w
 * 00000001C003B3AB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B3B2: mov     esi, 4
 * 00000001C003B3B7: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003B3BE: jz      short loc_1C003B41D
 * 00000001C003B3C0: cmp     [rcx+29h], sil
 * 00000001C003B3C4: jb      short loc_1C003B41D
 * 00000001C003B3C6: and     qword ptr [r11-18h], 0
 * 00000001C003B3CB: lea     rdx, [r11+48h]
 * 00000001C003B3CF: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003B3D6: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003B3DD: mov     rcx, [rcx+18h]
 * 00000001C003B3E1: mov     r9d, ebx
 * 00000001C003B3E4: mov     [r11-20h], rsi
 * 00000001C003B3E8: mov     [r11-28h], rdx
 * 00000001C003B3EC: lea     rdx, [r11+40h]
 * 00000001C003B3F0: mov     qword ptr [r11-30h], 8
 * 00000001C003B3F8: mov     [r11-38h], rdx
 * 00000001C003B3FC: lea     rdx, [r11+38h]
 * 00000001C003B400: mov     [r11-40h], rsi
 * 00000001C003B404: mov     [r11-48h], rdx
 * 00000001C003B408: lea     rdx, [r11+30h]
 * 00000001C003B40C: mov     [r11-50h], rsi
 * 00000001C003B410: mov     [r11-58h], rdx
 * 00000001C003B414: lea     edx, [rsi+27h]
 * 00000001C003B417: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B41D: and     [rsp+78h+var_10], 0
 * 00000001C003B423: lea     rax, [rsp+78h+arg_40]
 * 00000001C003B42B: mov     [rsp+78h+var_18], rsi
 * 00000001C003B430: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003B437: mov     [rsp+78h+var_20], rax
 * 00000001C003B43C: mov     r8d, 0Dh
 * 00000001C003B442: mov     [rsp+78h+var_28], 8
 * 00000001C003B44B: lea     rax, [rsp+78h+arg_38]
 * 00000001C003B453: mov     [rsp+78h+var_30], rax
 * 00000001C003B458: mov     edx, esi
 * 00000001C003B45A: mov     [rsp+78h+var_38], rsi
 * 00000001C003B45F: lea     rax, [rsp+78h+arg_30]
 * 00000001C003B467: mov     [rsp+78h+var_40], rax
 * 00000001C003B46C: mov     rcx, rdi
 * 00000001C003B46F: lea     rax, [rsp+78h+arg_28]
 * 00000001C003B477: mov     [rsp+78h+var_48], rsi
 * 00000001C003B47C: mov     [rsp+78h+var_50], rax
 * 00000001C003B481: mov     [rsp+78h+var_58], bx
 * 00000001C003B486: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B48D: nop     dword ptr [rax+rax+00h]
 * 00000001C003B492: lea     r11, [rsp+78h+var_8]
 * 00000001C003B497: mov     rbx, [r11+10h]
 * 00000001C003B49B: mov     rsi, [r11+18h]
 * 00000001C003B49F: mov     rsp, r11
 * 00000001C003B4A2: pop     rdi
 * 00000001C003B4A3: retn
 */
