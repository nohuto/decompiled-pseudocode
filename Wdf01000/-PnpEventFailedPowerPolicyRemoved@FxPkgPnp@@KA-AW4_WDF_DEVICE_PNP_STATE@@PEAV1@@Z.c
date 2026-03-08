/*
 * XREFs of ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?NotifySurpriseRemove@FxCompanionTarget@@QEAAJXZ @ 0x1C000A984 (-NotifySurpriseRemove@FxCompanionTarget@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006B6BC (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C0081778 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedPowerPolicyRemoved(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned int v3; // edx
  FxCompanionTarget *m_CompanionTarget; // rcx
  unsigned __int8 m_FailedAction; // al

  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  m_CompanionTarget = This->m_CompanionTarget;
  if ( m_CompanionTarget )
    FxCompanionTarget::NotifySurpriseRemove(m_CompanionTarget);
  m_FailedAction = This->m_FailedAction;
  if ( m_FailedAction == 1 )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(This->m_Globals, v3, 0x17u) )
      goto LABEL_10;
  }
  else if ( m_FailedAction || !This->m_InternalFailure )
  {
    goto LABEL_10;
  }
  if ( FxPkgPnp::PnpCheckAndIncrementRestartCount(This) )
    This->AskParentToRemoveAndReenumerate(This);
LABEL_10:
  if ( This->m_FailedAction || This->m_InternalFailure )
    IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 302LL;
}
