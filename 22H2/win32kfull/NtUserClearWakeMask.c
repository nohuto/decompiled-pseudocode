/*
 * XREFs of NtUserClearWakeMask @ 0x1C01CD890
 * Callers:
 *     <none>
 * Callees:
 *     xxxClearWakeMask @ 0x1C01B36A0 (xxxClearWakeMask.c)
 */

__int64 NtUserClearWakeMask()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxClearWakeMask();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}
