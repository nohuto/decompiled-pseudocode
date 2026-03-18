/*
 * XREFs of ?ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021D290
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualBitmapMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C020E4D0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCVisualBitmapMarshaler@DirectComposition@@$01@.c)
 *     ?ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CD70 (-ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
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
