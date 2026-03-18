/*
 * XREFs of NtUserClearWakeMask @ 0x1C01F1E10
 * Callers:
 *     <none>
 * Callees:
 *     xxxClearWakeMask @ 0x1C01D9F44 (xxxClearWakeMask.c)
 */

__int64 NtUserClearWakeMask()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxClearWakeMask();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
