__int64 __fastcall VidMmUpdateAllocationProperty(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct _VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  return VIDMM_GLOBAL::UpdateAllocationProperty(a1, a2, a3, a4, a5);
}
