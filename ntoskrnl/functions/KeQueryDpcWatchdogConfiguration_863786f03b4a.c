__int64 __fastcall KeQueryDpcWatchdogConfiguration(void *a1, size_t Size, int a3)
{
  size_t v4; // rdi
  int v6; // r8d
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int)Size;
  Src = 0LL;
  v12 = 0LL;
  v6 = a3 - 228;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)Size == 32 )
    {
      LODWORD(Src) = 2;
      goto LABEL_9;
    }
    return (unsigned int)-1073741820;
  }
  if ( (_DWORD)Size != 20 )
    return (unsigned int)-1073741820;
  LODWORD(Src) = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&KiDpcWatchdogConfigurationLock, 0LL);
  v9 = a3 - 228;
  if ( !v9 )
  {
    v7 = 0;
LABEL_19:
    if ( KeDpcTimeoutMs )
    {
      LODWORD(Src) = Src | 0x100;
      DWORD1(Src) = KeDpcTimeoutMs;
    }
    if ( KeDpcWatchdogPeriodMs )
    {
      LODWORD(Src) = Src | 0x200;
      DWORD2(Src) = KeDpcWatchdogPeriodMs;
    }
    if ( KeDpcSoftTimeoutMs )
    {
      LODWORD(Src) = Src | 0x400;
      HIDWORD(Src) = KeDpcSoftTimeoutMs;
    }
    if ( KeDpcCumulativeSoftTimeoutMs )
    {
      LODWORD(Src) = Src | 0x800;
      LODWORD(v12) = KeDpcCumulativeSoftTimeoutMs;
    }
    goto LABEL_27;
  }
  if ( v9 == 1 )
  {
    v7 = 0;
    if ( KeDpcWatchdogProfileSingleDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x1000;
      DWORD1(v12) = KeDpcWatchdogProfileSingleDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileCumulativeDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x2000;
      DWORD2(v12) = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileBufferSizeBytes )
    {
      LODWORD(Src) = Src | 0x4000;
      HIDWORD(v12) = KeDpcWatchdogProfileBufferSizeBytes;
    }
    goto LABEL_19;
  }
  v7 = 0;
LABEL_27:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&KiDpcWatchdogConfigurationLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcWatchdogConfigurationLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  memmove(a1, &Src, v4);
  return v7;
}
