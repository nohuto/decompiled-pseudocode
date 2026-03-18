/*
 * XREFs of PostIAMShellHookMessage @ 0x1C00D34E8
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C001067C (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C0066B58 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C00BE294 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserLayoutCompleted @ 0x1C00C5C40 (NtUserLayoutCompleted.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C0160 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C00D3520 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall PostIAMShellHookMessage(unsigned int a1)
{
  return PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), a1);
}
