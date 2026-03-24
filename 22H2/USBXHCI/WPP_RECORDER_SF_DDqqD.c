/*
 * XREFs of WPP_RECORDER_SF_ddqqD @ 0x1C003B5D0
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0039C00 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqD @ 0x1C003B5D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B5D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B5D0: mov     r11, rsp
 * 00000001C003B5D3: mov     [r11+8], rbx
 * 00000001C003B5D7: mov     [r11+10h], rbp
 * 00000001C003B5DB: mov     [r11+18h], rsi
 * 00000001C003B5DF: push    rdi
 * 00000001C003B5E0: sub     rsp, 80h
 * 00000001C003B5E7: mov     edi, 4
 * 00000001C003B5EC: mov     rbx, rcx
 * 00000001C003B5EF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B5F6: lea     ebp, [rdi+71h]
 * 00000001C003B5F9: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003B600: lea     esi, [rdi+4]
 * 00000001C003B603: jz      short loc_1C003B66B
 * 00000001C003B605: cmp     [rcx+29h], dil
 * 00000001C003B609: jb      short loc_1C003B66B
 * 00000001C003B60B: and     qword ptr [r11-18h], 0
 * 00000001C003B610: lea     rdx, [r11+50h]
 * 00000001C003B614: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003B61B: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003B622: mov     rcx, [rcx+18h]
 * 00000001C003B626: mov     [r11-20h], rdi
 * 00000001C003B62A: mov     [r11-28h], rdx
 * 00000001C003B62E: lea     rdx, [r11+48h]
 * 00000001C003B632: mov     [r11-30h], rsi
 * 00000001C003B636: mov     [r11-38h], rdx
 * 00000001C003B63A: lea     rdx, [r11+40h]
 * 00000001C003B63E: mov     [r11-40h], rsi
 * 00000001C003B642: mov     [r11-48h], rdx
 * 00000001C003B646: lea     rdx, [r11+38h]
 * 00000001C003B64A: mov     [r11-50h], rdi
 * 00000001C003B64E: mov     [r11-58h], rdx
 * 00000001C003B652: lea     rdx, [r11+30h]
 * 00000001C003B656: mov     [r11-60h], rdi
 * 00000001C003B65A: mov     [r11-68h], rdx
 * 00000001C003B65E: lea     edx, [rdi+27h]
 * 00000001C003B661: movzx   r9d, bp
 * 00000001C003B665: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B66B: and     [rsp+88h+var_10], 0
 * 00000001C003B671: lea     rax, [rsp+88h+arg_48]
 * 00000001C003B679: mov     [rsp+88h+var_18], rdi
 * 00000001C003B67E: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003B685: mov     [rsp+88h+var_20], rax
 * 00000001C003B68A: mov     r8d, 0Dh
 * 00000001C003B690: mov     [rsp+88h+var_28], rsi
 * 00000001C003B695: lea     rax, [rsp+88h+arg_40]
 * 00000001C003B69D: mov     [rsp+88h+var_30], rax
 * 00000001C003B6A2: mov     edx, edi
 * 00000001C003B6A4: mov     [rsp+88h+var_38], rsi
 * 00000001C003B6A9: lea     rax, [rsp+88h+arg_38]
 * 00000001C003B6B1: mov     [rsp+88h+var_40], rax
 * 00000001C003B6B6: mov     rcx, rbx
 * 00000001C003B6B9: mov     [rsp+88h+var_48], rdi
 * 00000001C003B6BE: lea     rax, [rsp+88h+arg_30]
 * 00000001C003B6C6: mov     [rsp+88h+var_50], rax
 * 00000001C003B6CB: lea     rax, [rsp+88h+arg_28]
 * 00000001C003B6D3: mov     [rsp+88h+var_58], rdi
 * 00000001C003B6D8: mov     [rsp+88h+var_60], rax
 * 00000001C003B6DD: mov     [rsp+88h+var_68], bp
 * 00000001C003B6E2: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B6E9: nop     dword ptr [rax+rax+00h]
 * 00000001C003B6EE: lea     r11, [rsp+88h+var_8]
 * 00000001C003B6F6: mov     rbx, [r11+10h]
 * 00000001C003B6FA: mov     rbp, [r11+18h]
 * 00000001C003B6FE: mov     rsi, [r11+20h]
 * 00000001C003B702: mov     rsp, r11
 * 00000001C003B705: pop     rdi
 * 00000001C003B706: retn
 */
