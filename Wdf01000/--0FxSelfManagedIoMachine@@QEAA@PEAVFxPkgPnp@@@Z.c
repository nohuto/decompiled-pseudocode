void __fastcall FxSelfManagedIoMachine::FxSelfManagedIoMachine(FxSelfManagedIoMachine *this, FxPkgPnp *PkgPnp)
{
  this->m_DeviceSelfManagedIoCleanup.m_Method = 0LL;
  this->m_DeviceSelfManagedIoFlush.m_Method = 0LL;
  this->m_DeviceSelfManagedIoInit.m_Method = 0LL;
  this->m_DeviceSelfManagedIoSuspend.m_Method = 0LL;
  this->m_DeviceSelfManagedIoRestart.m_Method = 0LL;
  this->m_DeviceSelfManagedIoCleanup.__vftable = (FxPnpDeviceSelfManagedIoCleanup_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceSelfManagedIoFlush.__vftable = (FxPnpDeviceSelfManagedIoFlush_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceSelfManagedIoInit.__vftable = (FxPnpDeviceSelfManagedIoInit_vtbl *)FxPnpDeviceSelfManagedIoInit::`vftable';
  this->m_DeviceSelfManagedIoSuspend.__vftable = (FxPnpDeviceSelfManagedIoSuspend_vtbl *)FxPnpDeviceSelfManagedIoSuspend::`vftable';
  this->m_DeviceSelfManagedIoRestart.__vftable = (FxPnpDeviceSelfManagedIoRestart_vtbl *)FxPnpDeviceSelfManagedIoRestart::`vftable';
  FxWaitLockInternal::FxWaitLockInternal(&this->m_StateMachineLock);
  *(_WORD *)&this->m_EventHistoryIndex = 0;
  this->m_PkgPnp = PkgPnp;
  this->m_CurrentState = 1;
  *(_OWORD *)&this->m_Events.E = 0LL;
}
