/*
 * XREFs of PiSwPdoAssociationFree @ 0x1409676BC
 * Callers:
 *     PiSwFreePdoAssociationsList @ 0x1409674B0 (PiSwFreePdoAssociationsList.c)
 *     PiSwRemovePdoAssociation @ 0x140967C34 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
