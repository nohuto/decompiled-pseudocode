int __fastcall FxPkgPnp::RegisterCallbacks(FxPkgPnp *this, _WDF_PNPPOWER_EVENT_CALLBACKS *DispatchTable)
{
  int v2; // edi
  FxPkgPnp *v4; // r11
  FxSelfManagedIoMachine **p_m_SelfManagedIoMachine; // rsi
  int result; // eax
  FxSelfManagedIoMachine *v7; // rdx
  void (__fastcall *EvtDeviceSelfManagedIoCleanup)(WDFDEVICE__ *); // rax
  FxPkgPnp *m_PkgPnp; // rcx

  v2 = 0;
  this->m_DeviceD0Entry.m_Method = DispatchTable->EvtDeviceD0Entry;
  this->m_DeviceD0Entry.m_PkgPnp = this;
  v4 = this;
  this->m_DeviceD0Entry.m_CallbackType = FxCxCallbackD0Entry;
  this->m_DeviceD0Exit.m_Method = DispatchTable->EvtDeviceD0Exit;
  this->m_DeviceD0Exit.m_PkgPnp = this;
  this->m_DeviceD0Exit.m_CallbackType = FxCxCallbackD0Exit;
  this->m_DevicePrepareHardware.m_Method = DispatchTable->EvtDevicePrepareHardware;
  this->m_DevicePrepareHardware.m_PkgPnp = this;
  this->m_DevicePrepareHardware.m_CallbackType = FxCxCallbackPrepareHardware;
  this->m_DeviceReleaseHardware.m_Method = DispatchTable->EvtDeviceReleaseHardware;
  this->m_DeviceReleaseHardware.m_PkgPnp = this;
  this->m_DeviceReleaseHardware.m_CallbackType = FxCxCallbackReleaseHardware;
  this->m_DeviceSurpriseRemoval.m_Method = DispatchTable->EvtDeviceSurpriseRemoval;
  this->m_DeviceSurpriseRemoval.m_PkgPnp = this;
  this->m_DeviceSurpriseRemoval.m_CallbackType = FxCxCallbackSurpriseRemoval;
  this->m_DeviceD0EntryPostHardwareEnabled.m_PkgPnp = this;
  this->m_DeviceD0EntryPostHardwareEnabled.m_CallbackType = FxCxCallbackD0EntryPostHwEnabled;
  this->m_DeviceD0ExitPreHardwareDisabled.m_PkgPnp = this;
  this->m_DeviceD0ExitPreHardwareDisabled.m_CallbackType = FxCxCallbackD0ExitPreHwDisabled;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = DispatchTable->EvtDeviceD0EntryPostInterruptsEnabled;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = DispatchTable->EvtDeviceD0ExitPreInterruptsDisabled;
  this->m_DeviceQueryStop.m_Method = DispatchTable->EvtDeviceQueryStop;
  this->m_DeviceQueryRemove.m_Method = DispatchTable->EvtDeviceQueryRemove;
  this->m_DeviceUsageNotification.m_Method = DispatchTable->EvtDeviceUsageNotification;
  this->m_DeviceUsageNotificationEx.m_Method = DispatchTable->EvtDeviceUsageNotificationEx;
  this->m_DeviceRelationsQuery.m_Method = DispatchTable->EvtDeviceRelationsQuery;
  if ( *(_OWORD *)&DispatchTable->EvtDeviceSelfManagedIoCleanup != 0LL
    || DispatchTable->EvtDeviceSelfManagedIoInit
    || DispatchTable->EvtDeviceSelfManagedIoSuspend
    || DispatchTable->EvtDeviceSelfManagedIoRestart
    || FxDevice::IsCxUsingSelfManagedIo(this->m_Device) )
  {
    p_m_SelfManagedIoMachine = &v4->m_SelfManagedIoMachine;
    result = FxSelfManagedIoMachine::_CreateAndInit(&v4->m_SelfManagedIoMachine, v4);
    v2 = result;
    if ( result < 0 )
      return result;
    v7 = *p_m_SelfManagedIoMachine;
    EvtDeviceSelfManagedIoCleanup = DispatchTable->EvtDeviceSelfManagedIoCleanup;
    m_PkgPnp = (*p_m_SelfManagedIoMachine)->m_PkgPnp;
    v7->m_DeviceSelfManagedIoCleanup.m_PkgPnp = m_PkgPnp;
    v7->m_DeviceSelfManagedIoCleanup.m_Method = EvtDeviceSelfManagedIoCleanup;
    v7->m_DeviceSelfManagedIoCleanup.m_CallbackType = FxCxCallbackSmIoCleanup;
    v7->m_DeviceSelfManagedIoFlush.m_Method = DispatchTable->EvtDeviceSelfManagedIoFlush;
    v7->m_DeviceSelfManagedIoFlush.m_PkgPnp = m_PkgPnp;
    v7->m_DeviceSelfManagedIoFlush.m_CallbackType = FxCxCallbackSmIoFlush;
    v7->m_DeviceSelfManagedIoInit.m_Method = DispatchTable->EvtDeviceSelfManagedIoInit;
    v7->m_DeviceSelfManagedIoInit.m_PkgPnp = m_PkgPnp;
    v7->m_DeviceSelfManagedIoInit.m_CallbackType = FxCxCallbackSmIoInit;
    v7->m_DeviceSelfManagedIoSuspend.m_Method = DispatchTable->EvtDeviceSelfManagedIoSuspend;
    v7->m_DeviceSelfManagedIoSuspend.m_PkgPnp = m_PkgPnp;
    v7->m_DeviceSelfManagedIoSuspend.m_CallbackType = FxCxCallbackSmIoSuspend;
    v7->m_DeviceSelfManagedIoRestart.m_Method = DispatchTable->EvtDeviceSelfManagedIoRestart;
    v7->m_DeviceSelfManagedIoRestart.m_PkgPnp = m_PkgPnp;
    v7->m_DeviceSelfManagedIoRestart.m_CallbackType = FxCxCallbackSmIoRestart;
  }
  return v2;
}
