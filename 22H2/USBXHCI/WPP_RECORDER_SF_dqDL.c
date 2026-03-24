/*
 * XREFs of WPP_RECORDER_SF_dqdL @ 0x1C0047BB8
 * Callers:
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqdL @ 0x1C0047BB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047BB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047BB8: mov     r11, rsp
 * 00000001C0047BBB: mov     [r11+8], rbx
 * 00000001C0047BBF: mov     [r11+10h], rbp
 * 00000001C0047BC3: push    rdi
 * 00000001C0047BC4: sub     rsp, 70h
 * 00000001C0047BC8: mov     rbx, rcx
 * 00000001C0047BCB: mov     ebp, 19h
 * 00000001C0047BD0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047BD7: lea     edi, [rbp-15h]
 * 00000001C0047BDA: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0047BE1: jz      short loc_1C0047C41
 * 00000001C0047BE3: cmp     byte ptr [rcx+29h], 2
 * 00000001C0047BE7: jb      short loc_1C0047C41
 * 00000001C0047BE9: and     qword ptr [r11-18h], 0
 * 00000001C0047BEE: lea     rdx, [r11+48h]
 * 00000001C0047BF2: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0047BF9: lea     r8, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047C00: mov     rcx, [rcx+18h]
 * 00000001C0047C04: mov     [r11-20h], rdi
 * 00000001C0047C08: mov     [r11-28h], rdx
 * 00000001C0047C0C: lea     rdx, [r11+40h]
 * 00000001C0047C10: mov     [r11-30h], rdi
 * 00000001C0047C14: mov     [r11-38h], rdx
 * 00000001C0047C18: lea     rdx, [r11+38h]
 * 00000001C0047C1C: mov     qword ptr [r11-40h], 8
 * 00000001C0047C24: mov     [r11-48h], rdx
 * 00000001C0047C28: lea     rdx, [r11+30h]
 * 00000001C0047C2C: mov     [r11-50h], rdi
 * 00000001C0047C30: mov     [r11-58h], rdx
 * 00000001C0047C34: lea     edx, [rbp+12h]
 * 00000001C0047C37: movzx   r9d, bp
 * 00000001C0047C3B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047C41: and     [rsp+78h+var_10], 0
 * 00000001C0047C47: lea     rax, [rsp+78h+arg_40]
 * 00000001C0047C4F: mov     [rsp+78h+var_18], rdi
 * 00000001C0047C54: lea     r9, WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids
 * 00000001C0047C5B: mov     [rsp+78h+var_20], rax
 * 00000001C0047C60: mov     edx, 2
 * 00000001C0047C65: mov     [rsp+78h+var_28], rdi
 * 00000001C0047C6A: lea     rax, [rsp+78h+arg_38]
 * 00000001C0047C72: mov     [rsp+78h+var_30], rax
 * 00000001C0047C77: mov     rcx, rbx
 * 00000001C0047C7A: mov     [rsp+78h+var_38], 8
 * 00000001C0047C83: lea     rax, [rsp+78h+arg_30]
 * 00000001C0047C8B: mov     [rsp+78h+var_40], rax
 * 00000001C0047C90: lea     r8d, [rdx+0Ah]
 * 00000001C0047C94: lea     rax, [rsp+78h+arg_28]
 * 00000001C0047C9C: mov     [rsp+78h+var_48], rdi
 * 00000001C0047CA1: mov     [rsp+78h+var_50], rax
 * 00000001C0047CA6: mov     [rsp+78h+var_58], bp
 * 00000001C0047CAB: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047CB2: nop     dword ptr [rax+rax+00h]
 * 00000001C0047CB7: lea     r11, [rsp+78h+var_8]
 * 00000001C0047CBC: mov     rbx, [r11+10h]
 * 00000001C0047CC0: mov     rbp, [r11+18h]
 * 00000001C0047CC4: mov     rsp, r11
 * 00000001C0047CC7: pop     rdi
 * 00000001C0047CC8: retn
 */
