/*
 * XREFs of ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00E6B8C
 * Callers:
 *     VidMmQueryAllocationResidency @ 0x1C002D300 (VidMmQueryAllocationResidency.c)
 * Callees:
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00E6BB8 (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VID.c)
 */

enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VIDMM_GLOBAL::QueryAllocationResidency(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC **a2)
{
  return VIDMM_GLOBAL::QueryLocalAllocationResidency(this, *a2);
}
