__int64 __fastcall VidMmCloseAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4)
{
  return VIDMM_GLOBAL::CloseAllocation(a1, a2, 0, a3, a4, 0LL);
}
