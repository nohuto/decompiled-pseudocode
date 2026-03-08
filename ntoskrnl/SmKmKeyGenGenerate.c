/*
 * XREFs of SmKmKeyGenGenerate @ 0x1409D601C
 * Callers:
 *     SmcStoreCreate @ 0x1409D8464 (SmcStoreCreate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x1409D6130 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x1409D61C4 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x1409D6384 (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(signed __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  struct _PRIVILEGE_SET *v10; // rdi
  int v11; // edi

  v4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
      v9 = SmKmKeyGenKeyFind(BugCheckParameter2, a2);
      v10 = (struct _PRIVILEGE_SET *)v9;
      if ( v9 )
        break;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      v11 = SmKmKeyGenNewKey((ULONG_PTR)BugCheckParameter2, a2, v4);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( *(_DWORD *)(v9 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    SmKmKeyGenKeyDelete((ULONG_PTR)BugCheckParameter2, v10);
  }
  memmove(a3, *(const void **)(v9 + 24), v4);
  v11 = 0;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
