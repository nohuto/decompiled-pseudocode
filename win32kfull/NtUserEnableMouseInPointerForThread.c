/*
 * XREFs of NtUserEnableMouseInPointerForThread @ 0x1C00F51B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserEnableMouseInPointerForThread()
{
  EnterCrit(0LL, 0LL);
  *(_DWORD *)(gptiCurrent + 1272LL) |= 0x2000000u;
  UserSessionSwitchLeaveCrit(gptiCurrent);
  return 1LL;
}
