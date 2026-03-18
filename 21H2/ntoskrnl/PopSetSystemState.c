/*
 * XREFs of PopSetSystemState @ 0x140368E90
 * Callers:
 *     PoSetUserPresent @ 0x140368E20 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1405CFE90 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140863D20 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopUserPresentSet @ 0x140368ED4 (PopUserPresentSet.c)
 *     PopResetIdleTime @ 0x140368F70 (PopResetIdleTime.c)
 *     PopDiagTraceSetSystemState @ 0x140369030 (PopDiagTraceSetSystemState.c)
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
      result = PopResetIdleTime(3LL);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
