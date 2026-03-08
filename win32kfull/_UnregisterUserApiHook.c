/*
 * XREFs of _UnregisterUserApiHook @ 0x1C00F56F0
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01E03D0 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C009D71C (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( CurrentProcessWin32Process == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency((unsigned int)gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency((unsigned int)gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = -1;
    }
    _InterlockedAnd(gpsi, 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
