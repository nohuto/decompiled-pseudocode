/*
 * XREFs of SysMmTestCreateMdlPhysicalObject @ 0x1C0071750
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x1C0012FB4 (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 */

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
