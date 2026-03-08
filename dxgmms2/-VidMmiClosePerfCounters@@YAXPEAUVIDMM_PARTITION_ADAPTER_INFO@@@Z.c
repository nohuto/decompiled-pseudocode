/*
 * XREFs of ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00310FC
 * Callers:
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00310C0 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00E144C (-DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B4AA8 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 */

void __fastcall VidMmiClosePerfCounters(struct VIDMM_PARTITION_ADAPTER_INFO *a1)
{
  VIDMM_GLOBAL *v1; // rax
  unsigned int i; // ebx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  struct VIDMM_SEGMENT_GROUP_STATE *v5; // rdi
  struct _PCW_INSTANCE *v6; // rcx

  v1 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 1);
  for ( i = 0; i < *((_DWORD *)v1 + 1754); ++i )
  {
    SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(
                                      v1,
                                      i,
                                      *(struct VIDMM_PARTITION **)a1);
    v5 = SegmentGroupStateForPartition;
    v6 = (struct _PCW_INSTANCE *)*((_QWORD *)SegmentGroupStateForPartition + 42);
    if ( v6 )
    {
      if ( *(_DWORD *)SegmentGroupStateForPartition <= 1u )
      {
        PcwCloseInstance(v6);
        *((_QWORD *)v5 + 42) = 0LL;
      }
    }
    v1 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 1);
  }
}
