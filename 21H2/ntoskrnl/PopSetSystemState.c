/*
 * XREFs of PopSetSystemState @ 0x1403A6010
 * Callers:
 *     PoSetUserPresent @ 0x1403A5FA0 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x14056F230 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x1407D4170 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x14024EAF0 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1403A6054 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1403A611C (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime();
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
