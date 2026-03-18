/*
 * XREFs of ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0006B20
 * Callers:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C000FFC8 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0017610 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0017FC4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0019CF4 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C001A150 (-_PowerTimeoutDpcRoutine@FxPowerIdleMachine@@KAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0083D60 (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0083E0C (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPowerIdleMachine::ProcessEventLocked(FxPowerIdleMachine *this, FxPowerIdleEvents Event)
{
  FxTagTracker *m_TagTracker; // rsi
  __int64 m_CurrentIdleState; // r11
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // r8
  FxPowerIdleStates _a3; // edi
  void *v11; // rcx
  const void *_a1; // rdx
  char v13; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  unsigned __int64 Tag; // r8
  const void *v16; // rdx

  m_TagTracker = this[2].m_TagTracker;
  this->m_EventHistory[this->m_EventHistoryIndex] = Event;
  m_CurrentIdleState = this->m_CurrentIdleState;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v6 = 0;
  v7 = 24 * m_CurrentIdleState - 24;
  v8 = *(unsigned int *)((char *)&FxPowerIdleMachine::m_StateTable[0].TargetStatesCount + v7);
  if ( !v8 )
    goto LABEL_5;
  v9 = *(__int64 *)((char *)&FxPowerIdleMachine::m_StateTable[0].TargetStates + v7);
  while ( *(_DWORD *)(v9 + 8LL * v6) != Event )
  {
    if ( ++v6 >= v8 )
      goto LABEL_5;
  }
  _a3 = *(_DWORD *)(v9 + 8LL * v6 + 4);
  if ( _a3 == FxIdleMax )
  {
LABEL_5:
    if ( Event != PowerIdleEventIoIncrement
      && Event != PowerIdleEventIoDecrement
      && (Event != PowerIdleEventEnabled || (this->m_Flags & 1) == 0) )
    {
      Tag = (unsigned __int64)m_TagTracker->m_TagHistory[0].Tag;
      v16 = (const void *)(Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(Tag + 10) )
        v16 = 0LL;
      WPP_IFR_SF_qqLL(
        (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
        4u,
        0xCu,
        0x10u,
        WPP_PowerIdleStateMachine_cpp_Traceguids,
        v16,
        *(const void **)(Tag + 144),
        m_CurrentIdleState,
        Event);
    }
  }
  else
  {
    do
    {
      v11 = m_TagTracker->m_TagHistory[0].Tag;
      _a1 = 0LL;
      if ( *((_WORD *)v11 + 5) )
        _a1 = (const void *)((unsigned __int64)m_TagTracker->m_TagHistory[0].Tag ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(
        (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject,
        4u,
        0x15u,
        0x11u,
        WPP_PowerIdleStateMachine_cpp_Traceguids,
        _a1,
        *((const void **)v11 + 18),
        _a3,
        this->m_CurrentIdleState);
      this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
      v13 = this->m_StateHistoryIndex + 1;
      this->m_CurrentIdleState = _a3;
      this->m_StateHistoryIndex = v13 & 7;
      StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
      if ( !StateFunc )
        break;
      _a3 = StateFunc(this);
    }
    while ( _a3 != FxIdleMax );
  }
}
