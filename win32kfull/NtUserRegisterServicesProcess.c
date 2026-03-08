/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C01DA8B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00DD9E0 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( *(_DWORD *)(gpsi + 2280LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5);
  }
  else
  {
    v2 = 1LL;
    v3 = gpsi;
    *(_DWORD *)(gpsi + 2280LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
