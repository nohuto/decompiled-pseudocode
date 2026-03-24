/*
 * XREFs of WPP_RECORDER_SF_ddLLi @ 0x1C000FF4C
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C000FBA0 (Endpoint_OnCancelStopCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddLLi @ 0x1C000FF4C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000FF4C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000FF4C: mov     [rsp+arg_0], rbx
 * 00000001C000FF51: mov     [rsp+arg_8], rbp
 * 00000001C000FF56: push    rdi
 * 00000001C000FF57: sub     rsp, 80h
 * 00000001C000FF5E: mov     rbx, rcx
 * 00000001C000FF61: mov     edi, 4
 * 00000001C000FF66: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000FF6D: lea     ebp, [rdi+4Ah]
 * 00000001C000FF70: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C000FF77: jnz     loc_1C0021F7A
 * 00000001C000FF7D: and     [rsp+88h+var_10], 0
 * 00000001C000FF83: lea     rax, [rsp+88h+arg_48]
 * 00000001C000FF8B: mov     [rsp+88h+var_18], 8
 * 00000001C000FF94: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C000FF9B: mov     [rsp+88h+var_20], rax
 * 00000001C000FFA0: mov     r8d, 0Dh
 * 00000001C000FFA6: mov     [rsp+88h+var_28], rdi
 * 00000001C000FFAB: lea     rax, [rsp+88h+arg_40]
 * 00000001C000FFB3: mov     [rsp+88h+var_30], rax
 * 00000001C000FFB8: mov     edx, edi
 * 00000001C000FFBA: mov     [rsp+88h+var_38], rdi
 * 00000001C000FFBF: lea     rax, [rsp+88h+arg_38]
 * 00000001C000FFC7: mov     [rsp+88h+var_40], rax
 * 00000001C000FFCC: mov     rcx, rbx
 * 00000001C000FFCF: mov     [rsp+88h+var_48], rdi
 * 00000001C000FFD4: lea     rax, [rsp+88h+arg_30]
 * 00000001C000FFDC: mov     [rsp+88h+var_50], rax
 * 00000001C000FFE1: lea     rax, [rsp+88h+arg_28]
 * 00000001C000FFE9: mov     [rsp+88h+var_58], rdi
 * 00000001C000FFEE: mov     [rsp+88h+var_60], rax
 * 00000001C000FFF3: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C000FFF8: call    cs:__imp_WppAutoLogTrace
 * 00000001C000FFFF: nop     dword ptr [rax+rax+00h]
 * 00000001C0010004: lea     r11, [rsp+88h+var_8]
 * 00000001C001000C: mov     rbx, [r11+10h]
 * 00000001C0010010: mov     rbp, [r11+18h]
 * 00000001C0010014: mov     rsp, r11
 * 00000001C0010017: pop     rdi
 * 00000001C0010018: retn
 * 00000001C0021F7A: cmp     [rcx+29h], dil
 * 00000001C0021F7E: jb      loc_1C000FF7D
 * 00000001C0021F84: and     [rsp+88h+var_18], 0
 * 00000001C0021F8A: lea     rdx, [rsp+88h+arg_48]
 * 00000001C0021F92: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0021F99: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C0021FA0: mov     rcx, [rcx+18h]
 * 00000001C0021FA4: mov     [rsp+88h+var_20], 8
 * 00000001C0021FAD: mov     [rsp+88h+var_28], rdx
 * 00000001C0021FB2: lea     rdx, [rsp+88h+arg_40]
 * 00000001C0021FBA: mov     [rsp+88h+var_30], rdi
 * 00000001C0021FBF: mov     [rsp+88h+var_38], rdx
 * 00000001C0021FC4: lea     rdx, [rsp+88h+arg_38]
 * 00000001C0021FCC: mov     [rsp+88h+var_40], rdi
 * 00000001C0021FD1: mov     [rsp+88h+var_48], rdx
 * 00000001C0021FD6: lea     rdx, [rsp+88h+arg_30]
 * 00000001C0021FDE: mov     [rsp+88h+var_50], rdi
 * 00000001C0021FE3: mov     [rsp+88h+var_58], rdx
 * 00000001C0021FE8: lea     rdx, [rsp+88h+arg_28]
 * 00000001C0021FF0: mov     [rsp+88h+var_60], rdi
 * 00000001C0021FF5: mov     [rsp+88h+var_68], rdx
 * 00000001C0021FFA: mov     edx, 2Bh ; '+'
 * 00000001C0021FFF: movzx   r9d, bp
 * 00000001C0022003: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0022009: nop
 * 00000001C002200A: jmp     loc_1C000FF7D
 */
