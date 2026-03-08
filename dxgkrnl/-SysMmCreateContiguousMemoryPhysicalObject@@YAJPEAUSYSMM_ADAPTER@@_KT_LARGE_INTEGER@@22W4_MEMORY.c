/*
 * XREFs of ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x1C006F010
 * Callers:
 *     DxgkAllocateContiguousMemoryCB @ 0x1C0052030 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052100 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateContiguousMemoryPhysicalObject @ 0x1C00716A0 (SysMmTestCreateContiguousMemoryPhysicalObject.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall SysMmCreateContiguousMemoryPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 result; // rax
  __int64 v14; // rsi
  PVOID ContiguousMemorySpecifyCache; // rax
  _QWORD *v16; // r14
  void *v17; // rdi
  _QWORD *v18; // r15
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int PhysicalObject; // ebx
  _QWORD *v23; // rcx
  PVOID v24; // [rsp+88h] [rbp+10h] BYREF

  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    return 3221225485LL;
  }
  v14 = CacheType;
  ContiguousMemorySpecifyCache = MmAllocateContiguousMemorySpecifyCache(a2, a3, a4, BoundaryAddressMultiple, CacheType);
  v16 = (_QWORD *)a10;
  v17 = ContiguousMemorySpecifyCache;
  v18 = (_QWORD *)a9;
  if ( !ContiguousMemorySpecifyCache )
  {
    _InterlockedIncrement(&dword_1C013BD28);
    WdLogSingleEntry2(6LL, a2, v14);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0LL,
          1,
          -1,
          L"Failed to allocate contiguous memory from MmAllocateContiguousMemorySpecifyCache, Size=%I64u, CacheType=%u",
          a2,
          v14,
          0LL,
          0LL,
          0LL);
    }
    PhysicalObject = -1073741801;
    goto LABEL_10;
  }
  v24 = ContiguousMemorySpecifyCache;
  PhysicalObject = SmmCreatePhysicalObject(a1, 5, a2, (int)&v24, v14, 0, a7, a8, (ULONG_PTR **)a9, (ULONG_PTR **)a10);
  if ( PhysicalObject < 0 )
  {
    MmFreeContiguousMemory(v17);
LABEL_10:
    *v18 = 0LL;
    result = (unsigned int)PhysicalObject;
    v23 = a11;
    *v16 = 0LL;
    *v23 = 0LL;
    return result;
  }
  *a11 = v17;
  return 0LL;
}
