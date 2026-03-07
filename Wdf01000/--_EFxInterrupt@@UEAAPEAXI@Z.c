FxInterrupt *__fastcall FxInterrupt::`vector deleting destructor'(FxInterrupt *this, unsigned int a2)
{
  char v2; // bl
  FxInterrupt *v4; // rcx

  v2 = a2;
  FxInterrupt::~FxInterrupt(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxInterrupt *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
