/*
 * XREFs of ??0EngModeState@@QEAA@XZ @ 0x1C0270F18
 * Callers:
 *     W32kCddClipRegion @ 0x1C0272C60 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

EngModeState *__fastcall EngModeState::EngModeState(EngModeState *this)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax

  *(_QWORD *)this = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
    *(_QWORD *)this = v3;
    if ( v3 )
      *(_DWORD *)(v3 + 328) |= 0x10u;
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
