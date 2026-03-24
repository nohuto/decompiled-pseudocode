/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000C8D0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000C840 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001CBE4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiEnterSystemDisplay @ 0x1C0020290 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C0053650 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00542F0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C00548C0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0054DA8 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00557C0 (DxgkMiracastStartMiracastSession.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C00582F0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0058480 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiValidateDeviceName @ 0x1C0149894 (DpiValidateDeviceName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C016A200 (DxgkMiracastStopAllMiracastSessions.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0174DC4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C0175EA0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0187BE8 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiAddDevice @ 0x1C018BAE0 (DpiAddDevice.c)
 *     DpiInitializeEx @ 0x1C01992D8 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C019CB18 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C019D5F4 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C019EA2C (DpiFdoHandleQueryPowerRelations.c)
 *     DpiControlEtwLogging @ 0x1C02C692C (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C02C7E20 (DpiCleanup.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02CA780 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CABB0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02CC414 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02CE404 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02CE75C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CF778 (DxgkHandleMiracastEscape.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02D231C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02D5228 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D6454 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D6B08 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00B2B50, (__int64)KeGetCurrentThread());
}
