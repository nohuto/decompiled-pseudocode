/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C01A1510
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018F788 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018F944 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0190A74 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0191054 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0191200 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0194A30 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C468 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FDA8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C01A1510
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A1510
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A1510: mov     r11, rsp
 * 00000001C01A1513: mov     [r11+8], rbx
 * 00000001C01A1517: mov     [r11+10h], rbp
 * 00000001C01A151B: mov     [r11+18h], rsi
 * 00000001C01A151F: push    rdi
 * 00000001C01A1520: sub     rsp, 50h
 * 00000001C01A1524: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01A152B: mov     ebp, 4
 * 00000001C01A1530: mov     rsi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A1537: movzx   edi, r9w
 * 00000001C01A153B: movzx   ebx, dl
 * 00000001C01A153E: mov     eax, [rcx+2Ch]
 * 00000001C01A1541: test    al, 40h
 * 00000001C01A1543: jz      short loc_1C01A1585
 * 00000001C01A1545: cmp     [rcx+29h], bl
 * 00000001C01A1548: jb      short loc_1C01A1585
 * 00000001C01A154A: and     qword ptr [r11-18h], 0
 * 00000001C01A154F: lea     rdx, [r11+38h]
 * 00000001C01A1553: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A155A: lea     r8, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A1561: mov     rcx, [rcx+18h]
 * 00000001C01A1565: mov     r9d, edi
 * 00000001C01A1568: mov     [r11-20h], rbp
 * 00000001C01A156C: mov     [r11-28h], rdx
 * 00000001C01A1570: lea     rdx, [r11+30h]
 * 00000001C01A1574: mov     [r11-30h], rbp
 * 00000001C01A1578: mov     [r11-38h], rdx
 * 00000001C01A157C: lea     edx, [rbp+27h]
 * 00000001C01A157F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A1585: and     [rsp+58h+var_10], 0
 * 00000001C01A158B: lea     rax, [rsp+58h+arg_30]
 * 00000001C01A1593: mov     [rsp+58h+var_18], rbp
 * 00000001C01A1598: lea     r9, WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids
 * 00000001C01A159F: mov     [rsp+58h+var_20], rax
 * 00000001C01A15A4: mov     r8d, 7
 * 00000001C01A15AA: lea     rax, [rsp+58h+arg_28]
 * 00000001C01A15B2: mov     [rsp+58h+var_28], rbp
 * 00000001C01A15B7: mov     [rsp+58h+var_30], rax
 * 00000001C01A15BC: mov     edx, ebx
 * 00000001C01A15BE: mov     rcx, rsi
 * 00000001C01A15C1: mov     [rsp+58h+var_38], di
 * 00000001C01A15C6: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A15CD: nop     dword ptr [rax+rax+00h]
 * 00000001C01A15D2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01A15D7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01A15DC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01A15E1: add     rsp, 50h
 * 00000001C01A15E5: pop     rdi
 * 00000001C01A15E6: retn
 */
