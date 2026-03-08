/*
 * XREFs of VidMmQueryAllocationResidency @ 0x1C002D300
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00E6B8C (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MU.c)
 */

enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VidMmQueryAllocationResidency(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationResidency(a1, a2);
}
