/*
 * XREFs of ?ndisQueuedPnPIrpSurpriseRemoval@@YAXPEAX@Z @ 0x1C011F460
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F2C4 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedPnPIrpSurpriseRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPIrpSurpriseRemovalInner(a1);
}
