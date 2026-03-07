__int64 __fastcall SysMmTestCreateMdlPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS a5,
        MEMORY_CACHING_TYPE a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _QWORD *a10,
        struct _MDL **a11)
{
  return SysMmCreateMdlPhysicalObject(a1, a2, a3, a4, a5, a6, a7, a8, 9, a9, a10, a11);
}
