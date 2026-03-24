/*
 * XREFs of ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0249118
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0047358 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C007929C (xxxInsertMenuItem.c)
 * Callees:
 *     ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C0249278 (-NNDeleteAdjustIndex@@YAXPEAII@Z.c)
 */

_QWORD *__fastcall MNDeleteAdjustIndexes(__int64 a1, __int64 **a2, unsigned int a3)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  NNDeleteAdjustIndex((unsigned int *)(**a2 + 80), a3);
  if ( (*(_DWORD *)**a2 & 0x20) != 0 )
    NNDeleteAdjustIndex((unsigned int *)(**a2 + 84), v4);
  if ( *(_QWORD *)(v6 + 64) == *(_QWORD *)(**a2 + 16) )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 72), v5);
  v7 = **a2;
  if ( *(_QWORD *)(v6 + 80) == *(_QWORD *)(v7 + 16) )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 88), v5);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  if ( *a2 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)*a2 + 2) )
  {
    if ( *((_BYTE *)*a2 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a2);
  }
  result = *(_QWORD **)(v9 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v9 + 1472) = result;
  }
  return result;
}
