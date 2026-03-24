/*
 * XREFs of KsepDbCacheQueryDevice @ 0x14075ED98
 * Callers:
 *     KseQueryDeviceData @ 0x14075EC10 (KseQueryDeviceData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     memset @ 0x140413800 (memset.c)
 *     KsepCacheLookup @ 0x14075EFA0 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407C7AE4 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  volatile signed __int64 *v13; // rbx
  char v14; // di
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  DeviceData = -1073741275;
  memset(v16, 0, 0x48uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C50628;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C50628, v16);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData(v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140C50628;
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return DeviceData;
}
