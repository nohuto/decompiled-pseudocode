/*
 * XREFs of ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007D384
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C00057E8 (-Stop@MxTimer@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C003F8CC (--1MxTimer@@QEAA@XZ.c)
 *     ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C006CB44 (-Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICA.c)
 *     ?StartTimer@FxWatchdog@@QEAAXK@Z @ 0x1C00708C8 (-StartTimer@FxWatchdog@@QEAAXK@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyEnterNewState(FxPkgPnp *this, __int64 NewState)
{
  _WDF_DEVICE_POWER_POLICY_STATE _a3; // edi
  _WDF_DEVICE_POWER_POLICY_STATE _a4; // r14d
  const void *_a1; // rax
  __int64 v6; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPowerPolicyStateCallback *v9; // r10
  __int64 m_HistoryIndex; // r8
  FxDeviceBase *v11; // rcx
  WDFDEVICE__ *v12; // rax
  FxPowerPolicyStateCallback *v13; // r10
  const POWER_POLICY_STATE_TABLE *v14; // rsi
  FxDeviceBase *v15; // rcx
  WDFDEVICE__ *v16; // rax
  FxPowerPolicyStateCallback *v17; // r10
  FxWatchdog watchdog; // [rsp+50h] [rbp-B0h] BYREF
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA data; // [rsp+100h] [rbp+0h] BYREF

  watchdog.m_PkgPnp = this;
  watchdog.m_Timer.m_Timer.m_TimerContext = 0LL;
  _a3 = (int)NewState;
  watchdog.m_Timer.m_Timer.m_TimerCallback = 0LL;
  watchdog.m_Timer.m_Timer.m_Period = 0;
  watchdog.m_Timer.m_Timer.m_KernelExTimer = 0LL;
  *(_QWORD *)&data.Type = 0LL;
  data.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
  _a4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
  while ( _a3 != WdfDevStatePwrPolNull )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqdd(
      this->m_Globals,
      4u,
      0x15u,
      0x15u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v6 + 144),
      _a3,
      _a4);
    if ( this->m_PowerPolicyStateCallbacks )
    {
      m_DeviceBase = this->m_DeviceBase;
      data.Type = StateNotificationLeaveState;
      data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      FxPowerPolicyStateCallback::Invoke(v9, _a4, StateNotificationLeaveState, ObjectHandleUnchecked, &data);
    }
    m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
    NewState = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
    this->m_PowerPolicyMachine.m_HistoryIndex = NewState;
    this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = _a3;
    if ( this->m_PowerPolicyStateCallbacks )
    {
      v11 = this->m_DeviceBase;
      data.Type = StateNotificationEnterState;
      data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
      v12 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v11);
      FxPowerPolicyStateCallback::Invoke(v13, _a3, StateNotificationEnterState, v12, &data);
    }
    _a4 = _a3;
    *(_DWORD *)&this->m_DeviceBase[1].m_Type = _a3;
    v14 = &FxPkgPnp::m_WdfPowerPolicyStates[(_a3 & 0xFFFF7FFF) - 1280];
    if ( v14->StateFunc )
    {
      FxWatchdog::StartTimer(&watchdog, _a3);
      _a3 = v14->StateFunc(this);
      if ( (_a4 & 0x8000) != 0 )
        MxTimer::Stop(&watchdog.m_Timer);
    }
    else
    {
      _a3 = WdfDevStatePwrPolNull;
    }
    if ( this->m_PowerPolicyStateCallbacks )
    {
      v15 = this->m_DeviceBase;
      data.Type = StateNotificationPostProcessState;
      data.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
      v16 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v15);
      FxPowerPolicyStateCallback::Invoke(v17, _a4, StateNotificationPostProcessState, v16, &data);
    }
  }
  MxTimer::~MxTimer(&watchdog.m_Timer, NewState);
}
