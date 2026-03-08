/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1408015F4
 * Callers:
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KsepCacheLookup @ 0x14079CC94 (KsepCacheLookup.c)
 *     KsepDbCacheQueryDeviceData @ 0x140800DE4 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int DeviceData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  _QWORD *v12; // rcx
  volatile signed __int64 *v13; // rdi
  _QWORD v15[10]; // [rsp+30h] [rbp-58h] BYREF

  DeviceData = -1073741275;
  memset(v15, 0, 0x44uLL);
  RtlInitUnicodeString((PUNICODE_STRING)&v15[5], SourceString);
  CurrentThread = KeGetCurrentThread();
  v11 = qword_140C649F8;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  v12 = KsepCacheLookup(qword_140C649F8, (__int64)v15);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData((__int64)v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140C649F8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C649F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegion();
  return DeviceData;
}
