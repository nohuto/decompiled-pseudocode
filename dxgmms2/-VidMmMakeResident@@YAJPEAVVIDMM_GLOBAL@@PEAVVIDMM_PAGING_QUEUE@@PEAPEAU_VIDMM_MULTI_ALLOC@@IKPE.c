__int64 __fastcall VidMmMakeResident(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  return VIDMM_GLOBAL::MakeResident(a1, a2, a3, a4, a5, a6, a7);
}
