/*
 * XREFs of ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C0081AA0
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C006A1BC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C006B1D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E420 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EA80 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C006ECE4 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F330 (-PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FD40 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FE40 (-PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FE80 (-PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006FEC0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::ProcessEvent(
        FxSelfManagedIoMachine *this,
        _FX_DRIVER_GLOBALS *Event,
        FxCxCallbackProgress *Progress)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi
  int v6; // ebp
  int _a3; // edi
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
      {
        status = 0;
        goto LABEL_12;
      }
    }
    _a3 = TargetStates[v9].SelfManagedIoState;
  }
  for ( status = 0; _a3 != 15; _a3 = StateFunc(this, &status, Progress) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qqdd(
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
    if ( !StateFunc )
      break;
  }
LABEL_12:
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)status;
}
