/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x1C0043880
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00038C0 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDDD @ 0x1C0043880
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043880
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043880: mov     r11, rsp
 * 00000001C0043883: mov     [r11+8], rbx
 * 00000001C0043887: mov     [r11+10h], rdi
 * 00000001C004388B: mov     [r11+18h], r14
 * 00000001C004388F: push    rbp
 * 00000001C0043890: lea     rbp, [r11-27h]
 * 00000001C0043894: sub     rsp, 90h
 * 00000001C004389B: mov     rbx, rcx
 * 00000001C004389E: mov     edi, 4
 * 00000001C00438A3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00438AA: lea     r14d, [rdi+2Ah]
 * 00000001C00438AE: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00438B5: jz      short loc_1C004392D
 * 00000001C00438B7: cmp     byte ptr [rcx+29h], 5
 * 00000001C00438BB: jb      short loc_1C004392D
 * 00000001C00438BD: and     qword ptr [r11-18h], 0
 * 00000001C00438C2: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00438C6: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C00438CD: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C00438D4: mov     rcx, [rcx+18h]
 * 00000001C00438D8: mov     [r11-20h], rdi
 * 00000001C00438DC: mov     [r11-28h], rdx
 * 00000001C00438E0: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00438E4: mov     [r11-30h], rdi
 * 00000001C00438E8: mov     [r11-38h], rdx
 * 00000001C00438EC: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00438F0: mov     [r11-40h], rdi
 * 00000001C00438F4: mov     [r11-48h], rdx
 * 00000001C00438F8: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00438FC: mov     qword ptr [r11-50h], 8
 * 00000001C0043904: mov     [r11-58h], rdx
 * 00000001C0043908: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004390C: mov     [r11-60h], rdi
 * 00000001C0043910: mov     [r11-68h], rdx
 * 00000001C0043914: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0043918: mov     [r11-70h], rdi
 * 00000001C004391C: mov     [r11-78h], rdx
 * 00000001C0043920: lea     edx, [rdi+27h]
 * 00000001C0043923: movzx   r9d, r14w
 * 00000001C0043927: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004392D: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0043936: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C004393A: mov     [rsp+90h+var_10], rdi
 * 00000001C0043942: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043949: mov     [rsp+90h+var_18], rax
 * 00000001C004394E: mov     edx, 5
 * 00000001C0043953: mov     [rsp+90h+var_20], rdi
 * 00000001C0043958: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C004395C: mov     [rsp+90h+var_28], rax
 * 00000001C0043961: mov     rcx, rbx
 * 00000001C0043964: mov     [rsp+90h+var_30], rdi
 * 00000001C0043969: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C004396D: mov     [rsp+90h+var_38], rax
 * 00000001C0043972: lea     r8d, [rdx+9]
 * 00000001C0043976: mov     [rsp+90h+var_40], 8
 * 00000001C004397F: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0043983: mov     [rsp+90h+var_48], rax
 * 00000001C0043988: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C004398C: mov     [rsp+90h+var_50], rdi
 * 00000001C0043991: mov     [rsp+90h+var_58], rax
 * 00000001C0043996: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C004399A: mov     [rsp+90h+var_60], rdi
 * 00000001C004399F: mov     [rsp+90h+var_68], rax
 * 00000001C00439A4: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C00439AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00439B1: nop     dword ptr [rax+rax+00h]
 * 00000001C00439B6: lea     r11, [rsp+90h+var_s0]
 * 00000001C00439BE: mov     rbx, [r11+10h]
 * 00000001C00439C2: mov     rdi, [r11+18h]
 * 00000001C00439C6: mov     r14, [r11+20h]
 * 00000001C00439CA: mov     rsp, r11
 * 00000001C00439CD: pop     rbp
 * 00000001C00439CE: retn
 */
