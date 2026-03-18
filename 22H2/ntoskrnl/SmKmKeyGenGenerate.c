/*
 * XREFs of SmKmKeyGenGenerate @ 0x1409D8EBC
 * Callers:
 *     SmcStoreCreate @ 0x1409DB304 (SmcStoreCreate.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x1409D8FD0 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x1409D9064 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x1409D9224 (SmKmKeyGenNewKey.c)
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
