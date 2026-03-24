/*
 * XREFs of WPP_RECORDER_SF_DDqD @ 0x1C0040A1C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0040E04 (Isoch_CompleteStaleTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqD @ 0x1C0040A1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040A1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040A1C: mov     r11, rsp
 * 00000001C0040A1F: mov     [r11+8], rbx
 * 00000001C0040A23: mov     [r11+10h], rbp
 * 00000001C0040A27: mov     [r11+18h], rsi
 * 00000001C0040A2B: push    rdi
 * 00000001C0040A2C: sub     rsp, 70h
 * 00000001C0040A30: mov     rsi, rcx
 * 00000001C0040A33: movzx   edi, r9w
 * 00000001C0040A37: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040A3E: mov     ebp, 4
 * 00000001C0040A43: movzx   ebx, dl
 * 00000001C0040A46: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0040A4D: jz      short loc_1C0040AAC
 * 00000001C0040A4F: cmp     [rcx+29h], bl
 * 00000001C0040A52: jb      short loc_1C0040AAC
 * 00000001C0040A54: and     qword ptr [r11-18h], 0
 * 00000001C0040A59: lea     rdx, [r11+48h]
 * 00000001C0040A5D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0040A64: mov     r9d, edi
 * 00000001C0040A67: mov     r8, [rsp+78h+arg_20]
 * 00000001C0040A6F: mov     rcx, [rcx+18h]
 * 00000001C0040A73: mov     [r11-20h], rbp
 * 00000001C0040A77: mov     [r11-28h], rdx
 * 00000001C0040A7B: lea     rdx, [r11+40h]
 * 00000001C0040A7F: mov     qword ptr [r11-30h], 8
 * 00000001C0040A87: mov     [r11-38h], rdx
 * 00000001C0040A8B: lea     rdx, [r11+38h]
 * 00000001C0040A8F: mov     [r11-40h], rbp
 * 00000001C0040A93: mov     [r11-48h], rdx
 * 00000001C0040A97: lea     rdx, [r11+30h]
 * 00000001C0040A9B: mov     [r11-50h], rbp
 * 00000001C0040A9F: mov     [r11-58h], rdx
 * 00000001C0040AA3: lea     edx, [rbp+27h]
 * 00000001C0040AA6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040AAC: and     [rsp+78h+var_10], 0
 * 00000001C0040AB2: lea     rax, [rsp+78h+arg_40]
 * 00000001C0040ABA: mov     r9, [rsp+78h+arg_20]
 * 00000001C0040AC2: mov     r8d, 0Eh
 * 00000001C0040AC8: mov     [rsp+78h+var_18], rbp
 * 00000001C0040ACD: mov     edx, ebx
 * 00000001C0040ACF: mov     [rsp+78h+var_20], rax
 * 00000001C0040AD4: mov     rcx, rsi
 * 00000001C0040AD7: mov     [rsp+78h+var_28], 8
 * 00000001C0040AE0: lea     rax, [rsp+78h+arg_38]
 * 00000001C0040AE8: mov     [rsp+78h+var_30], rax
 * 00000001C0040AED: lea     rax, [rsp+78h+arg_30]
 * 00000001C0040AF5: mov     [rsp+78h+var_38], rbp
 * 00000001C0040AFA: mov     [rsp+78h+var_40], rax
 * 00000001C0040AFF: lea     rax, [rsp+78h+arg_28]
 * 00000001C0040B07: mov     [rsp+78h+var_48], rbp
 * 00000001C0040B0C: mov     [rsp+78h+var_50], rax
 * 00000001C0040B11: mov     [rsp+78h+var_58], di
 * 00000001C0040B16: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040B1D: nop     dword ptr [rax+rax+00h]
 * 00000001C0040B22: lea     r11, [rsp+78h+var_8]
 * 00000001C0040B27: mov     rbx, [r11+10h]
 * 00000001C0040B2B: mov     rbp, [r11+18h]
 * 00000001C0040B2F: mov     rsi, [r11+20h]
 * 00000001C0040B33: mov     rsp, r11
 * 00000001C0040B36: pop     rdi
 * 00000001C0040B37: retn
 */
