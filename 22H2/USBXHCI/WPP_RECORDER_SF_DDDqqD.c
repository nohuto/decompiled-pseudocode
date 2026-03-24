/*
 * XREFs of WPP_RECORDER_SF_DDDqqD @ 0x1C0045350
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000D984 (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqD @ 0x1C0045350
 * Reason: Hex-Rays returned no pseudocode for 0x1C0045350
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0045350: mov     r11, rsp
 * 00000001C0045353: mov     [r11+8], rbx
 * 00000001C0045357: mov     [r11+10h], rsi
 * 00000001C004535B: mov     [r11+18h], rdi
 * 00000001C004535F: mov     [r11+20h], r14
 * 00000001C0045363: push    rbp
 * 00000001C0045364: lea     rbp, [r11-27h]
 * 00000001C0045368: sub     rsp, 90h
 * 00000001C004536F: mov     rdi, rcx
 * 00000001C0045372: movzx   ebx, r9w
 * 00000001C0045376: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004537D: mov     esi, 4
 * 00000001C0045382: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0045389: lea     r14d, [rsi+4]
 * 00000001C004538D: jz      short loc_1C0045400
 * 00000001C004538F: cmp     [rcx+29h], sil
 * 00000001C0045393: jb      short loc_1C0045400
 * 00000001C0045395: and     qword ptr [r11-18h], 0
 * 00000001C004539A: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C004539E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00453A5: lea     r8, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C00453AC: mov     rcx, [rcx+18h]
 * 00000001C00453B0: mov     r9d, ebx
 * 00000001C00453B3: mov     [r11-20h], rsi
 * 00000001C00453B7: mov     [r11-28h], rdx
 * 00000001C00453BB: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00453BF: mov     [r11-30h], r14
 * 00000001C00453C3: mov     [r11-38h], rdx
 * 00000001C00453C7: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00453CB: mov     [r11-40h], r14
 * 00000001C00453CF: mov     [r11-48h], rdx
 * 00000001C00453D3: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00453D7: mov     [r11-50h], rsi
 * 00000001C00453DB: mov     [r11-58h], rdx
 * 00000001C00453DF: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00453E3: mov     [r11-60h], rsi
 * 00000001C00453E7: mov     [r11-68h], rdx
 * 00000001C00453EB: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00453EF: mov     [r11-70h], rsi
 * 00000001C00453F3: mov     [r11-78h], rdx
 * 00000001C00453F7: lea     edx, [rsi+27h]
 * 00000001C00453FA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045400: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0045409: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C004540D: mov     [rsp+90h+var_10], rsi
 * 00000001C0045415: lea     r9, WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids
 * 00000001C004541C: mov     [rsp+90h+var_18], rax
 * 00000001C0045421: mov     r8d, 0Eh
 * 00000001C0045427: mov     [rsp+90h+var_20], r14
 * 00000001C004542C: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0045430: mov     [rsp+90h+var_28], rax
 * 00000001C0045435: mov     edx, esi
 * 00000001C0045437: mov     [rsp+90h+var_30], r14
 * 00000001C004543C: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0045440: mov     [rsp+90h+var_38], rax
 * 00000001C0045445: mov     rcx, rdi
 * 00000001C0045448: mov     [rsp+90h+var_40], rsi
 * 00000001C004544D: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0045451: mov     [rsp+90h+var_48], rax
 * 00000001C0045456: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004545A: mov     [rsp+90h+var_50], rsi
 * 00000001C004545F: mov     [rsp+90h+var_58], rax
 * 00000001C0045464: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0045468: mov     [rsp+90h+var_60], rsi
 * 00000001C004546D: mov     [rsp+90h+var_68], rax
 * 00000001C0045472: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C0045477: call    cs:__imp_WppAutoLogTrace
 * 00000001C004547E: nop     dword ptr [rax+rax+00h]
 * 00000001C0045483: lea     r11, [rsp+90h+var_s0]
 * 00000001C004548B: mov     rbx, [r11+10h]
 * 00000001C004548F: mov     rsi, [r11+18h]
 * 00000001C0045493: mov     rdi, [r11+20h]
 * 00000001C0045497: mov     r14, [r11+28h]
 * 00000001C004549B: mov     rsp, r11
 * 00000001C004549E: pop     rbp
 * 00000001C004549F: retn
 */
