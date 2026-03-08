/*
 * XREFs of ?PowerD0BusWakeOwnerNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerD0BusWakeOwnerNP(FxPkgPnp *This)
{
  if ( (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
    return 787LL;
  else
    return This->m_SharedPower.m_WaitWakeIrp != 0LL ? 33542 : 873;
}
