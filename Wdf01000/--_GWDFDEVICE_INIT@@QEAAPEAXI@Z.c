WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::`scalar deleting destructor'(WDFDEVICE_INIT *this)
{
  WDFDEVICE_INIT::~WDFDEVICE_INIT(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
