/*
 * XREFs of ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224
 * Callers:
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0002C50 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0003850 (-_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0004D90 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000C420 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00550FC (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006DA2C (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x1C0078730 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C00828E8 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005AC78 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::EnqueueWorker(
        FxSystemWorkItem *this,
        void (__fastcall *Func)(void *),
        void *Parameter,
        unsigned __int8 AssertIfAlreadyQueued)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // di
  unsigned __int8 v10; // r8
  FxVerifierLock *v12; // rcx
  FxVerifierLock *v13; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v12 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
  {
    FxVerifierLock::Lock(v12, &irql, (unsigned __int8)Parameter);
    v9 = irql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v9;
  }
  if ( this->m_Enqueued )
  {
    if ( !AssertIfAlreadyQueued )
    {
LABEL_14:
      FxNonPagedObject::Unlock(this, v9);
      return 0;
    }
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, this, this->m_WorkItem.m_WorkItem);
LABEL_13:
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_14;
  }
  if ( this->m_RunningDown )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, this);
    goto LABEL_13;
  }
  KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
  this->m_Callback = Func;
  this->m_CallbackArg = Parameter;
  this->m_Enqueued = 1;
  _InterlockedIncrement(&this->m_OutStandingWorkItem);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v13 = *(FxVerifierLock **)&this[-1].m_WorkItemRunningCount) != 0LL )
    FxVerifierLock::Unlock(v13, irql, v10);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  IoQueueWorkItem(
    this->m_WorkItem.m_WorkItem,
    (PIO_WORKITEM_ROUTINE)FxSystemWorkItem::_WorkItemThunk,
    DelayedWorkQueue,
    this);
  return 1;
}
