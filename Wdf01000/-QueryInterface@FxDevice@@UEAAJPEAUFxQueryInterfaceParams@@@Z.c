int __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4098 )
    return FxDeviceBase::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
