/*
 * XREFs of WPP_RECORDER_SF_DDDDDDD @ 0x1C0044AF8
 * Callers:
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000DA60 (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDDDD @ 0x1C0044AF8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044AF8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044AF8: mov     r11, rsp
 * 00000001C0044AFB: mov     [r11+8], rbx
 * 00000001C0044AFF: mov     [r11+10h], rsi
 * 00000001C0044B03: mov     [r11+18h], rdi
 * 00000001C0044B07: push    rbp
 * 00000001C0044B08: lea     rbp, [r11-1Fh]
 * 00000001C0044B0C: sub     rsp, 0A0h
 * 00000001C0044B13: mov     rbx, rcx
 * 00000001C0044B16: mov     esi, 20h ; ' '
 * 00000001C0044B1B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044B22: lea     edi, [rsi-1Ch]
 * 00000001C0044B25: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044B2C: jz      short loc_1C0044BAD
 * 00000001C0044B2E: cmp     byte ptr [rcx+29h], 5
 * 00000001C0044B32: jb      short loc_1C0044BAD
 * 00000001C0044B34: and     qword ptr [r11-18h], 0
 * 00000001C0044B39: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0044B3D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0044B44: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044B4B: mov     rcx, [rcx+18h]
 * 00000001C0044B4F: mov     [r11-20h], rdi
 * 00000001C0044B53: mov     [r11-28h], rdx
 * 00000001C0044B57: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0044B5B: mov     [r11-30h], rdi
 * 00000001C0044B5F: mov     [r11-38h], rdx
 * 00000001C0044B63: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0044B67: mov     [r11-40h], rdi
 * 00000001C0044B6B: mov     [r11-48h], rdx
 * 00000001C0044B6F: lea     rdx, [rbp+17h+arg_40]
 * 00000001C0044B73: mov     [r11-50h], rdi
 * 00000001C0044B77: mov     [r11-58h], rdx
 * 00000001C0044B7B: lea     rdx, [rbp+17h+arg_38]
 * 00000001C0044B7F: mov     [r11-60h], rdi
 * 00000001C0044B83: mov     [r11-68h], rdx
 * 00000001C0044B87: lea     rdx, [rbp+17h+arg_30]
 * 00000001C0044B8B: mov     [r11-70h], rdi
 * 00000001C0044B8F: mov     [r11-78h], rdx
 * 00000001C0044B93: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0044B97: mov     [r11-80h], rdi
 * 00000001C0044B9B: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0044BA0: lea     edx, [rsi+0Bh]
 * 00000001C0044BA3: movzx   r9d, si
 * 00000001C0044BA7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044BAD: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0044BB6: lea     rax, [rbp+17h+arg_58]
 * 00000001C0044BBA: mov     [rsp+0A0h+var_10], rdi
 * 00000001C0044BC2: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044BC9: mov     [rsp+0A0h+var_18], rax
 * 00000001C0044BD1: mov     edx, 5
 * 00000001C0044BD6: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0044BDE: lea     rax, [rbp+17h+arg_50]
 * 00000001C0044BE2: mov     [rsp+0A0h+var_28], rax
 * 00000001C0044BE7: mov     rcx, rbx
 * 00000001C0044BEA: mov     [rsp+0A0h+var_30], rdi
 * 00000001C0044BEF: lea     rax, [rbp+17h+arg_48]
 * 00000001C0044BF3: mov     [rsp+0A0h+var_38], rax
 * 00000001C0044BF8: lea     r8d, [rdx+9]
 * 00000001C0044BFC: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0044C01: lea     rax, [rbp+17h+arg_40]
 * 00000001C0044C05: mov     [rsp+0A0h+var_48], rax
 * 00000001C0044C0A: lea     rax, [rbp+17h+arg_38]
 * 00000001C0044C0E: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0044C13: mov     [rsp+0A0h+var_58], rax
 * 00000001C0044C18: lea     rax, [rbp+17h+arg_30]
 * 00000001C0044C1C: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0044C21: mov     [rsp+0A0h+var_68], rax
 * 00000001C0044C26: lea     rax, [rbp+17h+arg_28]
 * 00000001C0044C2A: mov     [rsp+0A0h+var_70], rdi
 * 00000001C0044C2F: mov     [rsp+0A0h+var_78], rax
 * 00000001C0044C34: mov     word ptr [rsp+0A0h+var_80], si
 * 00000001C0044C39: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044C40: nop     dword ptr [rax+rax+00h]
 * 00000001C0044C45: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C0044C4D: mov     rbx, [r11+10h]
 * 00000001C0044C51: mov     rsi, [r11+18h]
 * 00000001C0044C55: mov     rdi, [r11+20h]
 * 00000001C0044C59: mov     rsp, r11
 * 00000001C0044C5C: pop     rbp
 * 00000001C0044C5D: retn
 */
