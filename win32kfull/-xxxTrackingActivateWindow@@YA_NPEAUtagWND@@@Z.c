/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01AF5F8
 * Callers:
 *     xxxActiveWindowTracking @ 0x1C01B83D0 (xxxActiveWindowTracking.c)
 * Callees:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     IsForegroundWindow @ 0x1C00C8988 (IsForegroundWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1)
{
  bool result; // al

  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3621);
  result = IsForegroundWindow((__int64)a1);
  if ( !result )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground )
      return anonymous_namespace_::xxxLocalActivateWindow(a1, 0, ~((unsigned int)gpdwCPUserPreferencesMask >> 5) & 2);
    else
      return (unsigned int)xxxSetForegroundWindow2(
                             (__int64)a1,
                             0LL,
                             ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 4) & 4 | 2u) != 0;
  }
  return result;
}
