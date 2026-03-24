/*
 * XREFs of WPP_RECORDER_SF_DDqDD @ 0x1C0040B40
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002730 (Isoch_Stage_Find.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C000508C (Control_Transfer_ValidateBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDD @ 0x1C0040B40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040B40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040B40: mov     r11, rsp
 * 00000001C0040B43: mov     [r11+8], rbx
 * 00000001C0040B47: mov     [r11+10h], rsi
 * 00000001C0040B4B: push    rdi
 * 00000001C0040B4C: sub     rsp, 80h
 * 00000001C0040B53: mov     rdi, rcx
 * 00000001C0040B56: movzx   ebx, r9w
 * 00000001C0040B5A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040B61: mov     esi, 4
 * 00000001C0040B66: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0040B6D: jz      short loc_1C0040BD9
 * 00000001C0040B6F: cmp     byte ptr [rcx+29h], 2
 * 00000001C0040B73: jb      short loc_1C0040BD9
 * 00000001C0040B75: and     qword ptr [r11-18h], 0
 * 00000001C0040B7A: lea     rdx, [r11+50h]
 * 00000001C0040B7E: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0040B85: mov     r9d, ebx
 * 00000001C0040B88: mov     r8, [rsp+88h+arg_20]
 * 00000001C0040B90: mov     rcx, [rcx+18h]
 * 00000001C0040B94: mov     [r11-20h], rsi
 * 00000001C0040B98: mov     [r11-28h], rdx
 * 00000001C0040B9C: lea     rdx, [r11+48h]
 * 00000001C0040BA0: mov     [r11-30h], rsi
 * 00000001C0040BA4: mov     [r11-38h], rdx
 * 00000001C0040BA8: lea     rdx, [r11+40h]
 * 00000001C0040BAC: mov     qword ptr [r11-40h], 8
 * 00000001C0040BB4: mov     [r11-48h], rdx
 * 00000001C0040BB8: lea     rdx, [r11+38h]
 * 00000001C0040BBC: mov     [r11-50h], rsi
 * 00000001C0040BC0: mov     [r11-58h], rdx
 * 00000001C0040BC4: lea     rdx, [r11+30h]
 * 00000001C0040BC8: mov     [r11-60h], rsi
 * 00000001C0040BCC: mov     [r11-68h], rdx
 * 00000001C0040BD0: lea     edx, [rsi+27h]
 * 00000001C0040BD3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040BD9: and     [rsp+88h+var_10], 0
 * 00000001C0040BDF: lea     rax, [rsp+88h+arg_48]
 * 00000001C0040BE7: mov     r9, [rsp+88h+arg_20]
 * 00000001C0040BEF: mov     edx, 2
 * 00000001C0040BF4: mov     [rsp+88h+var_18], rsi
 * 00000001C0040BF9: mov     rcx, rdi
 * 00000001C0040BFC: mov     [rsp+88h+var_20], rax
 * 00000001C0040C01: lea     rax, [rsp+88h+arg_40]
 * 00000001C0040C09: mov     [rsp+88h+var_28], rsi
 * 00000001C0040C0E: mov     [rsp+88h+var_30], rax
 * 00000001C0040C13: lea     r8d, [rdx+0Ch]
 * 00000001C0040C17: mov     [rsp+88h+var_38], 8
 * 00000001C0040C20: lea     rax, [rsp+88h+arg_38]
 * 00000001C0040C28: mov     [rsp+88h+var_40], rax
 * 00000001C0040C2D: lea     rax, [rsp+88h+arg_30]
 * 00000001C0040C35: mov     [rsp+88h+var_48], rsi
 * 00000001C0040C3A: mov     [rsp+88h+var_50], rax
 * 00000001C0040C3F: lea     rax, [rsp+88h+arg_28]
 * 00000001C0040C47: mov     [rsp+88h+var_58], rsi
 * 00000001C0040C4C: mov     [rsp+88h+var_60], rax
 * 00000001C0040C51: mov     [rsp+88h+var_68], bx
 * 00000001C0040C56: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040C5D: nop     dword ptr [rax+rax+00h]
 * 00000001C0040C62: lea     r11, [rsp+88h+var_8]
 * 00000001C0040C6A: mov     rbx, [r11+10h]
 * 00000001C0040C6E: mov     rsi, [r11+18h]
 * 00000001C0040C72: mov     rsp, r11
 * 00000001C0040C75: pop     rdi
 * 00000001C0040C76: retn
 */
