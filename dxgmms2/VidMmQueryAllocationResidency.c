enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VidMmQueryAllocationResidency(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationResidency(a1, a2);
}
