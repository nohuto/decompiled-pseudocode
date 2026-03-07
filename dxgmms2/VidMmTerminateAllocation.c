void __fastcall VidMmTerminateAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  VIDMM_GLOBAL::TerminateAllocation(a1, a2, a3, a4, a5);
}
