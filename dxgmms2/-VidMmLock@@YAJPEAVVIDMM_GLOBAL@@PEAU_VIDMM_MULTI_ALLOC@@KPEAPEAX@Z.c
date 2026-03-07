__int64 __fastcall VidMmLock(struct VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3, void **a4)
{
  return VIDMM_GLOBAL::Lock(a1, a2, a3, a4);
}
