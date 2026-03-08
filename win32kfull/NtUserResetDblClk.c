/*
 * XREFs of NtUserResetDblClk @ 0x1C01DAEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserResetDblClk()
{
  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 168LL) = 0;
  UserSessionSwitchLeaveCrit(gptiCurrent);
  return 1LL;
}
