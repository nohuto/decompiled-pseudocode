/*
 * XREFs of ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C000E8B4
 * Callers:
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E0B0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00111E0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001C748 (-Suspend@FxSelfManagedIoMachine@@QEAAJW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0079FD0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007AFD0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D8A0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E100 (-PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E500 (-PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E540 (-PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EA4C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::ProcessEvent(
        FxSelfManagedIoMachine *this,
        _FX_DRIVER_GLOBALS *Event,
        FxCxCallbackProgress *Progress)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi
  int v6; // ebp
  unsigned int _a3; // edi
  __int64 m_CurrentState; // rdx
  __int64 v9; // rax
  unsigned int TargetStatesCount; // r8d
  const FxSelfManagedIoTargetState *TargetStates; // rdx
  const void *_a1; // rax
  __int64 v13; // r10
  __int64 v14; // r8
  char v15; // al
  FxSelfManagedIoStates (__fastcall *StateFunc)(FxSelfManagedIoMachine *, int *, FxCxCallbackProgress *); // rax
  int status; // [rsp+78h] [rbp+10h] BYREF

  p_m_StateMachineLock = &this->m_StateMachineLock;
  v6 = (int)Event;
  FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, Event, 0LL);
  _a3 = 15;
  this->m_Events.History[this->m_EventHistoryIndex] = v6;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  m_CurrentState = this->m_CurrentState;
  if ( Progress )
    *Progress = FxCxCallbackProgressInitialized;
  v9 = 0LL;
  TargetStatesCount = FxSelfManagedIoMachine::m_StateTable[m_CurrentState - 1].TargetStatesCount;
  if ( TargetStatesCount )
  {
    TargetStates = FxSelfManagedIoMachine::m_StateTable[m_CurrentState - 1].TargetStates;
    while ( TargetStates[v9].SelfManagedIoEvent != v6 )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= TargetStatesCount )
        goto LABEL_7;
    }
    _a3 = TargetStates[v9].SelfManagedIoState;
  }
LABEL_7:
  status = 0;
  while ( _a3 != 15 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qqLL(
      *(_FX_DRIVER_GLOBALS **)(v13 + 16),
      4u,
      0xCu,
      0xCu,
      WPP_SelfManagedIoStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v14 + 144),
      _a3,
      this->m_CurrentState);
    this->m_States.History[this->m_StateHistoryIndex] = _a3;
    v15 = this->m_StateHistoryIndex + 1;
    this->m_CurrentState = _a3;
    this->m_StateHistoryIndex = v15 & 7;
    StateFunc = FxSelfManagedIoMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
    if ( StateFunc )
      _a3 = StateFunc(this, &status, Progress);
    else
      _a3 = 15;
  }
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)status;
}
