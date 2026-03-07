__int64 __fastcall FxPkgPnp::PnpEventPdoRestart(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxDeviceBase *m_DeviceBase; // rax
  FxObject *m_ParentObject; // rdi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 result; // rax
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = This->m_DeviceBase;
  This->m_InternalFailure = 0;
  This->m_Failed = 0;
  This->m_PowerThreadInterfaceReferenceCount = 1;
  This->m_PendingChildCount = 1;
  m_ParentObject = m_DeviceBase[3].m_ParentObject;
  PreviousIrql = 0;
  FxNonPagedObject::Lock((FxNonPagedObject *)m_ParentObject, &PreviousIrql, a3);
  *(_DWORD *)&m_ParentObject[1].m_SpinLock.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent((PRKEVENT)&m_ParentObject[1].m_SpinLock.m_Lock, SynchronizationEvent, 0);
  v6 = PreviousIrql;
  LOBYTE(m_ParentObject[1].m_ChildEntry.Blink) = 1;
  FxNonPagedObject::Unlock((FxNonPagedObject *)m_ParentObject, v6, v7);
  FxPkgIo::ResetStateForRestart((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::Reset(&m_Owner->m_PowerIdleMachine);
  This->m_PendingPnPIrp->IoStatus.Status = 0;
  result = 264LL;
  *(_WORD *)&This->m_WakeInterruptsKeepConnected = 0;
  return result;
}
