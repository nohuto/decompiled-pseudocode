__int64 __fastcall SmpSystemStoreCreate(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v1 = (volatile signed __int64 *)(a1 + 2120);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 2120, 0LL);
  if ( *(_DWORD *)(a1 + 2112) == -1 )
  {
    v4 = SmpDirtyStoreCreate(a1, (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C67048 + 17040LL) >> 8) >> 1, 0, &v6);
    if ( v4 >= 0 )
      *(_DWORD *)(a1 + 2112) = v6;
  }
  else
  {
    v4 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
