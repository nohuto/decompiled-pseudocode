// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetSxWakeSettings(
        FxPkgPnp *this,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings,
        unsigned __int8 ArmForWakeIfChildrenAreArmedForWake,
        unsigned __int8 IndicateChildWakeOnParentWake)
{
  _WDF_TRI_STATE v4; // eax
  unsigned __int8 v5; // r15
  unsigned __int8 Length; // di
  unsigned __int8 Set; // r12
  int result; // eax
  _DEVICE_POWER_STATE DxState; // esi
  signed int _a2; // eax
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings; // eax
  unsigned __int8 Length_high; // cl
  const _GUID *traceGuid; // [rsp+28h] [rbp-49h]
  int enabled; // [rsp+40h] [rbp-31h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-29h] BYREF
  _BYTE valueName_buffer[40]; // [rsp+58h] [rbp-19h] OVERLAPPED BYREF
  __int128 v22; // [rsp+80h] [rbp+Fh]
  __int64 v23; // [rsp+90h] [rbp+1Fh]
  wchar_t v24; // [rsp+98h] [rbp+27h]

  v4 = Settings->Enabled;
  v5 = 0;
  HIBYTE(valueName.Length) = ArmForWakeIfChildrenAreArmedForWake;
  if ( v4 == WdfTrue )
  {
    Length = 1;
LABEL_8:
    LOBYTE(valueName.Length) = Length;
    goto LABEL_9;
  }
  if ( v4 != WdfUseDefault )
  {
    Length = 0;
    goto LABEL_8;
  }
  Length = 1;
  LOBYTE(valueName.Length) = 1;
  if ( KeGetCurrentIrql() )
  {
    WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x39u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
  }
  else
  {
    v24 = aWdfdefaultwake[28];
    *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"WdfDefaultWakeFromSleepState";
    valueName.Buffer = (wchar_t *)3801144;
    *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"ltWakeFromSleepState";
    *(_QWORD *)valueName_buffer = &valueName_buffer[8];
    v22 = *(_OWORD *)L"omSleepState";
    v23 = *(_QWORD *)L"tate";
    FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (unsigned __int8 *)&valueName);
    Length = valueName.Length;
  }
LABEL_9:
  Set = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Set;
  if ( this->m_CapsQueried || KeGetCurrentIrql() || (result = FxPkgPnp::QueryForCapabilities(this), result >= 0) )
  {
    DxState = Settings->DxState;
    _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, this->m_SystemWake);
    if ( DxState == PowerDeviceMaximum )
    {
      DxState = _a2;
      if ( (unsigned int)(_a2 - 2) > 2 )
      {
        WPP_IFR_SF_DD(
          this->m_Globals,
          _a2 - 2,
          0xCu,
          0x3Au,
          (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
          _a2,
          0xC00002D3);
        return -1073741101;
      }
    }
    else if ( DxState > _a2 )
    {
      WPP_IFR_SF_LLd(this->m_Globals, v14, v15, 0x3Bu, traceGuid, DxState, _a2, enabled);
      return -1073741101;
    }
    UserControlOfWakeSettings = Settings->UserControlOfWakeSettings;
    if ( UserControlOfWakeSettings == WakeAllowUserControl )
    {
      result = FxPkgPnp::UpdateWmiInstanceForSxWake(this, AddInstance);
      if ( result < 0 )
        return result;
      if ( Settings->Enabled == WdfUseDefault )
      {
        if ( Set || KeGetCurrentIrql() )
        {
          Length = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled;
        }
        else
        {
          LODWORD(v22) = *(_DWORD *)L"te";
          WORD2(v22) = aWakefromsleeps[18];
          *(_QWORD *)valueName_buffer = &valueName_buffer[8];
          *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"WakeFromSleepState";
          valueName.Buffer = (wchar_t *)2490404;
          *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"SleepState";
          FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (unsigned __int8 *)&valueName);
          Length = valueName.Length;
        }
      }
      v5 = 1;
    }
    else if ( UserControlOfWakeSettings == WakeDoNotAllowUserControl )
    {
      FxPkgPnp::UpdateWmiInstanceForSxWake(this, RemoveInstance);
    }
    if ( !Set )
    {
      Length_high = HIBYTE(valueName.Length);
      this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Set = 1;
      this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Overridable = v5;
      this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake = Length_high;
      this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.IndicateChildWakeOnParentWake = IndicateChildWakeOnParentWake;
    }
    this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.DxState = DxState;
    FxPkgPnp::PowerPolicySetSxWakeState(this, Length);
    return 0;
  }
  return result;
}
