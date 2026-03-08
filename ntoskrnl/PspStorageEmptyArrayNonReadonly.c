/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x1402FA300
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x140790620 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  void *v7; // rdi
  char v8; // al
  char v10; // al

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v6 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( (v6 & 1) != 0 )
      {
        v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 8) = 1LL;
        v7 = (void *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
        v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        if ( v7 )
        {
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ++v2;
        }
      }
      BugCheckParameter2 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
