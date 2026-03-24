/*
 * XREFs of WPP_RECORDER_SF_DDDi @ 0x1C0044F20
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0044778 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDi @ 0x1C0044F20
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044F20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044F20: mov     r11, rsp
 * 00000001C0044F23: mov     [r11+8], rbx
 * 00000001C0044F27: mov     [r11+10h], rbp
 * 00000001C0044F2B: mov     [r11+18h], rsi
 * 00000001C0044F2F: push    rdi
 * 00000001C0044F30: sub     rsp, 70h
 * 00000001C0044F34: mov     rsi, rcx
 * 00000001C0044F37: movzx   edi, r9w
 * 00000001C0044F3B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0044F42: mov     ebp, 4
 * 00000001C0044F47: movzx   ebx, dl
 * 00000001C0044F4A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0044F51: jz      short loc_1C0044FAF
 * 00000001C0044F53: cmp     [rcx+29h], bl
 * 00000001C0044F56: jb      short loc_1C0044FAF
 * 00000001C0044F58: and     qword ptr [r11-18h], 0
 * 00000001C0044F5D: lea     rdx, [r11+48h]
 * 00000001C0044F61: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0044F68: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044F6F: mov     rcx, [rcx+18h]
 * 00000001C0044F73: mov     r9d, edi
 * 00000001C0044F76: mov     qword ptr [r11-20h], 8
 * 00000001C0044F7E: mov     [r11-28h], rdx
 * 00000001C0044F82: lea     rdx, [r11+40h]
 * 00000001C0044F86: mov     [r11-30h], rbp
 * 00000001C0044F8A: mov     [r11-38h], rdx
 * 00000001C0044F8E: lea     rdx, [r11+38h]
 * 00000001C0044F92: mov     [r11-40h], rbp
 * 00000001C0044F96: mov     [r11-48h], rdx
 * 00000001C0044F9A: lea     rdx, [r11+30h]
 * 00000001C0044F9E: mov     [r11-50h], rbp
 * 00000001C0044FA2: mov     [r11-58h], rdx
 * 00000001C0044FA6: lea     edx, [rbp+27h]
 * 00000001C0044FA9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044FAF: and     [rsp+78h+var_10], 0
 * 00000001C0044FB5: lea     rax, [rsp+78h+arg_40]
 * 00000001C0044FBD: mov     [rsp+78h+var_18], 8
 * 00000001C0044FC6: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C0044FCD: mov     [rsp+78h+var_20], rax
 * 00000001C0044FD2: mov     r8d, 0Eh
 * 00000001C0044FD8: mov     [rsp+78h+var_28], rbp
 * 00000001C0044FDD: lea     rax, [rsp+78h+arg_38]
 * 00000001C0044FE5: mov     [rsp+78h+var_30], rax
 * 00000001C0044FEA: mov     edx, ebx
 * 00000001C0044FEC: mov     [rsp+78h+var_38], rbp
 * 00000001C0044FF1: lea     rax, [rsp+78h+arg_30]
 * 00000001C0044FF9: mov     [rsp+78h+var_40], rax
 * 00000001C0044FFE: mov     rcx, rsi
 * 00000001C0045001: lea     rax, [rsp+78h+arg_28]
 * 00000001C0045009: mov     [rsp+78h+var_48], rbp
 * 00000001C004500E: mov     [rsp+78h+var_50], rax
 * 00000001C0045013: mov     [rsp+78h+var_58], di
 * 00000001C0045018: call    cs:__imp_WppAutoLogTrace
 * 00000001C004501F: nop     dword ptr [rax+rax+00h]
 * 00000001C0045024: lea     r11, [rsp+78h+var_8]
 * 00000001C0045029: mov     rbx, [r11+10h]
 * 00000001C004502D: mov     rbp, [r11+18h]
 * 00000001C0045031: mov     rsi, [r11+20h]
 * 00000001C0045035: mov     rsp, r11
 * 00000001C0045038: pop     rdi
 * 00000001C0045039: retn
 */
