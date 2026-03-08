/*
 * XREFs of ?VidMmQuerySegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1C002CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1C00EEB9C (-QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z.c)
 */

__int64 __fastcall VidMmQuerySegmentStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QuerySegmentStatistics(a1, a2, a3, a4);
}
