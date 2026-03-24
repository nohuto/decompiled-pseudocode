/*
 * XREFs of WPP_RECORDER_SF_DDDL @ 0x1C00433FC
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C00422A0 (Isoch_ProcessTransferRingEmptyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDL @ 0x1C00433FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00433FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00433FC: mov     r11, rsp
 * 00000001C00433FF: mov     [r11+8], rbx
 * 00000001C0043403: mov     [r11+10h], rsi
 * 00000001C0043407: push    rdi
 * 00000001C0043408: sub     rsp, 70h
 * 00000001C004340C: mov     rbx, rcx
 * 00000001C004340F: mov     edi, 4
 * 00000001C0043414: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004341B: lea     esi, [rdi+22h]
 * 00000001C004341E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043425: jz      short loc_1C0043481
 * 00000001C0043427: cmp     [rcx+29h], dil
 * 00000001C004342B: jb      short loc_1C0043481
 * 00000001C004342D: and     qword ptr [r11-18h], 0
 * 00000001C0043432: lea     rdx, [r11+48h]
 * 00000001C0043436: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004343D: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043444: mov     rcx, [rcx+18h]
 * 00000001C0043448: mov     [r11-20h], rdi
 * 00000001C004344C: mov     [r11-28h], rdx
 * 00000001C0043450: lea     rdx, [r11+40h]
 * 00000001C0043454: mov     [r11-30h], rdi
 * 00000001C0043458: mov     [r11-38h], rdx
 * 00000001C004345C: lea     rdx, [r11+38h]
 * 00000001C0043460: mov     [r11-40h], rdi
 * 00000001C0043464: mov     [r11-48h], rdx
 * 00000001C0043468: lea     rdx, [r11+30h]
 * 00000001C004346C: mov     [r11-50h], rdi
 * 00000001C0043470: mov     [r11-58h], rdx
 * 00000001C0043474: lea     edx, [rdi+27h]
 * 00000001C0043477: movzx   r9d, si
 * 00000001C004347B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043481: and     [rsp+78h+var_10], 0
 * 00000001C0043487: lea     rax, [rsp+78h+arg_40]
 * 00000001C004348F: mov     [rsp+78h+var_18], rdi
 * 00000001C0043494: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C004349B: mov     [rsp+78h+var_20], rax
 * 00000001C00434A0: mov     r8d, 0Eh
 * 00000001C00434A6: mov     [rsp+78h+var_28], rdi
 * 00000001C00434AB: lea     rax, [rsp+78h+arg_38]
 * 00000001C00434B3: mov     [rsp+78h+var_30], rax
 * 00000001C00434B8: mov     edx, edi
 * 00000001C00434BA: mov     [rsp+78h+var_38], rdi
 * 00000001C00434BF: lea     rax, [rsp+78h+arg_30]
 * 00000001C00434C7: mov     [rsp+78h+var_40], rax
 * 00000001C00434CC: mov     rcx, rbx
 * 00000001C00434CF: lea     rax, [rsp+78h+arg_28]
 * 00000001C00434D7: mov     [rsp+78h+var_48], rdi
 * 00000001C00434DC: mov     [rsp+78h+var_50], rax
 * 00000001C00434E1: mov     [rsp+78h+var_58], si
 * 00000001C00434E6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00434ED: nop     dword ptr [rax+rax+00h]
 * 00000001C00434F2: lea     r11, [rsp+78h+var_8]
 * 00000001C00434F7: mov     rbx, [r11+10h]
 * 00000001C00434FB: mov     rsi, [r11+18h]
 * 00000001C00434FF: mov     rsp, r11
 * 00000001C0043502: pop     rdi
 * 00000001C0043503: retn
 */
