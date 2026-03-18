/*
 * XREFs of NtUserSetCursorContents @ 0x1C01FCDF0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 NtUserSetCursorContents()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 0LL);
  MicrosoftTelemetryAssertTriggeredNoArgsKM();
  UserSessionSwitchLeaveCrit(v0);
  return 0LL;
}
