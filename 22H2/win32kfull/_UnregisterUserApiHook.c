/*
 * XREFs of _UnregisterUserApiHook @ 0x1C0071F20
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01DF320 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0071408 (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v2;
  }
  if ( CurrentProcessWin32Process == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency((unsigned int)gihmodUserApiHook, v2, v3, v4);
      gihmodUserApiHook = -1;
      RemoveHmodDependency((unsigned int)gihmodUserApiHookWOW, v5, v6, v7);
      gihmodUserApiHookWOW = -1;
    }
    _InterlockedAnd(gpsi, 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
