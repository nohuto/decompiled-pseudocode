__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **this,
        unsigned __int64 a2,
        __int64 a3,
        struct VIDMM_RECYCLE_MULTIRANGE **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  __int64 v9; // rbx
  __int64 v12; // r14
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  unsigned __int8 v19; // dl
  int v20; // eax
  unsigned __int8 v21; // r10
  unsigned int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // edx
  void *v29; // rcx
  __int64 v30; // rdx
  void *v31; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  unsigned __int8 v33; // r8
  struct VIDMM_RECYCLE_RANGE *v34; // r9
  int v35; // [rsp+30h] [rbp-20h] BYREF
  __int64 v36; // [rsp+38h] [rbp-18h]
  char v37; // [rsp+40h] [rbp-10h]

  v35 = -1;
  v9 = (unsigned int)a3;
  v36 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v37 = 1;
    v35 = 8004;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = v9;
  WdLogSingleEntry3(4LL, this, a2, v9);
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v9, a8);
  if ( !BlockAndRange )
  {
    WdLogSingleEntry3(4LL, this, a2, v12);
    BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v14, a8);
    if ( !BlockAndRange )
    {
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 )
      {
        if ( byte_1C00769C1 < 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v35);
      }
      return 3221225495LL;
    }
  }
  v18 = *((_QWORD *)BlockAndRange + 6);
  if ( *((_QWORD *)BlockAndRange + 5) - v18 > a2 )
    VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v18 - *((_QWORD *)BlockAndRange + 4));
  VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
  v20 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, v19, a7);
  v21 = 0;
  v22 = v20;
  if ( v20 >= 0 )
  {
    v25 = *((_QWORD *)BlockAndRange + 9);
    v26 = 0LL;
    v27 = *(_QWORD *)(v25 + 120);
    if ( v27 != *(_QWORD *)(v25 + 72) + 72LL )
      v26 = v27 - 120;
    if ( v26 && !*(_DWORD *)(v26 + 64) )
    {
      VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD *)BlockAndRange + 10), v26);
      v21 = 0;
    }
    *a4 = BlockAndRange;
    v28 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
    if ( (unsigned int)(v28 - 3) > 3 || (unsigned int)(v28 - 5) <= 1 )
      v29 = (void *)*((_QWORD *)BlockAndRange + 6);
    else
      v29 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
    *a5 = v29;
    if ( a6 )
    {
      v30 = *((_QWORD *)BlockAndRange + 10);
      if ( (unsigned int)(**(_DWORD **)(v30 + 32) - 9) <= 1 )
        v31 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v30 + 120) - *(_QWORD *)(v30 + 40));
      else
        v31 = 0LL;
      *a6 = v31;
    }
    NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
    v33 = 1;
    v34 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
    while ( 1 )
    {
      if ( *((_DWORD *)NextRange + 20) > 1u )
        v33 = v21;
      if ( NextRange == v34 )
        break;
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
    *a7 = v33;
    *(_QWORD *)(*((_QWORD *)this[1] + 1) + 136LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    goto LABEL_40;
  }
  WdLogSingleEntry5(3LL, BlockAndRange, a2, v12, v20, **((_QWORD **)this[1] + 1));
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
  {
    VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
LABEL_18:
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], BlockAndRange);
    goto LABEL_19;
  }
  if ( !VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees_To_Remove((VIDMM_RECYCLE_HEAP *)this, BlockAndRange) )
    goto LABEL_18;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
LABEL_40:
  if ( v37 && byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v35);
  return v22;
}
