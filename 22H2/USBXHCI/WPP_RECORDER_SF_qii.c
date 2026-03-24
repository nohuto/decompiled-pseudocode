/*
 * XREFs of WPP_RECORDER_SF_qii @ 0x1C002F608
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qii @ 0x1C002F608
 * Reason: Hex-Rays returned no pseudocode for 0x1C002F608
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002F608: mov     r11, rsp
 * 00000001C002F60B: mov     [r11+8], rbx
 * 00000001C002F60F: mov     [r11+10h], rsi
 * 00000001C002F613: push    rdi
 * 00000001C002F614: sub     rsp, 60h
 * 00000001C002F618: mov     rbx, rcx
 * 00000001C002F61B: mov     esi, 2Ch ; ','
 * 00000001C002F620: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002F627: lea     edi, [rsi-24h]
 * 00000001C002F62A: mov     eax, [rcx+2Ch]
 * 00000001C002F62D: test    al, 40h
 * 00000001C002F62F: jz      short loc_1C002F67F
 * 00000001C002F631: cmp     byte ptr [rcx+29h], 5
 * 00000001C002F635: jb      short loc_1C002F67F
 * 00000001C002F637: and     qword ptr [r11-18h], 0
 * 00000001C002F63C: lea     rdx, [r11+40h]
 * 00000001C002F640: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002F647: lea     r8, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C002F64E: mov     rcx, [rcx+18h]
 * 00000001C002F652: mov     [r11-20h], rdi
 * 00000001C002F656: mov     [r11-28h], rdx
 * 00000001C002F65A: lea     rdx, [r11+38h]
 * 00000001C002F65E: mov     [r11-30h], rdi
 * 00000001C002F662: mov     [r11-38h], rdx
 * 00000001C002F666: lea     rdx, [r11+30h]
 * 00000001C002F66A: mov     [r11-40h], rdi
 * 00000001C002F66E: mov     [r11-48h], rdx
 * 00000001C002F672: lea     edx, [rsi-1]
 * 00000001C002F675: movzx   r9d, si
 * 00000001C002F679: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F67F: and     [rsp+68h+var_10], 0
 * 00000001C002F685: lea     rax, [rsp+68h+arg_38]
 * 00000001C002F68D: mov     [rsp+68h+var_18], rdi
 * 00000001C002F692: lea     r9, WPP_72168dd6ef593f221f3405957586a4e9_Traceguids
 * 00000001C002F699: mov     [rsp+68h+var_20], rax
 * 00000001C002F69E: mov     edx, 5
 * 00000001C002F6A3: mov     [rsp+68h+var_28], rdi
 * 00000001C002F6A8: lea     rax, [rsp+68h+arg_30]
 * 00000001C002F6B0: mov     [rsp+68h+var_30], rax
 * 00000001C002F6B5: mov     rcx, rbx
 * 00000001C002F6B8: lea     rax, [rsp+68h+arg_28]
 * 00000001C002F6C0: mov     [rsp+68h+var_38], rdi
 * 00000001C002F6C5: mov     [rsp+68h+var_40], rax
 * 00000001C002F6CA: lea     r8d, [rdx+2]
 * 00000001C002F6CE: mov     [rsp+68h+var_48], si
 * 00000001C002F6D3: call    cs:__imp_WppAutoLogTrace
 * 00000001C002F6DA: nop     dword ptr [rax+rax+00h]
 * 00000001C002F6DF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C002F6E4: mov     rsi, [rsp+68h+arg_8]
 * 00000001C002F6E9: add     rsp, 60h
 * 00000001C002F6ED: pop     rdi
 * 00000001C002F6EE: retn
 */
