/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C004F430
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0027BBC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C002DB24 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C730 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C003CFF0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DAA8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C004D7B4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C004F0E4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     CancelForegroundActivate @ 0x1C004F7F0 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00662E8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D8838 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     UserJobCallout @ 0x1C0114020 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C01141E0 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C0114264 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C0114670 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D2510 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     zzzShowStartGlass @ 0x1C01D3520 (zzzShowStartGlass.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020FAD4 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0211E0C (xxxInitializeMoveSizeData.c)
 *     xxxMoveSize @ 0x1C0212874 (xxxMoveSize.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021B138 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B750 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021BB6C (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDF4 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021C0E8 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021C148 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C021CC90 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021CCF4 (xxxDDETrackGetMessageHook.c)
 *     xxxFreeDdeConv @ 0x1C021D748 (xxxFreeDdeConv.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023D70C (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023D7AC (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023D808 (_anonymous_namespace_--WindowSizingUpdate.c)
 *     xxxHardErrorControl @ 0x1C0241E6C (xxxHardErrorControl.c)
 *     xxxDragObject @ 0x1C0248694 (xxxDragObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C004F430
 * Reason: Hex-Rays returned no pseudocode for 0x1C004F430
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004F430: mov     [rsp+arg_0], rbx
 * 00000001C004F435: mov     [rsp+arg_8], rbp
 * 00000001C004F43A: mov     [rsp+arg_10], rsi
 * 00000001C004F43F: push    rdi
 * 00000001C004F440: sub     rsp, 40h
 * 00000001C004F444: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C004F44B: mov     esi, r8d
 * 00000001C004F44E: mov     r11d, r8d
 * 00000001C004F451: shr     r11, 10h
 * 00000001C004F455: movzx   edi, r9w
 * 00000001C004F459: lea     r10d, [rsi-1]
 * 00000001C004F45D: movzx   ebx, dl
 * 00000001C004F460: mov     ecx, r10d
 * 00000001C004F463: and     r10d, 1Fh
 * 00000001C004F467: shr     rcx, 5
 * 00000001C004F46B: lea     rax, [r11+r11*4]
 * 00000001C004F46F: and     ecx, 7FFh
 * 00000001C004F475: lea     r9, [rcx+rax*4]
 * 00000001C004F479: mov     ecx, r10d
 * 00000001C004F47C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004F483: mov     eax, [r10+r9*4+2Ch]
 * 00000001C004F488: bt      eax, ecx
 * 00000001C004F48B: jb      loc_1C0187512
 * 00000001C004F491: and     [rsp+48h+var_10], 0
 * 00000001C004F497: lea     rax, [rsp+48h+arg_28]
 * 00000001C004F49C: mov     r9, [rsp+48h+arg_20]
 * 00000001C004F4A1: mov     r8d, esi
 * 00000001C004F4A4: mov     [rsp+48h+var_18], 8
 * 00000001C004F4AD: mov     edx, ebx
 * 00000001C004F4AF: mov     [rsp+48h+var_20], rax
 * 00000001C004F4B4: mov     rcx, rbp
 * 00000001C004F4B7: mov     word ptr [rsp+48h+var_28], di
 * 00000001C004F4BC: call    cs:__imp_WppAutoLogTrace
 * 00000001C004F4C3: nop     dword ptr [rax+rax+00h]
 * 00000001C004F4C8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C004F4CD: mov     rbp, [rsp+48h+arg_8]
 * 00000001C004F4D2: mov     rsi, [rsp+48h+arg_10]
 * 00000001C004F4D7: add     rsp, 40h
 * 00000001C004F4DB: pop     rdi
 * 00000001C004F4DC: retn
 * 00000001C0187512: lea     rcx, [r11+r11*4]
 * 00000001C0187516: add     rcx, rcx
 * 00000001C0187519: cmp     [r10+rcx*8+29h], bl
 * 00000001C018751E: jb      loc_1C004F491
 * 00000001C0187524: and     [rsp+48h+var_18], 0
 * 00000001C018752A: lea     rdx, [rsp+48h+arg_28]
 * 00000001C018752F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0187536: mov     r9d, edi
 * 00000001C0187539: mov     r8, [rsp+48h+arg_20]
 * 00000001C018753E: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0187543: mov     [rsp+48h+var_20], 8
 * 00000001C018754C: mov     [rsp+48h+var_28], rdx
 * 00000001C0187551: mov     edx, 2Bh ; '+'
 * 00000001C0187556: call    cs:__guard_dispatch_icall_fptr
 * 00000001C018755C: nop
 * 00000001C018755D: jmp     loc_1C004F491
 */
