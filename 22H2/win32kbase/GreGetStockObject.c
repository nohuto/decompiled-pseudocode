/*
 * XREFs of GreGetStockObject @ 0x1C002BF90
 * Callers:
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 *     bInitICM @ 0x1C0299608 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002C07C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C0142630 (GreGetDpiDepDefaultGuiFont.c)
 */

void *__fastcall GreGetStockObject(int a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // eax
  void *result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  LOBYTE(v2) = 18;
  v3 = a1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v8 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v8 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v8 + 340) )
        {
          LOBYTE(v2) = *(_DWORD *)(v8 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
          if ( CurrentProcessWin32Process )
            v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  if ( (unsigned int)v3 > 0x11 )
  {
LABEL_13:
    if ( (unsigned int)v3 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[v3];
  }
  v10 = 205824;
  if ( !_bittest(&v10, v3) || (v2 & 0xF) != 0 || (result = gahStockObjects96[v3]) == 0LL )
  {
    if ( (_DWORD)v3 == 17 )
      return (void *)GreGetDpiDepDefaultGuiFont(17LL);
    goto LABEL_13;
  }
  return result;
}
