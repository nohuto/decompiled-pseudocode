FxRegKey *__fastcall FxRegKey::`scalar deleting destructor'(FxRegKey *this, char a2)
{
  FxRegKey *v4; // rcx

  FxRegKey::~FxRegKey(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxRegKey *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
