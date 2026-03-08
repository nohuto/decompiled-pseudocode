/*
 * XREFs of ?PnpEventRemovedPdoWait@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovedPdoWait(FxPkgPnp *This)
{
  if ( This->m_DeviceRemoveProcessed )
    This->m_SetDeviceRemoveProcessed = 1;
  return 314LL;
}
