/*
 * XREFs of ?VidMmGetAllocationPhysicalAddress@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAT_LARGE_INTEGER@@@Z @ 0x1C002CBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmGetAllocationPhysicalAddress@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00EA3E8 (-VidMmGetAllocationPhysicalAddress@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAT_LARGE_.c)
 */

__int64 __fastcall VidMmGetAllocationPhysicalAddress(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        union _LARGE_INTEGER *a3)
{
  return VIDMM_GLOBAL::VidMmGetAllocationPhysicalAddress(a1, a2, a3);
}
