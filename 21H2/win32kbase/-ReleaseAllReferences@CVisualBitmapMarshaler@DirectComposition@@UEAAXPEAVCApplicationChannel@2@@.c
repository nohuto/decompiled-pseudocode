/*
 * XREFs of ?ReleaseAllReferences@CVisualBitmapMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225E00
 * Callers:
 *     ?ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225A70 (-ReleaseAllReferences@CCompositionTextLineMarshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualBitmapMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 8) = 0LL;
  }
}
