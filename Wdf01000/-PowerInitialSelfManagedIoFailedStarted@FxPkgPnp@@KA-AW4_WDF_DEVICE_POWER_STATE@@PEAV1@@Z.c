__int64 __fastcall FxPkgPnp::PowerInitialSelfManagedIoFailedStarted(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx

  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  m_SelfManagedIoMachine->m_DeviceSelfManagedIoSuspend.m_TargetState = WdfPowerDeviceD3Final;
  FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
  return 835LL;
}
