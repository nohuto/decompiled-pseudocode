/*
 * XREFs of WPP_RECORDER_SF_qiD @ 0x1C003FB74
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qiD @ 0x1C003FB74
 * Reason: Hex-Rays returned no pseudocode for 0x1C003FB74
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003FB74: mov     r11, rsp
 * 00000001C003FB77: mov     [r11+8], rbx
 * 00000001C003FB7B: mov     [r11+10h], rsi
 * 00000001C003FB7F: push    rdi
 * 00000001C003FB80: sub     rsp, 60h
 * 00000001C003FB84: mov     rdi, rcx
 * 00000001C003FB87: movzx   ebx, r9w
 * 00000001C003FB8B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003FB92: mov     esi, 8
 * 00000001C003FB97: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003FB9E: jz      short loc_1C003FBF1
 * 00000001C003FBA0: cmp     byte ptr [rcx+29h], 5
 * 00000001C003FBA4: jb      short loc_1C003FBF1
 * 00000001C003FBA6: and     qword ptr [r11-18h], 0
 * 00000001C003FBAB: lea     rdx, [r11+40h]
 * 00000001C003FBAF: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003FBB6: lea     r8, WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids
 * 00000001C003FBBD: mov     rcx, [rcx+18h]
 * 00000001C003FBC1: mov     r9d, ebx
 * 00000001C003FBC4: mov     qword ptr [r11-20h], 4
 * 00000001C003FBCC: mov     [r11-28h], rdx
 * 00000001C003FBD0: lea     rdx, [r11+38h]
 * 00000001C003FBD4: mov     [r11-30h], rsi
 * 00000001C003FBD8: mov     [r11-38h], rdx
 * 00000001C003FBDC: lea     rdx, [r11+30h]
 * 00000001C003FBE0: mov     [r11-40h], rsi
 * 00000001C003FBE4: mov     [r11-48h], rdx
 * 00000001C003FBE8: lea     edx, [rsi+23h]
 * 00000001C003FBEB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003FBF1: and     [rsp+68h+var_10], 0
 * 00000001C003FBF7: lea     rax, [rsp+68h+arg_38]
 * 00000001C003FBFF: mov     [rsp+68h+var_18], 4
 * 00000001C003FC08: lea     r9, WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids
 * 00000001C003FC0F: mov     [rsp+68h+var_20], rax
 * 00000001C003FC14: mov     edx, 5
 * 00000001C003FC19: mov     [rsp+68h+var_28], rsi
 * 00000001C003FC1E: lea     rax, [rsp+68h+arg_30]
 * 00000001C003FC26: mov     [rsp+68h+var_30], rax
 * 00000001C003FC2B: mov     rcx, rdi
 * 00000001C003FC2E: lea     rax, [rsp+68h+arg_28]
 * 00000001C003FC36: mov     [rsp+68h+var_38], rsi
 * 00000001C003FC3B: mov     [rsp+68h+var_40], rax
 * 00000001C003FC40: lea     r8d, [rdx+9]
 * 00000001C003FC44: mov     [rsp+68h+var_48], bx
 * 00000001C003FC49: call    cs:__imp_WppAutoLogTrace
 * 00000001C003FC50: nop     dword ptr [rax+rax+00h]
 * 00000001C003FC55: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003FC5A: mov     rsi, [rsp+68h+arg_8]
 * 00000001C003FC5F: add     rsp, 60h
 * 00000001C003FC63: pop     rdi
 * 00000001C003FC64: retn
 */
