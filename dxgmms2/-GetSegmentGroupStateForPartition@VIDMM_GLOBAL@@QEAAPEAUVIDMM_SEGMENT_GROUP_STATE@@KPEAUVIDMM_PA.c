/*
 * XREFs of ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B4AA8
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00192C0 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00194B0 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00310FC (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT_GROUP_STATE *__fastcall VIDMM_GLOBAL::GetSegmentGroupStateForPartition(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PARTITION *a3)
{
  return (struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                        + *((_QWORD *)a3 + 5)
                                                        + 24)
                                            + 344LL * a2);
}
