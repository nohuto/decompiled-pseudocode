/*
 * XREFs of ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C000E414 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C000E8B4 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0011174 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0012B0C (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoNP(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  __int64 v3; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    progress = FxCxCallbackProgressInitialized;
    if ( FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
      return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33582 : 33634;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, WdfPowerDeviceD0);
  FxPkgPnp::PowerSendPowerUpEvents(This);
  LOBYTE(v3) = 1;
  This->PowerReleasePendingDeviceIrp(This, v3);
  return This->m_SharedPower.m_WaitWakeOwner != 0 ? 33546 : 33544;
}
