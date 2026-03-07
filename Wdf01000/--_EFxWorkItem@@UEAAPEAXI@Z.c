FxWorkItem *__fastcall FxWorkItem::`vector deleting destructor'(FxWorkItem *this, unsigned int a2)
{
  char v2; // bl
  FxWorkItem *v4; // rcx

  v2 = a2;
  FxWorkItem::~FxWorkItem(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxWorkItem *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
