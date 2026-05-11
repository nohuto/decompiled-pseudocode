/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C00090E4
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009920 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C00090E4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00090E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00090E4: mov     rax, rsp
 * 00000001C00090E7: mov     [rax+8], rbx
 * 00000001C00090EB: mov     [rax+10h], rbp
 * 00000001C00090EF: mov     [rax+18h], rsi
 * 00000001C00090F3: mov     [rax+20h], rdi
 * 00000001C00090F7: push    r12
 * 00000001C00090F9: sub     rsp, 40h
 * 00000001C00090FD: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0009104: lea     rsi, aNull; "NULL"
 * 00000001C000910B: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0009110: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0009114: mov     rbp, rcx
 * 00000001C0009117: test    dword ptr [rax+2Ch], 100h
 * 00000001C000911E: lea     r12d, [rbx+21h]
 * 00000001C0009122: jz      short loc_1C0009181
 * 00000001C0009124: test    rdi, rdi
 * 00000001C0009127: jz      short loc_1C000913A
 * 00000001C0009129: mov     rdx, rbx
 * 00000001C000912C: inc     rdx
 * 00000001C000912F: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0009133: jnz     short loc_1C000912C
 * 00000001C0009135: inc     rdx
 * 00000001C0009138: jmp     short loc_1C000913F
 * 00000001C000913A: mov     edx, 5
 * 00000001C000913F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009146: lea     r8, WPP_2758cf178eb33941c178507ca09d62b1_Traceguids
 * 00000001C000914D: test    rdi, rdi
 * 00000001C0009150: movzx   r9d, r12w
 * 00000001C0009154: mov     rcx, rsi
 * 00000001C0009157: cmovnz  rcx, rdi
 * 00000001C000915B: and     [rsp+48h+var_18], 0
 * 00000001C0009161: mov     [rsp+48h+var_20], rdx
 * 00000001C0009166: mov     edx, 2Bh ; '+'
 * 00000001C000916B: mov     [rsp+48h+var_28], rcx
 * 00000001C0009170: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0009177: mov     rcx, [rcx+18h]
 * 00000001C000917B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009181: test    rdi, rdi
 * 00000001C0009184: jz      short loc_1C0009194
 * 00000001C0009186: inc     rbx
 * 00000001C0009189: cmp     byte ptr [rdi+rbx], 0
 * 00000001C000918D: jnz     short loc_1C0009186
 * 00000001C000918F: inc     rbx
 * 00000001C0009192: jmp     short loc_1C0009199
 * 00000001C0009194: mov     ebx, 5
 * 00000001C0009199: test    rdi, rdi
 * 00000001C000919C: lea     r9, WPP_2758cf178eb33941c178507ca09d62b1_Traceguids
 * 00000001C00091A3: mov     rcx, rbp
 * 00000001C00091A6: cmovnz  rsi, rdi
 * 00000001C00091AA: and     [rsp+48h+var_10], 0
 * 00000001C00091B0: xor     edx, edx
 * 00000001C00091B2: mov     [rsp+48h+var_18], rbx
 * 00000001C00091B7: mov     [rsp+48h+var_20], rsi
 * 00000001C00091BC: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C00091C2: lea     r8d, [rdx+9]
 * 00000001C00091C6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00091CD: nop     dword ptr [rax+rax+00h]
 * 00000001C00091D2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00091D7: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00091DC: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00091E1: mov     rdi, [rsp+48h+arg_18]
 * 00000001C00091E6: add     rsp, 40h
 * 00000001C00091EA: pop     r12
 * 00000001C00091EC: retn
 */
