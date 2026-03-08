/*
 * XREFs of ?ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B7BC
 * Callers:
 *     ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6FC (-ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B740 (-ReleaseAllReferences@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChan.c)
 *     ?ReleaseAllReferences@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BCF0 (-ReleaseAllReferences@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicatio.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CLegacyMilBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 10) = 0LL;
  }
}
