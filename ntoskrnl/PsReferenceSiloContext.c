/*
 * XREFs of PsReferenceSiloContext @ 0x1403C0D90
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceSiloContext(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
