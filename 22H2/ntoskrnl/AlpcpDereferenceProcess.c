/*
 * XREFs of AlpcpDereferenceProcess @ 0x1408C2400
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3150 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpDereferenceProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x63706C41u);
}
