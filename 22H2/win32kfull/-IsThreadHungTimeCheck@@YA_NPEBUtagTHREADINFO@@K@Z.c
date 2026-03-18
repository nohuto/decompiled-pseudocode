/*
 * XREFs of ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0015B24 (xxxSwitchToThisWindow.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C004C7AC (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C0092F94 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00AE674 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x1C00BB338 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     xxxQueryInformationThread @ 0x1C00E21E4 (xxxQueryInformationThread.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02007D8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall IsThreadHungTimeCheck(const struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 267LL);
  v4 = *((_QWORD *)a1 + 56);
  return (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *(_DWORD *)(v4 + 20) > a2
      && (*(_DWORD *)(v4 + 16) & 0x1C07) == 0
      && !(unsigned int)PsGetThreadFreezeCount(*(_QWORD *)a1)
      && (*(_DWORD *)(*((_QWORD *)a1 + 53) + 12LL) & 0x40) == 0;
}
