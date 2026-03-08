/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C6650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CManipulationTransformMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 128);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 128) - 24LL));
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  return result;
}
