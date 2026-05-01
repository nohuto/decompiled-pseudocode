/*
 * XREFs of ?GetExplorerProcessId@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAI@Z @ 0x1804C4030
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020AEC8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetExplorerProcessId(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        unsigned int *a2)
{
  HWND ShellWindow; // rax
  DWORD WindowThreadProcessId; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0;
  ShellWindow = GetShellWindow();
  WindowThreadProcessId = GetWindowThreadProcessId(ShellWindow, &dwProcessId);
  try
  {
    if ( !WindowThreadProcessId )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xDD,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
        v5);
    *a2 = dwProcessId;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE1,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v5);
  }
  return result;
}
