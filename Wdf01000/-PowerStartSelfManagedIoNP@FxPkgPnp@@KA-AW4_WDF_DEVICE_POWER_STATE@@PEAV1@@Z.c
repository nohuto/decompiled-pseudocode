/*
 * XREFs of ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0062B40 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C006FC30 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C006FCDC (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C0081AA0 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoNP(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  __int64 v4; // rdx
  unsigned __int8 v5; // r8
  __int64 v6; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    progress = FxCxCallbackProgressInitialized;
    if ( FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
      return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33582 : 33634;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, (POWER_STATE)1);
  FxPkgPnp::PowerSendPowerUpEvents(This, v4, v5);
  LOBYTE(v6) = 1;
  This->PowerReleasePendingDeviceIrp(This, v6);
  return This->m_SharedPower.m_WaitWakeOwner != 0 ? 33546 : 33544;
}
