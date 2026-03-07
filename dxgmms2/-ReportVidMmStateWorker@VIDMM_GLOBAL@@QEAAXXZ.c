void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int i; // esi
  unsigned int j; // esi
  struct _LIST_ENTRY *Flink; // rdi
  VIDMM_GLOBAL *k; // rdi
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 926); ++i )
    VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * i), a2, a3);
  for ( j = 0; j < *((_DWORD *)this + 1754); ++j )
  {
    if ( *((_QWORD *)this + j + 143) )
      VIDMM_DMA_POOL::ReportState(*((VIDMM_DMA_POOL **)this + j + 79));
  }
  if ( *((_DWORD *)this + 926) )
  {
    do
      VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * v3++));
    while ( v3 < *((_DWORD *)this + 926) );
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 1) != 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
      (DXGAUTOPUSHLOCK *)v9,
      (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
      0);
    DXGPUSHLOCK::AcquireExclusive(v10);
    Flink = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
    v11 = 2;
    while ( Flink != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
    {
      VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&Flink[-100]);
      Flink = Flink->Flink;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  }
  VIDMM_GLOBAL::ReportProcessStates((struct _KTHREAD **)this);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 5134, 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v11 = 1;
  for ( k = (VIDMM_GLOBAL *)*((_QWORD *)this + 5140); k != (VIDMM_GLOBAL *)((char *)this + 41120); k = *(VIDMM_GLOBAL **)k )
    VIDMM_GLOBAL::ReportProcessAdapterBudget(this, (struct _KTHREAD **)k - 3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
