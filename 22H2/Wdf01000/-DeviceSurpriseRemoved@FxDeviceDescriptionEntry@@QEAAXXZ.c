/*
 * XREFs of ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C003B14C
 * Callers:
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C00796B0 (-PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ.c)
 *     ?_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079C80 (-_PnpSurpriseRemoval@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDeviceDescriptionEntry::DeviceSurpriseRemoved(FxDeviceDescriptionEntry *this)
{
  KIRQL v2; // al
  unsigned __int64 *p_m_ListLock; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_DeviceList->m_ListLock);
  p_m_ListLock = &this->m_DeviceList->m_ListLock;
  this->m_ProcessingSurpriseRemove = 1;
  KeReleaseSpinLock(p_m_ListLock, v2);
}
