/*
 * XREFs of VidMmGetAllocationGpuVirtualAddress @ 0x1C0016F70
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z @ 0x1C00B21AC (-VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z.c)
 */

unsigned __int64 __fastcall VidMmGetAllocationGpuVirtualAddress(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::VidMmGetAllocationGpuVirtualAddress(a1, a2, a3, a4);
}
