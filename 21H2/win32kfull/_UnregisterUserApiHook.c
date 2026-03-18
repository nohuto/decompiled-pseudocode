/*
 * XREFs of _UnregisterUserApiHook @ 0x1C01220B0
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01FFEC0 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0025104 (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  __int64 v1; // rdx

  if ( PsGetCurrentProcessWin32Process(a1) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency(gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency(gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = -1;
    }
    _InterlockedAnd(gpsi, 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v1);
    return 0LL;
  }
}
