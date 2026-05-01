/*
 * XREFs of ?GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA?AW4LaunchRequirement@12@W4ZBID@@@Z @ 0x1804DA7E0
 * Callers:
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1804DABB0 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     IsGetThreadDesktopPresent @ 0x180094ECC (IsGetThreadDesktopPresent.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::GetLaunchRequirementForActiveBand(int a1)
{
  int v1; // ebx
  __int64 result; // rax
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  int pvInfo; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 > 13 )
  {
    if ( a1 != 14 && (a1 == 15 || a1 > 16 && a1 <= 18) )
      return 2LL;
    return 0LL;
  }
  if ( a1 >= 12 )
    return 2LL;
  if ( a1 )
  {
    result = 1LL;
    if ( a1 == 1 )
      return result;
    if ( a1 > 1 )
    {
      if ( a1 > 4 )
      {
        if ( a1 == 8 )
          return result;
        return 0LL;
      }
      return 2LL;
    }
    return 0LL;
  }
  pvInfo = 0;
  if ( IsGetThreadDesktopPresent() && IsGetThreadDesktopPresent() )
  {
    CurrentThreadId = GetCurrentThreadId();
    ThreadDesktop = GetThreadDesktop(CurrentThreadId);
    if ( !ThreadDesktop || GetUserObjectInformationW(ThreadDesktop, 6, &pvInfo, 4u, 0LL) )
      v1 = pvInfo;
  }
  else
  {
    v1 = 1;
  }
  return v1 != 0 ? 2 : 0;
}
