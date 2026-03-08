/*
 * XREFs of ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0066A68
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0062CBC (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C0043890 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0065D48 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall FxIoQueue::StopProcessingForPower(
        FxIoQueue *this,
        FxIoStopProcessingForPowerAction Action,
        unsigned __int8 a3)
{
  int v4; // edx
  int v5; // edx
  bool v6; // zf
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  unsigned __int16 v9; // r9
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v11; // r10
  void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  irql = 0;
  v4 = Action - 1;
  if ( !v4 )
  {
    if ( !this->m_PowerManaged )
      return;
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStopping;
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return;
    v6 = this->m_PowerManaged == 1;
  }
  else
  {
    v6 = this->m_PowerManaged == 0;
  }
  if ( !v6 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
    FxNonPagedObject::Unlock(this, irql, v7);
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v8);
    this->m_PowerState = FxIoQueuePowerPurge;
LABEL_10:
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v9) )
    {
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(v11, 5u, 0xDu, 0x67u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      }
      ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this);
      _FX_DRIVER_GLOBALS::WaitForSignal(
        this->m_Globals,
        &this->m_PowerIdle,
        "waiting for all inflight requests to be acknowledged on WDFQUEUE",
        ObjectHandleUnchecked,
        this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
        1);
    }
  }
}
