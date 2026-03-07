void __fastcall FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings(
        FxPowerPolicyOwnerSettings *this,
        FxPkgPnp *PkgPnp)
{
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // r8d
  int v9; // eax

  this->m_PowerIdleMachine.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_PowerIdleMachine.m_Lock.m_Lock = 0LL;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerContext = 0LL;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_TimerCallback = 0LL;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_Period = 0;
  this->m_PowerIdleMachine.m_PowerTimeoutTimer.m_Timer.m_KernelExTimer = 0LL;
  FxCREvent::FxCREvent(&this->m_PowerIdleMachine.m_D0NotificationEvent, (unsigned __int8)PkgPnp);
  this->m_PowerIdleMachine.m_PowerTimeout.QuadPart = 0LL;
  this->m_PowerIdleMachine.m_CurrentIdleState = FxIdleStopped;
  *(_WORD *)&this->m_PowerIdleMachine.m_EventHistoryIndex = 0;
  memset(this->m_PowerIdleMachine.m_EventHistory, 0, 0x40uLL);
  this->m_PowerIdleMachine.m_TagTracker = 0LL;
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_Lock = 0LL;
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 1;
  this->m_PoxInterface.m_PkgPnp = PkgPnp;
  this->m_PoxInterface.m_PoHandle = 0LL;
  this->m_PoxInterface.m_DevicePowerRequired = 1;
  this->m_PoxInterface.m_DevicePowerRequirementMachine = 0LL;
  this->m_PoxInterface.m_CurrentIdleTimeoutHint = 0;
  this->m_PoxInterface.m_NextIdleTimeoutHint = 0;
  this->m_PoxInterface.m_DirectedTransitionActive = 0;
  this->m_DeviceArmWakeFromS0.__vftable = (FxPowerDeviceArmWakeFromS0_vtbl *)FxPowerDeviceArmWakeFromS0::`vftable';
  this->m_DeviceArmWakeFromSx.__vftable = (FxPowerDeviceArmWakeFromSx_vtbl *)FxPowerDeviceArmWakeFromSx::`vftable';
  this->m_DeviceDisarmWakeFromS0.__vftable = (FxPowerDeviceDisarmWakeFromS0_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceDisarmWakeFromSx.__vftable = (FxPowerDeviceDisarmWakeFromSx_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceWakeFromS0Triggered.__vftable = (FxPowerDeviceWakeFromS0Triggered_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceWakeFromSxTriggered.__vftable = (FxPowerDeviceWakeFromSxTriggered_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceArmWakeFromS0.m_Method = 0LL;
  this->m_DeviceArmWakeFromSx.m_Method = 0LL;
  this->m_DeviceArmWakeFromSx.m_MethodWithReason = 0LL;
  this->m_DeviceDisarmWakeFromS0.m_Method = 0LL;
  this->m_DeviceDisarmWakeFromSx.m_Method = 0LL;
  this->m_DeviceWakeFromS0Triggered.m_Method = 0LL;
  this->m_DeviceWakeFromSxTriggered.m_Method = 0LL;
  this->m_WakeSettings.WmiInstance = 0LL;
  this->m_WakeSettings.DxState = PowerDeviceD3;
  *(_DWORD *)&this->m_WakeSettings.Enabled = 0;
  *(_WORD *)&this->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake = 0;
  this->m_IdleSettings.WmiInstance = 0LL;
  this->m_IdleSettings.DxState = PowerDeviceD3;
  *(_DWORD *)&this->m_IdleSettings.Enabled = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings = 0LL;
  this->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags = 0LL;
  this->m_IdleSettings.m_TimeoutMgmt.m_UseWdfTimerForPofx = 0;
  *(_DWORD *)&this->m_IdleSettings.WakeFromS0Capable = 0;
  *(_WORD *)&this->m_IdleSettings.D3ColdCapabilityKnown = 0;
  this->m_DevicePowerIrpTracker.m_HistoryIndex = 0;
  memset(this->m_DevicePowerIrpTracker.m_History, 0, sizeof(this->m_DevicePowerIrpTracker.m_History));
  this->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
  v4 = 0;
  this->m_DevicePowerIrpTracker.m_D0IrpReasonHint.AsLong = 5;
  v5 = 0;
  this->m_DevicePowerIrpTracker.m_PkgPnp = PkgPnp;
  v6 = 0;
  this->m_UsbIdle = 0LL;
  this->m_PkgPnp = PkgPnp;
  do
  {
    v7 = 1;
    v8 = ~(15 << v6) & v5;
    if ( v4 != 1 )
      v7 = 4;
    ++v4;
    v9 = v7 << v6;
    v6 += 4;
    v5 = v9 | v8;
  }
  while ( v6 < 0x1C );
  *(_QWORD *)&this->m_ChildrenPoweredOnCount = 0LL;
  this->m_SystemWakeSource = 0;
  this->m_WaitWakeCancelCompletionOwnership = 0;
  this->m_PowerCallbackObject = 0LL;
  this->m_PowerCallbackRegistration = 0LL;
  this->m_SystemToDeviceStateMap = v5;
  *(_DWORD *)&this->m_IdealDxStateForSx = 4;
  *(_DWORD *)&this->m_WakeCompletionEventDropped = 0x10000;
  this->m_WaitWakeStatus = -1073741637;
}
