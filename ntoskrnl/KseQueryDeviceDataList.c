/*
 * XREFs of KseQueryDeviceDataList @ 0x140973910
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1409F34C8 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x14036F924 (KsepShimDbChanged.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KsepCacheLookup @ 0x14079CC94 (KsepCacheLookup.c)
 *     KsepDbCacheInsertDevice @ 0x140800AA4 (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheReadDevice @ 0x1408013F0 (KsepDbCacheReadDevice.c)
 *     KseResetDeviceCache @ 0x140973ABC (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x140973CAC (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140973D58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceFree @ 0x1409746B0 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rbx
  _QWORD *v15; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v16, 0, 0x44uLL);
  v15 = 0LL;
  if ( dword_140C649B4 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList(SourceString, a2, a3, a4);
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, (__int64 *)&v15);
      if ( RegistryDeviceDataList >= 0 )
      {
        v13 = (__int64)v15;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v15, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, v13) < 0 )
          KsepCacheDeviceFree(v13);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&v16[5], SourceString);
    CurrentThread = KeGetCurrentThread();
    v10 = qword_140C649F8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = KsepCacheLookup(qword_140C649F8, (__int64)v16);
    v15 = v11;
    if ( v11 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v11, a2, a3, a4);
    v12 = (volatile signed __int64 *)qword_140C649F8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C649F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    if ( !v15 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
