/*
 * XREFs of ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C00E2134
 * Callers:
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x1C000EDD4 (-Execute@ShellHangDetection@@YAXXZ.c)
 *     xxxSwitchToThisWindow @ 0x1C0014D74 (xxxSwitchToThisWindow.c)
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0097C84 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C009B94C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0203380 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
