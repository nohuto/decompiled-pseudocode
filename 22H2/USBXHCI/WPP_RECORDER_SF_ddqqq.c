/*
 * XREFs of WPP_RECORDER_SF_ddqqq @ 0x1C003B710
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0038520 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C00386B0 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqq @ 0x1C003B710
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B710
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B710: mov     r11, rsp
 * 00000001C003B713: mov     [r11+8], rbx
 * 00000001C003B717: mov     [r11+10h], rbp
 * 00000001C003B71B: mov     [r11+18h], rsi
 * 00000001C003B71F: push    rdi
 * 00000001C003B720: sub     rsp, 80h
 * 00000001C003B727: mov     rdi, rcx
 * 00000001C003B72A: movzx   ebx, r9w
 * 00000001C003B72E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B735: mov     esi, 4
 * 00000001C003B73A: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003B741: lea     ebp, [rsi+4]
 * 00000001C003B744: jz      short loc_1C003B7AB
 * 00000001C003B746: cmp     [rcx+29h], sil
 * 00000001C003B74A: jb      short loc_1C003B7AB
 * 00000001C003B74C: and     qword ptr [r11-18h], 0
 * 00000001C003B751: lea     rdx, [r11+50h]
 * 00000001C003B755: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003B75C: lea     r8, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003B763: mov     rcx, [rcx+18h]
 * 00000001C003B767: mov     r9d, ebx
 * 00000001C003B76A: mov     [r11-20h], rbp
 * 00000001C003B76E: mov     [r11-28h], rdx
 * 00000001C003B772: lea     rdx, [r11+48h]
 * 00000001C003B776: mov     [r11-30h], rbp
 * 00000001C003B77A: mov     [r11-38h], rdx
 * 00000001C003B77E: lea     rdx, [r11+40h]
 * 00000001C003B782: mov     [r11-40h], rbp
 * 00000001C003B786: mov     [r11-48h], rdx
 * 00000001C003B78A: lea     rdx, [r11+38h]
 * 00000001C003B78E: mov     [r11-50h], rsi
 * 00000001C003B792: mov     [r11-58h], rdx
 * 00000001C003B796: lea     rdx, [r11+30h]
 * 00000001C003B79A: mov     [r11-60h], rsi
 * 00000001C003B79E: mov     [r11-68h], rdx
 * 00000001C003B7A2: lea     edx, [rsi+27h]
 * 00000001C003B7A5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B7AB: and     [rsp+88h+var_10], 0
 * 00000001C003B7B1: lea     rax, [rsp+88h+arg_48]
 * 00000001C003B7B9: mov     [rsp+88h+var_18], rbp
 * 00000001C003B7BE: lea     r9, WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids
 * 00000001C003B7C5: mov     [rsp+88h+var_20], rax
 * 00000001C003B7CA: mov     r8d, 0Dh
 * 00000001C003B7D0: mov     [rsp+88h+var_28], rbp
 * 00000001C003B7D5: lea     rax, [rsp+88h+arg_40]
 * 00000001C003B7DD: mov     [rsp+88h+var_30], rax
 * 00000001C003B7E2: mov     edx, esi
 * 00000001C003B7E4: mov     [rsp+88h+var_38], rbp
 * 00000001C003B7E9: lea     rax, [rsp+88h+arg_38]
 * 00000001C003B7F1: mov     [rsp+88h+var_40], rax
 * 00000001C003B7F6: mov     rcx, rdi
 * 00000001C003B7F9: mov     [rsp+88h+var_48], rsi
 * 00000001C003B7FE: lea     rax, [rsp+88h+arg_30]
 * 00000001C003B806: mov     [rsp+88h+var_50], rax
 * 00000001C003B80B: lea     rax, [rsp+88h+arg_28]
 * 00000001C003B813: mov     [rsp+88h+var_58], rsi
 * 00000001C003B818: mov     [rsp+88h+var_60], rax
 * 00000001C003B81D: mov     [rsp+88h+var_68], bx
 * 00000001C003B822: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B829: nop     dword ptr [rax+rax+00h]
 * 00000001C003B82E: lea     r11, [rsp+88h+var_8]
 * 00000001C003B836: mov     rbx, [r11+10h]
 * 00000001C003B83A: mov     rbp, [r11+18h]
 * 00000001C003B83E: mov     rsi, [r11+20h]
 * 00000001C003B842: mov     rsp, r11
 * 00000001C003B845: pop     rdi
 * 00000001C003B846: retn
 */
