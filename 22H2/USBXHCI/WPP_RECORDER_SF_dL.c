/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003C904
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C170 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003C904
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C904
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C904: mov     r11, rsp
 * 00000001C003C907: mov     [r11+8], rbx
 * 00000001C003C90B: mov     [r11+10h], rsi
 * 00000001C003C90F: push    rdi
 * 00000001C003C910: sub     rsp, 50h
 * 00000001C003C914: mov     rbx, rcx
 * 00000001C003C917: mov     esi, 0Eh
 * 00000001C003C91C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C923: lea     edi, [rsi-0Ah]
 * 00000001C003C926: mov     eax, [rcx+2Ch]
 * 00000001C003C929: test    al, 10h
 * 00000001C003C92B: jz      short loc_1C003C96F
 * 00000001C003C92D: cmp     byte ptr [rcx+29h], 3
 * 00000001C003C931: jb      short loc_1C003C96F
 * 00000001C003C933: and     qword ptr [r11-18h], 0
 * 00000001C003C938: lea     rdx, [r11+38h]
 * 00000001C003C93C: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C003C943: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003C94A: mov     rcx, [rcx+18h]
 * 00000001C003C94E: mov     [r11-20h], rdi
 * 00000001C003C952: mov     [r11-28h], rdx
 * 00000001C003C956: lea     rdx, [r11+30h]
 * 00000001C003C95A: mov     [r11-30h], rdi
 * 00000001C003C95E: mov     [r11-38h], rdx
 * 00000001C003C962: lea     edx, [rsi+1Dh]
 * 00000001C003C965: movzx   r9d, si
 * 00000001C003C969: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C96F: and     [rsp+58h+var_10], 0
 * 00000001C003C975: lea     rax, [rsp+58h+arg_30]
 * 00000001C003C97D: mov     [rsp+58h+var_18], rdi
 * 00000001C003C982: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003C989: mov     [rsp+58h+var_20], rax
 * 00000001C003C98E: mov     edx, 3
 * 00000001C003C993: lea     rax, [rsp+58h+arg_28]
 * 00000001C003C99B: mov     [rsp+58h+var_28], rdi
 * 00000001C003C9A0: mov     [rsp+58h+var_30], rax
 * 00000001C003C9A5: mov     rcx, rbx
 * 00000001C003C9A8: mov     [rsp+58h+var_38], si
 * 00000001C003C9AD: lea     r8d, [rdx+2]
 * 00000001C003C9B1: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C9B8: nop     dword ptr [rax+rax+00h]
 * 00000001C003C9BD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003C9C2: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003C9C7: add     rsp, 50h
 * 00000001C003C9CB: pop     rdi
 * 00000001C003C9CC: retn
 */
