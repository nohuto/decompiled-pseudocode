/*
 * XREFs of ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C007DCA0
 * Callers:
 *     ?PowerPolWokeFromS0@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010050 (-PowerPolWokeFromS0@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007A8A0 (-PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007ABE0 (-PowerPolS0NoWakePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingResetDevice@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BAB0 (-PowerPolStoppingResetDevice@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BDD0 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BED0 (-PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007CA00 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C007CF58 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C007D624 (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z @ 0x1C000A9A8 (-LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C003A4F8 (WPP_IFR_SF_dqqd.c)
 *     ?StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z @ 0x1C008213C (-StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicySendDevicePowerRequest(
        FxPkgPnp *this,
        POWER_STATE DeviceState,
        SendDeviceRequestAction Action,
        RequestDIrpReason Reason)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  void (__fastcall *v5)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, void *, _IO_STATUS_BLOCK *); // r13
  FxDevicePowerIrpTracker *p_m_DevicePowerIrpTracker; // rsi
  FxPowerPolicyOwnerSettings *v11; // rax
  int v12; // r14d
  NTSTATUS v13; // ebp
  FxPowerPolicyOwnerSettings *v14; // rax
  const void *_a4; // rax
  __int64 v16; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LARGE_INTEGER interval; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 PowerUp; // [rsp+98h] [rbp+10h]

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v5 = FxPkgPnp::_PowerPolDevicePowerUpComplete;
  interval.QuadPart = -5000000LL;
  if ( DeviceState.SystemState != PowerSystemWorking )
    v5 = FxPkgPnp::_PowerPolDevicePowerDownComplete;
  p_m_DevicePowerIrpTracker = &m_Owner->m_DevicePowerIrpTracker;
  PowerUp = DeviceState.SystemState == PowerSystemWorking;
  FxDevicePowerIrpTracker::LogRequestDIrpReason(
    p_m_DevicePowerIrpTracker,
    Reason,
    DeviceState.SystemState == PowerSystemWorking);
  if ( (unsigned int)(Reason - 2) <= 1 )
    FxDevicePowerIrpTracker::StartTrackingDevicePowerIrp(p_m_DevicePowerIrpTracker, Reason);
  v11 = this->m_PowerPolicyMachine.m_Owner;
  if ( DeviceState.SystemState == PowerSystemWorking )
    v11->m_RequestedPowerUpIrp = 1;
  else
    v11->m_RequestedPowerDownIrp = 1;
  v12 = 0;
  while ( 1 )
  {
    v13 = PoRequestPowerIrp(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 2u, DeviceState, v5, this, 0LL);
    if ( v13 >= 0 )
      break;
    if ( Action )
    {
      KeDelayExecutionThread(0, 0, &interval);
      if ( (unsigned int)++v12 < 0x64 )
        continue;
    }
    FxDevicePowerIrpTracker::LogRequestDIrpReason(p_m_DevicePowerIrpTracker, RequestDIrpFailed, PowerUp);
    if ( (unsigned int)(Reason - 2) <= 1 )
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
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        DeviceState.SystemState - 1,
        *(const void **)(v16 + 144),
        _a4,
        v13);
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
      v13);
  return (unsigned int)v13;
}
