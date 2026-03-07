__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v4; // eax
  int matched; // eax
  unsigned __int8 v8; // r8
  FxDeviceBase *m_DeviceBase; // rbp
  unsigned int v10; // ebx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  __int64 result; // rax
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  FxDeviceBase *v20; // rbx
  int v21; // esi
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // r8
  unsigned int v25; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v27; // rcx
  FxDeviceBase *v28; // rcx
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  v4 = this->m_PnpState.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpState.Value = v4 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  m_DeviceBase = this->m_DeviceBase;
  v10 = matched;
  if ( matched >= 0 )
  {
    *ResourcesMatched = 1;
    PreviousIrql = 0;
    FxNonPagedObject::Lock(m_DeviceBase, &PreviousIrql, v8);
    v13 = PreviousIrql;
    LOBYTE(m_DeviceBase[1].m_Globals) |= 1u;
    FxNonPagedObject::Unlock(m_DeviceBase, v13, v14);
    FxObject::GetObjectHandleUnchecked(this->m_Resources);
    FxObject::GetObjectHandleUnchecked(this->m_ResourcesRaw);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    *(_QWORD *)(v17 + 40) = v16;
    *(_QWORD *)(v17 + 48) = v18;
    *(_QWORD *)(v17 + 32) = ObjectHandleUnchecked;
    v19 = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v17, Progress, FxCxCleanupAfterPreFailure);
    v20 = this->m_DeviceBase;
    PreviousIrql = 0;
    v21 = v19;
    FxNonPagedObject::Lock(v20, &PreviousIrql, v22);
    v23 = PreviousIrql;
    LOBYTE(v20[1].m_Globals) &= ~1u;
    FxNonPagedObject::Unlock(v20, v23, v24);
    if ( v21 >= 0 )
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
    else
    {
      if ( v21 == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerifierOn )
        {
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v25, 0xBu) || v27->FxVerifyDownlevel )
            FxVerifierDbgBreakPoint(v27);
        }
      }
      v28 = this->m_DeviceBase;
      this->m_InternalFailure = 1;
      IoInvalidateDeviceState(v28->m_PhysicalDevice.m_DeviceObject);
      this->m_PendingPnPIrp->IoStatus.Status = v21;
    }
    return (unsigned int)v21;
  }
  else
  {
    this->m_InternalFailure = 1;
    m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    *ResourcesMatched = 0;
    IoInvalidateDeviceState(m_DeviceObject);
    result = v10;
    this->m_PendingPnPIrp->IoStatus.Status = v10;
  }
  return result;
}
