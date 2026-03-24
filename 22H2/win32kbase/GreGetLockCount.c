/*
 * XREFs of GreGetLockCount @ 0x1C0080AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetLockCount()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v2, v1),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v4 = *ThreadWin32Thread) != 0 )
  {
    return *(unsigned int *)(v4 + 104);
  }
  else
  {
    return 0LL;
  }
}
