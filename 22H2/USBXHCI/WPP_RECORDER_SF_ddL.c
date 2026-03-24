/*
 * XREFs of WPP_RECORDER_SF_DDL @ 0x1C004350C
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C00419A4 (Isoch_ProcessSegment.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0041F88 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDL @ 0x1C004350C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004350C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004350C: mov     r11, rsp
 * 00000001C004350F: mov     [r11+8], rbx
 * 00000001C0043513: mov     [r11+10h], rbp
 * 00000001C0043517: mov     [r11+18h], rsi
 * 00000001C004351B: push    rdi
 * 00000001C004351C: sub     rsp, 60h
 * 00000001C0043520: mov     rsi, rcx
 * 00000001C0043523: movzx   edi, r9w
 * 00000001C0043527: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004352E: mov     ebp, 4
 * 00000001C0043533: movzx   ebx, dl
 * 00000001C0043536: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004353D: jz      short loc_1C004358B
 * 00000001C004353F: cmp     [rcx+29h], bl
 * 00000001C0043542: jb      short loc_1C004358B
 * 00000001C0043544: and     qword ptr [r11-18h], 0
 * 00000001C0043549: lea     rdx, [r11+40h]
 * 00000001C004354D: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0043554: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C004355B: mov     rcx, [rcx+18h]
 * 00000001C004355F: mov     r9d, edi
 * 00000001C0043562: mov     [r11-20h], rbp
 * 00000001C0043566: mov     [r11-28h], rdx
 * 00000001C004356A: lea     rdx, [r11+38h]
 * 00000001C004356E: mov     [r11-30h], rbp
 * 00000001C0043572: mov     [r11-38h], rdx
 * 00000001C0043576: lea     rdx, [r11+30h]
 * 00000001C004357A: mov     [r11-40h], rbp
 * 00000001C004357E: mov     [r11-48h], rdx
 * 00000001C0043582: lea     edx, [rbp+27h]
 * 00000001C0043585: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004358B: and     [rsp+68h+var_10], 0
 * 00000001C0043591: lea     rax, [rsp+68h+arg_38]
 * 00000001C0043599: mov     [rsp+68h+var_18], rbp
 * 00000001C004359E: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00435A5: mov     [rsp+68h+var_20], rax
 * 00000001C00435AA: mov     r8d, 0Eh
 * 00000001C00435B0: mov     [rsp+68h+var_28], rbp
 * 00000001C00435B5: lea     rax, [rsp+68h+arg_30]
 * 00000001C00435BD: mov     [rsp+68h+var_30], rax
 * 00000001C00435C2: mov     edx, ebx
 * 00000001C00435C4: lea     rax, [rsp+68h+arg_28]
 * 00000001C00435CC: mov     [rsp+68h+var_38], rbp
 * 00000001C00435D1: mov     [rsp+68h+var_40], rax
 * 00000001C00435D6: mov     rcx, rsi
 * 00000001C00435D9: mov     [rsp+68h+var_48], di
 * 00000001C00435DE: call    cs:__imp_WppAutoLogTrace
 * 00000001C00435E5: nop     dword ptr [rax+rax+00h]
 * 00000001C00435EA: lea     r11, [rsp+68h+var_8]
 * 00000001C00435EF: mov     rbx, [r11+10h]
 * 00000001C00435F3: mov     rbp, [r11+18h]
 * 00000001C00435F7: mov     rsi, [r11+20h]
 * 00000001C00435FB: mov     rsp, r11
 * 00000001C00435FE: pop     rdi
 * 00000001C00435FF: retn
 */
