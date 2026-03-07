FxDeviceBase *__fastcall FxDeviceBase::`scalar deleting destructor'(FxDeviceBase *this, char a2)
{
  FxDeviceBase *v4; // rcx

  FxDeviceBase::~FxDeviceBase(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDeviceBase *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
