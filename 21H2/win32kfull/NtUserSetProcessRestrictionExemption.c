/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C01FDE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v4 = 1LL;
    *(_DWORD *)(CurrentProcessWin32Process + 820) ^= (*(_DWORD *)(CurrentProcessWin32Process + 820) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
