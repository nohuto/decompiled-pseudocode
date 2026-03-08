/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCLegacyAnimationTriggerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CLegacyAnimationTriggerMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 64) - 24LL));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
