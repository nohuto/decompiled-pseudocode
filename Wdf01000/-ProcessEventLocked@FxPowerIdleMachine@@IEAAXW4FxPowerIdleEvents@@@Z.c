/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0008AC4
 * Callers:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C00088EC (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0008998 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z @ 0x1C0008A08 (-IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C00771C8 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0077290 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0077448 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00775D8 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00776EC (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0077870 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  FxTagTracker *m_TagTracker; // rbp
  __int64 m_CurrentIdleState; // r10
  __int64 v6; // rax
  unsigned int TargetStatesCount; // r9d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  const void *_a1; // rax
  __int64 v11; // r8
  char v12; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *ObjectHandleUnchecked; // rax
  __int64 v15; // rdx
  unsigned int _a4; // r8d
  unsigned int v17; // r10d

  m_TagTracker = this[2].m_TagTracker;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  m_CurrentIdleState = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v6 = 0LL;
  TargetStatesCount = FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStatesCount;
  if ( !TargetStatesCount )
    goto LABEL_5;
  TargetStates = FxPowerIdleMachine::m_StateTable[m_CurrentIdleState - 1].TargetStates;
  while ( TargetStates[v6].PowerIdleEvent != Event )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= TargetStatesCount )
      goto LABEL_5;
  }
  _a3 = TargetStates[v6].PowerIdleState;
  if ( _a3 == FxIdleMax )
  {
LABEL_5:
    switch ( Event )
    {
      case PowerIdleEventIoDecrement:
        return;
      case PowerIdleEventEnabled:
        if ( (this->m_Flags & 1) != 0 )
          return;
        break;
      case PowerIdleEventIoIncrement:
        return;
    }
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_qqdd(
      (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
      4u,
      0xCu,
      0x10u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      ObjectHandleUnchecked,
      *(const void **)(v15 + 144),
      v17,
      _a4);
    return;
  }
  do
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_qqdd(
      (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
      4u,
      0x15u,
      0x11u,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v11 + 144),
      _a3,
      this->m_CurrentIdleState);
    this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
    v12 = this->m_StateHistoryIndex + 1;
    this->m_CurrentIdleState = _a3;
    this->m_StateHistoryIndex = v12 & 7;
    StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
    if ( !StateFunc )
      break;
    _a3 = StateFunc(this);
  }
  while ( _a3 != FxIdleMax );
}
