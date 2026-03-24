/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C00307D8
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C0015DF0 (CommonBuffer_WorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C00307D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00307D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00307D8: mov     r11, rsp
 * 00000001C00307DB: mov     [r11+8], rbx
 * 00000001C00307DF: mov     [r11+10h], rbp
 * 00000001C00307E3: push    rdi
 * 00000001C00307E4: sub     rsp, 60h
 * 00000001C00307E8: mov     rbx, rcx
 * 00000001C00307EB: mov     ebp, 0Eh
 * 00000001C00307F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00307F7: lea     edi, [rbp-6]
 * 00000001C00307FA: mov     eax, [rcx+2Ch]
 * 00000001C00307FD: test    al, al
 * 00000001C00307FF: jns     short loc_1C0030853
 * 00000001C0030801: cmp     byte ptr [rcx+29h], 5
 * 00000001C0030805: jb      short loc_1C0030853
 * 00000001C0030807: and     qword ptr [r11-18h], 0
 * 00000001C003080C: lea     rdx, [r11+40h]
 * 00000001C0030810: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0030817: lea     r8, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C003081E: mov     rcx, [rcx+18h]
 * 00000001C0030822: mov     qword ptr [r11-20h], 4
 * 00000001C003082A: mov     [r11-28h], rdx
 * 00000001C003082E: lea     rdx, [r11+38h]
 * 00000001C0030832: mov     [r11-30h], rdi
 * 00000001C0030836: mov     [r11-38h], rdx
 * 00000001C003083A: lea     rdx, [r11+30h]
 * 00000001C003083E: mov     [r11-40h], rdi
 * 00000001C0030842: mov     [r11-48h], rdx
 * 00000001C0030846: lea     edx, [rbp+1Dh]
 * 00000001C0030849: movzx   r9d, bp
 * 00000001C003084D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0030853: and     [rsp+68h+var_10], 0
 * 00000001C0030859: lea     rax, [rsp+68h+arg_38]
 * 00000001C0030861: mov     [rsp+68h+var_18], 4
 * 00000001C003086A: lea     r9, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C0030871: mov     [rsp+68h+var_20], rax
 * 00000001C0030876: mov     r8d, edi
 * 00000001C0030879: mov     [rsp+68h+var_28], rdi
 * 00000001C003087E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0030886: mov     [rsp+68h+var_30], rax
 * 00000001C003088B: mov     edx, 5
 * 00000001C0030890: lea     rax, [rsp+68h+arg_28]
 * 00000001C0030898: mov     [rsp+68h+var_38], rdi
 * 00000001C003089D: mov     [rsp+68h+var_40], rax
 * 00000001C00308A2: mov     rcx, rbx
 * 00000001C00308A5: mov     [rsp+68h+var_48], bp
 * 00000001C00308AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00308B1: nop     dword ptr [rax+rax+00h]
 * 00000001C00308B6: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00308BB: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00308C0: add     rsp, 60h
 * 00000001C00308C4: pop     rdi
 * 00000001C00308C5: retn
 */
