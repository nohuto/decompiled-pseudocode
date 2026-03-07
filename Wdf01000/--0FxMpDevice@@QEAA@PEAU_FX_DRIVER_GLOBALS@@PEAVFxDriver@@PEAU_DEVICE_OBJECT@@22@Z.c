void __fastcall FxMpDevice::FxMpDevice(
        FxMpDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDriver *Driver,
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *AttachedDevice,
        _DEVICE_OBJECT *PDO)
{
  FxDeviceBase::FxDeviceBase(this, FxDriverGlobals, Driver, 0x1014u, 0xD0u);
  this->m_DefaultTarget = 0LL;
  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxMpDevice_vtbl *)FxMpDevice::`vftable'{for `FxNonPagedObject'};
  this->m_DeviceObject.m_DeviceObject = DeviceObject;
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = AttachedDevice;
  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = PDO;
  ObfReferenceObject(DeviceObject);
  this->m_ObjectFlags |= 0x800u;
}
