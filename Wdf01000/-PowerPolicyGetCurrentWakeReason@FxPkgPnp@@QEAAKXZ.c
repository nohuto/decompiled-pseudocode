/*
 * XREFs of ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00743AC
 * Callers:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C007451C (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B290 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B3D0 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetCurrentWakeReason(FxPkgPnp *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  unsigned int v2; // edx
  unsigned __int8 Enabled; // cl
  __int64 result; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v2 = 0;
  if ( m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake && m_Owner->m_ChildrenArmedCount > 0 )
    v2 = 2;
  Enabled = m_Owner->m_WakeSettings.Enabled;
  result = v2 | 1;
  if ( !Enabled )
    return v2;
  return result;
}
