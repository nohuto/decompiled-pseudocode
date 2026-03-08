/*
 * XREFs of VidMmGetTotalSegmentSize @ 0x1C0012140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C00AAA8C (-GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z.c)
 */

void __fastcall VidMmGetTotalSegmentSize(
        VIDMM_GLOBAL *a1,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  VIDMM_GLOBAL::GetTotalSegmentSize(a1, a2, a3, a4, a5, a6, a7, a8);
}
