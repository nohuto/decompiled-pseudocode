/*
 * XREFs of WPP_RECORDER_SF_DDDd @ 0x1C003F950
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 *     TR_Create @ 0x1C006AD7C (TR_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDd @ 0x1C003F950
 * Reason: Hex-Rays returned no pseudocode for 0x1C003F950
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003F950: mov     r11, rsp
 * 00000001C003F953: mov     [r11+8], rbx
 * 00000001C003F957: mov     [r11+10h], rbp
 * 00000001C003F95B: mov     [r11+18h], rsi
 * 00000001C003F95F: push    rdi
 * 00000001C003F960: sub     rsp, 70h
 * 00000001C003F964: mov     rsi, rcx
 * 00000001C003F967: movzx   edi, r9w
 * 00000001C003F96B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003F972: mov     ebp, 4
 * 00000001C003F977: movzx   ebx, dl
 * 00000001C003F97A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003F981: jz      short loc_1C003F9DC
 * 00000001C003F983: cmp     [rcx+29h], bl
 * 00000001C003F986: jb      short loc_1C003F9DC
 * 00000001C003F988: and     qword ptr [r11-18h], 0
 * 00000001C003F98D: lea     rdx, [r11+48h]
 * 00000001C003F991: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003F998: mov     r9d, edi
 * 00000001C003F99B: mov     r8, [rsp+78h+arg_20]
 * 00000001C003F9A3: mov     rcx, [rcx+18h]
 * 00000001C003F9A7: mov     [r11-20h], rbp
 * 00000001C003F9AB: mov     [r11-28h], rdx
 * 00000001C003F9AF: lea     rdx, [r11+40h]
 * 00000001C003F9B3: mov     [r11-30h], rbp
 * 00000001C003F9B7: mov     [r11-38h], rdx
 * 00000001C003F9BB: lea     rdx, [r11+38h]
 * 00000001C003F9BF: mov     [r11-40h], rbp
 * 00000001C003F9C3: mov     [r11-48h], rdx
 * 00000001C003F9C7: lea     rdx, [r11+30h]
 * 00000001C003F9CB: mov     [r11-50h], rbp
 * 00000001C003F9CF: mov     [r11-58h], rdx
 * 00000001C003F9D3: lea     edx, [rbp+27h]
 * 00000001C003F9D6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003F9DC: and     [rsp+78h+var_10], 0
 * 00000001C003F9E2: lea     rax, [rsp+78h+arg_40]
 * 00000001C003F9EA: mov     r9, [rsp+78h+arg_20]
 * 00000001C003F9F2: mov     r8d, 0Eh
 * 00000001C003F9F8: mov     [rsp+78h+var_18], rbp
 * 00000001C003F9FD: mov     edx, ebx
 * 00000001C003F9FF: mov     [rsp+78h+var_20], rax
 * 00000001C003FA04: mov     rcx, rsi
 * 00000001C003FA07: mov     [rsp+78h+var_28], rbp
 * 00000001C003FA0C: lea     rax, [rsp+78h+arg_38]
 * 00000001C003FA14: mov     [rsp+78h+var_30], rax
 * 00000001C003FA19: lea     rax, [rsp+78h+arg_30]
 * 00000001C003FA21: mov     [rsp+78h+var_38], rbp
 * 00000001C003FA26: mov     [rsp+78h+var_40], rax
 * 00000001C003FA2B: lea     rax, [rsp+78h+arg_28]
 * 00000001C003FA33: mov     [rsp+78h+var_48], rbp
 * 00000001C003FA38: mov     [rsp+78h+var_50], rax
 * 00000001C003FA3D: mov     [rsp+78h+var_58], di
 * 00000001C003FA42: call    cs:__imp_WppAutoLogTrace
 * 00000001C003FA49: nop     dword ptr [rax+rax+00h]
 * 00000001C003FA4E: lea     r11, [rsp+78h+var_8]
 * 00000001C003FA53: mov     rbx, [r11+10h]
 * 00000001C003FA57: mov     rbp, [r11+18h]
 * 00000001C003FA5B: mov     rsi, [r11+20h]
 * 00000001C003FA5F: mov     rsp, r11
 * 00000001C003FA62: pop     rdi
 * 00000001C003FA63: retn
 */
