/*
 * XREFs of PiSwPdoAssociationFree @ 0x14073312C
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x1407330BC (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x1407342E0 (PiSwDeviceFree.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PADAPTER_OBJECT *P)
{
  HalPutDmaAdapter(P[4]);
  HalPutDmaAdapter(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
