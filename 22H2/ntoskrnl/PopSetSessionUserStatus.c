/*
 * XREFs of PopSetSessionUserStatus @ 0x1407255E4
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x140725018 (PopConsoleSessionPassiveInput.c)
 *     PopSessionInputChange @ 0x140725094 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140772B48 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x1407799D8 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1408F5014 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408F515C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x140364318 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406F36C8 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x140725380 (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407256C8 (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1407257F8 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x1407D2414 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    LODWORD(qword_140C20580) = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
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
