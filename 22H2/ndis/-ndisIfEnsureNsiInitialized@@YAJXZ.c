/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0107940
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002E2E0 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1C0032BF0 (NdisIfRegisterProvider.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036A70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisDriverReinit @ 0x1C003A180 (ndisDriverReinit.c)
 *     NdisIMRegisterLayeredMiniport @ 0x1C0061160 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C00623A0 (NdisMRegisterMiniport.c)
 *     NdisRegisterProtocol @ 0x1C00992E0 (NdisRegisterProtocol.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&RunOnce, ndisIfInitializePhase2, 0LL, 0LL);
}
