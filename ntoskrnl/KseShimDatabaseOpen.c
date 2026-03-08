/*
 * XREFs of KseShimDatabaseOpen @ 0x14079EFB4
 * Callers:
 *     KsepDbGetDriverShims @ 0x14079EDE8 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 *     KsepDbCacheReadDevice @ 0x1408013F0 (KsepDbCacheReadDevice.c)
 *     KseInitialize @ 0x140B3E688 (KseInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KsepSdbUnmapFromMemory @ 0x14079D1D4 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     KsepDeletePatchSdb @ 0x140974504 (KsepDeletePatchSdb.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v3 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_140C40370);
      goto LABEL_4;
    }
    *a1 = 0LL;
    goto LABEL_16;
  }
  if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v3 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140C40378);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb", (__int64)&KsepShimDb);
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C4037C);
LABEL_16:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", (__int64)&unk_140C40878) >= 0
    && dword_140C40870 >= (unsigned int)dword_140C408A8 )
  {
    KsepSdbUnmapFromMemory((__int64)&unk_140C40878);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)&KsepShimDb;
  *a1 = &KsepShimDb;
  _InterlockedIncrement(&dword_140C40374);
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
