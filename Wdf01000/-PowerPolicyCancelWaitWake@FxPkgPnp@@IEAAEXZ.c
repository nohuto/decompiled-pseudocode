/*
 * XREFs of ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C007D094
 * Callers:
 *     ?PowerPolCancelingWakeForSystemSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007A860 (-PowerPolCancelingWakeForSystemSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolIoPresentArmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007ABA0 (-PowerPolIoPresentArmed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeCancelWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B110 (-PowerPolSleepingWakeCancelWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B1A0 (-PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BA70 (-PowerPolStoppingCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWakeCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BC10 (-PowerPolStoppingDisarmWakeCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C000 (-PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C050 (-PowerPolSystemWakeDeviceWakeEnabledNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C0A0 (-PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C0F0 (-PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C400 (-PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C520 (-PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLI.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C8B0 (-PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_ST.c)
 *     ?PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007CC20 (-PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C006F0D4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCancelWaitWake(FxPkgPnp *this)
{
  char v2; // di
  _IRP *_a1; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  BOOLEAN v5; // al
  _FX_DRIVER_GLOBALS *v6; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_SharedPower.m_WaitWakeOwner )
    return FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741536);
  _a1 = (_IRP *)_InterlockedExchange64((volatile __int64 *)&this->m_SharedPower, 0LL);
  m_Globals = this->m_Globals;
  if ( _a1 )
  {
    irp.m_Irp = _a1;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Cu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    v5 = IoCancelIrp(_a1);
    v6 = this->m_Globals;
    if ( v6->FxVerboseOn )
      WPP_IFR_SF_qd(v6, 5u, 0xCu, 0x2Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, v5);
    v2 = 1;
    if ( _InterlockedExchange(&this->m_PowerPolicyMachine.m_Owner->m_WaitWakeCancelCompletionOwnership, 1) == 1 )
      FxPkgPnp::CompletePowerRequest(this, &irp, _a1->IoStatus.Status);
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Eu, WPP_PowerPolicyStateMachine_cpp_Traceguids);
    return 0;
  }
  return v2;
}
