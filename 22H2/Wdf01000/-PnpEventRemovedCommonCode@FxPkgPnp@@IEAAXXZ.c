/*
 * XREFs of ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007AFD0
 * Callers:
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0079620 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0084350 (-PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00083F0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C000E8B4 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00129B4 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0018958 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C00552B4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpEventRemovedCommonCode(FxPkgPnp *this)
{
  unsigned __int8 v2; // r8
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxObject *m_ParentObject; // rbx
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  FxDeviceBase *v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v10; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerPurgeNonManaged);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)2, 0LL);
  m_DeviceBase = this->m_DeviceBase;
  PreviousIrql = 0;
  m_ParentObject = m_DeviceBase[3].m_ParentObject;
  FxNonPagedObject::Lock((FxNonPagedObject *)m_ParentObject, &PreviousIrql, v2);
  v6 = PreviousIrql;
  HIDWORD(m_ParentObject[1].m_ChildListHead.Flink) = 3;
  FxNonPagedObject::Unlock((FxNonPagedObject *)m_ParentObject, v6, v7);
  v8 = this->m_DeviceBase;
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFFCFF | 0x100;
  FxObject::EarlyDispose(v8);
  FxObject::DestroyChildren(this->m_DeviceBase);
  FxDisposeList::WaitForEmpty(this->m_DeviceBase->m_DisposeList, v9, v10);
}
