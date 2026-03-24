/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C004D9D8
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006CCC (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C000AA2C (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0013324 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034370 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     NtUserEnableIAMAccess @ 0x1C00376F0 (NtUserEnableIAMAccess.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003AEEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003BF08 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     CheckAllowForeground @ 0x1C003C200 (CheckAllowForeground.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C690 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C003D134 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DA08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     PostShellHookMessagesEx @ 0x1C0043558 (PostShellHookMessagesEx.c)
 *     xxxDCompSpeedHitTest @ 0x1C004CE8C (xxxDCompSpeedHitTest.c)
 *     NtUserProcessConnect @ 0x1C004D1F0 (NtUserProcessConnect.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C004D714 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     CancelForegroundActivate @ 0x1C004F750 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0066248 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     NtUserSendInput @ 0x1C00C00F0 (NtUserSendInput.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C010316C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C0103524 (xxxInternalKeyEventDirect.c)
 *     EditionDeactivateMitInput @ 0x1C010B710 (EditionDeactivateMitInput.c)
 *     UserJobCallout @ 0x1C0113CA0 (UserJobCallout.c)
 *     xxxFullScreenCleanup @ 0x1C0119760 (xxxFullScreenCleanup.c)
 *     xxxRemoteDisconnect @ 0x1C01280E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C01284B0 (xxxRemoteStopScreenUpdates.c)
 *     RemoteDisableScreen @ 0x1C01286A0 (RemoteDisableScreen.c)
 *     EditionUnloadCursorsAndIcons @ 0x1C012C140 (EditionUnloadCursorsAndIcons.c)
 *     InitClipFormatExceptionList @ 0x1C012E5B0 (InitClipFormatExceptionList.c)
 *     xxxConnectService @ 0x1C012F194 (xxxConnectService.c)
 *     NtUserAcquireIAMKey @ 0x1C0134220 (NtUserAcquireIAMKey.c)
 *     InitClipboardILDef @ 0x1C0134680 (InitClipboardILDef.c)
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 *     RemoteRedrawScreen @ 0x1C0162DB4 (RemoteRedrawScreen.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D1F50 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     _AllowForegroundActivation @ 0x1C01D2CD0 (_AllowForegroundActivation.c)
 *     zzzShowStartGlass @ 0x1C01D2F60 (zzzShowStartGlass.c)
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF0D4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01EFCC4 (_DelegateCapturePointers.c)
 *     NtUserInjectTouchInput @ 0x1C01FD7E0 (NtUserInjectTouchInput.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020E8F0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AA34 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C021AAA0 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AB0C (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021ACB8 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021ADD0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B7B0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B834 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B9F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BC5C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BE00 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BF70 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C260 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C31C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C400 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C734 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C021CACC (xxxDDETrackPostHook.c)
 *     RemoteRedrawRectangle @ 0x1C021DFCC (RemoteRedrawRectangle.c)
 *     xxxbFullscreenSwitch @ 0x1C021E2EC (xxxbFullscreenSwitch.c)
 *     CtxDisplayIOCtl @ 0x1C0225CA4 (CtxDisplayIOCtl.c)
 *     RemoteLogoff @ 0x1C0225DC0 (RemoteLogoff.c)
 *     RemotePassthruDisable @ 0x1C0225E40 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0225F40 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0226110 (RemoteShadowStart.c)
 *     RemoteThinwireStats @ 0x1C02262C0 (RemoteThinwireStats.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C0226450 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0226970 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0226C60 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0226DD0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0226E50 (xxxRemoteShadowStop.c)
 *     InitMessageTables @ 0x1C0392D70 (InitMessageTables.c)
 *     InitFunctionTables @ 0x1C0393850 (InitFunctionTables.c)
 *     InitOLEFormats @ 0x1C0393CC0 (InitOLEFormats.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C004D9D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C004D9D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004D9D8: mov     [rsp+arg_0], rbx
 * 00000001C004D9DD: mov     [rsp+arg_8], rbp
 * 00000001C004D9E2: mov     [rsp+arg_10], rsi
 * 00000001C004D9E7: push    rdi
 * 00000001C004D9E8: sub     rsp, 30h
 * 00000001C004D9EC: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C004D9F3: mov     esi, r8d
 * 00000001C004D9F6: mov     r11d, r8d
 * 00000001C004D9F9: shr     r11, 10h
 * 00000001C004D9FD: movzx   edi, r9w
 * 00000001C004DA01: lea     r10d, [rsi-1]
 * 00000001C004DA05: movzx   ebx, dl
 * 00000001C004DA08: mov     ecx, r10d
 * 00000001C004DA0B: and     r10d, 1Fh
 * 00000001C004DA0F: shr     rcx, 5
 * 00000001C004DA13: lea     rax, [r11+r11*4]
 * 00000001C004DA17: and     ecx, 7FFh
 * 00000001C004DA1D: lea     r9, [rcx+rax*4]
 * 00000001C004DA21: mov     ecx, r10d
 * 00000001C004DA24: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004DA2B: mov     eax, [r10+r9*4+2Ch]
 * 00000001C004DA30: bt      eax, ecx
 * 00000001C004DA33: jb      loc_1C0186748
 * 00000001C004DA39: and     [rsp+38h+var_10], 0
 * 00000001C004DA3F: mov     r8d, esi
 * 00000001C004DA42: mov     r9, [rsp+38h+arg_20]
 * 00000001C004DA47: mov     edx, ebx
 * 00000001C004DA49: mov     rcx, rbp
 * 00000001C004DA4C: mov     word ptr [rsp+38h+var_18], di
 * 00000001C004DA51: call    cs:__imp_WppAutoLogTrace
 * 00000001C004DA58: nop     dword ptr [rax+rax+00h]
 * 00000001C004DA5D: mov     rbx, [rsp+38h+arg_0]
 * 00000001C004DA62: mov     rbp, [rsp+38h+arg_8]
 * 00000001C004DA67: mov     rsi, [rsp+38h+arg_10]
 * 00000001C004DA6C: add     rsp, 30h
 * 00000001C004DA70: pop     rdi
 * 00000001C004DA71: retn
 * 00000001C0186748: lea     rcx, [r11+r11*4]
 * 00000001C018674C: add     rcx, rcx
 * 00000001C018674F: cmp     [r10+rcx*8+29h], bl
 * 00000001C0186754: jb      loc_1C004DA39
 * 00000001C018675A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0186761: mov     r9d, edi
 * 00000001C0186764: and     [rsp+38h+var_18], 0
 * 00000001C018676A: mov     edx, 2Bh ; '+'
 * 00000001C018676F: mov     r8, [rsp+38h+arg_20]
 * 00000001C0186774: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0186779: call    cs:__guard_dispatch_icall_fptr
 * 00000001C018677F: nop
 * 00000001C0186780: jmp     loc_1C004DA39
 */
