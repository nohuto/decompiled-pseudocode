FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  FxDeviceInterface::~FxDeviceInterface(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
