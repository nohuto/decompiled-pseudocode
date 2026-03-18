/*
 * XREFs of ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C001C9C0
 * Callers:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C000E174 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E3A0 (-PowerPolS0NoWakePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0016F70 (-PowerPolSleepingNoWakePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0019010 (-PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086900 (-PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolStoppingResetDevice@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087690 (-PowerPolStoppingResetDevice@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0087930 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0088280 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolWokeFromS0@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00886B0 (-PowerPolWokeFromS0@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C00889DC (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C004E9EC (WPP_IFR_SF_dqqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C008E734 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicySendDevicePowerRequest(
        FxPkgPnp *this,
        POWER_STATE DeviceState,
        SendDeviceRequestAction Action,
        unsigned int Reason)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rbx
  void (__fastcall *v5)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, FxPkgPnp *); // r13
  FxDevicePowerIrpTracker *p_m_DevicePowerIrpTracker; // rbx
  FxPowerPolicyOwnerSettings *v11; // rax
  int v12; // r14d
  NTSTATUS globals; // esi
  FxPowerPolicyOwnerSettings *v14; // rax
  const void *_a4; // rax
  __int64 v16; // rdx
  const _GUID *v17; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevicePowerIrpTracker::HistoryEntry v20; // [rsp+50h] [rbp-48h]
  FxDevicePowerIrpTracker::HistoryEntry v21; // [rsp+60h] [rbp-38h]
  _LARGE_INTEGER interval; // [rsp+A0h] [rbp+8h] BYREF

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  interval.QuadPart = -5000000LL;
  v5 = FxPkgPnp::_PowerPolDevicePowerUpComplete;
  if ( DeviceState.SystemState != PowerSystemWorking )
    v5 = FxPkgPnp::_PowerPolDevicePowerDownComplete;
  p_m_DevicePowerIrpTracker = &m_Owner->m_DevicePowerIrpTracker;
  *(_QWORD *)&v20.Reason = Reason;
  v20.Timestamp.QuadPart = MEMORY[0xFFFFF78000000014];
  p_m_DevicePowerIrpTracker->m_History[p_m_DevicePowerIrpTracker->m_HistoryIndex] = v20;
  p_m_DevicePowerIrpTracker->m_HistoryIndex = (p_m_DevicePowerIrpTracker->m_HistoryIndex + 1) & 7;
  if ( Reason - 2 <= 1 )
  {
    if ( p_m_DevicePowerIrpTracker->m_DIrpRequestedForSIrp )
      MicrosoftTelemetryAssertTriggeredArgsKM(
        *(const char **)(*(_QWORD *)&p_m_DevicePowerIrpTracker[-1].m_History[2].Reason + 96LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&p_m_DevicePowerIrpTracker[-1].m_History[2].Reason + 96LL) + 208LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&p_m_DevicePowerIrpTracker[-1].m_History[2].Reason + 96LL) + 204LL));
    if ( (int)Reason <= 3 )
      p_m_DevicePowerIrpTracker->m_DIrpRequestedForSIrp = Reason;
  }
  v11 = this->m_PowerPolicyMachine.m_Owner;
  if ( DeviceState.SystemState == PowerSystemWorking )
    v11->m_RequestedPowerUpIrp = 1;
  else
    v11->m_RequestedPowerDownIrp = 1;
  v12 = 0;
  while ( 1 )
  {
    globals = PoRequestPowerIrp(
                this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                2u,
                DeviceState,
                (PREQUEST_POWER_COMPLETE)v5,
                this,
                0LL);
    if ( globals >= 0 )
      break;
    if ( Action )
    {
      KeDelayExecutionThread(0, 0, &interval);
      if ( (unsigned int)++v12 < 0x64 )
        continue;
    }
    *(_QWORD *)&v21.Reason = 1LL;
    v21.Timestamp.QuadPart = MEMORY[0xFFFFF78000000014];
    p_m_DevicePowerIrpTracker->m_History[p_m_DevicePowerIrpTracker->m_HistoryIndex] = v21;
    p_m_DevicePowerIrpTracker->m_HistoryIndex = (p_m_DevicePowerIrpTracker->m_HistoryIndex + 1) & 7;
    if ( Reason - 2 <= 1 )
      p_m_DevicePowerIrpTracker->m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
    v14 = this->m_PowerPolicyMachine.m_Owner;
    if ( DeviceState.SystemState == PowerSystemWorking )
      v14->m_RequestedPowerUpIrp = 0;
    else
      v14->m_RequestedPowerDownIrp = 0;
    if ( Action == Retry )
    {
      _a4 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_dqqd(
        this->m_Globals,
        v16,
        0xCu,
        0x27u,
        v17,
        DeviceState.SystemState - 1,
        *(const void **)(v16 + 144),
        _a4,
        globals);
    }
    break;
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(
      m_Globals,
      5u,
      0xCu,
      0x28u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      DeviceState.SystemState - 1,
      globals);
  return (unsigned int)globals;
}
