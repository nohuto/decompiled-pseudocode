/*
 * XREFs of ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0015B90 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiEnterSystemDisplay @ 0x1C001BEC0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x1C0060160 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060D90 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0061330 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0061800 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00621E4 (DxgkMiracastStartMiracastSession.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063D88 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0064E30 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0064FB0 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01E4710 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F1460 (DpiFdoStopMiracastSession.c)
 *     DpiAddDevice @ 0x1C0202170 (DpiAddDevice.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C020667C (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C02185F0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiInitializeEx @ 0x1C021DD08 (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0225820 (DpiLdaValidateSystemChainStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0226B34 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C0228E58 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiControlEtwLogging @ 0x1C0398FC8 (DpiControlEtwLogging.c)
 *     DpiCleanup @ 0x1C039A184 (DpiCleanup.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C039B860 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1C039BCA0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C039D274 (DpiFdoStopAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C039EDDC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C039F134 (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkHandleMiracastEscape @ 0x1C03A0098 (DxgkHandleMiracastEscape.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C03A3F68 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C03A5100 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A68A4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C03A6EF4 (DpiAcpiUnregisterAcpiCallbacks.c)
 * Callees:
 *     <none>
 */

void AcquireMiniportListMutex(void)
{
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C01404D8, (__int64)KeGetCurrentThread());
}
