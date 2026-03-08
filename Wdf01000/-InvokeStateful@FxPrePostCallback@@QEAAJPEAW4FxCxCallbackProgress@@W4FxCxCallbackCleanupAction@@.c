/*
 * XREFs of ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C006BCB4 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E200 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E360 (-PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00701E0 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00705D0 (-PowerWakingNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1C0070648 (-PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA-AW4_WDF_DEVICE_POWER_STATE@@E@Z.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B290 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B3D0 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C740 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?Init@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C00819E0 (-Init@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@.c)
 *     ?Restarting@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C0081C80 (-Restarting@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C0079A4C (-IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0079AC0 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0079B48 (-IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateful(
        FxPrePostCallback *this,
        FxCxCallbackProgress *Progress,
        FxCxCallbackCleanupAction CleanupAction)
{
  FxCxCallbackProgress v4; // di
  int v7; // esi
  FxDevice *m_Device; // rbp
  FxPrePostCallback *v9; // rcx

  v4 = FxCxCallbackProgressInitialized;
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v7 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v7 < 0 )
      goto $exit;
  }
  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v7 = this->InvokeClient(this);
    v4 = FxCxCallbackProgressClientCalled;
    if ( v7 >= 0 )
      v4 = FxCxCallbackProgressClientSucceeded;
    goto $exit;
  }
  v7 = FxPrePostCallback::IssuePreCxCallbacksStateful(this, this->m_PkgPnp->m_Device);
  v9 = this;
  if ( v7 < 0 )
  {
LABEL_11:
    FxPrePostCallback::IssueCleanupCxCallbacks(v9, m_Device);
    goto $exit;
  }
  v7 = this->InvokeClient(this);
  v4 = FxCxCallbackProgressClientCalled;
  if ( v7 >= 0 )
  {
    v4 = FxCxCallbackProgressClientSucceeded;
    v7 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    goto $exit;
  }
  if ( CleanupAction == FxCxCleanupAfterPreOrClientFailure )
  {
    v9 = this;
    goto LABEL_11;
  }
$exit:
  if ( Progress )
    *Progress = v4;
  return (unsigned int)v7;
}
