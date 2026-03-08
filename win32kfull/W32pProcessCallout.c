/*
 * XREFs of W32pProcessCallout @ 0x1C00CA590
 * Callers:
 *     <none>
 * Callees:
 *     AllocateW32Process @ 0x1C003EBB0 (AllocateW32Process.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     DereferenceW32ProcessEx @ 0x1C00CA980 (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdi
  bool v4; // bp
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  BOOL v12; // r14d
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  int W32Process; // eax
  unsigned int v23; // edi
  char v24; // si
  __int64 ProcessWin32Process; // rbx
  unsigned int CurrentProcessId; // eax
  __int64 v27; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rcx
  int v30; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v4 = 1;
  if ( *(_QWORD *)(SGDGetSessionState(a1) + 40) )
  {
    v6 = *(_QWORD *)(SGDGetSessionState(v5) + 32) + 23520LL;
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(v6);
    v8 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
    v12 = *(_QWORD *)(v8 + 23496) == PsGetCurrentProcess(v10, v9, v11);
    if ( v6 )
    {
      GreReleasePushLockShared(v6);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v12 = 0;
  }
  v13 = *(_DWORD *)(a1 + 8) & 1;
  if ( v12 )
  {
    if ( v13 )
    {
      W32Process = AllocateW32Process(v1);
      v23 = W32Process;
      if ( W32Process == 1073741851 )
      {
        v24 = 0;
      }
      else
      {
        v24 = 1;
        if ( W32Process < 0 )
          return v23;
      }
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      LOBYTE(v27) = 1;
      *(_DWORD *)(ProcessWin32Process + 56) = CurrentProcessId & 0xFFFFFFFC;
      v23 = GdiProcessCallout(ProcessWin32Process, v27);
      if ( (v23 & 0x80000000) == 0 || !v24 )
        return v23;
      v29 = ProcessWin32Process;
    }
    else
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
      v23 = GdiProcessCallout(0LL, 0LL);
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      v29 = ProcessWin32Process;
    }
    vMarkFreeW32Process(v29);
    DereferenceW32ProcessEx(ProcessWin32Process, 0LL);
    return v23;
  }
  if ( v13 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
    if ( PsGetProcessWin32Process(v1) )
    {
      v14 = 1073741851;
    }
    else
    {
      v19 = (volatile signed __int32 *)Win32AllocPoolWithQuotaZInit(W32ProcessSize, 1768977237LL);
      if ( v19 )
      {
        v30 = 0;
        SystemPrng(&v30, 4LL);
        v20 = v30;
        LOBYTE(v21) = 1;
        if ( !v30 )
          v20 = 1;
        v30 = v20;
        *((_DWORD *)v19 + 73) = v20;
        GdiPreUserProcessCallout(v19, v21);
        *(_QWORD *)v19 = v1;
        v14 = PsSetProcessWin32Process(v1, v19, 0LL);
        if ( v14 < 0 )
        {
          UserSetLastError(5);
          Win32FreePool((void *)v19);
        }
        else
        {
          ObfReferenceObject(*(PVOID *)v19);
          _InterlockedAdd(v19 + 2, 1u);
        }
      }
      else
      {
        UserSetLastError(8);
        v14 = -1073741801;
      }
    }
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
    if ( v14 >= 0 )
    {
      v4 = v14 != 1073741851;
      v2 = PsGetProcessWin32Process(v1);
      *(_DWORD *)(v2 + 56) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v15 = xxxUserProcessCallout(v2, a1);
      v14 = v15;
      if ( v15 == 1073741851 )
        return 1073741851LL;
      if ( v15 >= 0 )
      {
        LOBYTE(v16) = 1;
        v14 = GdiProcessCallout(v2, v16);
        if ( v14 < 0 )
        {
          xxxUserProcessCallout(v2, 0LL);
        }
        else
        {
          LOBYTE(v18) = 1;
          v14 = DCompositionProcessCallout(v2, v18);
          if ( v14 < 0 )
          {
            xxxUserProcessCallout(v2, 0LL);
            GdiProcessCallout(v2, 0LL);
          }
        }
      }
    }
  }
  else
  {
    v2 = PsGetProcessWin32Process(v1);
    xxxUserProcessCallout(v2, 0LL);
    DCompositionProcessCallout(v2, 0LL);
    GdiProcessCallout(v2, 0LL);
    v14 = 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 1) == 0 || v14 < 0 )
  {
    if ( v2 )
    {
      GdiUnmapGDIW32PIDLockedBitmaps(v2);
      if ( v4 )
      {
        vMarkFreeW32Process(v2);
        DereferenceW32ProcessEx(v2, 1LL);
      }
    }
  }
  return (unsigned int)v14;
}
