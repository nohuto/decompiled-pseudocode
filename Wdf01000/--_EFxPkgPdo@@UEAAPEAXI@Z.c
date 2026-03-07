FxPkgPdo *__fastcall FxPkgPdo::`vector deleting destructor'(FxPkgPdo *this, char a2)
{
  FxPkgPdo *v4; // rcx

  FxPkgPdo::~FxPkgPdo(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgPdo *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
