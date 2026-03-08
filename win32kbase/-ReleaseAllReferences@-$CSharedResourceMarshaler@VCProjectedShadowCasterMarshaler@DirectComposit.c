/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCProjectedShadowCasterMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CD20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000D9F0 (-ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CProjectedShadowCasterMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 13) - 24LL));
    *((_QWORD *)this + 13) = 0LL;
  }
  DirectComposition::CProjectedShadowCasterMarshaler::ReleaseAllReferences(this, a2);
}
