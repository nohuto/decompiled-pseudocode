FxDriver *__fastcall FxDriver::`vector deleting destructor'(FxDriver *this, char a2)
{
  FxDriver *v4; // rcx

  FxDriver::~FxDriver(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDriver *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
