/*
 * XREFs of SysMmTestCreateSectionPhysicalObject @ 0x1C0071890
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D2134 (-SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMO.c)
 */

__int64 __fastcall SysMmTestCreateSectionPhysicalObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return SysMmCreateSectionPhysicalObject(a1, a2, a3, a4, a5, a6, a7, a8, 9, a9, a10);
}
