/*
 * XREFs of IsValidGuiThreadContext @ 0x1C0039544
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004EC50 (UserPowerInfoCallout.c)
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsValidGuiThreadContext()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rax

  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v1, v0);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v13 = PsGetCurrentProcess(v5, v4),
        v14 = PsGetProcessSessionIdEx(v13),
        v15 = PsGetCurrentThreadProcess(),
        v14 == (unsigned int)PsGetProcessSessionIdEx(v15)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  return v3
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v3 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v3 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0;
}
