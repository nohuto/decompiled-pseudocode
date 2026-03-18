/*
 * XREFs of ?ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B2310
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00A2724 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B2350 (-ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CRegionGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CRegionGeometryMarshaler *)((char *)this + 104));
  DirectComposition::CGeometryMarshaler::ReleaseAllReferences(this, a2);
}
