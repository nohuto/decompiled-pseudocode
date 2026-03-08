/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C006BCB4
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A930 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B340 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B4C0 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x1C006A108 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C006BA08 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 */

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
