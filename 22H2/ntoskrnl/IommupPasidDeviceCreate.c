/*
 * XREFs of IommupPasidDeviceCreate @ 0x14050E358
 * Callers:
 *     IommupDeviceEnableSvm @ 0x140933D04 (IommupDeviceEnableSvm.c)
 *     IommuPasidDeviceCreate @ 0x140935810 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 *     memset @ 0x140435400 (memset.c)
 *     IommuGetLibraryContext @ 0x140523020 (IommuGetLibraryContext.c)
 */

__int64 __fastcall IommupPasidDeviceCreate(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rsi
  int LibraryContext; // edi
  void *v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v14 = 0LL;
  LibraryContext = 0;
  v8 = (void *)HalpMmAllocCtxAlloc(a1, 64LL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset(v8, 0, 0x40uLL);
    v10 = HalpHvIommu == 0;
    *(_DWORD *)(v9 + 48) = a2;
    if ( v10 )
    {
      LibraryContext = IommuGetLibraryContext(a2, *(unsigned int *)(a1 + 352), &v14);
      if ( LibraryContext < 0 )
      {
        HalpMmAllocCtxFree(v11, v9);
        goto LABEL_12;
      }
      *(_QWORD *)(v9 + 56) = v14;
    }
    *(_QWORD *)(v9 + 16) = a1;
    ExAcquirePushLockExclusiveEx(a1 + 376, 0LL);
    v12 = *(__int64 **)(a1 + 368);
    if ( *v12 != a1 + 360 )
      __fastfail(3u);
    *(_QWORD *)v9 = a1 + 360;
    *(_QWORD *)(v9 + 8) = v12;
    *v12 = v9;
    *(_QWORD *)(a1 + 368) = v9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 376), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 376));
    KeAbPostRelease(a1 + 376);
    v3 = v9;
  }
  else
  {
    LibraryContext = -1073741670;
  }
LABEL_12:
  *a3 = v3;
  return (unsigned int)LibraryContext;
}
