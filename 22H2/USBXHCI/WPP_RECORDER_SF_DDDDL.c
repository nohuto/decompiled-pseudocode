/*
 * XREFs of WPP_RECORDER_SF_DDDDL @ 0x1C00432C8
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C00419A4 (Isoch_ProcessSegment.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDL @ 0x1C00432C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00432C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00432C8: mov     r11, rsp
 * 00000001C00432CB: mov     [r11+8], rbx
 * 00000001C00432CF: mov     [r11+10h], rsi
 * 00000001C00432D3: push    rdi
 * 00000001C00432D4: sub     rsp, 80h
 * 00000001C00432DB: mov     rbx, rcx
 * 00000001C00432DE: mov     esi, 1Dh
 * 00000001C00432E3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00432EA: lea     edi, [rsi-19h]
 * 00000001C00432ED: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00432F4: jz      short loc_1C004335C
 * 00000001C00432F6: cmp     byte ptr [rcx+29h], 2
 * 00000001C00432FA: jb      short loc_1C004335C
 * 00000001C00432FC: and     qword ptr [r11-18h], 0
 * 00000001C0043301: lea     rdx, [r11+50h]
 * 00000001C0043305: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C004330C: lea     r8, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043313: mov     rcx, [rcx+18h]
 * 00000001C0043317: mov     [r11-20h], rdi
 * 00000001C004331B: mov     [r11-28h], rdx
 * 00000001C004331F: lea     rdx, [r11+48h]
 * 00000001C0043323: mov     [r11-30h], rdi
 * 00000001C0043327: mov     [r11-38h], rdx
 * 00000001C004332B: lea     rdx, [r11+40h]
 * 00000001C004332F: mov     [r11-40h], rdi
 * 00000001C0043333: mov     [r11-48h], rdx
 * 00000001C0043337: lea     rdx, [r11+38h]
 * 00000001C004333B: mov     [r11-50h], rdi
 * 00000001C004333F: mov     [r11-58h], rdx
 * 00000001C0043343: lea     rdx, [r11+30h]
 * 00000001C0043347: mov     [r11-60h], rdi
 * 00000001C004334B: mov     [r11-68h], rdx
 * 00000001C004334F: lea     edx, [rsi+0Eh]
 * 00000001C0043352: movzx   r9d, si
 * 00000001C0043356: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004335C: and     [rsp+88h+var_10], 0
 * 00000001C0043362: lea     rax, [rsp+88h+arg_48]
 * 00000001C004336A: mov     [rsp+88h+var_18], rdi
 * 00000001C004336F: lea     r9, WPP_fe7147ca1260387a70ac7753034ead38_Traceguids
 * 00000001C0043376: mov     [rsp+88h+var_20], rax
 * 00000001C004337B: mov     edx, 2
 * 00000001C0043380: mov     [rsp+88h+var_28], rdi
 * 00000001C0043385: lea     rax, [rsp+88h+arg_40]
 * 00000001C004338D: mov     [rsp+88h+var_30], rax
 * 00000001C0043392: mov     rcx, rbx
 * 00000001C0043395: mov     [rsp+88h+var_38], rdi
 * 00000001C004339A: lea     rax, [rsp+88h+arg_38]
 * 00000001C00433A2: mov     [rsp+88h+var_40], rax
 * 00000001C00433A7: lea     r8d, [rdx+0Ch]
 * 00000001C00433AB: mov     [rsp+88h+var_48], rdi
 * 00000001C00433B0: lea     rax, [rsp+88h+arg_30]
 * 00000001C00433B8: mov     [rsp+88h+var_50], rax
 * 00000001C00433BD: lea     rax, [rsp+88h+arg_28]
 * 00000001C00433C5: mov     [rsp+88h+var_58], rdi
 * 00000001C00433CA: mov     [rsp+88h+var_60], rax
 * 00000001C00433CF: mov     [rsp+88h+var_68], si
 * 00000001C00433D4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00433DB: nop     dword ptr [rax+rax+00h]
 * 00000001C00433E0: lea     r11, [rsp+88h+var_8]
 * 00000001C00433E8: mov     rbx, [r11+10h]
 * 00000001C00433EC: mov     rsi, [r11+18h]
 * 00000001C00433F0: mov     rsp, r11
 * 00000001C00433F3: pop     rdi
 * 00000001C00433F4: retn
 */
