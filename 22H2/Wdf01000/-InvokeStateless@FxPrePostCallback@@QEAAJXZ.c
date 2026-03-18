/*
 * XREFs of ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00109A4
 * Callers:
 *     ?Suspending@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C0019930 (-Suspending@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProg.c)
 *     ?Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z @ 0x1C001BB54 (-Invoke@FxPowerDeviceDisarmWakeFromS0@@QEAAJPEAUWDFDEVICE__@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreHwDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C001C0B8 (-Invoke@FxPnpDeviceD0ExitPreHwDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C001C28C (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerInitialPostHardwareEnabledFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C480 (-PowerInitialPostHardwareEnabledFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C610 (-PowerWakingPostHardwareEnabledFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C6A0 (-PowerWakingPostHardwareEnabledFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001C950 (-PowerPolTimerExpiredWakeCapableRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A5D0 (-PnpEventFailedSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007B080 (-PnpEventRemovedPdoSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007B3A0 (-PnpEventSurpriseRemoveIoStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007B460 (-PnpEventSurpriseRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C007C08C (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C007D5CC (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007DBE0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E090 (-PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E760 (-PowerUpFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedPowerDownNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007E7A0 (-PowerUpFailedPowerDownNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C0088900 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?Cleanup@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008B340 (-Cleanup@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgres.c)
 *     ?Flushing@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008B380 (-Flushing@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgre.c)
 *     ?InitStartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008B440 (-InitStartedFailedPost@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxC.c)
 *     ?RestartedFailedPost@FxSelfManagedIoMachine@@KA?AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCallbackProgress@@@Z @ 0x1C008B520 (-RestartedFailedPost@FxSelfManagedIoMachine@@KA-AW4FxSelfManagedIoStates@@PEAV1@PEAJPEAW4FxCxCal.c)
 * Callees:
 *     ?_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z @ 0x1C001C7D4 (-_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085B78 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085CCC (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::InvokeStateless(FxPrePostCallback *this)
{
  FxDevice *m_Device; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int status; // [rsp+30h] [rbp+8h] BYREF

  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    status = this->InvokeClient(this);
  }
  else
  {
    status = FxPrePostCallback::IssuePreCxCallbacksStateless(this, this->m_PkgPnp->m_Device);
    v3 = this->InvokeClient(this);
    FxPrePostCallback::_SaveTheFirstError(&status, v3);
    v4 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    FxPrePostCallback::_SaveTheFirstError(&status, v4);
  }
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v5 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    FxPrePostCallback::_SaveTheFirstError(&status, v5);
  }
  return (unsigned int)status;
}
