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
