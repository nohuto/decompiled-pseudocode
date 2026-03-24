/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C01A1314
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0190DD8 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C01914A8 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197CF8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C01A1314
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A1314
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A1314: mov     r11, rsp
 * 00000001C01A1317: mov     [r11+8], rbx
 * 00000001C01A131B: push    rdi
 * 00000001C01A131C: sub     rsp, 50h
 * 00000001C01A1320: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A1327: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01A132E: movzx   ebx, r9w
 * 00000001C01A1332: mov     eax, [rcx+2Ch]
 * 00000001C01A1335: test    al, 40h
 * 00000001C01A1337: jz      short loc_1C01A1384
 * 00000001C01A1339: cmp     byte ptr [rcx+29h], 2
 * 00000001C01A133D: jb      short loc_1C01A1384
 * 00000001C01A133F: and     qword ptr [r11-18h], 0
 * 00000001C01A1344: lea     rdx, [r11+38h]
 * 00000001C01A1348: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A134F: lea     r8, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1356: mov     rcx, [rcx+18h]
 * 00000001C01A135A: mov     r9d, ebx
 * 00000001C01A135D: mov     qword ptr [r11-20h], 4
 * 00000001C01A1365: mov     [r11-28h], rdx
 * 00000001C01A1369: lea     rdx, [r11+30h]
 * 00000001C01A136D: mov     qword ptr [r11-30h], 2
 * 00000001C01A1375: mov     [r11-38h], rdx
 * 00000001C01A1379: mov     edx, 2Bh ; '+'
 * 00000001C01A137E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A1384: and     [rsp+58h+var_10], 0
 * 00000001C01A138A: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A1392: mov     [rsp+58h+var_18], 4
 * 00000001C01A139B: lea     r9, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A13A2: mov     [rsp+58h+var_20], rax
 * 00000001C01A13A7: mov     edx, 2
 * 00000001C01A13AC: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A13B4: mov     [rsp+58h+var_28], 2
 * 00000001C01A13BD: mov     [rsp+58h+var_30], rax
 * 00000001C01A13C2: mov     rcx, rdi
 * 00000001C01A13C5: mov     [rsp+58h+var_38], bx
 * 00000001C01A13CA: lea     r8d, [rdx+5]
 * 00000001C01A13CE: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A13D5: nop     dword ptr [rax+rax+00h]
 * 00000001C01A13DA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A13DF: add     rsp, 50h
 * 00000001C01A13E3: pop     rdi
 * 00000001C01A13E4: retn
 */
