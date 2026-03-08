/*
 * XREFs of ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C007CEF4
 * Callers:
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B9C0 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C007D624 (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyBlockChildrenPowerUp(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxEnumerationInfo *v4; // rcx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, a2, 0LL);
    this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 0;
    v4 = this->m_EnumInfo;
    v4->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v4->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
}
