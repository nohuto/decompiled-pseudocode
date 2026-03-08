/*
 * XREFs of McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC
 * Callers:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E6B0 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C000F360 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C000F3B0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C000F9C0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00100F0 (-DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00125F4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x1C0015640 (DpiDxgkDdiSetTargetAdjustedColorimetry2.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C001A9F0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C001AA40 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C001AC34 (DpiRequestDevicePowerState.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x1C0045850 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x1C00458A0 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C018D730 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CB6F0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01CBF30 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01EA4F4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0201144 (DpiDxgkDdiGetChildContainerId.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C020EA90 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0219BF0 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02B2D50 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1C03A0E30 (-DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C03A4724 (DpiDxgkDdiNotifySurpriseRemoval.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x1C03A4988 (DpiDxgkDdiSetTargetAdjustedColorimetry.c)
 *     ?ReportPowerComponentActive@DXGMONITOR@@UEBAXI@Z @ 0x1C03C4840 (-ReportPowerComponentActive@DXGMONITOR@@UEBAXI@Z.c)
 *     ?ReportPowerComponentIdle@DXGMONITOR@@UEBAXI@Z @ 0x1C03C48C0 (-ReportPowerComponentIdle@DXGMONITOR@@UEBAXI@Z.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5ABC (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5B84 (-AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ @ 0x1C03C62D4 (-RemoveUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJXZ.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1C03CEE84 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C03CEEE8 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 4u, &v4);
}
