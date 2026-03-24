/*
 * XREFs of EditionIsGpqForegroundAccessibleCurrent @ 0x1C00D5670
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00D578C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleCurrent(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v8 = *(_QWORD *)(v1 + 424);
  v9 = *(_DWORD *)(v8 + 12);
  v18 = *(_QWORD *)(v8 + 880);
  if ( !v2 )
    return 1LL;
  if ( !gpqForeground )
    return 1LL;
  if ( v9 < 0 )
    return 1LL;
  if ( (unsigned int)IsImmersiveAppRestricted(v8) )
  {
    v11 = *(_QWORD *)(v1 + 432);
    if ( gpqForeground == v11 && (*(_DWORD *)(v11 + 388) & 0x2000000) != 0 )
    {
      v12 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 424) == *(_QWORD *)(v1 + 424) )
            return 1LL;
        }
      }
    }
  }
  if ( (unsigned __int8)CheckAccess(&v18, gpqForeground + 428LL) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
