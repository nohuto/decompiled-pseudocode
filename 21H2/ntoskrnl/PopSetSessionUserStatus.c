/*
 * XREFs of PopSetSessionUserStatus @ 0x14067D980
 * Callers:
 *     PopSessionInputChange @ 0x14067DE74 (PopSessionInputChange.c)
 *     PopConsoleSessionPassiveInput @ 0x14067E160 (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x140772E88 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x140779AD8 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1408F4FC4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408F510C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x14028411C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14067A8D8 (PopSetPowerSettingValue.c)
 *     PopEvaluateGlobalUserStatus @ 0x14067DA64 (PopEvaluateGlobalUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x14067DB94 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x14067DC44 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x1407D24F4 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( (_DWORD)PopConsoleContext == a1 && a1 != -1 )
    LODWORD(qword_140C205A0) = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE);
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
