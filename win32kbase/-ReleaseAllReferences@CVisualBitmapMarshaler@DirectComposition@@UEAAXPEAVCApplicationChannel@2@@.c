/*
 * XREFs of ?ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BBB0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualBitmapMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CE40 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCVisualBitmapMarshaler@DirectComposition@@$01@.c)
 *     ?ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6A0 (-ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualBitmapMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
