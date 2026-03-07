__int64 __fastcall VidMmWaitOnAllocationDmaReferences(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::WaitOnAllocationDmaReferences(a1, a2, a3, a4);
}
