/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004FE14
 * Callers:
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0033F40 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C003E8FC (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0068A20 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B120 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C006B600 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C006E4DC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0072730 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0072A98 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C00735DC (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0073678 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C007D2A8 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C007D5B4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0081E40 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?ProcessObjectsToRelease@FxTransactionedList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004F97C (-ProcessObjectsToRelease@FxTransactionedList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessTransactionList@FxTransactionedList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004FA14 (-ProcessTransactionList@FxTransactionedList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // rdi
  __int64 v5; // r8
  _LIST_ENTRY releaseHead; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  --this->m_ListLockedRecursionCount;
  FxTransactionedList::ProcessTransactionList(this, &releaseHead);
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  LOBYTE(v5) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v5);
  FxTransactionedList::ProcessObjectsToRelease(this, &releaseHead);
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
