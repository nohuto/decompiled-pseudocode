/*
 * XREFs of ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C003DC68
 * Callers:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C003DC30 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C003DDA0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 * Callees:
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0001178 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0003E1C (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C003C60C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0041EE4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0071B28 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C0071BD8 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 */

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
