/*
 * XREFs of ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0041EE4
 * Callers:
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0038590 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C003DC68 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C003E060 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDriver@@UEAAEXZ @ 0x1C0040040 (-Dispose@FxDriver@@UEAAEXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C006B1D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0041DDC (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::WaitForEmpty(FxDisposeList *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char v5; // di
  FxSystemWorkItem *m_SystemWorkItem; // rbx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = 1;
  if ( this->m_WorkItemThread == KeGetCurrentThread() )
  {
    FxDisposeList::DrainListLocked(this, &irql);
    v5 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v4);
  if ( v5 )
  {
    m_SystemWorkItem = this->m_SystemWorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
}
