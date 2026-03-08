/*
 * XREFs of PopSetSystemState @ 0x14058BA7C
 * Callers:
 *     PoSetSystemState @ 0x14058B8D0 (PoSetSystemState.c)
 *     PoSetUserPresent @ 0x14058B920 (PoSetUserPresent.c)
 *     PopAllowAwayModeSettingCallback @ 0x140860360 (PopAllowAwayModeSettingCallback.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     PopResetIdleTime @ 0x1403AF6E8 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x14058BAC4 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x14059255C (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // rdx

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime(3LL, v5);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
