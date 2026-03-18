/*
 * XREFs of KsepShimDbChanged @ 0x14037462C
 * Callers:
 *     KseQueryDeviceData @ 0x14080A580 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1409769B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KsepShimDatabaseTime @ 0x14080A84C (KsepShimDatabaseTime.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  v1 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140C40CA8 )
    {
      qword_140C40CA8 = 0LL;
      v1 = 1;
    }
    else
    {
      qword_140C40CA8 = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140C40CE0 )
        v1 = 1;
      qword_140C40CE0 = 0LL;
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
