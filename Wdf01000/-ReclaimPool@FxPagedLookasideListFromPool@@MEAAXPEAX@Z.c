/*
 * XREFs of ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C0041C30
 * Callers:
 *     <none>
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x1C000C8F8 (FxFreeToNPagedLookasideList.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C00419E0 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

void __fastcall FxPagedLookasideListFromPool::ReclaimPool(FxPagedLookasideListFromPool *this, FX_POOL_TRACKER *Pool)
{
  FX_POOL_TRACKER **p_CallersAddress; // rdi

  if ( this->m_BufferSize < 0x1000 )
  {
    p_CallersAddress = (FX_POOL_TRACKER **)&Pool[-1].CallersAddress;
    if ( this->m_Globals->FxPoolTrackingOn )
      FxPoolRemovePagedAllocateTracker(*p_CallersAddress);
    Pool = *p_CallersAddress;
  }
  FxFreeToNPagedLookasideList(&this->m_PoolLookaside, (_SLIST_ENTRY *)Pool);
}
