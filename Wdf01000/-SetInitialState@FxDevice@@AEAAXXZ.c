/*
 * XREFs of ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C003EA2C
 * Callers:
 *     ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x1C003D444 (--0FxDevice@@QEAA@PEAVFxDriver@@@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 */

void __fastcall FxDevice::SetInitialState(FxDevice *this)
{
  this->m_CurrentPnpState = WdfDevStatePnpObjectCreated;
  this->m_CurrentPowerState = WdfDevStatePowerObjectCreated;
  this->m_CurrentPowerPolicyState = WdfDevStatePwrPolObjectCreated;
  this->m_ReadWriteIoType = WdfDeviceIoBuffered;
  this->m_DeviceName = 0LL;
  this->m_SymbolicLinkName = 0LL;
  this->m_MofResourceName = 0LL;
  this->m_PreprocessInfoListHead.Blink = &this->m_PreprocessInfoListHead;
  this->m_PreprocessInfoListHead.Flink = &this->m_PreprocessInfoListHead;
  this->m_CxDeviceInfoListHead.Blink = &this->m_CxDeviceInfoListHead;
  this->m_CxDeviceInfoListHead.Flink = &this->m_CxDeviceInfoListHead;
  *(_DWORD *)&this->m_Filter = 0;
  *(_WORD *)&this->m_Legacy = 0;
  *(_WORD *)&this->m_PdoKnown = 0;
  this->m_SelfIoTargetNeeded = 0;
  this->m_DeviceTelemetryInfoFlags = 0;
  this->m_PkgIo = 0LL;
  this->m_PkgPnp = 0LL;
  this->m_PkgGeneral = 0LL;
  this->m_PkgWmi = 0LL;
  this->m_PkgDefault = 0LL;
  this->m_DefaultPriorityBoost = 0;
  this->m_RequestLookasideListElementSize = 0LL;
  this->m_FileObjectListHead.Blink = &this->m_FileObjectListHead;
  this->m_FileObjectListHead.Flink = &this->m_FileObjectListHead;
  this->m_FileObjectClass = WdfFileObjectNotRequired;
  memset(&this->m_RequestLookasideList, 0, sizeof(this->m_RequestLookasideList));
  *(_OWORD *)&this->m_RequestAttributes.Size = 0LL;
  *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = 0LL;
  *(_OWORD *)&this->m_RequestAttributes.ParentObject = 0LL;
  this->m_RequestAttributes.ContextTypeInfo = 0LL;
}
