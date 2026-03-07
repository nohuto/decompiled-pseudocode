void __fastcall FxPackage::FxPackage(
        FxPackage *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 Type)
{
  FxNonPagedObject::FxNonPagedObject(this, Type, 0, FxDriverGlobals);
  this->m_DeviceBase = Device;
  this->__vftable = (FxPackage_vtbl *)FxPackage::`vftable';
}
