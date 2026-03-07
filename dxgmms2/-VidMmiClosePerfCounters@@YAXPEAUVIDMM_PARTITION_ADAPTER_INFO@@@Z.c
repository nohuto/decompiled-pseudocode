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
