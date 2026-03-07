__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 18LL;
  v2 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 18LL;
  if ( *(_QWORD *)(v2 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  result = *(unsigned int *)(v2 + 340);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 280);
    return 18LL;
  }
  return result;
}
