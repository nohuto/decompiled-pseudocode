void __fastcall FxWakeInterruptMachine::ProcessEventInner(FxWakeInterruptMachine *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rbp
  FxPkgPnp **p_m_PkgPnp; // rdi
  KIRQL v5; // r9
  __int64 m_QueueHead; // rax
  FxWakeInterruptEvents _a4; // r15d
  __int64 m_CurrentState; // r11
  __int64 v9; // rax
  int WakeInterruptState; // esi
  unsigned int TargetStatesCount; // r8d
  const FxWakeInterruptTargetState *TargetStates; // rdx
  const void *_a1; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  unsigned int _a3; // r11d
  const void *ObjectHandleUnchecked; // rax
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 m_HistoryIndex; // r8
  FxWakeInterruptStates (__fastcall *StateFunc)(FxWakeInterruptMachine *); // rax
  KIRQL v22; // r9

  p_m_Lock = &this->m_QueueLock.m_Lock;
  p_m_PkgPnp = &this->m_PkgPnp;
  while ( 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v5);
    m_CurrentState = this->m_CurrentState;
    v9 = 0LL;
    WakeInterruptState = 10;
    TargetStatesCount = FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount;
    if ( TargetStatesCount )
    {
      TargetStates = FxWakeInterruptMachine::m_StateTable[m_CurrentState - 1].TargetStates;
      while ( TargetStates[v9].WakeInterruptEvent != _a4 )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= TargetStatesCount )
          goto LABEL_10;
      }
      WakeInterruptState = TargetStates[v9].WakeInterruptState;
      p_m_PkgPnp = &this->m_PkgPnp;
    }
    if ( WakeInterruptState == 10 )
    {
LABEL_10:
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
      WPP_IFR_SF_qqdd(
        *(_FX_DRIVER_GLOBALS **)(v15 + 16),
        4u,
        0xCu,
        0xBu,
        WPP_WakeInterruptStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v14 + 144),
        _a3,
        _a4);
      p_m_PkgPnp = &this->m_PkgPnp;
    }
    else
    {
      do
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((*p_m_PkgPnp)->m_DeviceBase);
        WPP_IFR_SF_qqdd(
          *(_FX_DRIVER_GLOBALS **)(v18 + 16),
          4u,
          0x15u,
          0xCu,
          WPP_WakeInterruptStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v19 + 144),
          WakeInterruptState,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = WakeInterruptState;
        this->m_CurrentState = WakeInterruptState;
        StateFunc = FxWakeInterruptMachine::m_StateTable[(unsigned __int8)WakeInterruptState - 1].StateFunc;
        if ( !StateFunc )
          break;
        WakeInterruptState = StateFunc(this);
      }
      while ( WakeInterruptState != 10 );
      p_m_Lock = &this->m_QueueLock.m_Lock;
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v22);
}
