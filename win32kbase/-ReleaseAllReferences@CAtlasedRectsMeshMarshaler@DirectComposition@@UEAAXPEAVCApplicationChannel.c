/*
 * XREFs of ?ReleaseAllReferences@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B670
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C00B9868 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::ReleaseAllReferences(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 64));
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 88));
}
