/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C0096C50
 * Callers:
 *     UserScreenAccessCheck @ 0x1C0096C20 (UserScreenAccessCheck.c)
 * Callees:
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x1C0096D0C (ApiSetIsCurrentProcessWinstaLocked.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx

  v2 = 0;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( !a1
    || (v6 = *(_QWORD *)(v3 + 456)) != 0 && (v7 = *(_QWORD **)(v6 + 8), v5 = (_QWORD *)*v7, *(_QWORD *)*v7 == a1)
    || (*(_DWORD *)(v3 + 488) & 8) != 0
    || (*(_DWORD *)(v3 + 1272) & 4) != 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_DWORD *)(v9 + 12) & 0x40010) == 0x40010 && !(unsigned int)ApiSetIsCurrentProcessWinstaLocked() )
      return 1;
  }
  return v2;
}
