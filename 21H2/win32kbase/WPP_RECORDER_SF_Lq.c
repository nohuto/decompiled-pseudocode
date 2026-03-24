/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C01A17B4
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AF18 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019FAA8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C01A17B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A17B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A17B4: mov     r11, rsp
 * 00000001C01A17B7: mov     [r11+8], rbx
 * 00000001C01A17BB: push    rdi
 * 00000001C01A17BC: sub     rsp, 50h
 * 00000001C01A17C0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A17C7: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01A17CE: movzx   ebx, r9w
 * 00000001C01A17D2: mov     eax, [rcx+2Ch]
 * 00000001C01A17D5: test    al, 40h
 * 00000001C01A17D7: jz      short loc_1C01A1824
 * 00000001C01A17D9: cmp     byte ptr [rcx+29h], 2
 * 00000001C01A17DD: jb      short loc_1C01A1824
 * 00000001C01A17DF: and     qword ptr [r11-18h], 0
 * 00000001C01A17E4: lea     rdx, [r11+38h]
 * 00000001C01A17E8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A17EF: lea     r8, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A17F6: mov     rcx, [rcx+18h]
 * 00000001C01A17FA: mov     r9d, ebx
 * 00000001C01A17FD: mov     qword ptr [r11-20h], 8
 * 00000001C01A1805: mov     [r11-28h], rdx
 * 00000001C01A1809: lea     rdx, [r11+30h]
 * 00000001C01A180D: mov     qword ptr [r11-30h], 4
 * 00000001C01A1815: mov     [r11-38h], rdx
 * 00000001C01A1819: mov     edx, 2Bh ; '+'
 * 00000001C01A181E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A1824: and     [rsp+58h+var_10], 0
 * 00000001C01A182A: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A1832: mov     [rsp+58h+var_18], 8
 * 00000001C01A183B: lea     r9, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1842: mov     [rsp+58h+var_20], rax
 * 00000001C01A1847: mov     edx, 2
 * 00000001C01A184C: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A1854: mov     [rsp+58h+var_28], 4
 * 00000001C01A185D: mov     [rsp+58h+var_30], rax
 * 00000001C01A1862: mov     rcx, rdi
 * 00000001C01A1865: mov     [rsp+58h+var_38], bx
 * 00000001C01A186A: lea     r8d, [rdx+5]
 * 00000001C01A186E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A1875: nop     dword ptr [rax+rax+00h]
 * 00000001C01A187A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A187F: add     rsp, 50h
 * 00000001C01A1883: pop     rdi
 * 00000001C01A1884: retn
 */
