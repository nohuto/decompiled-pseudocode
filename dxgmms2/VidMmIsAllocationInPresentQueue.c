unsigned __int8 __fastcall VidMmIsAllocationInPresentQueue(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  return VIDMM_GLOBAL::IsAllocationInPresentQueue(a1, a2, a3);
}
