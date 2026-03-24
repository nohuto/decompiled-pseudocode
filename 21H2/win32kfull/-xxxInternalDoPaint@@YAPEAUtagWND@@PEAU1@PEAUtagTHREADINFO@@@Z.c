/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00537F0
 * Callers:
 *     xxxDoPaint @ 0x1C00534A8 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00537F0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00537F0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 *     xxxCompositedPaint @ 0x1C023E5B0 (xxxCompositedPaint.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbp
  struct tagWND *v4; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  struct tagWND *v13; // rax
  struct tagWND *v14; // rdi
  __int64 v15; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v21; // [rsp+28h] [rbp-20h]
  __int64 v22; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v22 = 0LL;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v20 = *(_QWORD *)(v3 + 416);
  *(_QWORD *)(v3 + 416) = &v20;
  v21 = v4;
  if ( !v4 )
    return (struct tagWND *)ThreadUnlock1(v10);
  HMLockObject(v4);
  while ( 1 )
  {
    if ( *((struct tagTHREADINFO **)v4 + 2) == a2 )
    {
      v10 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v10 + 27) & 2) != 0 )
      {
        xxxCompositedPaint(v4);
        v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        ThreadLockExchange(v4, &v20);
        goto LABEL_12;
      }
      if ( *(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0 )
        break;
    }
    v10 = *((_QWORD *)v4 + 14);
    if ( v10 )
    {
      v13 = xxxInternalDoPaint((struct tagWND *)v10, a2);
      v14 = v13;
      if ( v13 )
      {
        if ( v13 == v4 )
          return (struct tagWND *)ThreadUnlock1(v10);
        ThreadUnlock1(v10);
        return v14;
      }
    }
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
    v11 = v21;
    v21 = v4;
    if ( v4 )
      HMLockObject(v4);
    if ( v11 )
      HMUnlockObject(v11);
LABEL_12:
    if ( !v4 )
      return (struct tagWND *)ThreadUnlock1(v10);
  }
  if ( (*(_BYTE *)(v10 + 24) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1(v10);
  v15 = *((_QWORD *)v4 + 11);
  if ( !v15 )
    return (struct tagWND *)ThreadUnlock1(v10);
  while ( 1 )
  {
    if ( *(struct tagTHREADINFO **)(v15 + 16) == a2 )
    {
      v10 = *(_QWORD *)(v15 + 40);
      if ( (*(_QWORD *)(v10 + 136) || (*(_BYTE *)(v10 + 17) & 0x10) != 0) && (*(_BYTE *)(v10 + 24) & 0x20) == 0 )
        break;
    }
    v15 = *(_QWORD *)(v15 + 88);
    if ( !v15 )
      return (struct tagWND *)ThreadUnlock1(v10);
  }
  ThreadUnlock1(v10);
  return (struct tagWND *)v15;
}
