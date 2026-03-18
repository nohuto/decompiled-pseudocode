/*
 * XREFs of ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BA0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3AE0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectCompositi.c)
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3B40 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectCompos.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BF0 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 */

void __fastcall DirectComposition::CCompositionDistantLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(this, a2);
}
