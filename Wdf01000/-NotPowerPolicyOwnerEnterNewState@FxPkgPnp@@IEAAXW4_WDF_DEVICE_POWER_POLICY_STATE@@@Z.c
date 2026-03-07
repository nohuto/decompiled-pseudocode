void __fastcall FxPkgPnp::NotPowerPolicyOwnerEnterNewState(FxPkgPnp *this, _WDF_DEVICE_POWER_POLICY_STATE NewState)
{
  _WDF_DEVICE_POWER_POLICY_STATE v2; // ebx
  _WDF_DEVICE_POWER_POLICY_STATE v4; // esi
  const void *_a1; // rax
  __int64 v6; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  FxPowerPolicyStateCallback *v9; // r10
  __int64 m_HistoryIndex; // r8
  FxDeviceBase *v11; // rcx
  WDFDEVICE__ *v12; // rax
  FxPowerPolicyStateCallback *v13; // r10
  _WDF_DEVICE_POWER_POLICY_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxDeviceBase *v15; // rcx
  WDFDEVICE__ *v16; // rax
  FxPowerPolicyStateCallback *v17; // r10
  _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA NotificationData; // [rsp+50h] [rbp-20h] BYREF

  if ( NewState != WdfDevStatePwrPolNull )
  {
    v2 = NewState;
    *(_QWORD *)&NotificationData.Type = 0LL;
    NotificationData.Data.EnterState.NewState = WdfDevStatePwrPolInvalid;
    v4 = *(_DWORD *)&this->m_DeviceBase[1].m_Type;
    do
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqdd(
        this->m_Globals,
        4u,
        0x15u,
        0xAu,
        WPP_NotPowerPolicyOwnerStateMachine_cpp_Traceguids,
        _a1,
        *(const void **)(v6 + 144),
        v2,
        v4);
      if ( this->m_PowerPolicyStateCallbacks )
      {
        m_DeviceBase = this->m_DeviceBase;
        NotificationData.Type = StateNotificationLeaveState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(v2, v4);
        ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        FxPowerPolicyStateCallback::Invoke(
          v9,
          v4,
          StateNotificationLeaveState,
          ObjectHandleUnchecked,
          &NotificationData);
      }
      m_HistoryIndex = this->m_PowerPolicyMachine.m_HistoryIndex;
      this->m_PowerPolicyMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1)
                                                % (unsigned int)this->m_PowerPolicyMachine.m_QueueDepth;
      this->m_PowerPolicyMachine.m_States.History[m_HistoryIndex] = v2;
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v11 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationEnterState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(v2, v4);
        v12 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v11);
        FxPowerPolicyStateCallback::Invoke(v13, v2, StateNotificationEnterState, v12, &NotificationData);
      }
      v4 = v2;
      *(_DWORD *)&this->m_DeviceBase[1].m_Type = v2;
      StateFunc = FxPkgPnp::GetNotPowerPolicyOwnerTableEntry(v2)->StateFunc;
      if ( StateFunc )
        v2 = StateFunc(this);
      else
        v2 = WdfDevStatePwrPolNull;
      if ( this->m_PowerPolicyStateCallbacks )
      {
        v15 = this->m_DeviceBase;
        NotificationData.Type = StateNotificationPostProcessState;
        NotificationData.Data = (_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)v4;
        v16 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(v15);
        FxPowerPolicyStateCallback::Invoke(v17, v4, StateNotificationPostProcessState, v16, &NotificationData);
      }
    }
    while ( v2 != WdfDevStatePwrPolNull );
  }
}
