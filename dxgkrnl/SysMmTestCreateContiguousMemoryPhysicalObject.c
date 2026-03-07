__int64 __fastcall SysMmTestCreateContiguousMemoryPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS a5,
        MEMORY_CACHING_TYPE a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  return SysMmCreateContiguousMemoryPhysicalObject(a1, a2, a3, a4, a5, a6, a7, 9, a8, a9, a10);
}
