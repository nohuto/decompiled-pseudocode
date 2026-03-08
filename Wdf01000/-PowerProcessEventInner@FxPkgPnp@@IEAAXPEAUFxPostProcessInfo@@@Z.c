/*
 * XREFs of ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006F820
 * Callers:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0070940 (-_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006A08C (-GetFinishedState@FxEventQueue@@QEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C006C978 (WPP_IFR_SF_qqLLL.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C006DF68 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C006E82C (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  unsigned __int64 *p_m_Lock; // rbp
  FxPowerMachine *p_m_PowerMachine; // r15
  __int64 v6; // rsi
  KIRQL v7; // al
  __int64 m_QueueHead; // rdx
  KIRQL v9; // r9
  unsigned int _a4; // ebx
  const POWER_STATE_TABLE *v11; // r14
  unsigned __int16 m_SingularEventsPresent; // cx
  __int64 TargetState; // rdx
  const POWER_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  FxPowerEvent PowerEvent; // eax
  __int64 v16; // r8
  const void *_a1; // rax
  __int64 v18; // r8
  _FX_DRIVER_GLOBALS *v19; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx

  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  p_m_PowerMachine = &this->m_PowerMachine;
  while ( 1 )
  {
    v6 = (HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) & 0xFFFF7FFF) - 768;
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    m_QueueHead = p_m_PowerMachine->m_QueueHead;
    v9 = v7;
    if ( (_BYTE)m_QueueHead == p_m_PowerMachine->m_QueueTail )
      break;
    _a4 = this->m_PowerMachine.m_Queue.Events[m_QueueHead];
    v11 = &FxPkgPnp::m_WdfPowerStates[v6];
    if ( (_a4 & 0x3900) == 0 && (*(_DWORD *)&v11->StateInfo.Bits & 1) == 0 )
      goto LABEL_29;
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( ((unsigned __int16)_a4 & m_SingularEventsPresent) != 0 )
      this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent & ~(_WORD)_a4;
    p_m_PowerMachine->m_QueueHead = ((int)m_QueueHead + 1) % (unsigned int)p_m_PowerMachine->m_QueueDepth;
    KeReleaseSpinLock(p_m_Lock, v7);
    if ( FxPkgPnp::m_WdfPowerStates[v6].FirstTargetState.PowerEvent == _a4 )
    {
      TargetState = (unsigned int)FxPkgPnp::m_WdfPowerStates[v6].FirstTargetState.TargetState;
      goto LABEL_17;
    }
    OtherTargetStates = FxPkgPnp::m_WdfPowerStates[v6].OtherTargetStates;
    if ( !OtherTargetStates
      || (PowerEvent = OtherTargetStates->PowerEvent,
          LODWORD(v16) = 0,
          OtherTargetStates->PowerEvent == PowerEventMaximum) )
    {
LABEL_14:
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqdd(
          v19,
          5u,
          0xCu,
          0xCu,
          WPP_PowerStateMachine_cpp_Traceguids,
          _a1,
          *(const void **)(v18 + 144),
          *(_DWORD *)(v18 + 204),
          _a4);
      }
      if ( ((*(_DWORD *)&v11->StateInfo.Bits >> 1) & _a4) == 0 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          v22,
          0xDu,
          WPP_PowerStateMachine_cpp_Traceguids,
          ObjectHandleUnchecked,
          *(const void **)(v21 + 144),
          *(_DWORD *)(v21 + 204),
          _a4,
          v22);
      }
      v23 = _a4 - 1;
      if ( v23 && (v24 = v23 - 1) != 0 )
      {
        v25 = v24 - 6;
        if ( !v25 || (v26 = v25 - 8) == 0 || v26 == 16 )
          FxPkgPnp::PowerCompletePendedWakeIrp(this);
      }
      else
      {
        LOBYTE(TargetState) = 1;
        this->PowerReleasePendingDeviceIrp(this, TargetState);
      }
    }
    else
    {
      TargetState = 0LL;
      while ( PowerEvent != _a4 )
      {
        v16 = (unsigned int)(v16 + 1);
        TargetState = (unsigned int)v16;
        PowerEvent = OtherTargetStates[v16].PowerEvent;
        if ( PowerEvent == PowerEventMaximum )
          goto LABEL_14;
      }
      TargetState = (unsigned int)OtherTargetStates[TargetState].TargetState;
LABEL_17:
      if ( (_DWORD)TargetState == 873 )
        goto LABEL_14;
      FxPkgPnp::PowerEnterNewState(this, TargetState);
    }
  }
  FxEventQueue::GetFinishedState(p_m_PowerMachine, Info);
LABEL_29:
  KeReleaseSpinLock(p_m_Lock, v9);
}
