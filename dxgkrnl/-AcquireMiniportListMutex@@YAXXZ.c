/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B1E0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiEnterSystemDisplay @ 0x1C001BC60 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C005F540 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0060710 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064210 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064390 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01C5790 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01E2B40 (DpiFdoStopMiracastSession.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiInitializeEx @ 0x1C020F728 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0217240 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0218574 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C021A898 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiControlEtwLogging @ 0x1C03946E8 (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C03958A4 (DpiCleanup.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C039A4FC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C039A854 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C039F688 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C03A0834 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A1FD4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C03A2624 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C013B4D8, (__int64)KeGetCurrentThread());
}
