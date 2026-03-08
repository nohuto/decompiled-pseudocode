/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C0041930
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0041B80 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  int *v6; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx

  v1 = 0;
  v2 = 0;
  if ( a1 >= 0 )
    v2 = a1;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 360) )
      CaptureAndValidateUserModeDpiAwarenessContext(v3);
    v1 = *(_DWORD *)(v3 + 340);
    *(_DWORD *)(v3 + 340) = v2;
    v6 = *(int **)(v3 + 360);
    if ( v6 )
      *v6 = v2;
  }
  if ( !v1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    return *(_DWORD *)(v9 + 280) | 0x80000000;
  }
  return v1;
}
