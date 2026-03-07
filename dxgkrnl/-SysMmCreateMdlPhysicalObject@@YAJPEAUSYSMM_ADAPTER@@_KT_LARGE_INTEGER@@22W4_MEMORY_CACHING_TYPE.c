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
