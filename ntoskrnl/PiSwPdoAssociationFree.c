/*
 * XREFs of PiSwPdoAssociationFree @ 0x14096469C
 * Callers:
 *     PiSwFreePdoAssociationsList @ 0x140964490 (PiSwFreePdoAssociationsList.c)
 *     PiSwRemovePdoAssociation @ 0x140964C14 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
