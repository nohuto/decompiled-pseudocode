/*
 * XREFs of ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00FED58
 * Callers:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FEDE0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0105670 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010AC5C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::DispatchPendingWork(
        Ndis::BindEngine *this,
        enum CallRunMode a2,
        struct KLockThisExclusive *a3)
{
  if ( this->m_isDirty )
  {
    KeClearEvent(&this->m_bindCompleteEvent.m_event);
    if ( a2 == RunAsynchronous )
    {
      this->m_bindThread = (_KTHREAD *)1;
      ExQueueWorkItem(&this->m_asyncBindWorkItem.m_workitem, NormalWorkQueue);
    }
    else
    {
      this->m_bindThread = KeGetCurrentThread();
      Ndis::BindEngine::UpdateBindings(this, a3);
      KLockHolder::ReleaseExclusive(a3);
    }
  }
}
