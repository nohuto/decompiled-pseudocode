void __fastcall FxPkgGeneral::FxPkgGeneral(FxPkgGeneral *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxPackage::FxPackage(this, FxDriverGlobals, Device, 0x1104u);
  this->__vftable = (FxPkgGeneral_vtbl *)FxPkgGeneral::`vftable';
  this->m_FileObjectInfoHeadList.Blink = &this->m_FileObjectInfoHeadList;
  this->m_FileObjectInfoHeadList.Flink = &this->m_FileObjectInfoHeadList;
  this->m_EvtDeviceShutdown.m_Method = 0LL;
  this->m_OpenHandleCount = 1;
  this->m_ExecutionLevel = WdfExecutionLevelInheritFromParent;
  this->m_SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  this->m_Flags = 0;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DriverCreatedQueue = 0LL;
  this->m_DefaultQueueForCreates = 0LL;
}
