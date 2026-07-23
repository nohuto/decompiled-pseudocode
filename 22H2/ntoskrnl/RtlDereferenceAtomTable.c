/*
 * XREFs of RtlDereferenceAtomTable @ 0x14031579C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406355DC (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1406860C0 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
