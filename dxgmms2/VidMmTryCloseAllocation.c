__int64 __fastcall VidMmTryCloseAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct _KEVENT **a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4)
{
  return VIDMM_GLOBAL::CloseAllocation(a1, a2, 1u, 0LL, a4, a3);
}
