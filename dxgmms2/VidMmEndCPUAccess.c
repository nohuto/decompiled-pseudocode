__int64 __fastcall VidMmEndCPUAccess(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3, unsigned int a4)
{
  struct _VIDMM_REGION *v5; // [rsp+20h] [rbp-18h]

  return VIDMM_GLOBAL::EndCPUAccess(a1, a2, a3, a4, v5);
}
