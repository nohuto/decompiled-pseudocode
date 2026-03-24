/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C004DA78
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006CCC (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C000AA2C (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0013324 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     NtUserEnableIAMAccess @ 0x1C0037790 (NtUserEnableIAMAccess.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003AF8C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003BFA8 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     CheckAllowForeground @ 0x1C003C2A0 (CheckAllowForeground.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C730 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CB30 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C003D1D4 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DAA8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     PostShellHookMessagesEx @ 0x1C00435F8 (PostShellHookMessagesEx.c)
 *     xxxDCompSpeedHitTest @ 0x1C004CF2C (xxxDCompSpeedHitTest.c)
 *     NtUserProcessConnect @ 0x1C004D290 (NtUserProcessConnect.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C004D7B4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     CancelForegroundActivate @ 0x1C004F7F0 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00662E8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     NtUserSendInput @ 0x1C00C0450 (NtUserSendInput.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D8838 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C0103874 (xxxInternalKeyEventDirect.c)
 *     EditionDeactivateMitInput @ 0x1C010BA90 (EditionDeactivateMitInput.c)
 *     UserJobCallout @ 0x1C0114020 (UserJobCallout.c)
 *     xxxFullScreenCleanup @ 0x1C0119AE0 (xxxFullScreenCleanup.c)
 *     xxxRemoteDisconnect @ 0x1C0128460 (xxxRemoteDisconnect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0128830 (xxxRemoteStopScreenUpdates.c)
 *     RemoteDisableScreen @ 0x1C0128A20 (RemoteDisableScreen.c)
 *     EditionUnloadCursorsAndIcons @ 0x1C012C4F0 (EditionUnloadCursorsAndIcons.c)
 *     InitClipFormatExceptionList @ 0x1C012E960 (InitClipFormatExceptionList.c)
 *     xxxConnectService @ 0x1C012F544 (xxxConnectService.c)
 *     NtUserAcquireIAMKey @ 0x1C01345D0 (NtUserAcquireIAMKey.c)
 *     InitClipboardILDef @ 0x1C0134A30 (InitClipboardILDef.c)
 *     xxxRemoteReconnect @ 0x1C0162570 (xxxRemoteReconnect.c)
 *     RemoteRedrawScreen @ 0x1C0163584 (RemoteRedrawScreen.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D2510 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     _AllowForegroundActivation @ 0x1C01D3290 (_AllowForegroundActivation.c)
 *     zzzShowStartGlass @ 0x1C01D3520 (zzzShowStartGlass.c)
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF694 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01F0284 (_DelegateCapturePointers.c)
 *     NtUserInjectTouchInput @ 0x1C01FDDA0 (NtUserInjectTouchInput.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020EEB0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AFF4 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C021B060 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021B0CC (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B278 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B390 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B4D8 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B750 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BD70 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDF4 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BFB0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C21C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C3C0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C530 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C820 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C8DC (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9C0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021CCF4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C021D08C (xxxDDETrackPostHook.c)
 *     RemoteRedrawRectangle @ 0x1C021E58C (RemoteRedrawRectangle.c)
 *     xxxbFullscreenSwitch @ 0x1C021E8AC (xxxbFullscreenSwitch.c)
 *     CtxDisplayIOCtl @ 0x1C0226264 (CtxDisplayIOCtl.c)
 *     RemoteLogoff @ 0x1C0226380 (RemoteLogoff.c)
 *     RemotePassthruDisable @ 0x1C0226400 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0226500 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02266D0 (RemoteShadowStart.c)
 *     RemoteThinwireStats @ 0x1C0226880 (RemoteThinwireStats.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C0226A10 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0226F30 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0227220 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0227390 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0227410 (xxxRemoteShadowStop.c)
 *     InitMessageTables @ 0x1C0393D70 (InitMessageTables.c)
 *     InitFunctionTables @ 0x1C0394850 (InitFunctionTables.c)
 *     InitOLEFormats @ 0x1C0394CC0 (InitOLEFormats.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C004DA78
 * Reason: Hex-Rays returned no pseudocode for 0x1C004DA78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004DA78: mov     [rsp+arg_0], rbx
 * 00000001C004DA7D: mov     [rsp+arg_8], rbp
 * 00000001C004DA82: mov     [rsp+arg_10], rsi
 * 00000001C004DA87: push    rdi
 * 00000001C004DA88: sub     rsp, 30h
 * 00000001C004DA8C: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C004DA93: mov     esi, r8d
 * 00000001C004DA96: mov     r11d, r8d
 * 00000001C004DA99: shr     r11, 10h
 * 00000001C004DA9D: movzx   edi, r9w
 * 00000001C004DAA1: lea     r10d, [rsi-1]
 * 00000001C004DAA5: movzx   ebx, dl
 * 00000001C004DAA8: mov     ecx, r10d
 * 00000001C004DAAB: and     r10d, 1Fh
 * 00000001C004DAAF: shr     rcx, 5
 * 00000001C004DAB3: lea     rax, [r11+r11*4]
 * 00000001C004DAB7: and     ecx, 7FFh
 * 00000001C004DABD: lea     r9, [rcx+rax*4]
 * 00000001C004DAC1: mov     ecx, r10d
 * 00000001C004DAC4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004DACB: mov     eax, [r10+r9*4+2Ch]
 * 00000001C004DAD0: bt      eax, ecx
 * 00000001C004DAD3: jb      loc_1C01870C8
 * 00000001C004DAD9: and     [rsp+38h+var_10], 0
 * 00000001C004DADF: mov     r8d, esi
 * 00000001C004DAE2: mov     r9, [rsp+38h+arg_20]
 * 00000001C004DAE7: mov     edx, ebx
 * 00000001C004DAE9: mov     rcx, rbp
 * 00000001C004DAEC: mov     word ptr [rsp+38h+var_18], di
 * 00000001C004DAF1: call    cs:__imp_WppAutoLogTrace
 * 00000001C004DAF8: nop     dword ptr [rax+rax+00h]
 * 00000001C004DAFD: mov     rbx, [rsp+38h+arg_0]
 * 00000001C004DB02: mov     rbp, [rsp+38h+arg_8]
 * 00000001C004DB07: mov     rsi, [rsp+38h+arg_10]
 * 00000001C004DB0C: add     rsp, 30h
 * 00000001C004DB10: pop     rdi
 * 00000001C004DB11: retn
 * 00000001C01870C8: lea     rcx, [r11+r11*4]
 * 00000001C01870CC: add     rcx, rcx
 * 00000001C01870CF: cmp     [r10+rcx*8+29h], bl
 * 00000001C01870D4: jb      loc_1C004DAD9
 * 00000001C01870DA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01870E1: mov     r9d, edi
 * 00000001C01870E4: and     [rsp+38h+var_18], 0
 * 00000001C01870EA: mov     edx, 2Bh ; '+'
 * 00000001C01870EF: mov     r8, [rsp+38h+arg_20]
 * 00000001C01870F4: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01870F9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01870FF: nop
 * 00000001C0187100: jmp     loc_1C004DAD9
 */
