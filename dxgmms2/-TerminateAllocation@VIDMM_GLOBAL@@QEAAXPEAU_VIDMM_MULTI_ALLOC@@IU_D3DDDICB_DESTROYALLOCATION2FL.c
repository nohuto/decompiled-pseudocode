void __fastcall VIDMM_GLOBAL::TerminateAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  VIDMM_GLOBAL::TerminateOneAllocation(this, a2, a3, a4, a5);
}
