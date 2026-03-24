/*
 * XREFs of ClassLock @ 0x1C0100DC0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C00FBF4C (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E886C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0242E7C (xxxRecreateSmallIcons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  int v13; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (int)v3 >= 131068 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 72) = v3 + 1;
  if ( a1 == v5 )
    goto LABEL_3;
  v13 = *(_DWORD *)(v5 + 72);
  if ( v13 >= 131068 )
  {
    *(_DWORD *)(a1 + 72) = v3;
    return 0LL;
  }
  *(_DWORD *)(v5 + 72) = v13 + 1;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v3)
    || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  *a2 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = a2;
  a2[2] = ClassUnlockWorker;
  result = 1LL;
  a2[1] = a1;
  return result;
}
