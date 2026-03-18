/*
 * XREFs of PsReferenceSiloContext @ 0x14025D810
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsReferenceSiloContext(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
