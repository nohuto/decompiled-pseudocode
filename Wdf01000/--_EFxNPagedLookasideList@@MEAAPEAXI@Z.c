FxNPagedLookasideList *__fastcall FxNPagedLookasideList::`vector deleting destructor'(
        FxNPagedLookasideList *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FX_POOL_TRACKER *p_LastTotalAllocates; // rcx

  v3 = a2;
  FxNPagedLookasideList::~FxNPagedLookasideList(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    p_LastTotalAllocates = (FX_POOL_TRACKER *)&this[-1].m_ObjectLookaside.L.LastTotalAllocates;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_LastTotalAllocates = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_LastTotalAllocates);
  }
  return this;
}
