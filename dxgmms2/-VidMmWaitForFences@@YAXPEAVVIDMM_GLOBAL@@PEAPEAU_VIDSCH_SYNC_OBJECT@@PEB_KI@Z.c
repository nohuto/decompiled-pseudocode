/*
 * XREFs of ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C00012B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 */

void __fastcall VidMmWaitForFences(
        struct VIDMM_GLOBAL *a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4)
{
  VIDMM_GLOBAL::WaitForFences(a1, a2, a3, a4, 0LL);
}
