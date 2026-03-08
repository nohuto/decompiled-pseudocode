/*
 * XREFs of ?PnpEventSurpriseRemovePendingOverload@FxPkgPdo@@EEAAXXZ @ 0x1C0069470
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C0024144 (-DeviceSurpriseRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C006B600 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 */

void __fastcall FxPkgPdo::PnpEventSurpriseRemovePendingOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
    FxDeviceDescriptionEntry::DeviceSurpriseRemoved(m_Description);
  FxPkgPnp::PnpEventSurpriseRemovePendingOverload(this);
}
