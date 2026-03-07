__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  BOOL v12; // r15d
  _QWORD *Pool2; // rbx
  _QWORD *v14; // r14
  int v15; // ebx
  __int64 v17; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v19; // rax
  int W32Thread; // r14d
  int v21; // eax

  v5 = 0LL;
  if ( *(_QWORD *)(SGDGetSessionState(a1) + 40) )
  {
    v6 = *(_QWORD *)(SGDGetSessionState(v4) + 32) + 23520LL;
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(v6);
    v8 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
    v12 = *(_QWORD *)(v8 + 23496) == PsGetCurrentProcess(v10, v9, v11);
    if ( v6 )
    {
      GreReleasePushLockShared(v6);
      KeLeaveCriticalRegion();
    }
    if ( v12 )
    {
      W32Thread = 0;
      if ( !a2 )
        W32Thread = AllocateW32Thread(a1);
      v21 = GdiThreadCallout(a1, a2);
      v15 = v21;
      if ( a2 )
        goto LABEL_27;
      if ( W32Thread < 0 )
        return (unsigned int)v15;
      if ( v21 >= 0 )
      {
LABEL_27:
        if ( a2 != 1 )
          return (unsigned int)v15;
      }
      FreeW32Thread(a1);
      return (unsigned int)v15;
    }
  }
  if ( a2 )
  {
LABEL_9:
    v15 = DCompositionThreadCallout(a1, a2);
    if ( v15 < 0 )
      goto LABEL_32;
    v15 = GdiThreadCallout(a1, a2);
    if ( v15 < 0 )
      goto LABEL_32;
    v15 = UserThreadCallout(a1, a2);
    if ( v15 >= 0 )
    {
      v15 = 0;
      if ( !a2 )
        return (unsigned int)v15;
    }
    if ( a2 )
    {
LABEL_32:
      if ( a2 != 1 && v15 >= 0 )
        return (unsigned int)v15;
    }
    else
    {
      if ( v15 >= 0 )
        return (unsigned int)v15;
      GdiThreadCalloutCleanup(a1);
    }
    v17 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( ThreadWin32Thread )
      v17 = *ThreadWin32Thread;
    vMarkFreeW32Thread(v17);
    v19 = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( v19 )
      v5 = *v19;
    DereferenceW32Thread(v5);
    return (unsigned int)v15;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 200LL, 1853125461LL);
  if ( Pool2 )
  {
    v14 = (_QWORD *)Win32AllocPoolWithQuotaZInit(W32ThreadSize, 1769239381LL);
    if ( v14 )
    {
      ExInitializeFastOwnerEntry(Pool2 + 7);
      ExInitializeFastOwnerEntry(Pool2 + 16);
      *v14 = a1;
      *Pool2 = v14;
      PsSetThreadWin32Thread(a1, Pool2, 0LL);
      ReferenceW32Thread(v14);
      goto LABEL_9;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  UserSetLastError(8);
  return 3221225495LL;
}
