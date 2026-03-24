/*
 * XREFs of WPP_RECORDER_SF_DDLi @ 0x1C0043768
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0041F88 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLi @ 0x1C0043768
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043768
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043768: mov     r11, rsp
 * 00000001C004376B: mov     [r11+8], rbx
 * 00000001C004376F: mov     [r11+10h], rbp
 * 00000001C0043773: push    rdi
 * 00000001C0043774: sub     rsp, 70h
 * 00000001C0043778: mov     rbx, rcx
 * 00000001C004377B: mov     edi, 4
 * 00000001C0043780: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043787: lea     ebp, [rdi+26h]
 * 00000001C004378A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043791: jz      short loc_1C00437F1
 * 00000001C0043793: cmp     [rcx+29h], dil
 * 00000001C0043797: jb      short loc_1C00437F1
 * 00000001C0043799: and     qword ptr [r11-18h], 0
 * 00000001C004379E: lea     rdx, [r11+48h]
 * 00000001C00437A2: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00437A9: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00437B0: mov     rcx, [rcx+18h]
 * 00000001C00437B4: mov     qword ptr [r11-20h], 8
 * 00000001C00437BC: mov     [r11-28h], rdx
 * 00000001C00437C0: lea     rdx, [r11+40h]
 * 00000001C00437C4: mov     [r11-30h], rdi
 * 00000001C00437C8: mov     [r11-38h], rdx
 * 00000001C00437CC: lea     rdx, [r11+38h]
 * 00000001C00437D0: mov     [r11-40h], rdi
 * 00000001C00437D4: mov     [r11-48h], rdx
 * 00000001C00437D8: lea     rdx, [r11+30h]
 * 00000001C00437DC: mov     [r11-50h], rdi
 * 00000001C00437E0: mov     [r11-58h], rdx
 * 00000001C00437E4: lea     edx, [rdi+27h]
 * 00000001C00437E7: movzx   r9d, bp
 * 00000001C00437EB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00437F1: and     [rsp+78h+var_10], 0
 * 00000001C00437F7: lea     rax, [rsp+78h+arg_40]
 * 00000001C00437FF: mov     [rsp+78h+var_18], 8
 * 00000001C0043808: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C004380F: mov     [rsp+78h+var_20], rax
 * 00000001C0043814: mov     r8d, 0Eh
 * 00000001C004381A: mov     [rsp+78h+var_28], rdi
 * 00000001C004381F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0043827: mov     [rsp+78h+var_30], rax
 * 00000001C004382C: mov     edx, edi
 * 00000001C004382E: mov     [rsp+78h+var_38], rdi
 * 00000001C0043833: lea     rax, [rsp+78h+arg_30]
 * 00000001C004383B: mov     [rsp+78h+var_40], rax
 * 00000001C0043840: mov     rcx, rbx
 * 00000001C0043843: lea     rax, [rsp+78h+arg_28]
 * 00000001C004384B: mov     [rsp+78h+var_48], rdi
 * 00000001C0043850: mov     [rsp+78h+var_50], rax
 * 00000001C0043855: mov     [rsp+78h+var_58], bp
 * 00000001C004385A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043861: nop     dword ptr [rax+rax+00h]
 * 00000001C0043866: lea     r11, [rsp+78h+var_8]
 * 00000001C004386B: mov     rbx, [r11+10h]
 * 00000001C004386F: mov     rbp, [r11+18h]
 * 00000001C0043873: mov     rsp, r11
 * 00000001C0043876: pop     rdi
 * 00000001C0043877: retn
 */
