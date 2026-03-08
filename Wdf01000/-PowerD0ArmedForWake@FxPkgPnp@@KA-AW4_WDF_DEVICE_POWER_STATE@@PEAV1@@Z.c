/*
 * XREFs of ?PowerD0ArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerD0ArmedForWake(FxPkgPnp *This)
{
  return (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 ? 873 : 787;
}
