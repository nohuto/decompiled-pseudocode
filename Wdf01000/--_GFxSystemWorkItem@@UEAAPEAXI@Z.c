FxSystemWorkItem *__fastcall FxSystemWorkItem::`scalar deleting destructor'(FxSystemWorkItem *this, unsigned int a2)
{
  char v2; // bl
  FxSystemWorkItem *v4; // rcx

  v2 = a2;
  FxSystemWorkItem::~FxSystemWorkItem(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxSystemWorkItem *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
