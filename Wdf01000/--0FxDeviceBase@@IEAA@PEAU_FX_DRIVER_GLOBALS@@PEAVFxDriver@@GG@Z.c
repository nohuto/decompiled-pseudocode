void __fastcall FxDeviceBase::FxDeviceBase(
        FxDeviceBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDriver *Driver,
        unsigned __int16 Type,
        unsigned __int16 Size)
{
  FxNonPagedObject::FxNonPagedObject(this, Type, Size, FxDriverGlobals);
  this->m_Driver = Driver;
  this->FxNonPagedObject::FxObject::__vftable = (FxDeviceBase_vtbl *)FxDeviceBase::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  this->m_DeviceObject.m_DeviceObject = 0LL;
  this->m_AttachedDevice.m_DeviceObject = 0LL;
  this->m_PhysicalDevice.m_DeviceObject = 0LL;
  this->m_ObjectFlags |= 0x10u;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DisposeList = 0LL;
  this->m_ExecutionLevel = WdfExecutionLevelInheritFromParent;
  *(_QWORD *)&this->m_SynchronizationScope = 1LL;
  this->m_DeviceBase = this;
}
