/*
 * XREFs of ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCHolographicInteropTextureMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0264E90 (-ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicati.c)
 */

void __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CHolographicInteropTextureMarshaler,2>::ReleaseAllReferences(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 12) - 24LL));
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CHolographicInteropTextureMarshaler::ReleaseAllReferences(this, a2);
}
