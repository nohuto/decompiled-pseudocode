/*
 * XREFs of RtlDereferenceAtomTable @ 0x14023AB7C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406FF29C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x140600AD0 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
