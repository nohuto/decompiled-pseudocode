void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v7; // si
  int m_SingularEventsPresent; // eax
  __int64 m_QueueTail; // r8
  int v10; // r10d
  const void *_a1; // rax
  __int64 v12; // rdx
  const void *ObjectHandleUnchecked; // rax
  __int64 v14; // r8
  _FX_DRIVER_GLOBALS *v15; // rdx
  int v16; // eax
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x100) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqdd(
        this->m_Globals,
        4u,
        0xCu,
        0xAu,
        WPP_PowerStateMachine_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v14 + 144),
        *(_DWORD *)(v14 + 204),
        Event);
      goto LABEL_8;
    }
    this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent | Event;
  }
  m_QueueTail = this->m_PowerMachine.m_QueueTail;
  v10 = (this->m_PowerMachine.m_QueueDepth + this->m_PowerMachine.m_QueueHead - 1) % this->m_PowerMachine.m_QueueDepth;
  if ( v10 == this->m_PowerMachine.m_QueueTail % (unsigned int)this->m_PowerMachine.m_QueueDepth )
  {
LABEL_8:
    KeReleaseSpinLock(p_m_Lock, v7);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqdd(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v12 + 144),
      *(_DWORD *)(v12 + 204),
      Event);
    goto LABEL_8;
  }
  if ( (Event & 0x3900) != 0 )
  {
    this->m_PowerMachine.m_QueueHead = v10;
    this->m_PowerMachine.m_Queue.Events[(unsigned __int8)v10] = Event;
  }
  else
  {
    this->m_PowerMachine.m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
    this->m_PowerMachine.m_Queue.Events[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(p_m_Lock, v7);
  if ( v7
    || ProcessOnDifferentThread
    || (timeout = 0LL,
        v16 = FxWaitLockInternal::AcquireLock(&this->m_PowerMachine.m_StateMachineLock, v15, (_LARGE_INTEGER *)&timeout),
        v16 < 0)
    || v16 == 258 )
  {
    FxThreadedEventQueue::QueueToThread(&this->m_PowerMachine);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxPkgPnp::PowerProcessEventInner(this, &info);
    this->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&info, this);
  }
}
