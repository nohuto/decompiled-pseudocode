/*
 * XREFs of PopSetSystemState @ 0x1403A5EC0
 * Callers:
 *     PoSetUserPresent @ 0x1403A5E50 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x14056EFF0 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x1407D4000 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x140283D78 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1403A5F04 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1403A5FCC (PopDiagTraceSetSystemState.c)
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
