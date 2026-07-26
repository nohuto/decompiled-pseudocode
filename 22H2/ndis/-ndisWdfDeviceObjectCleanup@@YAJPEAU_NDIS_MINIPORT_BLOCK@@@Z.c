/*
 * XREFs of ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F574
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00629C0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F1F0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071A48 (-ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116C14 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfDeviceObjectCleanup(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPCompleteRemoveDevice(a1);
  ndisRemoveMiniportFromGlobalList(a1);
  ndisMDeleteMiniportBlockOnRemove(a1);
  a1->MiniportAdapterContext = 0LL;
  return 0LL;
}
