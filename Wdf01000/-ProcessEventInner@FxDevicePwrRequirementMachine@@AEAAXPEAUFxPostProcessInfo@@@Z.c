void __fastcall FxDevicePwrRequirementMachine::ProcessEventInner(
        FxDevicePwrRequirementMachine *this,
        FxPostProcessInfo *Info)
{
  FxPoxInterface **p_m_PoxInterface; // r15
  FxPoxInterface **v4; // rdi
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v6; // r9
  __int64 m_QueueHead; // rax
  FxDevicePwrRequirementEvents _a4; // ebp
  __int64 m_CurrentState; // r11
  __int64 v10; // rax
  int DprState; // esi
  unsigned int TargetStatesCount; // r8d
  const FxDevicePwrRequirementTargetState *TargetStates; // rdx
  const void *_a1; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  unsigned int _a3; // r11d
  const char *v18; // rcx
  const void *ObjectHandleUnchecked; // rax
  __int64 v20; // r10
  __int64 v21; // r8
  __int64 m_HistoryIndex; // r8
  FxDevicePwrRequirementStates (__fastcall *StateFunc)(FxDevicePwrRequirementMachine *); // rax
  KIRQL v24; // r9

  p_m_PoxInterface = &this->m_PoxInterface;
  v4 = &this->m_PoxInterface;
  p_m_Lock = &this->m_QueueLock.m_Lock;
  while ( 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = this->m_QueueHead;
    if ( (_BYTE)m_QueueHead == this->m_QueueTail )
      break;
    _a4 = this->m_Queue[m_QueueHead];
    this->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)this->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v6);
    m_CurrentState = this->m_CurrentState;
    v10 = 0LL;
    DprState = 15;
    TargetStatesCount = FxDevicePwrRequirementMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount;
    if ( TargetStatesCount )
    {
      TargetStates = FxDevicePwrRequirementMachine::m_StateTable[m_CurrentState - 1].TargetStates;
      while ( TargetStates[v10].DprEvent != _a4 )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= TargetStatesCount )
          goto LABEL_10;
      }
      DprState = TargetStates[v10].DprState;
      v4 = p_m_PoxInterface;
    }
    if ( DprState == 15 )
    {
LABEL_10:
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PoxInterface->m_PkgPnp->m_DeviceBase);
      WPP_IFR_SF_qqdd(
        *(_FX_DRIVER_GLOBALS **)(v16 + 16),
        4u,
        0xCu,
        0xBu,
        WPP_DevicePwrReqStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v15 + 144),
        _a3,
        _a4);
      if ( _a4 >= DprEventDeviceDirectedPoweredDown || this->m_CurrentState >= 8u )
        MicrosoftTelemetryAssertTriggeredArgsKM(v18, this->m_CurrentState, _a4);
      v4 = &this->m_PoxInterface;
    }
    else
    {
      do
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((*v4)->m_PkgPnp->m_DeviceBase);
        WPP_IFR_SF_qqdd(
          *(_FX_DRIVER_GLOBALS **)(v20 + 16),
          4u,
          0x15u,
          0xCu,
          WPP_DevicePwrReqStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v21 + 144),
          DprState,
          this->m_CurrentState);
        m_HistoryIndex = this->m_HistoryIndex;
        this->m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_QueueDepth;
        this->m_States.History[m_HistoryIndex] = DprState;
        this->m_CurrentState = DprState;
        StateFunc = FxDevicePwrRequirementMachine::m_StateTable[(unsigned __int8)DprState - 1].StateFunc;
        if ( !StateFunc )
          break;
        DprState = StateFunc(this);
      }
      while ( DprState != 15 );
      p_m_Lock = &this->m_QueueLock.m_Lock;
    }
  }
  FxEventQueue::GetFinishedState(this, Info);
  KeReleaseSpinLock(p_m_Lock, v24);
}
