/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14085E218
 * Callers:
 *     KseQueryDeviceData @ 0x14080A580 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1409769B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435400 (memset.c)
 *     KsepCacheLookup @ 0x140693A74 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x140695124 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rcx
  volatile signed __int64 *v7; // rdi
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741811;
  memset(v9, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v6 = qword_140C64E78;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v9[5], SourceString);
  if ( !KsepCacheLookup(qword_140C64E78, (__int64)v9) )
  {
    KsepCacheInsert(qword_140C64E78, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140C64E78;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C64E78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v4;
}
