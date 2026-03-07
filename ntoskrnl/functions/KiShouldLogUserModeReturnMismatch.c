char __fastcall KiShouldLogUserModeReturnMismatch(__int64 a1, int a2, __int64 a3)
{
  volatile signed __int64 *v3; // rdi
  char v4; // bp
  int v6; // edx
  int v7; // edx
  __int64 v9; // rsi
  unsigned int v10; // edx
  int v11; // r15d
  unsigned int v12; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  unsigned int v15; // ecx

  v3 = *(volatile signed __int64 **)(a1 + 1048);
  v4 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 0;
      v9 = 7LL;
    }
    else
    {
      v9 = 4LL;
    }
  }
  else
  {
    v9 = 1LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)&v3[v9 + 2]);
  v10 = v3[v9 + 1];
  v11 = HIDWORD(v3[v9 + 1]);
  if ( v10 != v11 )
  {
    v12 = 0;
    if ( v10 )
    {
      while ( *(_QWORD *)(v3[v9] + 8LL * v12) != a3 )
      {
        if ( ++v12 >= v10 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v14 = LODWORD(v3[v9 + 1]);
      if ( (_DWORD)v14 != v11 )
      {
        v15 = 0;
        if ( (_DWORD)v14 )
        {
          while ( *(_QWORD *)(v3[v9] + 8LL * v15) != a3 )
          {
            if ( ++v15 >= (unsigned int)v14 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v4 = 1;
          *(_QWORD *)(v3[v9] + 8 * v14) = a3;
          ++LODWORD(v3[v9 + 1]);
        }
      }
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      KeAbPostRelease((ULONG_PTR)v3);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  return v4;
}
