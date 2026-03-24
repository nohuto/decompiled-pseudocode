/*
 * XREFs of ?VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z @ 0x1C00865EC
 * Callers:
 *     VidMmGetAllocationGpuVirtualAddress @ 0x1C0014910 (VidMmGetAllocationGpuVirtualAddress.c)
 * Callees:
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0086618 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::VidMmGetAllocationGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        char a3,
        unsigned int a4)
{
  if ( a3 )
    return *((_QWORD *)a2 + 18);
  else
    return VIDMM_ALLOC::GetGpuVirtualAddress(a2, a4);
}
