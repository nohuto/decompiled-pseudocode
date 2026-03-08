/*
 * XREFs of CmFcpCleanupSectionState @ 0x140818348
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return ObfDereferenceObject(v1);
  return result;
}
