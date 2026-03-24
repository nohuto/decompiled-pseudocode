/*
 * XREFs of WPP_RECORDER_SF_DDDDD @ 0x1C003F810
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     TR_EnsureSegments @ 0x1C00098D0 (TR_EnsureSegments.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000DA60 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000DB28 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DBF8 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDD @ 0x1C003F810
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F810
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F810: mov     r11, rsp
 * 00000001C003F813: mov     [r11+8], rbx
 * 00000001C003F817: mov     [r11+10h], rbp
 * 00000001C003F81B: mov     [r11+18h], rsi
 * 00000001C003F81F: push    rdi
 * 00000001C003F820: sub     rsp, 80h
 * 00000001C003F827: mov     rsi, rcx
 * 00000001C003F82A: movzx   edi, r9w
 * 00000001C003F82E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F835: mov     ebp, 4
 * 00000001C003F83A: movzx   ebx, dl
 * 00000001C003F83D: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003F844: jz      short loc_1C003F8AB
 * 00000001C003F846: cmp     [rcx+29h], bl
 * 00000001C003F849: jb      short loc_1C003F8AB
 * 00000001C003F84B: and     qword ptr [r11-18h], 0
 * 00000001C003F850: lea     rdx, [r11+50h]
 * 00000001C003F854: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003F85B: mov     r9d, edi
 * 00000001C003F85E: mov     r8, [rsp+88h+arg_20]
 * 00000001C003F866: mov     rcx, [rcx+18h]
 * 00000001C003F86A: mov     [r11-20h], rbp
 * 00000001C003F86E: mov     [r11-28h], rdx
 * 00000001C003F872: lea     rdx, [r11+48h]
 * 00000001C003F876: mov     [r11-30h], rbp
 * 00000001C003F87A: mov     [r11-38h], rdx
 * 00000001C003F87E: lea     rdx, [r11+40h]
 * 00000001C003F882: mov     [r11-40h], rbp
 * 00000001C003F886: mov     [r11-48h], rdx
 * 00000001C003F88A: lea     rdx, [r11+38h]
 * 00000001C003F88E: mov     [r11-50h], rbp
 * 00000001C003F892: mov     [r11-58h], rdx
 * 00000001C003F896: lea     rdx, [r11+30h]
 * 00000001C003F89A: mov     [r11-60h], rbp
 * 00000001C003F89E: mov     [r11-68h], rdx
 * 00000001C003F8A2: lea     edx, [rbp+27h]
 * 00000001C003F8A5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F8AB: and     [rsp+88h+var_10], 0
 * 00000001C003F8B1: lea     rax, [rsp+88h+arg_48]
 * 00000001C003F8B9: mov     r9, [rsp+88h+arg_20]
 * 00000001C003F8C1: mov     r8d, 0Eh
 * 00000001C003F8C7: mov     [rsp+88h+var_18], rbp
 * 00000001C003F8CC: mov     edx, ebx
 * 00000001C003F8CE: mov     [rsp+88h+var_20], rax
 * 00000001C003F8D3: mov     rcx, rsi
 * 00000001C003F8D6: mov     [rsp+88h+var_28], rbp
 * 00000001C003F8DB: lea     rax, [rsp+88h+arg_40]
 * 00000001C003F8E3: mov     [rsp+88h+var_30], rax
 * 00000001C003F8E8: lea     rax, [rsp+88h+arg_38]
 * 00000001C003F8F0: mov     [rsp+88h+var_38], rbp
 * 00000001C003F8F5: mov     [rsp+88h+var_40], rax
 * 00000001C003F8FA: lea     rax, [rsp+88h+arg_30]
 * 00000001C003F902: mov     [rsp+88h+var_48], rbp
 * 00000001C003F907: mov     [rsp+88h+var_50], rax
 * 00000001C003F90C: lea     rax, [rsp+88h+arg_28]
 * 00000001C003F914: mov     [rsp+88h+var_58], rbp
 * 00000001C003F919: mov     [rsp+88h+var_60], rax
 * 00000001C003F91E: mov     [rsp+88h+var_68], di
 * 00000001C003F923: call    cs:__imp_WppAutoLogTrace
 * 00000001C003F92A: nop     dword ptr [rax+rax+00h]
 * 00000001C003F92F: lea     r11, [rsp+88h+var_8]
 * 00000001C003F937: mov     rbx, [r11+10h]
 * 00000001C003F93B: mov     rbp, [r11+18h]
 * 00000001C003F93F: mov     rsi, [r11+20h]
 * 00000001C003F943: mov     rsp, r11
 * 00000001C003F946: pop     rdi
 * 00000001C003F947: retn
 */
