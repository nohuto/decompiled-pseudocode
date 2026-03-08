/*
 * XREFs of ?ReleaseAllReferences@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6FC
 * Callers:
 *     ?ReleaseAllReferences@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B820 (-ReleaseAllReferences@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplic.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B7BC (-ReleaseAllReferences@CLegacyMilBrushMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  DirectComposition::CLegacyMilBrushMarshaler::ReleaseAllReferences(this, a2);
}
