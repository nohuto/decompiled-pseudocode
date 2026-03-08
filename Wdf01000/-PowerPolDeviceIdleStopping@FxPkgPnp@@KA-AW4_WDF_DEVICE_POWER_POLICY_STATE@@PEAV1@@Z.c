/*
 * XREFs of ?PowerPolDeviceIdleStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C0083EA4 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolDeviceIdleStopping(FxPkgPnp *This)
{
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1374LL;
}
