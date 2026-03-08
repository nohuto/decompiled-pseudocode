/*
 * XREFs of ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008124C
 * Callers:
 *     ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00815C0 (-_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C00815E0 (-_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z.c)
 *     ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0081660 (-_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0006D3C (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C006A008 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006A08C (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxEventQueue::EventQueueWorker(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgPnp *v3; // rdi
  KIRQL v4; // al
  KIRQL v5; // r9
  FxPostProcessInfo info; // [rsp+20h] [rbp-28h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  FX_TRACK_DRIVER(m_PkgPnp->m_Globals);
  v3 = this->m_PkgPnp;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags &= ~1u;
  ++this->m_WorkItemRunningCount;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v4);
  this->m_EventWorker(this->m_PkgPnp, &info, this->m_EventWorkerContext);
  KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  --this->m_WorkItemRunningCount;
  FxEventQueue::GetFinishedState(this, &info);
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
  FxPostProcessInfo::Evaluate(&info, v3);
}
