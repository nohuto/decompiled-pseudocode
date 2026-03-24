/*
 * XREFs of HalPutScatterGatherListThin @ 0x1404CB1D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404B82B8 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpPutScatterGatherListThin @ 0x1404CB9CC (HalpPutScatterGatherListThin.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListThin(struct _DMA_ADAPTER *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char v5; // bp

  v2 = a2[1];
  v5 = HalpPutScatterGatherListThin();
  if ( *(_BYTE *)(v2 + 97) )
    ExFreePoolWithTag(a2, 0);
  if ( v5 )
    HalpDmaReturnEmergencyLogicalAddressResources(a1);
}
