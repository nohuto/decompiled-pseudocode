/*
 * XREFs of EtwTraceBeginCallback @ 0x1C0079B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwTraceBeginCallback()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v2, v1),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         result = PsGetProcessSessionIdEx(CurrentThreadProcess),
         ProcessSessionId == (_DWORD)result))
    && (result = PsGetThreadWin32Thread(CurrentThread)) != 0 )
  {
    ++*(_BYTE *)(*(_QWORD *)result + 1248LL);
  }
  else
  {
    ++MEMORY[0x4E0];
  }
  return result;
}
