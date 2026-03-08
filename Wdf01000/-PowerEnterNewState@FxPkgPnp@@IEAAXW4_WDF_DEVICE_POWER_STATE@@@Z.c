/*
 * XREFs of ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C006E82C
 * Callers:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006F820 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00057E8 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C003F8CC (--1MxTimer@@QEAA@XZ.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C006CB80 (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 *     ?StartTimer@FxWatchdog@@QEAAXK@Z @ 0x1C00708C8 (-StartTimer@FxWatchdog@@QEAAXK@Z.c)
 */

void __fastcall FxPkgPnp::PowerEnterNewState(FxPkgPnp *this, __int64 State)
{
  _WDF_DEVICE_POWER_STATE _a3; // edi
  _WDF_DEVICE_POWER_STATE _a4; // r14d
  const void *_a1; // rax
  __int64 v6; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPowerStateCallback *v9; // r10
  __int64 m_HistoryIndex; // r8
  FxDeviceBase *v11; // rcx
  WDFDEVICE__ *v12; // rax
  FxPowerStateCallback *v13; // r10
  const POWER_STATE_TABLE *v14; // rsi
  FxDeviceBase *v15; // rcx
  WDFDEVICE__ *v16; // rax
  FxPowerStateCallback *v17; // r10
  FxWatchdog watchdog; // [rsp+50h] [rbp-B0h] BYREF
  _WDF_DEVICE_POWER_NOTIFICATION_DATA data; // [rsp+100h] [rbp+0h] BYREF

  watchdog.m_PkgPnp = this;
  watchdog.m_Timer.m_Timer.m_TimerContext = 0LL;
  _a3 = (int)State;
  watchdog.m_Timer.m_Timer.m_TimerCallback = 0LL;
  watchdog.m_Timer.m_Timer.m_Period = 0;
  watchdog.m_Timer.m_Timer.m_KernelExTimer = 0LL;
  *(_QWORD *)&data.Type = 0LL;
  data.Data.EnterState.NewState = WdfDevStatePowerInvalid;
  _a4 = HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
  while ( _a3 != WdfDevStatePowerNull )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqdd(
      this->m_Globals,
      4u,
      0x15u,
      0xEu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v6 + 144),
      _a3,
      _a4);
    if ( this->m_PowerStateCallbacks )
    {
      m_DeviceBase = this->m_DeviceBase;
      data.Type = StateNotificationLeaveState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      FxPowerStateCallback::Invoke(v9, _a4, StateNotificationLeaveState, ObjectHandleUnchecked, &data);
    }
    m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
    State = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
    this->m_PowerMachine.m_HistoryIndex = State;
    this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
    if ( this->m_PowerStateCallbacks )
    {
      v11 = this->m_DeviceBase;
      data.Type = StateNotificationEnterState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      v12 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v11);
      FxPowerStateCallback::Invoke(v13, _a3, StateNotificationEnterState, v12, &data);
    }
    _a4 = _a3;
    HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
    v14 = &FxPkgPnp::m_WdfPowerStates[(_a3 & 0xFFFF7FFF) - 768];
    if ( v14->StateFunc )
    {
      FxWatchdog::StartTimer(&watchdog, _a3);
      _a3 = v14->StateFunc(this);
      if ( (_a4 & 0x8000) != 0 )
        MxTimer::Stop(&watchdog.m_Timer);
    }
    else
    {
      _a3 = WdfDevStatePowerNull;
    }
    if ( this->m_PowerStateCallbacks )
    {
      v15 = this->m_DeviceBase;
      data.Type = StateNotificationPostProcessState;
      data.Data = (_WDF_DEVICE_POWER_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
      v16 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v15);
      FxPowerStateCallback::Invoke(v17, _a4, StateNotificationPostProcessState, v16, &data);
    }
  }
  MxTimer::~MxTimer(&watchdog.m_Timer, State);
}
