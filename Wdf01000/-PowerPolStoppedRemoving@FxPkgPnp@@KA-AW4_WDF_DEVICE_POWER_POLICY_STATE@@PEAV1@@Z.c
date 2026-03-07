__int64 __fastcall FxPkgPnp::PowerPolStoppedRemoving(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPoxInterface *p_m_PoxInterface; // rbx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  void (__fastcall *v7)(unsigned __int64, POHANDLE__ *); // r8
  bool v8; // zf
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  unsigned __int8 v10; // dl
  _MX_WNF_SUBSCRIPTION_CONTEXT *WnfContext; // rbx
  unsigned __int8 v12; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  p_m_PoxInterface = &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface;
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
    if ( PowerFrameworkSettings && PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(p_m_PoxInterface->m_PkgPnp->m_DeviceBase);
      v7(ObjectHandleUnchecked, p_m_PoxInterface->m_PoHandle);
    }
    PoFxUnregisterDevice(p_m_PoxInterface->m_PoHandle);
    FxDevicePwrRequirementMachine::ProcessEvent(
      p_m_PoxInterface->m_DevicePowerRequirementMachine,
      DprEventUnregisteredWithPox);
  }
  v8 = This->m_SleepStudy == 0LL;
  PreviousIrql = 0;
  if ( !v8 )
  {
    FxNonPagedObject::Lock(This, &PreviousIrql, a3);
    m_SleepStudy = This->m_SleepStudy;
    v10 = PreviousIrql;
    WnfContext = m_SleepStudy->WnfContext;
    m_SleepStudy->WnfContext = 0LL;
    FxNonPagedObject::Unlock(This, v10, v12);
    ExUnsubscribeWnfStateChange(WnfContext->Handle);
    ExFreePoolWithTag(WnfContext, 0);
  }
  return 1422LL;
}
