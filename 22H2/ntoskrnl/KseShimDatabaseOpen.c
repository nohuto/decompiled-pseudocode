/*
 * XREFs of KseShimDatabaseOpen @ 0x14075A8D0
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14075566C (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140758450 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1408BF86C (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A3BCCC (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x140755C2C (KsepSdbUnmapFromMemory.c)
 *     KsepDeletePatchSdb @ 0x1408C0CC4 (KsepDeletePatchSdb.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  char v4; // si

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
      _InterlockedIncrement(&dword_140C2AA70);
      goto LABEL_4;
    }
    *a1 = 0LL;
LABEL_15:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v3 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140C2AA78);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb", (__int64)KsepShimDb);
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2AA7C);
    goto LABEL_15;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", (__int64)qword_140C2AF78) >= 0
    && dword_140C2AF70 >= (unsigned int)dword_140C2AFA8 )
  {
    KsepSdbUnmapFromMemory(qword_140C2AF78);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)KsepShimDb;
  *a1 = KsepShimDb;
  _InterlockedIncrement(&dword_140C2AA74);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
