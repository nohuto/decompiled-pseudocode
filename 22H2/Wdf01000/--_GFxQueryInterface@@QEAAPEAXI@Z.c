/*
 * XREFs of ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C0041054
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0041090 (imp_WdfDeviceAddQueryInterface.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0080310 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxQueryInterface *__fastcall FxQueryInterface::`scalar deleting destructor'(FxQueryInterface *this)
{
  _INTERFACE *m_Interface; // rcx

  m_Interface = this->m_Interface;
  if ( m_Interface && !this->m_EmbeddedInterface )
    FxPoolFree((FX_POOL_TRACKER *)m_Interface);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
