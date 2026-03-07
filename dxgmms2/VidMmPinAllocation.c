__int64 __fastcall VidMmPinAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6)
{
  return VIDMM_GLOBAL::PinAllocation(a1, a2, a3, a4, a5, a6);
}
