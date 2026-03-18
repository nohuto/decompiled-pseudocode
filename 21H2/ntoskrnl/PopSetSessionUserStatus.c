/*
 * XREFs of PopSetSessionUserStatus @ 0x1407EF430
 * Callers:
 *     PopSessionDisconnected @ 0x1407EC2C8 (PopSessionDisconnected.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1407EF258 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveGetRemoteSessionState @ 0x14081C8E0 (PopAdaptiveGetRemoteSessionState.c)
 * Callees:
 *     PopPrintEx @ 0x140369B48 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407EF514 (PopEvaluateGlobalUserStatus.c)
 *     PopDiagTraceSessionState @ 0x1407EF650 (PopDiagTraceSessionState.c)
 *     PopPrintUserActivityPresence @ 0x1407EF6BC (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x14081D3C0 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_140C1F3B8 == a1 && a1 != -1 )
    dword_140C1F3BC = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionState(&POP_ETW_ADPM_SESSION_INPUT_STATE);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0, 4u, &Src);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1, 4u, &Src);
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
      PopExtendConnectionState(a1);
    if ( PopMaximumConnectionSessions )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
      else
        _bittestandset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
    }
  }
  return PopEvaluateGlobalUserStatus();
}
