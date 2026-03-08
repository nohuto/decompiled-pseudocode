/*
 * XREFs of ?QuerySegmentGroupUsageStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1C00EEB18
 * Callers:
 *     ?VidMmQuerySegmentGroupUsageStatistics@@YAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1C002CDC0 (-VidMmQuerySegmentGroupUsageStatistics@@YAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QuerySegmentGroupUsageStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PARTITION **a4,
        struct _D3DKMT_QUERYSTATISTICS_MEMORY_USAGE *a5)
{
  unsigned int v5; // eax
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *((_DWORD *)this + 1754);
  if ( a2 >= v5 )
  {
    WdLogSingleEntry2(3LL, a2, v5);
    return 3221225485LL;
  }
  if ( (unsigned int)a3 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
    return 3221225485LL;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, a3, a4[36]);
  v8 = *((_QWORD *)SegmentGroupState + 16);
  v9 = *((_QWORD *)SegmentGroupState + 15);
  v10 = *((_QWORD *)SegmentGroupState + 1) - v8;
  *((_QWORD *)a5 + 2) = 0LL;
  *((_QWORD *)a5 + 4) = 0LL;
  *(_QWORD *)a5 = v9;
  *((_QWORD *)a5 + 1) = v10;
  *((_QWORD *)a5 + 3) = v8 - v9;
  return 0LL;
}
