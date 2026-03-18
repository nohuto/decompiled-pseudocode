/*
 * XREFs of ?Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001C748
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0011284 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DBE0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C000E8B4 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::Suspend(
        FxSelfManagedIoMachine *this,
        _WDF_POWER_DEVICE_STATE TargetDevicePowerState)
{
  this->m_DeviceSelfManagedIoSuspend.m_TargetState = TargetDevicePowerState;
  return FxSelfManagedIoMachine::ProcessEvent(this, (_FX_DRIVER_GLOBALS *)4, 0LL);
}
