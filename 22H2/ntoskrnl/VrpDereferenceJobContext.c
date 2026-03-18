/*
 * XREFs of VrpDereferenceJobContext @ 0x1407E6CCC
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x14036A1D0 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
