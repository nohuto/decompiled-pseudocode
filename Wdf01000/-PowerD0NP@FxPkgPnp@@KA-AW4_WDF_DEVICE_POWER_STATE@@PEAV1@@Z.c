/*
 * XREFs of ?PowerD0NP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerD0NP(FxPkgPnp *This)
{
  return (This->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 ? 787 : 873;
}
