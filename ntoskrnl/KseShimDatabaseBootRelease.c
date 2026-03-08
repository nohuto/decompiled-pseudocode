/*
 * XREFs of KseShimDatabaseBootRelease @ 0x140842A14
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14039C088 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x14079E25C (KseShimDatabaseClose.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KsepSdbBootRelease @ 0x140842AC4 (KsepSdbBootRelease.c)
 */

void KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v1 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v1 == 1) )
    {
      KsepSdbBootRelease(&KsepShimDb);
      KsepSdbBootRelease(&unk_140C40878);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
}
