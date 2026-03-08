/*
 * XREFs of VrpDereferenceJobContext @ 0x140797798
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x1402FF150 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
