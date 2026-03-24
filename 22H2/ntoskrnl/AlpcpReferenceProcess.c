/*
 * XREFs of AlpcpReferenceProcess @ 0x1408C2524
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3150 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpReferenceProcess(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x63706C41u);
}
