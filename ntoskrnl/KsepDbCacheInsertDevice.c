/*
 * XREFs of KsepDbCacheInsertDevice @ 0x140800AA4
 * Callers:
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140973910 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KsepCacheInsert @ 0x14079CACC (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x14079CC94 (KsepCacheLookup.c)
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
  v6 = qword_140C649F8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  RtlInitUnicodeString((PUNICODE_STRING)&v9[5], SourceString);
  if ( !KsepCacheLookup(qword_140C649F8, (__int64)v9) )
  {
    KsepCacheInsert(qword_140C649F8, a2);
    v4 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140C649F8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C649F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v4;
}
