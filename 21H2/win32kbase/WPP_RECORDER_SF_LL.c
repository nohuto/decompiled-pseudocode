/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C01A15E0
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018F858 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018FA14 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0190B44 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0191124 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01912D0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0194B00 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C538 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FE78 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C01A15E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A15E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A15E0: mov     r11, rsp
 * 00000001C01A15E3: mov     [r11+8], rbx
 * 00000001C01A15E7: mov     [r11+10h], rbp
 * 00000001C01A15EB: mov     [r11+18h], rsi
 * 00000001C01A15EF: push    rdi
 * 00000001C01A15F0: sub     rsp, 50h
 * 00000001C01A15F4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A15FB: mov     ebp, 4
 * 00000001C01A1600: mov     rsi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01A1607: movzx   edi, r9w
 * 00000001C01A160B: movzx   ebx, dl
 * 00000001C01A160E: mov     eax, [rcx+2Ch]
 * 00000001C01A1611: test    al, 40h
 * 00000001C01A1613: jz      short loc_1C01A1655
 * 00000001C01A1615: cmp     [rcx+29h], bl
 * 00000001C01A1618: jb      short loc_1C01A1655
 * 00000001C01A161A: and     qword ptr [r11-18h], 0
 * 00000001C01A161F: lea     rdx, [r11+38h]
 * 00000001C01A1623: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A162A: lea     r8, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1631: mov     rcx, [rcx+18h]
 * 00000001C01A1635: mov     r9d, edi
 * 00000001C01A1638: mov     [r11-20h], rbp
 * 00000001C01A163C: mov     [r11-28h], rdx
 * 00000001C01A1640: lea     rdx, [r11+30h]
 * 00000001C01A1644: mov     [r11-30h], rbp
 * 00000001C01A1648: mov     [r11-38h], rdx
 * 00000001C01A164C: lea     edx, [rbp+27h]
 * 00000001C01A164F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A1655: and     [rsp+58h+var_10], 0
 * 00000001C01A165B: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A1663: mov     [rsp+58h+var_18], rbp
 * 00000001C01A1668: lea     r9, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A166F: mov     [rsp+58h+var_20], rax
 * 00000001C01A1674: mov     r8d, 7
 * 00000001C01A167A: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A1682: mov     [rsp+58h+var_28], rbp
 * 00000001C01A1687: mov     [rsp+58h+var_30], rax
 * 00000001C01A168C: mov     edx, ebx
 * 00000001C01A168E: mov     rcx, rsi
 * 00000001C01A1691: mov     [rsp+58h+var_38], di
 * 00000001C01A1696: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A169D: nop     dword ptr [rax+rax+00h]
 * 00000001C01A16A2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A16A7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01A16AC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01A16B1: add     rsp, 50h
 * 00000001C01A16B5: pop     rdi
 * 00000001C01A16B6: retn
 */
