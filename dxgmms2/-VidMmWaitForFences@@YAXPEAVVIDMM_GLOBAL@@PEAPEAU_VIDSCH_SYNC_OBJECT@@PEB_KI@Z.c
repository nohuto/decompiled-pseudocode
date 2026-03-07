void __fastcall VidMmWaitForFences(
        struct VIDMM_GLOBAL *a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4)
{
  VIDMM_GLOBAL::WaitForFences(a1, a2, a3, a4, 0LL);
}
