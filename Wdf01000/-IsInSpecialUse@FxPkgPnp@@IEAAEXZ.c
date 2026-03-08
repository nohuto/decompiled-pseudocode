/*
 * XREFs of ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C006A0D0
 * Callers:
 *     ?PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AE40 (-PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B060 (-PnpEventQueryStopStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0072FFC (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0076064 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxPkgPnp::IsInSpecialUse(FxPkgPnp *this)
{
  return this->m_SpecialFileCount[0]
      || this->m_SpecialFileCount[1]
      || this->m_SpecialFileCount[2]
      || this->m_SpecialFileCount[3]
      || this->m_SpecialFileCount[5] != 0;
}
