/*
 * XREFs of ??0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0084D28
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0067CD0 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 */

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
