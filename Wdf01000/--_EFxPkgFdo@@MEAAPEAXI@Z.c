FxPkgFdo *__fastcall FxPkgFdo::`vector deleting destructor'(FxPkgFdo *this, char a2)
{
  FxPkgFdo *v4; // rcx

  FxPkgFdo::~FxPkgFdo(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgFdo *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
