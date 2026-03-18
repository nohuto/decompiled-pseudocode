/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C0005C0C
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C001A360 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C001BEC0 (DpiEnterSystemDisplay.c)
 *     DxgkQueryConnectionChanges @ 0x1C001C200 (DxgkQueryConnectionChanges.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C002395C (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005E398 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C005EFC0 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060D90 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0061800 (DpiMiracastTearDownAssociation.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063D88 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064E30 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064FB0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01988F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01DCED0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C01E2E90 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C01E8B70 (DpiPdoHandleQueryDeviceRelations.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0DA4 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F1460 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01F33D0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01F4DD0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01F54A0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiFdoHandleStartDevice @ 0x1C0205110 (DpiFdoHandleStartDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C02185F0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0225820 (DpiLdaValidateSystemChainStatus.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0227C34 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiPdoHandleStartDevice @ 0x1C0228960 (DpiPdoHandleStartDevice.c)
 *     DpiFdoDispatchPnp @ 0x1C0229300 (DpiFdoDispatchPnp.c)
 *     DpiPollDisplayChildren @ 0x1C03995E0 (DpiPollDisplayChildren.c)
 *     DpiPollSingleDisplayChild @ 0x1C0399748 (DpiPollSingleDisplayChild.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C039A610 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C039A7D8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C039B2A0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C039BCA0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C039C0D0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C039EDDC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C03A0098 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C03A27E0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C03A2A00 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C03A2B90 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C03A2D20 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C03A2EE0 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C03A3180 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C03A3300 (DpiFdoThermalPassiveCooling.c)
 *     DpiKsrStopAdapter @ 0x1C03A66C4 (DpiKsrStopAdapter.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A68A4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C03A8450 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C03A8C50 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C03A9760 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C03A9990 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C001AE94 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0198AF8 (DpiDisableD3Requests.c)
 */

NTSTATUS __fastcall DpiCheckForOutstandingD3Requests(__int64 a1)
{
  int v2; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  DpiDisableD3Requests(*(_QWORD *)(a1 + 24));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4096), &LockHandle);
  v2 = *(_DWORD *)(a1 + 4160);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    DpiRequestDevicePowerState(*(_QWORD *)(a1 + 24), 1LL);
    DpiEnableD3Requests(*(_QWORD *)(a1 + 24));
  }
  return KeWaitForSingleObject((PVOID)(a1 + 4112), Executive, 0, 0, 0LL);
}
