/*
 * XREFs of WPP_RECORDER_SF_dDd @ 0x1C003E7A0
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011E24 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDd @ 0x1C003E7A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C003E7A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003E7A0: mov     r11, rsp
 * 00000001C003E7A3: mov     [r11+8], rbx
 * 00000001C003E7A7: mov     [r11+10h], rsi
 * 00000001C003E7AB: push    rdi
 * 00000001C003E7AC: sub     rsp, 60h
 * 00000001C003E7B0: mov     rbx, rcx
 * 00000001C003E7B3: mov     esi, 0CBh
 * 00000001C003E7B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003E7BF: mov     edi, 4
 * 00000001C003E7C4: test    dword ptr [rcx+2Ch], 400h
 * 00000001C003E7CB: jz      short loc_1C003E81B
 * 00000001C003E7CD: cmp     byte ptr [rcx+29h], 3
 * 00000001C003E7D1: jb      short loc_1C003E81B
 * 00000001C003E7D3: and     qword ptr [r11-18h], 0
 * 00000001C003E7D8: lea     rdx, [r11+40h]
 * 00000001C003E7DC: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003E7E3: lea     r8, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003E7EA: mov     rcx, [rcx+18h]
 * 00000001C003E7EE: mov     [r11-20h], rdi
 * 00000001C003E7F2: mov     [r11-28h], rdx
 * 00000001C003E7F6: lea     rdx, [r11+38h]
 * 00000001C003E7FA: mov     [r11-30h], rdi
 * 00000001C003E7FE: mov     [r11-38h], rdx
 * 00000001C003E802: lea     rdx, [r11+30h]
 * 00000001C003E806: mov     [r11-40h], rdi
 * 00000001C003E80A: mov     [r11-48h], rdx
 * 00000001C003E80E: lea     edx, [rdi+27h]
 * 00000001C003E811: movzx   r9d, si
 * 00000001C003E815: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003E81B: and     [rsp+68h+var_10], 0
 * 00000001C003E821: lea     rax, [rsp+68h+arg_38]
 * 00000001C003E829: mov     [rsp+68h+var_18], rdi
 * 00000001C003E82E: lea     r9, WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids
 * 00000001C003E835: mov     [rsp+68h+var_20], rax
 * 00000001C003E83A: mov     edx, 3
 * 00000001C003E83F: mov     [rsp+68h+var_28], rdi
 * 00000001C003E844: lea     rax, [rsp+68h+arg_30]
 * 00000001C003E84C: mov     [rsp+68h+var_30], rax
 * 00000001C003E851: mov     rcx, rbx
 * 00000001C003E854: lea     rax, [rsp+68h+arg_28]
 * 00000001C003E85C: mov     [rsp+68h+var_38], rdi
 * 00000001C003E861: mov     [rsp+68h+var_40], rax
 * 00000001C003E866: lea     r8d, [rdx+8]
 * 00000001C003E86A: mov     [rsp+68h+var_48], si
 * 00000001C003E86F: call    cs:__imp_WppAutoLogTrace
 * 00000001C003E876: nop     dword ptr [rax+rax+00h]
 * 00000001C003E87B: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003E880: mov     rsi, [rsp+68h+arg_8]
 * 00000001C003E885: add     rsp, 60h
 * 00000001C003E889: pop     rdi
 * 00000001C003E88A: retn
 */
