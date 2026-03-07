enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VIDMM_GLOBAL::QueryAllocationResidency(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC **a2)
{
  return VIDMM_GLOBAL::QueryLocalAllocationResidency(this, *a2);
}
