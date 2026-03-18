/*
 * XREFs of VrpDereferenceJobContext @ 0x140690600
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x140211F50 (VrpOriginalKeyNameParameterCleanup.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
