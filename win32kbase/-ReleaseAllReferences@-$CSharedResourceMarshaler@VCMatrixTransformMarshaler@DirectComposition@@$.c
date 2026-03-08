/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CMatrixTransformMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 96) - 24LL));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  return result;
}
