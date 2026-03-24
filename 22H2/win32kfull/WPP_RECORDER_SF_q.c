/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C004F390
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0027B1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C002DA84 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C690 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C003CF50 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DA08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C004D714 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C004F044 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     CancelForegroundActivate @ 0x1C004F750 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0066248 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     UserJobCallout @ 0x1C0113CA0 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C0113E60 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C0113EE4 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C01142F0 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D1F50 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     zzzShowStartGlass @ 0x1C01D2F60 (zzzShowStartGlass.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F514 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C021184C (xxxInitializeMoveSizeData.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021AB78 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021B5AC (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B834 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C021BB28 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C021C6D0 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C734 (xxxDDETrackGetMessageHook.c)
 *     xxxFreeDdeConv @ 0x1C021D188 (xxxFreeDdeConv.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023D14C (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023D1EC (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023D248 (_anonymous_namespace_--WindowSizingUpdate.c)
 *     xxxHardErrorControl @ 0x1C02418AC (xxxHardErrorControl.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C004F390
 * Reason: Hex-Rays returned no pseudocode for 0x1C004F390
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004F390: mov     [rsp+arg_0], rbx
 * 00000001C004F395: mov     [rsp+arg_8], rbp
 * 00000001C004F39A: mov     [rsp+arg_10], rsi
 * 00000001C004F39F: push    rdi
 * 00000001C004F3A0: sub     rsp, 40h
 * 00000001C004F3A4: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C004F3AB: mov     esi, r8d
 * 00000001C004F3AE: mov     r11d, r8d
 * 00000001C004F3B1: shr     r11, 10h
 * 00000001C004F3B5: movzx   edi, r9w
 * 00000001C004F3B9: lea     r10d, [rsi-1]
 * 00000001C004F3BD: movzx   ebx, dl
 * 00000001C004F3C0: mov     ecx, r10d
 * 00000001C004F3C3: and     r10d, 1Fh
 * 00000001C004F3C7: shr     rcx, 5
 * 00000001C004F3CB: lea     rax, [r11+r11*4]
 * 00000001C004F3CF: and     ecx, 7FFh
 * 00000001C004F3D5: lea     r9, [rcx+rax*4]
 * 00000001C004F3D9: mov     ecx, r10d
 * 00000001C004F3DC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004F3E3: mov     eax, [r10+r9*4+2Ch]
 * 00000001C004F3E8: bt      eax, ecx
 * 00000001C004F3EB: jb      loc_1C0186B92
 * 00000001C004F3F1: and     [rsp+48h+var_10], 0
 * 00000001C004F3F7: lea     rax, [rsp+48h+arg_28]
 * 00000001C004F3FC: mov     r9, [rsp+48h+arg_20]
 * 00000001C004F401: mov     r8d, esi
 * 00000001C004F404: mov     [rsp+48h+var_18], 8
 * 00000001C004F40D: mov     edx, ebx
 * 00000001C004F40F: mov     [rsp+48h+var_20], rax
 * 00000001C004F414: mov     rcx, rbp
 * 00000001C004F417: mov     word ptr [rsp+48h+var_28], di
 * 00000001C004F41C: call    cs:__imp_WppAutoLogTrace
 * 00000001C004F423: nop     dword ptr [rax+rax+00h]
 * 00000001C004F428: mov     rbx, [rsp+48h+arg_0]
 * 00000001C004F42D: mov     rbp, [rsp+48h+arg_8]
 * 00000001C004F432: mov     rsi, [rsp+48h+arg_10]
 * 00000001C004F437: add     rsp, 40h
 * 00000001C004F43B: pop     rdi
 * 00000001C004F43C: retn
 * 00000001C0186B92: lea     rcx, [r11+r11*4]
 * 00000001C0186B96: add     rcx, rcx
 * 00000001C0186B99: cmp     [r10+rcx*8+29h], bl
 * 00000001C0186B9E: jb      loc_1C004F3F1
 * 00000001C0186BA4: and     [rsp+48h+var_18], 0
 * 00000001C0186BAA: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0186BAF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0186BB6: mov     r9d, edi
 * 00000001C0186BB9: mov     r8, [rsp+48h+arg_20]
 * 00000001C0186BBE: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0186BC3: mov     [rsp+48h+var_20], 8
 * 00000001C0186BCC: mov     [rsp+48h+var_28], rdx
 * 00000001C0186BD1: mov     edx, 2Bh ; '+'
 * 00000001C0186BD6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0186BDC: nop
 * 00000001C0186BDD: jmp     loc_1C004F3F1
 */
