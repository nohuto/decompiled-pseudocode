/*
 * XREFs of ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C0041A54
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0041790 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0041910 (-FxPoolInsertPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 */

FX_POOL **__fastcall FxPagedLookasideListFromPool::InitPagedAlloc(
        FxPagedLookasideListFromPool *this,
        FX_POOL_TRACKER *Alloc)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FX_POOL_TRACKER *v5; // rdi
  void *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  memset(Alloc, 0, this->m_RawBufferSize);
  if ( m_Globals->FxPoolTrackingOn )
  {
    v5 = Alloc + 1;
    Alloc[1].Link.Flink = &Alloc->Link;
    Alloc[1].Link.Blink = &m_Globals->Linkage;
    FxPoolInsertPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      Alloc,
      this->m_RawBufferSize,
      this->m_PoolTag,
      Caller);
  }
  else
  {
    v5 = Alloc;
    Alloc->Link.Flink = &Alloc->Link;
    Alloc->Link.Blink = &m_Globals->Linkage;
  }
  return &v5->Pool;
}
