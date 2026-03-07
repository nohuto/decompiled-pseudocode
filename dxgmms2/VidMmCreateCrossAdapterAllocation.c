int __fastcall VidMmCreateCrossAdapterAllocation(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_CROSSADAPTER_ALLOC **a2,
        void *a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  return VIDMM_GLOBAL::CreateCrossAdapterAllocation(a1, a2, a3, a4, a5);
}
