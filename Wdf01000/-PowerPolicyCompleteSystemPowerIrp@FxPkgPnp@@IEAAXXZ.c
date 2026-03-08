/*
 * XREFs of ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C007D228
 * Callers:
 *     ?PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AC30 (-PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AC50 (-PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AF90 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemAsleepNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BD50 (-PowerPolSystemAsleepNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemSleepPowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BE40 (-PowerPolSystemSleepPowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(FxPkgPnp *this)
{
  _IRP *_a1; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  _a1 = this->m_PendingSystemPowerIrp;
  irp.m_Irp = _a1;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(
      m_Globals,
      5u,
      0xCu,
      0x2Bu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      _a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1,
      0);
  this->m_PendingSystemPowerIrp = 0LL;
  FxPkgPnp::CompletePowerRequest(this, &irp, 0);
}
