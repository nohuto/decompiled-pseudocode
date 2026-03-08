/*
 * XREFs of IommupPasidDeviceCreate @ 0x14050C278
 * Callers:
 *     IommupDeviceEnableSvm @ 0x140930DD4 (IommupDeviceEnableSvm.c)
 *     IommuPasidDeviceCreate @ 0x140932800 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IommuGetLibraryContext @ 0x140520AF0 (IommuGetLibraryContext.c)
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
