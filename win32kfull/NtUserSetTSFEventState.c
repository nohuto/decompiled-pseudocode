/*
 * XREFs of NtUserSetTSFEventState @ 0x1C01DDD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetTSFEventState(int a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 24LL) = a1;
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
