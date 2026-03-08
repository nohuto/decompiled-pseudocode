/*
 * XREFs of ?NotifySurpriseRemove@FxCompanionTarget@@QEAAJXZ @ 0x1C000A984
 * Callers:
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A6E0 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxCompanionTarget::NotifySurpriseRemove(FxCompanionTarget *this)
{
  return ((__int64 (__fastcall *)(IDeviceCompanion *))this->m_RdDeviceCompanion->SendSurpriseRemove)(this->m_RdDeviceCompanion);
}
