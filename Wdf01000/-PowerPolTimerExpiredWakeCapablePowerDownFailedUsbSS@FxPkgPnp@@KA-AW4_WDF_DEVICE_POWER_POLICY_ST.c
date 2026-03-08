/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDownFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C550
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C007D054 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDownFailedUsbSS(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner->m_IdleSettings.UsbSSCapable )
    KeSetEvent((PRKEVENT)m_Owner->m_UsbIdle->m_IdleCallbackEvent, 0, 0);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1390;
}
