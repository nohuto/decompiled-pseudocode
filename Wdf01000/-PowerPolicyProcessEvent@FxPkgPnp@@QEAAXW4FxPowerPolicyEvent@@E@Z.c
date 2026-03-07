void __fastcall FxPkgPnp::PowerPolicyProcessEvent(FxPkgPnp *this, FxPowerPolicyEvent Event, unsigned __int8 a3)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v6; // si
  unsigned int m_SingularEventsPresent; // ecx
  __int64 m_QueueTail; // r8
  int v9; // r10d
  const void *_a1; // rax
  __int64 v11; // rdx
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // r8
  _FX_DRIVER_GLOBALS *v14; // rdx
  int v15; // eax
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_PowerPolicyMachine.m_QueueLock.m_Lock;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerPolicyMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x2002000) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerPolicyMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqdd(
        this->m_Globals,
        4u,
        0xCu,
        0x11u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v13 + 144),
        *(_DWORD *)(v13 + 208),
        Event);
      goto LABEL_8;
    }
    this->m_PowerPolicyMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  m_QueueTail = this->m_PowerPolicyMachine.m_QueueTail;
  v9 = (this->m_PowerPolicyMachine.m_QueueDepth + this->m_PowerPolicyMachine.m_QueueHead - 1)
     % this->m_PowerPolicyMachine.m_QueueDepth;
  if ( v9 == this->m_PowerPolicyMachine.m_QueueTail % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth )
  {
LABEL_8:
    KeReleaseSpinLock(p_m_Lock, v6);
    return;
  }
  if ( (this->m_PowerPolicyMachine.m_QueueFlags & 2) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqdd(
      this->m_Globals,
      4u,
      0xCu,
      0x12u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v11 + 144),
      *(_DWORD *)(v11 + 208),
      Event);
    goto LABEL_8;
  }
  if ( ((this->m_PowerPolicyMachine.m_Owner != 0LL ? 977209328 : 393264) & Event) != 0 )
  {
    this->m_PowerPolicyMachine.m_QueueHead = v9;
    this->m_PowerPolicyMachine.m_Queue[(unsigned __int8)v9] = Event;
  }
  else
  {
    this->m_PowerPolicyMachine.m_QueueTail = ((int)m_QueueTail + 1)
                                           % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
    this->m_PowerPolicyMachine.m_Queue[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(p_m_Lock, v6);
  if ( v6
    || (timeout = 0LL,
        v15 = FxWaitLockInternal::AcquireLock(
                &this->m_PowerPolicyMachine.m_StateMachineLock,
                v14,
                (_LARGE_INTEGER *)&timeout),
        v15 < 0)
    || v15 == 258 )
  {
    FxThreadedEventQueue::QueueToThread(&this->m_PowerPolicyMachine);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxPkgPnp::PowerPolicyProcessEventInner(this, &info);
    this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&info, this);
  }
}
