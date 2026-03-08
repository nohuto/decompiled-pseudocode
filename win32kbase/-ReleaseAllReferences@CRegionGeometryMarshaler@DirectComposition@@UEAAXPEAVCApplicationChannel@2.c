/*
 * XREFs of ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD830
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CD80 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$0.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BD870 (-ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CRegionGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CRegionGeometryMarshaler *)((char *)this + 96));
  DirectComposition::CGeometryMarshaler::ReleaseAllReferences(this, a2);
}
