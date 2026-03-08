/*
 * XREFs of ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1C0012FB4
 * Callers:
 *     DxgkAllocatePagesForMdlCB @ 0x1C0012E90 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052100 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateMdlPhysicalObject @ 0x1C0071750 (SysMmTestCreateMdlPhysicalObject.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall SysMmCreateMdlPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS SkipBytes,
        MEMORY_CACHING_TYPE CacheType,
        int a7,
        __int64 a8,
        int a9,
        _QWORD *a10,
        _QWORD *a11,
        struct _MDL **a12)
{
  struct _MDL *PagesForMdl; // rdi
  int PhysicalObject; // ebx
  __int64 result; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d

  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  else
  {
    PagesForMdl = MmAllocatePagesForMdlEx(a3, a4, SkipBytes, a2, CacheType, a7 | 4u);
    if ( PagesForMdl )
    {
      PhysicalObject = SmmCreatePhysicalObject(a1, CacheType, 0, a8, a9, (__int64)a10, (__int64)a11);
      if ( PhysicalObject >= 0 )
      {
        *a12 = PagesForMdl;
        return 0LL;
      }
      MmFreePagesFromMdl(PagesForMdl);
    }
    else
    {
      _InterlockedIncrement(&dword_1C013BD24);
      WdLogSingleEntry2(6LL, a2, CacheType);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
            0,
            1,
            -1,
            (__int64)L"Failed to allocate MDL from MmAllocatePagesForMdlEx, Size=%I64u, CacheType=%u",
            a2,
            CacheType,
            0LL,
            0LL,
            0LL);
      }
      PhysicalObject = -1073741801;
    }
    *a10 = 0LL;
    result = (unsigned int)PhysicalObject;
    *a11 = 0LL;
    *a12 = 0LL;
  }
  return result;
}
