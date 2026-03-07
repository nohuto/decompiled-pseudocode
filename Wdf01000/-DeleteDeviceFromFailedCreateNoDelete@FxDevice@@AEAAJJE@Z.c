__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreateNoDelete(
        FxDevice *this,
        unsigned int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  const void *_a1; // rax
  int _a3; // edx
  const void *ObjectHandleUnchecked; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  FxDisposeList *m_DisposeList; // rcx
  FxPkgPnp *v11; // rcx
  MxEvent waitEvent; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qid(
    this->m_Globals,
    2u,
    0xCu,
    0xBu,
    WPP_FxDevice_cpp_Traceguids,
    _a1,
    (__int64)this->m_DeviceObject.m_DeviceObject,
    _a3);
  if ( this->m_Filter )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(
      this->m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_FxDevice_cpp_Traceguids,
      ObjectHandleUnchecked,
      (__int64)this->m_DeviceObject.m_DeviceObject,
      FailedStatus);
    FailedStatus = 0;
  }
  if ( UseStateMachine )
  {
    waitEvent.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&waitEvent.m_Event, SynchronizationEvent, 0);
    m_PkgPnp = this->m_PkgPnp;
    waitEvent.m_DbgFlagIsInitialized = 1;
    FxPkgPnp::CleanupDeviceFromFailedCreate(m_PkgPnp, &waitEvent);
  }
  else
  {
    FxObject::EarlyDispose(this);
    FxObject::DestroyChildren(this);
    m_DisposeList = this->m_DisposeList;
    if ( m_DisposeList )
      FxDisposeList::WaitForEmpty(m_DisposeList);
    v11 = this->m_PkgPnp;
    if ( v11 )
      FxPkgPnp::CleanupStateMachines(v11, 1u);
  }
  FxDevice::Destroy(this);
  return FailedStatus;
}
