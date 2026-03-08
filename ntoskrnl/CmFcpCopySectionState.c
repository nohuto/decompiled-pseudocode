/*
 * XREFs of CmFcpCopySectionState @ 0x140777D7C
 * Callers:
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140777B1C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall CmFcpCopySectionState(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    return ObfReferenceObject(v2);
  return result;
}
