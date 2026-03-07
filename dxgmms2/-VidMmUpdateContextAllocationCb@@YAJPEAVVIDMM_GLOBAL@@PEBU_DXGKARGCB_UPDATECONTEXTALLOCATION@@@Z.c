__int64 __fastcall VidMmUpdateContextAllocationCb(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(a1, a2, 0);
}
