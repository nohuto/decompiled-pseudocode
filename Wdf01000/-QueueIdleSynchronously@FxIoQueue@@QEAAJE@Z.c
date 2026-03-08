/*
 * XREFs of ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0065C54
 * Callers:
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C0061E40 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C0061EA0 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_dq @ 0x1C0018070 (WPP_IFR_SF_dq.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0043890 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00658E8 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdleSynchronously(FxIoQueue *this, unsigned __int8 CancelRequests)
{
  int v4; // ebx
  const void *_a2; // rax
  void *ObjectHandleUnchecked; // rax
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, NotificationEvent, 0);
  eventOnStack.m_DbgFlagIsInitialized = 1;
  v4 = FxIoQueue::QueueIdle(this, CancelRequests, FxIoQueue::_PurgeComplete, &eventOnStack);
  if ( v4 >= 0 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_dq(this->m_Globals, 5u, 0xDu, 0x45u, WPP_FxIoQueue_cpp_Traceguids, this->m_DriverIoCount, _a2);
    }
    KeEnterCriticalRegion();
    ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this);
    _FX_DRIVER_GLOBALS::WaitForSignal(
      this->m_Globals,
      &eventOnStack,
      "waiting for queue to stop, WDFQUEUE",
      ObjectHandleUnchecked,
      this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
