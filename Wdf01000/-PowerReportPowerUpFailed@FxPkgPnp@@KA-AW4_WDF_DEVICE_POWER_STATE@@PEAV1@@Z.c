/*
 * XREFs of ?PowerReportPowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ @ 0x1C006FC6C (-PowerSendPowerUpFailureEvent@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerReportPowerUpFailed(FxPkgPnp *This, __int64 a2)
{
  FxPkgPnp_vtbl *v2; // rax

  v2 = This->__vftable;
  LOBYTE(a2) = 1;
  This->m_SystemPowerAction = 0;
  v2->PowerReleasePendingDeviceIrp(This, a2);
  FxPkgPnp::PowerSendPowerUpFailureEvent(This);
  return 873LL;
}
