/*
 * XREFs of NtUserRegisterLPK @ 0x1C0106CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserRegisterLPK(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 760) = a1;
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
