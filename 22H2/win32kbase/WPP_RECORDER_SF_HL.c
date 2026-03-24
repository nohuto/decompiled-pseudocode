/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C01A1244
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0190D08 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01913D8 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197C28 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C01A1244
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A1244
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A1244: mov     r11, rsp
 * 00000001C01A1247: mov     [r11+8], rbx
 * 00000001C01A124B: push    rdi
 * 00000001C01A124C: sub     rsp, 50h
 * 00000001C01A1250: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A1257: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A125E: movzx   ebx, r9w
 * 00000001C01A1262: mov     eax, [rcx+2Ch]
 * 00000001C01A1265: test    al, 40h
 * 00000001C01A1267: jz      short loc_1C01A12B4
 * 00000001C01A1269: cmp     byte ptr [rcx+29h], 2
 * 00000001C01A126D: jb      short loc_1C01A12B4
 * 00000001C01A126F: and     qword ptr [r11-18h], 0
 * 00000001C01A1274: lea     rdx, [r11+38h]
 * 00000001C01A1278: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A127F: lea     r8, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1286: mov     rcx, [rcx+18h]
 * 00000001C01A128A: mov     r9d, ebx
 * 00000001C01A128D: mov     qword ptr [r11-20h], 4
 * 00000001C01A1295: mov     [r11-28h], rdx
 * 00000001C01A1299: lea     rdx, [r11+30h]
 * 00000001C01A129D: mov     qword ptr [r11-30h], 2
 * 00000001C01A12A5: mov     [r11-38h], rdx
 * 00000001C01A12A9: mov     edx, 2Bh ; '+'
 * 00000001C01A12AE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A12B4: and     [rsp+58h+var_10], 0
 * 00000001C01A12BA: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A12C2: mov     [rsp+58h+var_18], 4
 * 00000001C01A12CB: lea     r9, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A12D2: mov     [rsp+58h+var_20], rax
 * 00000001C01A12D7: mov     edx, 2
 * 00000001C01A12DC: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A12E4: mov     [rsp+58h+var_28], 2
 * 00000001C01A12ED: mov     [rsp+58h+var_30], rax
 * 00000001C01A12F2: mov     rcx, rdi
 * 00000001C01A12F5: mov     [rsp+58h+var_38], bx
 * 00000001C01A12FA: lea     r8d, [rdx+5]
 * 00000001C01A12FE: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A1305: nop     dword ptr [rax+rax+00h]
 * 00000001C01A130A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A130F: add     rsp, 50h
 * 00000001C01A1313: pop     rdi
 * 00000001C01A1314: retn
 */
