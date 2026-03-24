/*
 * XREFs of WPP_RECORDER_SF_cccc @ 0x1C003E59C
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C006F400 (RootHub_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_cccc @ 0x1C003E59C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003E59C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003E59C: mov     r11, rsp
 * 00000001C003E59F: mov     [r11+8], rbx
 * 00000001C003E5A3: mov     [r11+10h], rsi
 * 00000001C003E5A7: push    rdi
 * 00000001C003E5A8: sub     rsp, 70h
 * 00000001C003E5AC: mov     rbx, rcx
 * 00000001C003E5AF: mov     esi, 19h
 * 00000001C003E5B4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003E5BB: lea     edi, [rsi-18h]
 * 00000001C003E5BE: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003E5C5: jz      short loc_1C003E621
 * 00000001C003E5C7: cmp     byte ptr [rcx+29h], 2
 * 00000001C003E5CB: jb      short loc_1C003E621
 * 00000001C003E5CD: and     qword ptr [r11-18h], 0
 * 00000001C003E5D2: lea     rdx, [r11+48h]
 * 00000001C003E5D6: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003E5DD: lea     r8, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003E5E4: mov     rcx, [rcx+18h]
 * 00000001C003E5E8: mov     [r11-20h], rdi
 * 00000001C003E5EC: mov     [r11-28h], rdx
 * 00000001C003E5F0: lea     rdx, [r11+40h]
 * 00000001C003E5F4: mov     [r11-30h], rdi
 * 00000001C003E5F8: mov     [r11-38h], rdx
 * 00000001C003E5FC: lea     rdx, [r11+38h]
 * 00000001C003E600: mov     [r11-40h], rdi
 * 00000001C003E604: mov     [r11-48h], rdx
 * 00000001C003E608: lea     rdx, [r11+30h]
 * 00000001C003E60C: mov     [r11-50h], rdi
 * 00000001C003E610: mov     [r11-58h], rdx
 * 00000001C003E614: lea     edx, [rsi+12h]
 * 00000001C003E617: movzx   r9d, si
 * 00000001C003E61B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003E621: and     [rsp+78h+var_10], 0
 * 00000001C003E627: lea     rax, [rsp+78h+arg_40]
 * 00000001C003E62F: mov     [rsp+78h+var_18], rdi
 * 00000001C003E634: lea     r9, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003E63B: mov     [rsp+78h+var_20], rax
 * 00000001C003E640: mov     edx, 2
 * 00000001C003E645: mov     [rsp+78h+var_28], rdi
 * 00000001C003E64A: lea     rax, [rsp+78h+arg_38]
 * 00000001C003E652: mov     [rsp+78h+var_30], rax
 * 00000001C003E657: mov     rcx, rbx
 * 00000001C003E65A: mov     [rsp+78h+var_38], rdi
 * 00000001C003E65F: lea     rax, [rsp+78h+arg_30]
 * 00000001C003E667: mov     [rsp+78h+var_40], rax
 * 00000001C003E66C: lea     r8d, [rdx+9]
 * 00000001C003E670: lea     rax, [rsp+78h+arg_28]
 * 00000001C003E678: mov     [rsp+78h+var_48], rdi
 * 00000001C003E67D: mov     [rsp+78h+var_50], rax
 * 00000001C003E682: mov     [rsp+78h+var_58], si
 * 00000001C003E687: call    cs:__imp_WppAutoLogTrace
 * 00000001C003E68E: nop     dword ptr [rax+rax+00h]
 * 00000001C003E693: lea     r11, [rsp+78h+var_8]
 * 00000001C003E698: mov     rbx, [r11+10h]
 * 00000001C003E69C: mov     rsi, [r11+18h]
 * 00000001C003E6A0: mov     rsp, r11
 * 00000001C003E6A3: pop     rdi
 * 00000001C003E6A4: retn
 */
