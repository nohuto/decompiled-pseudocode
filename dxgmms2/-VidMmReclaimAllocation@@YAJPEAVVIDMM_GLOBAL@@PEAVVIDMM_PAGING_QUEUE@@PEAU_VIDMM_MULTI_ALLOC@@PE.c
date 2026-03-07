__int64 __fastcall VidMmReclaimAllocation(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  return VIDMM_GLOBAL::ReclaimAllocation(a1, a2, a3, a4, a5);
}
