/*
 * XREFs of ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0012400
 * Callers:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0012220 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C0014D64 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C0018E90 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x1C0019190 (-Stop@MxTimer@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C007C920 (-Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PE.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxPkgPnp::PowerEnterNewState(FxPkgPnp *this, __int64 State)
{
  _LIST_ENTRY *Flink; // r14
  _WDF_DEVICE_POWER_STATE _a3; // ebx
  FxDeviceBase *m_DeviceBase; // rax
  _WDF_DEVICE_POWER_STATE v6; // r12d
  FxDeviceBase *v7; // rdx
  const void *_a1; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPowerStateCallback *v11; // rcx
  __int64 v12; // rsi
  _WDF_DEVICE_POWER_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  int v14; // r15d
  _WDF_DEVICE_POWER_STATE v15; // eax
  FxPowerStateCallback *v16; // rcx
  _LARGE_INTEGER v17; // rdx
  FxDeviceBase *v18; // r9
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v20; // r9
  FxDeviceBase *v21; // r9
  unsigned __int16 v22; // ax
  WDFDEVICE__ *v23; // r9
  FxDeviceBase *v24; // r9
  unsigned __int16 v25; // ax
  WDFDEVICE__ *v26; // r9
  FxWatchdog watchdog; // [rsp+50h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-10h]
  __int64 data_8; // [rsp+108h] [rbp+0h] OVERLAPPED BYREF
  _WDF_DEVICE_POWER_STATE v30; // [rsp+110h] [rbp+8h]

  Flink = 0LL;
  data_8 = 0LL;
  _a3 = (int)State;
  v30 = WdfDevStatePowerInvalid;
  m_DeviceBase = this->m_DeviceBase;
  watchdog.m_PkgPnp = 0LL;
  *(_OWORD *)&watchdog.m_Timer.m_Timer.KernelTimer.Header.Lock = 0uLL;
  LODWORD(watchdog.m_Timer.m_Timer.m_TimerCallback) = 0;
  watchdog.m_CallingThread = (struct _KTHREAD *)this;
  v6 = HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable);
  if ( (_DWORD)State != 873 )
  {
    do
    {
      v7 = this->m_DeviceBase;
      _a1 = 0LL;
      if ( v7->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0x15u,
        0xEu,
        WPP_PowerStateMachine_cpp_Traceguids,
        _a1,
        v7->m_DeviceObject.m_DeviceObject,
        _a3,
        v6);
      m_PowerStateCallbacks = this->m_PowerStateCallbacks;
      if ( m_PowerStateCallbacks )
      {
        v18 = this->m_DeviceBase;
        LODWORD(data_8) = 4;
        HIDWORD(data_8) = v6;
        v30 = _a3;
        m_ObjectSize = v18->m_ObjectSize;
        v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v20 = 0LL;
        FxPowerStateCallback::Invoke(
          m_PowerStateCallbacks,
          v6,
          StateNotificationLeaveState,
          v20,
          (const _WDF_DEVICE_POWER_NOTIFICATION_DATA *)&data_8);
      }
      m_HistoryIndex = this->m_PowerMachine.m_HistoryIndex;
      State = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
      this->m_PowerMachine.m_HistoryIndex = State;
      this->m_PowerMachine.m_States.History[m_HistoryIndex] = _a3;
      v11 = this->m_PowerStateCallbacks;
      if ( v11 )
      {
        v21 = this->m_DeviceBase;
        LODWORD(data_8) = 1;
        HIDWORD(data_8) = v6;
        v30 = _a3;
        v22 = v21->m_ObjectSize;
        v23 = (WDFDEVICE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v22 )
          v23 = 0LL;
        FxPowerStateCallback::Invoke(
          v11,
          _a3,
          StateNotificationEnterState,
          v23,
          (const _WDF_DEVICE_POWER_NOTIFICATION_DATA *)&data_8);
      }
      v6 = _a3;
      v12 = (_a3 & 0xFFFF7FFF) - 768;
      HIDWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
      StateFunc = FxPkgPnp::m_WdfPowerStates[v12].StateFunc;
      if ( StateFunc )
      {
        v14 = _a3 & 0x8000;
        if ( (_a3 & 0x8000) != 0 )
        {
          MxTimer::Initialize(
            (MxTimer *)&watchdog.m_Timer.m_Timer.8,
            &watchdog.m_Timer.m_Timer.8,
            FxWatchdog::_WatchdogDpc,
            0);
          CurrentThread = KeGetCurrentThread();
          if ( *((_BYTE *)watchdog.m_CallingThread + 921) )
            v17.QuadPart = -864000000000LL;
          else
            v17.QuadPart = -6000000000LL;
          MxTimer::Start((MxTimer *)&watchdog.m_Timer.m_Timer.8, v17, 0);
          v15 = FxPkgPnp::m_WdfPowerStates[v12].StateFunc(this);
        }
        else
        {
          v15 = StateFunc(this);
        }
        _a3 = v15;
        if ( v14 )
          MxTimer::Stop((MxTimer *)&watchdog.m_Timer.m_Timer.8);
      }
      else
      {
        _a3 = WdfDevStatePowerNull;
      }
      v16 = this->m_PowerStateCallbacks;
      if ( v16 )
      {
        v24 = this->m_DeviceBase;
        v30 = WdfDevStatePowerInvalid;
        LODWORD(data_8) = 2;
        HIDWORD(data_8) = v6;
        v25 = v24->m_ObjectSize;
        v26 = (WDFDEVICE__ *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v25 )
          v26 = 0LL;
        FxPowerStateCallback::Invoke(
          v16,
          v6,
          StateNotificationPostProcessState,
          v26,
          (const _WDF_DEVICE_POWER_NOTIFICATION_DATA *)&data_8);
      }
    }
    while ( _a3 != WdfDevStatePowerNull );
    Flink = watchdog.m_Timer.m_Timer.KernelTimer.Header.WaitListHead.Flink;
  }
  if ( BYTE4(watchdog.m_Timer.m_Timer.m_ExTimerCallback) )
  {
    if ( Flink )
    {
      LOBYTE(State) = 1;
      ExDeleteTimer(Flink, State, 0LL, 0LL);
    }
  }
}
