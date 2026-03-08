/*
 * XREFs of DpiCheckForOutstandingD3Requests @ 0x1C0004778
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C001A100 (DpiPdoDispatchPower.c)
 *     DpiEnterSystemDisplay @ 0x1C001BC60 (DpiEnterSystemDisplay.c)
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0023EE4 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C005E3A0 (DxgkInvalidateDeviceState.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064210 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064390 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDispatchPnp @ 0x1C01D5FF0 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleQueryDeviceRelations @ 0x1C01DC170 (DpiPdoHandleQueryDeviceRelations.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01E1214 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoHandleSystemPower @ 0x1C01E2484 (DpiFdoHandleSystemPower.c)
 *     DpiFdoStopMiracastSession @ 0x1C01E2B40 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01E4AB0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01E64B0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01E6B80 (DpiIndicateConnectorChangeWorkItem.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F6860 (DpiFdoHandleStartDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0217240 (DpiLdaValidateSystemChainStatus.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C02196D4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiPdoHandleStartDevice @ 0x1C021A3A0 (DpiPdoHandleStartDevice.c)
 *     DpiFdoDispatchPnp @ 0x1C021AD40 (DpiFdoDispatchPnp.c)
 *     DpiPollDisplayChildren @ 0x1C0394D00 (DpiPollDisplayChildren.c)
 *     DpiPollSingleDisplayChild @ 0x1C0394E68 (DpiPollSingleDisplayChild.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C0395D30 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0395EF8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C03969C0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C03977F0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C039A4FC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C039DF00 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C039E120 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C039E2B0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C039E440 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C039E600 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoThermalActiveCooling @ 0x1C039E8A0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C039EA20 (DpiFdoThermalPassiveCooling.c)
 *     DpiKsrStopAdapter @ 0x1C03A1DF4 (DpiKsrStopAdapter.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A1FD4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C03A3B80 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C03A4380 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiPdoHandleStopDevice @ 0x1C03A4E90 (DpiPdoHandleStopDevice.c)
 *     DpiPdoPollingWorkItem @ 0x1C03A50C0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiRequestDevicePowerState @ 0x1C001AC34 (DpiRequestDevicePowerState.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0180D38 (DpiDisableD3Requests.c)
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
