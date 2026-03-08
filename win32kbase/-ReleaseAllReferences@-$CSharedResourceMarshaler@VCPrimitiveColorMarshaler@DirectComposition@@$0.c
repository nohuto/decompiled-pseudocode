/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::ReleaseAllReferences(
        __int64 a1)
{
  LONG_PTR result; // rax

  result = *(_QWORD *)(a1 + 72);
  if ( result )
  {
    *(_DWORD *)(result + 36) = 0;
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 72) - 24LL));
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  return result;
}
