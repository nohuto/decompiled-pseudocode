/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C01A131C
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195338 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C01978A8 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197C28 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019BA18 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019C468 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AD158 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C01A131C
 * Reason: Hex-Rays returned no pseudocode for 0x1C01A131C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01A131C: mov     [rsp+arg_0], rbx
 * 00000001C01A1321: mov     [rsp+arg_8], rbp
 * 00000001C01A1326: mov     [rsp+arg_10], rsi
 * 00000001C01A132B: push    rdi
 * 00000001C01A132C: sub     rsp, 40h
 * 00000001C01A1330: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01A1337: mov     esi, r8d
 * 00000001C01A133A: mov     r11d, r8d
 * 00000001C01A133D: shr     r11, 10h
 * 00000001C01A1341: movzx   edi, r9w
 * 00000001C01A1345: lea     r10d, [rsi-1]
 * 00000001C01A1349: movzx   ebx, dl
 * 00000001C01A134C: mov     ecx, r10d
 * 00000001C01A134F: and     r10d, 1Fh
 * 00000001C01A1353: shr     rcx, 5
 * 00000001C01A1357: lea     rax, [r11+r11*4]
 * 00000001C01A135B: and     ecx, 7FFh
 * 00000001C01A1361: lea     r9, [rcx+rax*4]
 * 00000001C01A1365: mov     ecx, r10d
 * 00000001C01A1368: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01A136F: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01A1374: bt      eax, ecx
 * 00000001C01A1377: jnb     short loc_1C01A13BF
 * 00000001C01A1379: lea     rcx, [r11+r11*4]
 * 00000001C01A137D: add     rcx, rcx
 * 00000001C01A1380: cmp     [r10+rcx*8+29h], bl
 * 00000001C01A1385: jb      short loc_1C01A13BF
 * 00000001C01A1387: and     [rsp+48h+var_18], 0
 * 00000001C01A138D: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01A1392: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01A1399: mov     r9d, edi
 * 00000001C01A139C: mov     r8, [rsp+48h+arg_20]
 * 00000001C01A13A1: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01A13A6: mov     [rsp+48h+var_20], 4
 * 00000001C01A13AF: mov     [rsp+48h+var_28], rdx
 * 00000001C01A13B4: mov     edx, 2Bh ; '+'
 * 00000001C01A13B9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01A13BF: and     [rsp+48h+var_10], 0
 * 00000001C01A13C5: lea     rax, [rsp+48h+arg_28]
 * 00000001C01A13CA: mov     r9, [rsp+48h+arg_20]
 * 00000001C01A13CF: mov     r8d, esi
 * 00000001C01A13D2: mov     [rsp+48h+var_18], 4
 * 00000001C01A13DB: mov     edx, ebx
 * 00000001C01A13DD: mov     [rsp+48h+var_20], rax
 * 00000001C01A13E2: mov     rcx, rbp
 * 00000001C01A13E5: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01A13EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C01A13F1: nop     dword ptr [rax+rax+00h]
 * 00000001C01A13F6: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01A13FB: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01A1400: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01A1405: add     rsp, 40h
 * 00000001C01A1409: pop     rdi
 * 00000001C01A140A: retn
 */
