/*
 * XREFs of CallerCanSeeImmersiveWindows @ 0x1C003FA30
 * Callers:
 *     NtUserBuildHwndList @ 0x1C003FD60 (NtUserBuildHwndList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerCanSeeImmersiveWindows(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 CurrentProcess; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v5 = v2 & CurrentProcessWin32Process;
  }
  if ( (*(_DWORD *)(v5 + 812) & 0x30) != 0 )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v3, v2, v4);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) || *(int *)(v5 + 12) < 0 || *(_QWORD *)v5 == gpepCSRSS )
    return 1LL;
  else
    return (*(_DWORD *)(v5 + 812) >> 11) & 1;
}
