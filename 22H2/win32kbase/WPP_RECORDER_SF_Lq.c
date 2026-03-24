/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C01A16E4
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AE48 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019F9D8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C01A16E4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A16E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A16E4: mov     r11, rsp
 * 00000001C01A16E7: mov     [r11+8], rbx
 * 00000001C01A16EB: push    rdi
 * 00000001C01A16EC: sub     rsp, 50h
 * 00000001C01A16F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A16F7: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A16FE: movzx   ebx, r9w
 * 00000001C01A1702: mov     eax, [rcx+2Ch]
 * 00000001C01A1705: test    al, 40h
 * 00000001C01A1707: jz      short loc_1C01A1754
 * 00000001C01A1709: cmp     byte ptr [rcx+29h], 2
 * 00000001C01A170D: jb      short loc_1C01A1754
 * 00000001C01A170F: and     qword ptr [r11-18h], 0
 * 00000001C01A1714: lea     rdx, [r11+38h]
 * 00000001C01A1718: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A171F: lea     r8, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1726: mov     rcx, [rcx+18h]
 * 00000001C01A172A: mov     r9d, ebx
 * 00000001C01A172D: mov     qword ptr [r11-20h], 8
 * 00000001C01A1735: mov     [r11-28h], rdx
 * 00000001C01A1739: lea     rdx, [r11+30h]
 * 00000001C01A173D: mov     qword ptr [r11-30h], 4
 * 00000001C01A1745: mov     [r11-38h], rdx
 * 00000001C01A1749: mov     edx, 2Bh ; '+'
 * 00000001C01A174E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A1754: and     [rsp+58h+var_10], 0
 * 00000001C01A175A: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A1762: mov     [rsp+58h+var_18], 8
 * 00000001C01A176B: lea     r9, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1772: mov     [rsp+58h+var_20], rax
 * 00000001C01A1777: mov     edx, 2
 * 00000001C01A177C: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A1784: mov     [rsp+58h+var_28], 4
 * 00000001C01A178D: mov     [rsp+58h+var_30], rax
 * 00000001C01A1792: mov     rcx, rdi
 * 00000001C01A1795: mov     [rsp+58h+var_38], bx
 * 00000001C01A179A: lea     r8d, [rdx+5]
 * 00000001C01A179E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A17A5: nop     dword ptr [rax+rax+00h]
 * 00000001C01A17AA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A17AF: add     rsp, 50h
 * 00000001C01A17B3: pop     rdi
 * 00000001C01A17B4: retn
 */
