/*
 * XREFs of ?QueueWorkItem@FxWorkItemEventQueue@@IEAAXXZ @ 0x1C00815F8
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWorkItemEventQueue::QueueWorkItem(FxWorkItemEventQueue *this)
{
  ObfReferenceObject(this->m_PkgPnp->m_Globals->Driver->m_DriverObject.m_DriverObject);
  _InterlockedAdd(&this->m_PkgPnp->m_Globals->Refcnt, 1u);
  IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxWorkItemEventQueue::_WorkItemCallback, DelayedWorkQueue, this);
}
