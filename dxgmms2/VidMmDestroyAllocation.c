void __fastcall VidMmDestroyAllocation(VIDMM_GLOBAL **a1, VIDMM_GLOBAL *a2, struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  if ( a1 )
    a2 = *a1;
  VIDMM_GLOBAL::DestroyAllocation(
    a2,
    (struct VIDMM_DEVICE *)((unsigned __int64)a1 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
    a3);
}
