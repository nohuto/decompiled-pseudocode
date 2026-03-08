/*
 * XREFs of ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00823E0
 * Callers:
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C0075A1C (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x1C007F8B8 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C006A008 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0070868 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0082568 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxWakeInterruptMachine::ProcessEvent(FxWakeInterruptMachine *this, FxWakeInterruptEvents Event)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 m_QueueTail; // rcx
  const void *_a1; // rax
  __int64 v9; // r10
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *v11; // rdx
  int v12; // eax
  FxPostProcessInfo info; // [rsp+50h] [rbp-28h] BYREF
  __int64 timeout; // [rsp+80h] [rbp+8h] BYREF

  timeout = 0LL;
  p_m_Lock = &this->m_QueueLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  v6 = v5;
  m_QueueTail = this->m_QueueTail;
  if ( (this->m_QueueDepth + this->m_QueueHead - 1) % this->m_QueueDepth == this->m_QueueTail
                                                                          % (unsigned int)this->m_QueueDepth )
    goto LABEL_2;
  if ( (this->m_QueueFlags & 2) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qqdd(
      *(_FX_DRIVER_GLOBALS **)(v9 + 16),
      4u,
      0xCu,
      0xAu,
      WPP_WakeInterruptStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v10 + 144),
      this->m_CurrentState,
      Event);
LABEL_2:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  this->m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_QueueDepth;
  this->m_Queue[m_QueueTail] = Event;
  KeReleaseSpinLock(p_m_Lock, v5);
  if ( v6
    || (v12 = FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, v11, (_LARGE_INTEGER *)&timeout), v12 < 0)
    || v12 == 258 )
  {
    FxThreadedEventQueue::QueueToThread(this);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxWakeInterruptMachine::ProcessEventInner(this, &info);
    this->m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&info, this->m_PkgPnp);
  }
}
