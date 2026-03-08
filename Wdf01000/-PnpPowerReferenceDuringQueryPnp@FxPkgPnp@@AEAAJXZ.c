/*
 * XREFs of ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C0074114
 * Callers:
 *     ?PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AD80 (-PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AFE0 (-PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z @ 0x1C0008A08 (-IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpPowerReferenceDuringQueryPnp(FxPkgPnp *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdx
  FxPowerPolicyOwnerSettings *v2; // rbx
  unsigned int v3; // eax
  FxTagTracker *m_TagTracker; // rcx
  unsigned int v5; // edi
  unsigned int Count; // [rsp+40h] [rbp+8h] BYREF

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner )
    return 0LL;
  _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 10, 5);
  v2 = this->m_PowerPolicyMachine.m_Owner;
  Count = 0;
  v3 = FxPowerIdleMachine::IoIncrementWithFlags(&v2->m_PowerIdleMachine, FxPowerReferenceSendPnpPowerUpEvent, &Count);
  m_TagTracker = v2->m_PowerIdleMachine.m_TagTracker;
  v5 = v3;
  if ( m_TagTracker && (!v3 || v3 == 259) )
    FxTagTracker::UpdateTagHistory(m_TagTracker, 0LL, 0, 0LL, TagAddRef, Count);
  return v5;
}
