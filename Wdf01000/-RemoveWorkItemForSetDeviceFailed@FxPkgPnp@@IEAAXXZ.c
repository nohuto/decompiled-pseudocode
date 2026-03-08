/*
 * XREFs of ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00757A4
 * Callers:
 *     ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C0069730 (-ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ.c)
 *     ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0078640 (-ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPkgPnp::RemoveWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx

  m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
  if ( m_SetDeviceFailedAttemptRestartWorkItem )
  {
    m_SetDeviceFailedAttemptRestartWorkItem->DeleteObject(m_SetDeviceFailedAttemptRestartWorkItem);
    this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  }
}
