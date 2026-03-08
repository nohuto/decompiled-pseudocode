/*
 * XREFs of ?ReleaseAllReferences@CHolographicInteropTextureMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0264E90
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCHolographicInteropTextureMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CBB0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCHolographicInteropTextureMarshaler@DirectComp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CHolographicInteropTextureMarshaler::ReleaseAllReferences(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
}
