/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C01A13EC
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195408 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0197978 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197CF8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019BAE8 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C538 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AD228 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C01A13EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A13EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A13EC: mov     [rsp+arg_0], rbx
 * 00000001C01A13F1: mov     [rsp+arg_8], rbp
 * 00000001C01A13F6: mov     [rsp+arg_10], rsi
 * 00000001C01A13FB: push    rdi
 * 00000001C01A13FC: sub     rsp, 40h
 * 00000001C01A1400: mov     rbp, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01A1407: mov     esi, r8d
 * 00000001C01A140A: mov     r11d, r8d
 * 00000001C01A140D: shr     r11, 10h
 * 00000001C01A1411: movzx   edi, r9w
 * 00000001C01A1415: lea     r10d, [rsi-1]
 * 00000001C01A1419: movzx   ebx, dl
 * 00000001C01A141C: mov     ecx, r10d
 * 00000001C01A141F: and     r10d, 1Fh
 * 00000001C01A1423: shr     rcx, 5
 * 00000001C01A1427: lea     rax, [r11+r11*4]
 * 00000001C01A142B: and     ecx, 7FFh
 * 00000001C01A1431: lea     r9, [rcx+rax*4]
 * 00000001C01A1435: mov     ecx, r10d
 * 00000001C01A1438: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01A143F: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01A1444: bt      eax, ecx
 * 00000001C01A1447: jnb     short loc_1C01A148F
 * 00000001C01A1449: lea     rcx, [r11+r11*4]
 * 00000001C01A144D: add     rcx, rcx
 * 00000001C01A1450: cmp     [r10+rcx*8+29h], bl
 * 00000001C01A1455: jb      short loc_1C01A148F
 * 00000001C01A1457: and     [rsp+48h+var_18], 0
 * 00000001C01A145D: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01A1462: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A1469: mov     r9d, edi
 * 00000001C01A146C: mov     r8, [rsp+48h+arg_20]
 * 00000001C01A1471: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01A1476: mov     [rsp+48h+var_20], 4
 * 00000001C01A147F: mov     [rsp+48h+var_28], rdx
 * 00000001C01A1484: mov     edx, 2Bh ; '+'
 * 00000001C01A1489: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A148F: and     [rsp+48h+var_10], 0
 * 00000001C01A1495: lea     rax, [rsp+48h+arg_28]
 * 00000001C01A149A: mov     r9, [rsp+48h+arg_20]
 * 00000001C01A149F: mov     r8d, esi
 * 00000001C01A14A2: mov     [rsp+48h+var_18], 4
 * 00000001C01A14AB: mov     edx, ebx
 * 00000001C01A14AD: mov     [rsp+48h+var_20], rax
 * 00000001C01A14B2: mov     rcx, rbp
 * 00000001C01A14B5: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01A14BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A14C1: nop     dword ptr [rax+rax+00h]
 * 00000001C01A14C6: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01A14CB: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01A14D0: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01A14D5: add     rsp, 40h
 * 00000001C01A14D9: pop     rdi
 * 00000001C01A14DA: retn
 */
