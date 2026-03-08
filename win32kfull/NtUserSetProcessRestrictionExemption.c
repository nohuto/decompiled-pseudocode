/*
 * XREFs of NtUserSetProcessRestrictionExemption @ 0x1C01DD810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProcessRestrictionExemption(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
    {
      v5 = -*(_QWORD *)CurrentProcessWin32Process;
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    }
    v3 = 1LL;
    *(_DWORD *)(CurrentProcessWin32Process + 812) ^= (*(_DWORD *)(CurrentProcessWin32Process + 812) ^ (a1 << 8)) & 0x100;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
