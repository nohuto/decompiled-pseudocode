/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD830 (-ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRegionGeometryMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 15) - 24LL));
    *((_QWORD *)this + 15) = 0LL;
  }
  DirectComposition::CRegionGeometryMarshaler::ReleaseAllReferences(this, a2);
}
