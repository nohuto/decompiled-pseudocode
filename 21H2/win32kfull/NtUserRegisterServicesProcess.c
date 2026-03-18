/*
 * XREFs of NtUserRegisterServicesProcess @ 0x1C01FBB30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00A2D80 (IsPrivileged.c)
 */

__int64 __fastcall NtUserRegisterServicesProcess(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v3 = gpsi;
  if ( *(_DWORD *)(gpsi + 2280LL) || !(unsigned int)IsPrivileged(psTcb) )
  {
    UserSetLastError(5LL, v3);
  }
  else
  {
    v2 = 1LL;
    v4 = gpsi;
    *(_DWORD *)(gpsi + 2280LL) = a1;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
