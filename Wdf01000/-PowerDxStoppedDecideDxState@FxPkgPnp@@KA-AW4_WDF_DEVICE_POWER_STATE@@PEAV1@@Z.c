/*
 * XREFs of ?PowerDxStoppedDecideDxState@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x1C006FC30 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDecideDxState(FxPkgPnp *This)
{
  _IRP *m_WaitWakeIrp; // rdx

  FxPkgPnp::PowerSendPowerUpEvents(This);
  m_WaitWakeIrp = This->m_SharedPower.m_WaitWakeIrp;
  if ( (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
    return m_WaitWakeIrp != 0LL ? 846 : 799;
  else
    return m_WaitWakeIrp != 0LL ? 33615 : 33568;
}
