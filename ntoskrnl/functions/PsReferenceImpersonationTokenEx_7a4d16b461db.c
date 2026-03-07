void *__fastcall PsReferenceImpersonationTokenEx(
        __int64 a1,
        char a2,
        ULONG a3,
        _BYTE *a4,
        bool *a5,
        int *a6,
        _BYTE *a7)
{
  __int64 v12; // r13
  struct _KTHREAD *CurrentThread; // r15
  void *v14; // rsi
  char v15; // al

  if ( (*(_DWORD *)(a1 + 1376) & 8) == 0 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1360, 0LL);
  if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v14 = *(void **)(a1 + 1544)) != 0LL )
    {
      v15 = 0;
    }
    else
    {
      v14 = (void *)(*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFF8uLL);
      v15 = BYTE1(*(_DWORD *)(a1 + 1376)) & 1;
    }
    *a4 = v15;
    ObfReferenceObjectWithTag(v14, a3);
    *a6 = *(_DWORD *)(a1 + 1272) & 3;
    *a5 = (*(_BYTE *)(a1 + 1272) & 4) != 0;
    if ( a7 )
      *a7 = *(_BYTE *)(v12 + 2170);
  }
  else
  {
    v14 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1360), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1360));
  KeAbPostRelease(a1 + 1360);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v14;
}
