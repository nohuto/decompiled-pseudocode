/*
 * XREFs of ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00194B0
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00192C0 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B4AA8 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C00BD504 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_PARTITION *a2,
        struct VIDMM_PARTITION_ADAPTER_INFO *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned __int64 v5; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // r10
  unsigned __int64 v10; // rdi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  unsigned int v12; // edx

  v3 = (unsigned int)dword_1C00765B8;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 6);
  if ( *((_DWORD *)a2 + 8) )
    v3 = (unsigned int)dword_1C00765BC;
  v8 = v5 * v3 / 0x64;
  if ( v8 < (unsigned int)dword_1C00765B0 )
  {
    if ( v5 > (unsigned int)dword_1C00765B4 )
    {
      v8 = (v5 - (unsigned int)dword_1C00765B4) >> 1;
      if ( (unsigned int)dword_1C00765B0 > v8 )
        v8 = (unsigned int)dword_1C00765B0;
    }
    else
    {
      v8 = (unsigned int)dword_1C00765B0;
    }
  }
  *((_QWORD *)a3 + 2) = v8;
  if ( !*((_DWORD *)a2 + 8) )
  {
    v9 = v8 - *((_QWORD *)this + 881);
    *((_QWORD *)a3 + 2) = v9;
    qword_1C00765A8 = v9;
  }
  v10 = *((_QWORD *)a3 + 2);
  if ( qword_1C0076470 && v10 >= qword_1C0076470 )
    v10 = qword_1C0076470;
  if ( *((_DWORD *)this + 1754) )
  {
    do
    {
      SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(this, v4, a2);
      VIDMM_GLOBAL::InitializeSegmentGroupState(this, v12, SegmentGroupStateForPartition, v10);
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 1754) );
  }
}
