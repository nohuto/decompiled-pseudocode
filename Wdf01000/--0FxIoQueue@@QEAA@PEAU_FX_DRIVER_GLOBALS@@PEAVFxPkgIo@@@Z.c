/*
 * XREFs of ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C00630F8
 * Callers:
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1C0066BC0 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0038A58 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::FxIoQueue(FxIoQueue *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxPkgIo *PkgIo)
{
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // al

  FxNonPagedObject::FxNonPagedObject(this, 0x1003u, 0x3A8u, FxDriverGlobals);
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)FxIoQueue::`vftable'{for `FxNonPagedObject'};
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 0;
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxIoQueue::`vftable'{for `IFxHasCallbacks'};
  this->m_IoDefault.m_CallbackLock = 0LL;
  this->m_Queue.m_Queue.Blink = &this->m_Queue.m_Queue;
  this->m_Queue.m_Queue.Flink = &this->m_Queue.m_Queue;
  this->m_Queue.m_LockObject = 0LL;
  this->m_Queue.m_CancelCallback = 0LL;
  this->m_Queue.m_RequestCount = 0;
  this->m_DriverCancelable.m_Queue.Blink = &this->m_DriverCancelable.m_Queue;
  this->m_DriverCancelable.m_Queue.Flink = &this->m_DriverCancelable.m_Queue;
  this->m_DriverCancelable.m_LockObject = 0LL;
  this->m_DriverCancelable.m_CancelCallback = 0LL;
  this->m_DriverCancelable.m_RequestCount = 0;
  this->m_IoDefault.Method = 0LL;
  this->m_IoStop.m_CallbackLock = 0LL;
  this->m_IoStop.Method = 0LL;
  this->m_IoResume.m_CallbackLock = 0LL;
  this->m_IoResume.Method = 0LL;
  this->m_IoRead.m_CallbackLock = 0LL;
  this->m_IoRead.Method = 0LL;
  this->m_IoWrite.m_CallbackLock = 0LL;
  this->m_IoWrite.Method = 0LL;
  this->m_IoDeviceControl.m_CallbackLock = 0LL;
  this->m_IoDeviceControl.Method = 0LL;
  this->m_IoInternalDeviceControl.m_CallbackLock = 0LL;
  this->m_IoInternalDeviceControl.Method = 0LL;
  this->m_IoCanceledOnQueue.m_CallbackLock = 0LL;
  this->m_IoCanceledOnQueue.Method = 0LL;
  this->m_IdleComplete.m_CallbackLock = 0LL;
  this->m_IdleComplete.Method = 0LL;
  this->m_PurgeComplete.m_CallbackLock = 0LL;
  this->m_PurgeComplete.Method = 0LL;
  this->m_ReadyNotify.m_CallbackLock = 0LL;
  this->m_ReadyNotify.Method = 0LL;
  this->m_CallbackSpinLock.__vftable = (FxCallbackSpinLock_vtbl *)FxCallbackSpinLock::`vftable';
  this->m_CallbackSpinLock.m_Globals = FxDriverGlobals;
  this->m_CallbackSpinLock.m_OwnerThread = 0LL;
  this->m_CallbackSpinLock.m_RecursionCount = 0;
  this->m_CallbackSpinLock.m_Verifier = 0LL;
  this->m_CallbackSpinLock.m_Lock.m_Lock = 0LL;
  this->m_CallbackSpinLock.m_Lock.m_DbgFlagIsInitialized = 1;
  FxCallbackMutexLock::FxCallbackMutexLock(&this->m_CallbackMutexLock, FxDriverGlobals);
  this->m_PowerIdle.m_DbgFlagIsInitialized = 0;
  this->m_IoPkgListNode.m_Type = FxIoQueueNodeTypeQueue;
  this->m_IoPkgListNode.m_ListEntry.Blink = &this->m_IoPkgListNode.m_ListEntry;
  this->m_IoPkgListNode.m_ListEntry.Flink = &this->m_IoPkgListNode.m_ListEntry;
  this->m_IsDevicePowerPolicyOwner = 0;
  this->m_Queue.m_CancelCallback = FxIoQueue::_IrpCancelForQueue;
  this->m_Configured = 0;
  this->m_DriverCancelable.m_CancelCallback = FxIoQueue::_IrpCancelForDriver;
  this->m_Disposing = 0;
  this->m_PowerManaged = 0;
  this->m_PowerState = FxIoQueuePowerOn;
  this->m_Cancelled.Blink = &this->m_Cancelled;
  this->m_PowerReferenced = 0;
  this->m_AllowZeroLengthRequests = 0;
  this->m_Type = WdfIoQueueDispatchSequential;
  this->m_QueueState = 0;
  this->m_Queue.m_LockObject = this;
  this->m_DriverCancelable.m_LockObject = this;
  this->m_Cancelled.Flink = &this->m_Cancelled;
  this->m_CanceledOnQueueList.Blink = &this->m_CanceledOnQueueList;
  this->m_CanceledOnQueueList.Flink = &this->m_CanceledOnQueueList;
  this->m_DriverOwned.Blink = &this->m_DriverOwned;
  this->m_DriverOwned.Flink = &this->m_DriverOwned;
  this->m_PowerNotify.Blink = &this->m_PowerNotify;
  this->m_PowerNotify.Flink = &this->m_PowerNotify;
  this->m_PowerDriverNotified.Blink = &this->m_PowerDriverNotified;
  this->m_PowerDriverNotified.Flink = &this->m_PowerDriverNotified;
  this->m_PowerSListEntry.Next = 0LL;
  this->m_PkgIo = PkgIo;
  this->m_CxDeviceInfo = 0LL;
  m_DeviceBase = PkgIo->m_DeviceBase;
  this->m_DeviceBase = m_DeviceBase;
  v7 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !v7 || (v8 = 1, !*(_QWORD *)(v7 + 888)) )
    v8 = 0;
  this->m_IsDevicePowerPolicyOwner = v8;
  this->m_Dispatching = 0;
  this->m_TransitionFromEmpty = 0;
  this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  this->m_DriverIoCount = 0;
  this->m_TwoPhaseCompletions = 0;
  this->m_SystemWorkItem = 0LL;
  this->m_IdleComplete.Method = 0LL;
  this->m_IdleCompleteContext = 0LL;
  this->m_PurgeComplete.Method = 0LL;
  this->m_PurgeCompleteContext = 0LL;
  this->m_ReadyNotify.Method = 0LL;
  this->m_ReadyNotifyContext = 0LL;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  KeInitializeDpc(&this->m_Dpc, FxIoQueue::_DeferredDispatchDpcThunk, this);
  this->m_ObjectFlags |= 0x10u;
  this->m_MaxParallelQueuePresentedRequests = -1;
  *(_WORD *)&this->m_DpcQueued = 0;
  this->m_RequeueDeferredDispatcher = 0;
  this->m_Deleted = 0;
  this->m_SupportForwardProgress = 0;
  this->m_PassiveLevel = 0;
  this->m_FwdProgContext = 0LL;
  this->m_ExecutionLevel = WdfExecutionLevelInheritFromParent;
  this->m_SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
}
