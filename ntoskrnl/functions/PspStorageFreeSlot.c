__int64 __fastcall PspStorageFreeSlot(unsigned int a1)
{
  unsigned int v1; // edi
  RTL_BITMAP *v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi

  v1 = a1;
  if ( a1 >= 0x20 )
  {
    v1 = a1 - 32;
    v2 = &PspStorageExpansionBitmap;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    v2 = &PspStorageBitmap;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  if ( _bittest64((const signed __int64 *)v2->Buffer, v1) )
  {
    *((_BYTE *)v2->Buffer + ((unsigned __int64)v1 >> 3)) &= ~(1 << (v1 & 7));
    v4 = 0;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
