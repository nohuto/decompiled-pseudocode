void __fastcall VidMmDelayExecution(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  VIDMM_GLOBAL::DelayExecution(a1, a2, a3, a4, a5, a6);
}
