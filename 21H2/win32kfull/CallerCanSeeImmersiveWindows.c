/*
 * XREFs of CallerCanSeeImmersiveWindows @ 0x1C0072530
 * Callers:
 *     NtUserBuildHwndList @ 0x1C0070A10 (NtUserBuildHwndList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CallerCanSeeImmersiveWindows(__int64 a1)
{
  __int64 v1; // rdx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  _BOOL8 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = *(unsigned int *)(CurrentProcessWin32Process + 820);
  result = 1;
  if ( (v3 & 0x30) == 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v3, v1);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess)
      && *(int *)(CurrentProcessWin32Process + 12) >= 0
      && *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS
      && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x800) == 0 )
    {
      return 0;
    }
  }
  return result;
}
