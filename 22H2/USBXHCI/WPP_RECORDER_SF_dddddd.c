/*
 * XREFs of WPP_RECORDER_SF_dddddd @ 0x1C0047720
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0005C1C (UsbDevice_InitializeInputContextForDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dddddd @ 0x1C0047720
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047720
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047720: mov     r11, rsp
 * 00000001C0047723: mov     [r11+8], rbx
 * 00000001C0047727: mov     [r11+10h], rsi
 * 00000001C004772B: mov     [r11+18h], rdi
 * 00000001C004772F: push    rbp
 * 00000001C0047730: lea     rbp, [r11-27h]
 * 00000001C0047734: sub     rsp, 90h
 * 00000001C004773B: mov     rbx, rcx
 * 00000001C004773E: mov     edi, 4
 * 00000001C0047743: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004774A: lea     esi, [rdi+27h]
 * 00000001C004774D: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047754: jz      short loc_1C00477C7
 * 00000001C0047756: cmp     [rcx+29h], dil
 * 00000001C004775A: jb      short loc_1C00477C7
 * 00000001C004775C: and     qword ptr [r11-18h], 0
 * 00000001C0047761: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0047765: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004776C: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047773: mov     rcx, [rcx+18h]
 * 00000001C0047777: mov     [r11-20h], rdi
 * 00000001C004777B: mov     [r11-28h], rdx
 * 00000001C004777F: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0047783: mov     [r11-30h], rdi
 * 00000001C0047787: mov     [r11-38h], rdx
 * 00000001C004778B: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004778F: mov     [r11-40h], rdi
 * 00000001C0047793: mov     [r11-48h], rdx
 * 00000001C0047797: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004779B: mov     [r11-50h], rdi
 * 00000001C004779F: mov     [r11-58h], rdx
 * 00000001C00477A3: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00477A7: mov     [r11-60h], rdi
 * 00000001C00477AB: mov     [r11-68h], rdx
 * 00000001C00477AF: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00477B3: mov     [r11-70h], rdi
 * 00000001C00477B7: mov     [r11-78h], rdx
 * 00000001C00477BB: mov     edx, esi
 * 00000001C00477BD: movzx   r9d, si
 * 00000001C00477C1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00477C7: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00477D0: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00477D4: mov     [rsp+90h+var_10], rdi
 * 00000001C00477DC: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C00477E3: mov     [rsp+90h+var_18], rax
 * 00000001C00477E8: mov     r8d, 0Ch
 * 00000001C00477EE: mov     [rsp+90h+var_20], rdi
 * 00000001C00477F3: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C00477F7: mov     [rsp+90h+var_28], rax
 * 00000001C00477FC: mov     edx, edi
 * 00000001C00477FE: mov     [rsp+90h+var_30], rdi
 * 00000001C0047803: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0047807: mov     [rsp+90h+var_38], rax
 * 00000001C004780C: mov     rcx, rbx
 * 00000001C004780F: mov     [rsp+90h+var_40], rdi
 * 00000001C0047814: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0047818: mov     [rsp+90h+var_48], rax
 * 00000001C004781D: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0047821: mov     [rsp+90h+var_50], rdi
 * 00000001C0047826: mov     [rsp+90h+var_58], rax
 * 00000001C004782B: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004782F: mov     [rsp+90h+var_60], rdi
 * 00000001C0047834: mov     [rsp+90h+var_68], rax
 * 00000001C0047839: mov     word ptr [rsp+90h+var_70], si
 * 00000001C004783E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047845: nop     dword ptr [rax+rax+00h]
 * 00000001C004784A: lea     r11, [rsp+90h+var_s0]
 * 00000001C0047852: mov     rbx, [r11+10h]
 * 00000001C0047856: mov     rsi, [r11+18h]
 * 00000001C004785A: mov     rdi, [r11+20h]
 * 00000001C004785E: mov     rsp, r11
 * 00000001C0047861: pop     rbp
 * 00000001C0047862: retn
 */
