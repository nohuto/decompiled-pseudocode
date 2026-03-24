/*
 * XREFs of WPP_RECORDER_SF_DDLDDi @ 0x1C0043608
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0041F88 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLDDi @ 0x1C0043608
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043608
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043608: mov     r11, rsp
 * 00000001C004360B: mov     [r11+8], rbx
 * 00000001C004360F: mov     [r11+10h], rsi
 * 00000001C0043613: mov     [r11+18h], rdi
 * 00000001C0043617: mov     [r11+20h], r14
 * 00000001C004361B: push    rbp
 * 00000001C004361C: lea     rbp, [r11-27h]
 * 00000001C0043620: sub     rsp, 90h
 * 00000001C0043627: mov     rsi, rcx
 * 00000001C004362A: movzx   edi, r9w
 * 00000001C004362E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043635: mov     r14d, 4
 * 00000001C004363B: movzx   ebx, dl
 * 00000001C004363E: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043645: jz      short loc_1C00436BC
 * 00000001C0043647: cmp     [rcx+29h], bl
 * 00000001C004364A: jb      short loc_1C00436BC
 * 00000001C004364C: and     qword ptr [r11-18h], 0
 * 00000001C0043651: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0043655: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004365C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043663: mov     rcx, [rcx+18h]
 * 00000001C0043667: mov     r9d, edi
 * 00000001C004366A: mov     qword ptr [r11-20h], 8
 * 00000001C0043672: mov     [r11-28h], rdx
 * 00000001C0043676: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C004367A: mov     [r11-30h], r14
 * 00000001C004367E: mov     [r11-38h], rdx
 * 00000001C0043682: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0043686: mov     [r11-40h], r14
 * 00000001C004368A: mov     [r11-48h], rdx
 * 00000001C004368E: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0043692: mov     [r11-50h], r14
 * 00000001C0043696: mov     [r11-58h], rdx
 * 00000001C004369A: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004369E: mov     [r11-60h], r14
 * 00000001C00436A2: mov     [r11-68h], rdx
 * 00000001C00436A6: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00436AA: mov     [r11-70h], r14
 * 00000001C00436AE: mov     [r11-78h], rdx
 * 00000001C00436B2: lea     edx, [r14+27h]
 * 00000001C00436B6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00436BC: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00436C5: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00436C9: mov     [rsp+90h+var_10], 8
 * 00000001C00436D5: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00436DC: mov     [rsp+90h+var_18], rax
 * 00000001C00436E1: mov     r8d, 0Eh
 * 00000001C00436E7: mov     [rsp+90h+var_20], r14
 * 00000001C00436EC: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C00436F0: mov     [rsp+90h+var_28], rax
 * 00000001C00436F5: mov     edx, ebx
 * 00000001C00436F7: mov     [rsp+90h+var_30], r14
 * 00000001C00436FC: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0043700: mov     [rsp+90h+var_38], rax
 * 00000001C0043705: mov     rcx, rsi
 * 00000001C0043708: mov     [rsp+90h+var_40], r14
 * 00000001C004370D: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0043711: mov     [rsp+90h+var_48], rax
 * 00000001C0043716: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004371A: mov     [rsp+90h+var_50], r14
 * 00000001C004371F: mov     [rsp+90h+var_58], rax
 * 00000001C0043724: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0043728: mov     [rsp+90h+var_60], r14
 * 00000001C004372D: mov     [rsp+90h+var_68], rax
 * 00000001C0043732: mov     word ptr [rsp+90h+var_70], di
 * 00000001C0043737: call    cs:__imp_WppAutoLogTrace
 * 00000001C004373E: nop     dword ptr [rax+rax+00h]
 * 00000001C0043743: lea     r11, [rsp+90h+var_s0]
 * 00000001C004374B: mov     rbx, [r11+10h]
 * 00000001C004374F: mov     rsi, [r11+18h]
 * 00000001C0043753: mov     rdi, [r11+20h]
 * 00000001C0043757: mov     r14, [r11+28h]
 * 00000001C004375B: mov     rsp, r11
 * 00000001C004375E: pop     rbp
 * 00000001C004375F: retn
 */
